/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include <sys/cdefs.h> // __containerof
#include "esp_console.h"
#include "console_private.h"
#include "esp_log.h"
#include "linenoise/linenoise.h"

#include "esp_vfs_eventfd.h"
#if CONFIG_IDF_TARGET_LINUX
#include <unistd.h>
#endif

static const char *TAG = "console.common";

static bool s_init = false;
static int s_interrupt_reading_fd = -1;
static uint64_t s_interrupt_reading_signal = 1;

esp_err_t esp_console_setup_prompt(const char *prompt, esp_console_repl_com_t *repl_com)
{
    /* set command line prompt */
    const char *prompt_temp = "esp>";
    if (prompt) {
        prompt_temp = prompt;
    }
    snprintf(repl_com->prompt, CONSOLE_PROMPT_MAX_LEN - 1, LOG_COLOR_I "%s " LOG_RESET_COLOR, prompt_temp);

    /* Figure out if the terminal supports escape sequences */
    int probe_status = linenoiseProbe();
    if (probe_status) {
        /* zero indicates success */
        linenoiseSetDumbMode(1);
#if CONFIG_LOG_COLORS
        /* Since the terminal doesn't support escape sequences,
         * don't use color codes in the s_prompt.
         */
        snprintf(repl_com->prompt, CONSOLE_PROMPT_MAX_LEN - 1, "%s ", prompt_temp);
#endif //CONFIG_LOG_COLORS
    }

    return ESP_OK;
}

esp_err_t esp_console_setup_history(const char *history_path, uint32_t max_history_len, esp_console_repl_com_t *repl_com)
{
    esp_err_t ret = ESP_OK;

    repl_com->history_save_path = history_path;
    if (history_path) {
        /* Load command history from filesystem */
        linenoiseHistoryLoad(history_path);
    }

    /* Set command history size */
    if (linenoiseHistorySetMaxLen(max_history_len) != 1) {
        ESP_LOGE(TAG, "set max history length to %"PRIu32" failed", max_history_len);
        ret = ESP_FAIL;
        goto _exit;
    }
    return ESP_OK;
_exit:
    return ret;
}

esp_err_t esp_console_common_init(size_t max_cmdline_length, esp_console_repl_com_t *repl_com)
{
    esp_err_t ret = ESP_OK;
    /* Initialize the console */
    esp_console_config_t console_config = ESP_CONSOLE_CONFIG_DEFAULT();
    repl_com->max_cmdline_length = console_config.max_cmdline_length;
    /* Replace the default command line length if passed as a parameter */
    if (max_cmdline_length != 0) {
        console_config.max_cmdline_length = max_cmdline_length;
        repl_com->max_cmdline_length = max_cmdline_length;
    }

#if CONFIG_LOG_COLORS
    console_config.hint_color = atoi(LOG_COLOR_CYAN);
#else
    console_config.hint_color = -1;
#endif
    ret = esp_console_init(&console_config);
    if (ret != ESP_OK) {
        goto _exit;
    }

    ret = esp_console_register_help_command();
    if (ret != ESP_OK) {
        goto _exit;
    }

    /* Configure linenoise line completion library */
    /* Enable multiline editing. If not set, long commands will scroll within single line */
    linenoiseSetMultiLine(1);

    /* Tell linenoise where to get command completions and hints */
    linenoiseSetCompletionCallback(&esp_console_get_completion);
    linenoiseSetHintsCallback((linenoiseHintsCallback *)&esp_console_get_hint);

    /* Tell linenoise what file descriptor to add to the read file descriptor set,
     * that will be used to signal a read termination */
    esp_vfs_eventfd_config_t config = ESP_VFS_EVENTD_CONFIG_DEFAULT();
    ret = esp_vfs_eventfd_register(&config);
    if (ret == ESP_OK) {
        /* first time calling the eventfd register function */
        s_interrupt_reading_fd = eventfd(0, 0);
        linenoiseSetInterruptReadingData(s_interrupt_reading_fd, s_interrupt_reading_signal);
    } else if (ret == ESP_ERR_INVALID_STATE) {
        /* the evenfd has already been registered*/
    } else {
        /* issue with arg, this should not happen */
        goto _exit;
    }

    repl_com->state_mux = xSemaphoreCreateMutex();
    if (repl_com->state_mux == NULL) {
        ESP_LOGE(TAG, "state_mux create error");
        ret = ESP_ERR_NO_MEM;
        goto _exit;
    }
    xSemaphoreGive(repl_com->state_mux);

    s_init = true;
    return ESP_OK;
_exit:
    s_init = false;
    return ret;
}

void esp_console_common_deinit(esp_console_repl_com_t *repl_com)
{
    /* Unregister the heap function to avoid memory leak, since it is created
     * every time a console init is called. */
    esp_err_t ret = esp_console_deregister_help_command();
    assert(ret == ESP_OK);

    /* unregister eventfd to avoid memory leaks, since it is created every time a
     * console init is called */
    (void)esp_vfs_eventfd_unregister();

    /* free the history to avoid memory leak, since it is created
     * every time a console init is called. */
    linenoiseHistoryFree();
}

esp_err_t esp_console_start_repl(esp_console_repl_t *repl)
{
    esp_err_t ret = ESP_OK;
    esp_console_repl_com_t *repl_com = __containerof(repl, esp_console_repl_com_t, repl_core);
    // check if already initialized
    if (repl_com->state != CONSOLE_REPL_STATE_INIT) {
        ret = ESP_ERR_INVALID_STATE;
        goto _exit;
    }

    repl_com->state = CONSOLE_REPL_STATE_START;
    xTaskNotifyGive(repl_com->task_hdl);
    return ESP_OK;
_exit:
    return ret;
}

void esp_console_repl_task(void *args)
{
    esp_console_repl_universal_t *repl_conf = (esp_console_repl_universal_t *) args;
    esp_console_repl_com_t *repl_com = &repl_conf->repl_com;
    const int uart_channel = repl_conf->uart_channel;

    /* Waiting for task notify. This happens when `esp_console_start_repl()`
     * function is called. */
    ulTaskNotifyTake(pdTRUE, portMAX_DELAY);

    assert(repl_com->state_mux != NULL);
    BaseType_t ret_val = xSemaphoreTake(repl_com->state_mux, portMAX_DELAY);
    assert(ret_val == pdTRUE);

    /* Change standard input and output of the task if the requested UART is
     * NOT the default one. This block will replace stdin, stdout and stderr.
     */
    if (uart_channel != CONFIG_ESP_CONSOLE_UART_NUM) {
        char path[CONSOLE_PATH_MAX_LEN] = { 0 };
        snprintf(path, CONSOLE_PATH_MAX_LEN, "/dev/uart/%d", uart_channel);

        stdin = fopen(path, "r");
        stdout = fopen(path, "w");
        stderr = stdout;
    }

    /* Disable buffering on stdin of the current task.
     * If the console is ran on a different UART than the default one,
     * buffering shall only be disabled for the current one. */
    setvbuf(stdin, NULL, _IONBF, 0);

    /* This message shall be printed here and not earlier as the stdout
     * has just been set above. */
    printf("\r\n"
           "Type 'help' to get the list of commands.\r\n"
           "Use UP/DOWN arrows to navigate through command history.\r\n"
           "Press TAB when typing command name to auto-complete.\r\n");

    if (linenoiseIsDumbMode()) {
        printf("\r\n"
               "Your terminal application does not support escape sequences.\n\n"
               "Line editing and history features are disabled.\n\n"
               "On Windows, try using Windows Terminal or Putty instead.\r\n");
    }

    linenoiseSetMaxLineLen(repl_com->max_cmdline_length);
    while (repl_com->state == CONSOLE_REPL_STATE_START) {
        char *line = linenoise(repl_com->prompt);
        if (line == NULL) {
            ESP_LOGD(TAG, "empty line");
            /* Ignore empty lines */
            continue;
        }
        /* Add the command to the history */
        linenoiseHistoryAdd(line);
        /* Save command history to filesystem */
        if (repl_com->history_save_path) {
            linenoiseHistorySave(repl_com->history_save_path);
        }

        /* Try to run the command */
        int ret;
        esp_err_t err = esp_console_run(line, &ret);
        if (err == ESP_ERR_NOT_FOUND) {
            printf("Unrecognized command\n");
        } else if (err == ESP_ERR_INVALID_ARG) {
            // command was empty
        } else if (err == ESP_OK && ret != ESP_OK) {
            printf("Command returned non-zero error code: 0x%x (%s)\n", ret, esp_err_to_name(ret));
        } else if (err != ESP_OK) {
            printf("Internal error: %s\n", esp_err_to_name(err));
        }
        /* linenoise allocates line buffer on the heap, so need to free it */
        linenoiseFree(line);
    }

    xSemaphoreGive(repl_com->state_mux);
    ESP_LOGD(TAG, "The End");
    vTaskDelete(NULL);
}

esp_err_t esp_console_interrupt_reading(void)
{
    if (!s_init) {
        return ESP_FAIL;
    }
    ssize_t ret = write(s_interrupt_reading_fd, &s_interrupt_reading_signal, sizeof(s_interrupt_reading_signal));
    assert(ret == sizeof(s_interrupt_reading_signal));
    return ESP_OK;
}
