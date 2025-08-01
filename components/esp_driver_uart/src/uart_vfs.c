/*
 * SPDX-FileCopyrightText: 2015-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include <sys/errno.h>
#include <sys/lock.h>
#include <sys/fcntl.h>
#include <sys/param.h>
#include "sdkconfig.h"
#include "esp_attr.h"
#include "driver/uart_vfs.h"
#include "driver/uart.h"
#include "driver/uart_select.h"
#include "esp_rom_serial_output.h"
#include "hal/uart_ll.h"
#include "soc/soc_caps.h"
#include "esp_vfs_dev.h" // Old headers for the aliasing functions
#include "esp_private/startup_internal.h"

#define UART_NUM SOC_UART_HP_NUM

// Token signifying that no character is available
#define NONE -1

#if CONFIG_LIBC_STDOUT_LINE_ENDING_CRLF
#   define DEFAULT_TX_MODE ESP_LINE_ENDINGS_CRLF
#elif CONFIG_LIBC_STDOUT_LINE_ENDING_CR
#   define DEFAULT_TX_MODE ESP_LINE_ENDINGS_CR
#else
#   define DEFAULT_TX_MODE ESP_LINE_ENDINGS_LF
#endif

#if CONFIG_LIBC_STDIN_LINE_ENDING_CRLF
#   define DEFAULT_RX_MODE ESP_LINE_ENDINGS_CRLF
#elif CONFIG_LIBC_STDIN_LINE_ENDING_CR
#   define DEFAULT_RX_MODE ESP_LINE_ENDINGS_CR
#else
#   define DEFAULT_RX_MODE ESP_LINE_ENDINGS_LF
#endif

#if CONFIG_VFS_SELECT_IN_RAM
#define UART_VFS_MALLOC_FLAGS (MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT)
#else
#define UART_VFS_MALLOC_FLAGS MALLOC_CAP_DEFAULT
#endif

// UART write bytes function type
typedef void (*tx_func_t)(int, int);
// UART read bytes function type
typedef int (*rx_func_t)(int);
// UART get available received bytes function type
typedef size_t (*get_available_data_len_func_t)(int);

// Basic functions for sending, receiving bytes, and get available data length over UART
static void uart_tx_char(int fd, int c);
static int uart_rx_char(int fd);
static size_t uart_get_avail_data_len(int fd);

// Functions for sending, receiving bytes, and get available data length which use UART driver
static void uart_tx_char_via_driver(int fd, int c);
static int uart_rx_char_via_driver(int fd);
static size_t uart_get_avail_data_len_via_driver(int fd);

typedef struct {
    // Pointers to UART peripherals
    uart_dev_t* uart;
    // One-character buffer used for newline conversion code, per UART
    int peek_char;
    // per-UART locks, lazily initialized
    _lock_t read_lock;
    _lock_t write_lock;
    // Per-UART non-blocking flag. Note: default implementation does not honor this
    // flag, all reads are non-blocking. This option becomes effective if UART
    // driver is used.
    bool non_blocking;
    // Newline conversion mode when transmitting
    esp_line_endings_t tx_mode;
    // Newline conversion mode when receiving
    esp_line_endings_t rx_mode;
    // Functions used to write bytes to UART. Default to "basic" functions.
    tx_func_t tx_func;
    // Functions used to read bytes from UART. Default to "basic" functions.
    rx_func_t rx_func;
    // Function used to get available data bytes from UART. Default to "basic" functions.
    get_available_data_len_func_t get_avail_data_len_func;
} uart_vfs_context_t;

#define VFS_CTX_DEFAULT_VAL(uart_dev) (uart_vfs_context_t) {\
    .uart = (uart_dev),\
    .peek_char = NONE,\
    .tx_mode = DEFAULT_TX_MODE,\
    .rx_mode = DEFAULT_RX_MODE,\
    .tx_func = uart_tx_char,\
    .rx_func = uart_rx_char,\
    .get_avail_data_len_func = uart_get_avail_data_len,\
}

//If the context should be dynamically initialized, remove this structure
//and point s_ctx to allocated data.
static uart_vfs_context_t s_context[UART_NUM] = {
    VFS_CTX_DEFAULT_VAL(&UART0),
    VFS_CTX_DEFAULT_VAL(&UART1),
#if UART_NUM > 2
    VFS_CTX_DEFAULT_VAL(&UART2),
#endif
};

static uart_vfs_context_t* s_ctx[UART_NUM] = {
    &s_context[0],
    &s_context[1],
#if UART_NUM > 2
    &s_context[2],
#endif
};

static const char *s_uart_mount_points[UART_NUM] = {
    "/0",
    "/1",
#if UART_NUM > 2
    "/2",
#endif
};

#ifdef CONFIG_VFS_SUPPORT_SELECT

typedef struct {
    esp_vfs_select_sem_t select_sem;
    fd_set *readfds;
    fd_set *writefds;
    fd_set *errorfds;
    fd_set readfds_orig;
    fd_set writefds_orig;
    fd_set errorfds_orig;
} uart_select_args_t;

static uart_select_args_t **s_registered_selects = NULL;
static int s_registered_select_num = 0;
static portMUX_TYPE s_registered_select_lock = portMUX_INITIALIZER_UNLOCKED;
static int s_uart_select_count[UART_NUM] = {0};

static esp_err_t uart_end_select(void *end_select_args);

#endif // CONFIG_VFS_SUPPORT_SELECT

static int uart_open(const char *path, int flags, int mode)
{
    // this is fairly primitive, we should check if file is opened read only,
    // and error out if write is requested
    int fd = -1;

    for (int i = 0; i < UART_NUM; i++) {
        if (strcmp(path, s_uart_mount_points[i]) == 0) {
            fd = i;
            break;
        }
    }
    if (fd == -1) {
        errno = ENOENT;
        return -1;
    }

    s_ctx[fd]->non_blocking = ((flags & O_NONBLOCK) == O_NONBLOCK);

    return fd;
}

size_t uart_get_avail_data_len(int fd)
{
    uart_dev_t* uart = s_ctx[fd]->uart;
    return uart_ll_get_rxfifo_len(uart);
}

size_t uart_get_avail_data_len_via_driver(int fd)
{
    size_t buffered_size = 0;
    uart_get_buffered_data_len(fd, &buffered_size);
    return buffered_size;
}

static void uart_tx_char(int fd, int c)
{
    uart_dev_t* uart = s_ctx[fd]->uart;
    const uint8_t ch = (uint8_t) c;

    while (uart_ll_get_txfifo_len(uart) < 2) {
        ;
    }

    uart_ll_write_txfifo(uart, &ch, 1);
}

static void uart_tx_char_via_driver(int fd, int c)
{
    char ch = (char) c;
    uart_write_bytes(fd, &ch, 1);
}

static int uart_rx_char(int fd)
{
    uart_dev_t* uart = s_ctx[fd]->uart;
    uint8_t ch;
    if (uart_ll_get_rxfifo_len(uart) == 0) {
        return NONE;
    }
    uart_ll_read_rxfifo(uart, &ch, 1);

    return ch;
}

static int uart_rx_char_via_driver(int fd)
{
    uint8_t c;
    TickType_t timeout = s_ctx[fd]->non_blocking ? 0 : portMAX_DELAY;
    int n = uart_read_bytes(fd, &c, 1, timeout);
    if (n <= 0) {
        return NONE;
    }
    return c;
}

static ssize_t uart_write(int fd, const void * data, size_t size)
{
    assert(fd >= 0 && fd < 3);
    tx_func_t tx_func = s_ctx[fd]->tx_func;
    esp_line_endings_t tx_mode = s_ctx[fd]->tx_mode;
    const char *data_c = (const char *)data;
    /*  Even though newlib does stream locking on each individual stream, we need
     *  a dedicated UART lock if two streams (stdout and stderr) point to the
     *  same UART.
     */
    _lock_acquire_recursive(&s_ctx[fd]->write_lock);
    for (size_t i = 0; i < size; i++) {
        int c = data_c[i];
        if (c == '\n' && tx_mode != ESP_LINE_ENDINGS_LF) {
            tx_func(fd, '\r');
            if (tx_mode == ESP_LINE_ENDINGS_CR) {
                continue;
            }
        }
        tx_func(fd, c);
    }
    _lock_release_recursive(&s_ctx[fd]->write_lock);
    return size;
}

/* Helper function which returns a previous character or reads a new one from
 * UART. Previous character can be returned ("pushed back") using
 * uart_return_char function.
 */
static int uart_read_char(int fd)
{
    /* return character from peek buffer, if it is there */
    if (s_ctx[fd]->peek_char != NONE) {
        int c = s_ctx[fd]->peek_char;
        s_ctx[fd]->peek_char = NONE;
        return c;
    }
    return s_ctx[fd]->rx_func(fd);
}

/* Push back a character; it will be returned by next call to uart_read_char */
static void uart_return_char(int fd, int c)
{
    assert(s_ctx[fd]->peek_char == NONE);
    s_ctx[fd]->peek_char = c;
}

static ssize_t uart_read(int fd, void* data, size_t size)
{
    assert(fd >= 0 && fd < 3);
    char *data_c = (char *) data;
    size_t received = 0;
    size_t available_size = 0;
    int c = NONE; // store the read char
    _lock_acquire_recursive(&s_ctx[fd]->read_lock);

    if (!s_ctx[fd]->non_blocking) {
        c = uart_read_char(fd); // blocking until data available for non-O_NONBLOCK mode
    }

    // find the actual fetch size
    available_size += s_ctx[fd]->get_avail_data_len_func(fd);
    if (c != NONE) {
        available_size++;
    }
    if (s_ctx[fd]->peek_char != NONE) {
        available_size++;
    }
    size_t fetch_size = MIN(available_size, size);

    if (fetch_size > 0) {
        do {
            if (c == NONE) { // for non-O_NONBLOCK mode, there is already a pre-fetched char
                c = uart_read_char(fd);
            }
            assert(c != NONE);

            if (c == '\r') {
                if (s_ctx[fd]->rx_mode == ESP_LINE_ENDINGS_CR) {
                    c = '\n';
                } else if (s_ctx[fd]->rx_mode == ESP_LINE_ENDINGS_CRLF) {
                    /* look ahead */
                    int c2 = uart_read_char(fd);
                    fetch_size--;
                    if (c2 == NONE) {
                        /* could not look ahead, put the current character back */
                        uart_return_char(fd, c);
                        c = NONE;
                        break;
                    }
                    if (c2 == '\n') {
                        /* this was \r\n sequence. discard \r, return \n */
                        c = '\n';
                    } else {
                        /* \r followed by something else. put the second char back,
                         * it will be processed on next iteration. return \r now.
                         */
                        uart_return_char(fd, c2);
                        fetch_size++;
                    }
                }
            }

            data_c[received] = (char) c;
            ++received;
            c = NONE;
        } while (received < fetch_size);
    }

    if (c != NONE) { // fetched, but not used
        uart_return_char(fd, c);
    }
    _lock_release_recursive(&s_ctx[fd]->read_lock);
    if (received > 0) {
        return received;
    }
    errno = EWOULDBLOCK;
    return -1;
}

static int uart_fstat(int fd, struct stat * st)
{
    assert(fd >= 0 && fd < 3);
    memset(st, 0, sizeof(*st));
    st->st_mode = S_IFCHR;
    return 0;
}

static int uart_close(int fd)
{
    assert(fd >= 0 && fd < 3);
    return 0;
}

static int uart_fcntl(int fd, int cmd, int arg)
{
    assert(fd >= 0 && fd < 3);
    int result = 0;
    if (cmd == F_GETFL) {
        result |= O_RDWR;
        if (s_ctx[fd]->non_blocking) {
            result |= O_NONBLOCK;
        }
    } else if (cmd == F_SETFL) {
        s_ctx[fd]->non_blocking = (arg & O_NONBLOCK) != 0;
    } else {
        // unsupported operation
        result = -1;
        errno = ENOSYS;
    }
    return result;
}

#ifdef CONFIG_VFS_SUPPORT_DIR

static int uart_access(const char *path, int amode)
{
    int ret = -1;

    if (strcmp(path, "/0") == 0 || strcmp(path, "/1") == 0 || strcmp(path, "/2") == 0) {
        if (F_OK == amode) {
            ret = 0; //path exists
        } else {
            if ((((amode & R_OK) == R_OK) || ((amode & W_OK) == W_OK)) && ((amode & X_OK) != X_OK)) {
                ret = 0; //path is readable and/or writable but not executable
            } else {
                errno = EACCES;
            }
        }
    } else {
        errno = ENOENT;
    }

    return ret;
}

#endif // CONFIG_VFS_SUPPORT_DIR

static int uart_fsync(int fd)
{
    assert(fd >= 0 && fd < 3);
    _lock_acquire_recursive(&s_ctx[fd]->write_lock);
    esp_rom_output_tx_wait_idle((uint8_t) fd);
    _lock_release_recursive(&s_ctx[fd]->write_lock);
    return 0;
}

#ifdef CONFIG_VFS_SUPPORT_SELECT

static esp_err_t register_select(uart_select_args_t *args)
{
    esp_err_t ret = ESP_ERR_INVALID_ARG;

    if (args) {
        portENTER_CRITICAL(&s_registered_select_lock);
        const int new_size = s_registered_select_num + 1;
        uart_select_args_t **new_selects;
        if ((new_selects = heap_caps_realloc(s_registered_selects, new_size * sizeof(uart_select_args_t *), UART_VFS_MALLOC_FLAGS)) == NULL) {
            ret = ESP_ERR_NO_MEM;
        } else {
            s_registered_selects = new_selects;
            s_registered_selects[s_registered_select_num] = args;
            s_registered_select_num = new_size;
            ret = ESP_OK;
        }
        portEXIT_CRITICAL(&s_registered_select_lock);
    }

    return ret;
}

static esp_err_t unregister_select(uart_select_args_t *args)
{
    esp_err_t ret = ESP_OK;
    if (args) {
        ret = ESP_ERR_INVALID_STATE;
        portENTER_CRITICAL(&s_registered_select_lock);
        for (int i = 0; i < s_registered_select_num; ++i) {
            if (s_registered_selects[i] == args) {
                const int new_size = s_registered_select_num - 1;
                // The item is removed by overwriting it with the last item. The subsequent rellocation will drop the
                // last item.
                s_registered_selects[i] = s_registered_selects[new_size];
                uart_select_args_t **new_selects = heap_caps_realloc(s_registered_selects, new_size * sizeof(uart_select_args_t *), UART_VFS_MALLOC_FLAGS);
                if (new_selects == NULL && new_size > 0) {
                    ret = ESP_ERR_NO_MEM;
                } else {
                    s_registered_selects = new_selects;
                }
                // Shrinking a buffer with realloc is guaranteed to succeed.
                s_registered_select_num = new_size;
                ret = ESP_OK;
                break;
            }
        }
        portEXIT_CRITICAL(&s_registered_select_lock);
    }
    return ret;
}

static void select_notif_callback_isr(uart_port_t uart_num, uart_select_notif_t uart_select_notif, BaseType_t *task_woken)
{
    portENTER_CRITICAL_ISR(&s_registered_select_lock);
    for (int i = 0; i < s_registered_select_num; ++i) {
        uart_select_args_t *args = s_registered_selects[i];
        if (args) {
            switch (uart_select_notif) {
            case UART_SELECT_READ_NOTIF:
                if (FD_ISSET(uart_num, &args->readfds_orig)) {
                    FD_SET(uart_num, args->readfds);
                    esp_vfs_select_triggered_isr(args->select_sem, task_woken);
                }
                break;
            case UART_SELECT_WRITE_NOTIF:
                if (FD_ISSET(uart_num, &args->writefds_orig)) {
                    FD_SET(uart_num, args->writefds);
                    esp_vfs_select_triggered_isr(args->select_sem, task_woken);
                }
                break;
            case UART_SELECT_ERROR_NOTIF:
                if (FD_ISSET(uart_num, &args->errorfds_orig)) {
                    FD_SET(uart_num, args->errorfds);
                    esp_vfs_select_triggered_isr(args->select_sem, task_woken);
                }
                break;
            }
        }
    }
    portEXIT_CRITICAL_ISR(&s_registered_select_lock);
}

static esp_err_t uart_start_select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds,
                                   esp_vfs_select_sem_t select_sem, void **end_select_args)
{
    const int max_fds = MIN(nfds, UART_NUM);
    *end_select_args = NULL;

    for (int i = 0; i < max_fds; ++i) {
        if (FD_ISSET(i, readfds) || FD_ISSET(i, writefds) || FD_ISSET(i, exceptfds)) {
            if (!uart_is_driver_installed(i)) {
                return ESP_ERR_INVALID_STATE;
            }
        }
    }

    uart_select_args_t *args = heap_caps_malloc(sizeof(uart_select_args_t), UART_VFS_MALLOC_FLAGS);

    if (args == NULL) {
        return ESP_ERR_NO_MEM;
    }

    args->select_sem = select_sem;
    args->readfds = readfds;
    args->writefds = writefds;
    args->errorfds = exceptfds;
    args->readfds_orig = *readfds; // store the original values because they will be set to zero
    args->writefds_orig = *writefds;
    args->errorfds_orig = *exceptfds;
    FD_ZERO(readfds);
    FD_ZERO(writefds);
    FD_ZERO(exceptfds);

    portENTER_CRITICAL(uart_get_selectlock());

    //uart_set_select_notif_callback sets the callbacks in UART ISR
    for (int i = 0; i < max_fds; ++i) {
        if (FD_ISSET(i, &args->readfds_orig) || FD_ISSET(i, &args->writefds_orig) || FD_ISSET(i, &args->errorfds_orig)) {
            if (s_uart_select_count[i] == 0) {
                uart_set_select_notif_callback(i, select_notif_callback_isr);
            }
            s_uart_select_count[i]++;
        }
    }

    for (int i = 0; i < max_fds; ++i) {
        if (FD_ISSET(i, &args->readfds_orig)) {
            size_t buffered_size;
            if (uart_get_buffered_data_len(i, &buffered_size) == ESP_OK && buffered_size > 0) {
                // signalize immediately when data is buffered
                FD_SET(i, readfds);
                esp_vfs_select_triggered(args->select_sem);
            }
        }
    }

    esp_err_t ret = register_select(args);
    if (ret != ESP_OK) {
        portEXIT_CRITICAL(uart_get_selectlock());
        free(args);
        return ret;
    }

    portEXIT_CRITICAL(uart_get_selectlock());

    *end_select_args = args;
    return ESP_OK;
}

static esp_err_t uart_end_select(void *end_select_args)
{
    uart_select_args_t *args = end_select_args;

    portENTER_CRITICAL(uart_get_selectlock());
    esp_err_t ret = unregister_select(args);
    for (int i = 0; i < UART_NUM; ++i) {
        if (FD_ISSET(i, &args->readfds_orig) || FD_ISSET(i, &args->writefds_orig) || FD_ISSET(i, &args->errorfds_orig)) {
            s_uart_select_count[i]--;
            if (s_uart_select_count[i] == 0) {
                uart_set_select_notif_callback(i, NULL);
            }
            break;
        }
    }
    portEXIT_CRITICAL(uart_get_selectlock());

    if (args) {
        free(args);
    }

    return ret;
}

#endif // CONFIG_VFS_SUPPORT_SELECT

#ifdef CONFIG_VFS_SUPPORT_TERMIOS
static int uart_tcsetattr(int fd, int optional_actions, const struct termios *p)
{
    if (fd < 0 || fd >= UART_NUM) {
        errno = EBADF;
        return -1;
    }

    if (p == NULL) {
        errno = EINVAL;
        return -1;
    }

    switch (optional_actions) {
    case TCSANOW:
        // nothing to do
        break;
    case TCSADRAIN:
        if (uart_wait_tx_done(fd, portMAX_DELAY) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }

    /* FALLTHRU */

    case TCSAFLUSH:
        if (uart_flush_input(fd) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }
        break;
    default:
        errno = EINVAL;
        return -1;
    }

    if (p->c_iflag & IGNCR) {
        s_ctx[fd]->rx_mode = ESP_LINE_ENDINGS_CRLF;
    } else if (p->c_iflag & ICRNL) {
        s_ctx[fd]->rx_mode = ESP_LINE_ENDINGS_CR;
    } else {
        s_ctx[fd]->rx_mode = ESP_LINE_ENDINGS_LF;
    }

    // output line endings are not supported because there is no alternative in termios for converting LF to CR

    {
        uart_word_length_t data_bits;
        const tcflag_t csize_bits = p->c_cflag & CSIZE;

        switch (csize_bits) {
        case CS5:
            data_bits = UART_DATA_5_BITS;
            break;
        case CS6:
            data_bits = UART_DATA_6_BITS;
            break;
        case CS7:
            data_bits = UART_DATA_7_BITS;
            break;
        case CS8:
            data_bits = UART_DATA_8_BITS;
            break;
        default:
            errno = EINVAL;
            return -1;
        }

        if (uart_set_word_length(fd, data_bits) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }
    }

    if (uart_set_stop_bits(fd, (p->c_cflag & CSTOPB) ? UART_STOP_BITS_2 : UART_STOP_BITS_1) != ESP_OK) {
        errno = EINVAL;
        return -1;
    }

    if (uart_set_parity(fd, (p->c_cflag & PARENB) ?
                        ((p->c_cflag & PARODD) ? UART_PARITY_ODD : UART_PARITY_EVEN)
                        :
                        UART_PARITY_DISABLE) != ESP_OK) {
        errno = EINVAL;
        return -1;
    }

    if (p->c_cflag & (CBAUD | CBAUDEX)) {
        if (p->c_ispeed != p->c_ospeed) {
            errno = EINVAL;
            return -1;
        } else {
            uint32_t b;
            if (p->c_cflag & BOTHER) {
                b = p->c_ispeed;
            } else {
                switch (p->c_ispeed) {
                case B0:
                    b = 0;
                    break;
                case B50:
                    b = 50;
                    break;
                case B75:
                    b = 75;
                    break;
                case B110:
                    b = 110;
                    break;
                case B134:
                    b = 134;
                    break;
                case B150:
                    b = 150;
                    break;
                case B200:
                    b = 200;
                    break;
                case B300:
                    b = 300;
                    break;
                case B600:
                    b = 600;
                    break;
                case B1200:
                    b = 1200;
                    break;
                case B1800:
                    b = 1800;
                    break;
                case B2400:
                    b = 2400;
                    break;
                case B4800:
                    b = 4800;
                    break;
                case B9600:
                    b = 9600;
                    break;
                case B19200:
                    b = 19200;
                    break;
                case B38400:
                    b = 38400;
                    break;
                case B57600:
                    b = 57600;
                    break;
                case B115200:
                    b = 115200;
                    break;
                case B230400:
                    b = 230400;
                    break;
                case B460800:
                    b = 460800;
                    break;
                case B500000:
                    b = 500000;
                    break;
                case B576000:
                    b = 576000;
                    break;
                case B921600:
                    b = 921600;
                    break;
                case B1000000:
                    b = 1000000;
                    break;
                case B1152000:
                    b = 1152000;
                    break;
                case B1500000:
                    b = 1500000;
                    break;
                case B2000000:
                    b = 2000000;
                    break;
                case B2500000:
                    b = 2500000;
                    break;
                case B3000000:
                    b = 3000000;
                    break;
                case B3500000:
                    b = 3500000;
                    break;
                case B4000000:
                    b = 4000000;
                    break;
                default:
                    errno = EINVAL;
                    return -1;
                }
            }

            if (uart_set_baudrate(fd, b) != ESP_OK) {
                errno = EINVAL;
                return -1;
            }
        }
    }

    return 0;
}

static int uart_tcgetattr(int fd, struct termios *p)
{
    if (fd < 0 || fd >= UART_NUM) {
        errno = EBADF;
        return -1;
    }

    if (p == NULL) {
        errno = EINVAL;
        return -1;
    }

    memset(p, 0, sizeof(struct termios));

    if (s_ctx[fd]->rx_mode == ESP_LINE_ENDINGS_CRLF) {
        p->c_iflag |= IGNCR;
    } else if (s_ctx[fd]->rx_mode == ESP_LINE_ENDINGS_CR) {
        p->c_iflag |= ICRNL;
    }

    {
        uart_word_length_t data_bits;

        if (uart_get_word_length(fd, &data_bits) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }

        p->c_cflag &= (~CSIZE);

        switch (data_bits) {
        case UART_DATA_5_BITS:
            p->c_cflag |= CS5;
            break;
        case UART_DATA_6_BITS:
            p->c_cflag |= CS6;
            break;
        case UART_DATA_7_BITS:
            p->c_cflag |= CS7;
            break;
        case UART_DATA_8_BITS:
            p->c_cflag |= CS8;
            break;
        default:
            errno = ENOSYS;
            return -1;
        }
    }

    {
        uart_stop_bits_t stop_bits;
        if (uart_get_stop_bits(fd, &stop_bits) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }

        switch (stop_bits) {
        case UART_STOP_BITS_1:
            // nothing to do
            break;
        case UART_STOP_BITS_2:
            p->c_cflag |= CSTOPB;
            break;
        default:
            // UART_STOP_BITS_1_5 is unsupported by termios
            errno = ENOSYS;
            return -1;
        }
    }

    {
        uart_parity_t parity_mode;
        if (uart_get_parity(fd, &parity_mode) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }

        switch (parity_mode) {
        case UART_PARITY_EVEN:
            p->c_cflag |= PARENB;
            break;
        case UART_PARITY_ODD:
            p->c_cflag |= (PARENB | PARODD);
            break;
        case UART_PARITY_DISABLE:
            // nothing to do
            break;
        default:
            errno = ENOSYS;
            return -1;
        }
    }

    {
        uint32_t baudrate = 0;
        if (uart_get_baudrate(fd, &baudrate) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }

        p->c_cflag |= (CBAUD | CBAUDEX);

        speed_t sp;
        switch (baudrate) {
        case 0:
            sp = B0;
            break;
        case 50:
            sp = B50;
            break;
        case 75:
            sp = B75;
            break;
        case 110:
            sp = B110;
            break;
        case 134:
            sp = B134;
            break;
        case 150:
            sp = B150;
            break;
        case 200:
            sp = B200;
            break;
        case 300:
            sp = B300;
            break;
        case 600:
            sp = B600;
            break;
        case 1200:
            sp = B1200;
            break;
        case 1800:
            sp = B1800;
            break;
        case 2400:
            sp = B2400;
            break;
        case 4800:
            sp = B4800;
            break;
        case 9600:
            sp = B9600;
            break;
        case 19200:
            sp = B19200;
            break;
        case 38400:
            sp = B38400;
            break;
        case 57600:
            sp = B57600;
            break;
        case 115200:
            sp = B115200;
            break;
        case 230400:
            sp = B230400;
            break;
        case 460800:
            sp = B460800;
            break;
        case 500000:
            sp = B500000;
            break;
        case 576000:
            sp = B576000;
            break;
        case 921600:
            sp = B921600;
            break;
        case 1000000:
            sp = B1000000;
            break;
        case 1152000:
            sp = B1152000;
            break;
        case 1500000:
            sp = B1500000;
            break;
        case 2000000:
            sp = B2000000;
            break;
        case 2500000:
            sp = B2500000;
            break;
        case 3000000:
            sp = B3000000;
            break;
        case 3500000:
            sp = B3500000;
            break;
        case 4000000:
            sp = B4000000;
            break;
        default:
            p->c_cflag |= BOTHER;
            sp = baudrate;
            break;
        }

        p->c_ispeed = p->c_ospeed = sp;
    }

    return 0;
}

static int uart_tcdrain(int fd)
{
    if (fd < 0 || fd >= UART_NUM) {
        errno = EBADF;
        return -1;
    }

    if (uart_wait_tx_done(fd, portMAX_DELAY) != ESP_OK) {
        errno = EINVAL;
        return -1;
    }

    return 0;
}

static int uart_tcflush(int fd, int select)
{
    if (fd < 0 || fd >= UART_NUM) {
        errno = EBADF;
        return -1;
    }

    if (select == TCIFLUSH) {
        if (uart_flush_input(fd) != ESP_OK) {
            errno = EINVAL;
            return -1;
        }
    } else {
        // output flushing is not supported
        errno = EINVAL;
        return -1;
    }

    return 0;
}
#endif // CONFIG_VFS_SUPPORT_TERMIOS

#ifdef CONFIG_VFS_SUPPORT_DIR
static const esp_vfs_dir_ops_t s_vfs_uart_dir = {
    .access = &uart_access,
};
#endif // CONFIG_VFS_SUPPORT_DIR

#ifdef CONFIG_VFS_SUPPORT_SELECT
static const esp_vfs_select_ops_t s_vfs_uart_select = {
    .start_select = &uart_start_select,
    .end_select = &uart_end_select,
};
#endif // CONFIG_VFS_SUPPORT_SELECT

#ifdef CONFIG_VFS_SUPPORT_TERMIOS
static const esp_vfs_termios_ops_t s_vfs_uart_termios = {
    .tcsetattr = &uart_tcsetattr,
    .tcgetattr = &uart_tcgetattr,
    .tcdrain = &uart_tcdrain,
    .tcflush = &uart_tcflush,
};
#endif // CONFIG_VFS_SUPPORT_TERMIOS

static const esp_vfs_fs_ops_t s_vfs_uart = {
    .write = &uart_write,
    .open = &uart_open,
    .fstat = &uart_fstat,
    .close = &uart_close,
    .read = &uart_read,
    .fcntl = &uart_fcntl,
    .fsync = &uart_fsync,
#ifdef CONFIG_VFS_SUPPORT_DIR
    .dir = &s_vfs_uart_dir,
#endif // CONFIG_VFS_SUPPORT_DIR
#ifdef CONFIG_VFS_SUPPORT_SELECT
    .select = &s_vfs_uart_select,
#endif // CONFIG_VFS_SUPPORT_SELECT
#ifdef CONFIG_VFS_SUPPORT_TERMIOS
    .termios = &s_vfs_uart_termios,
#endif // CONFIG_VFS_SUPPORT_TERMIOS
};

const esp_vfs_fs_ops_t *esp_vfs_uart_get_vfs(void)
{
    return &s_vfs_uart;
}

void uart_vfs_dev_register(void)
{
    ESP_ERROR_CHECK(esp_vfs_register_fs("/dev/uart", &s_vfs_uart, ESP_VFS_FLAG_STATIC, NULL));
}

int uart_vfs_dev_port_set_rx_line_endings(int uart_num, esp_line_endings_t mode)
{
    if (uart_num < 0 || uart_num >= UART_NUM) {
        errno = EBADF;
        return -1;
    }
    s_ctx[uart_num]->rx_mode = mode;
    return 0;
}

int uart_vfs_dev_port_set_tx_line_endings(int uart_num, esp_line_endings_t mode)
{
    if (uart_num < 0 || uart_num >= UART_NUM) {
        errno = EBADF;
        return -1;
    }
    s_ctx[uart_num]->tx_mode = mode;
    return 0;
}

// Deprecated
void uart_vfs_dev_set_rx_line_endings(esp_line_endings_t mode)
{
    for (int i = 0; i < UART_NUM; ++i) {
        s_ctx[i]->rx_mode = mode;
    }
}

// Deprecated
void uart_vfs_dev_set_tx_line_endings(esp_line_endings_t mode)
{
    for (int i = 0; i < UART_NUM; ++i) {
        s_ctx[i]->tx_mode = mode;
    }
}

void uart_vfs_dev_use_nonblocking(int uart_num)
{
    _lock_acquire_recursive(&s_ctx[uart_num]->read_lock);
    _lock_acquire_recursive(&s_ctx[uart_num]->write_lock);
    s_ctx[uart_num]->tx_func = uart_tx_char;
    s_ctx[uart_num]->rx_func = uart_rx_char;
    s_ctx[uart_num]->get_avail_data_len_func = uart_get_avail_data_len;
    _lock_release_recursive(&s_ctx[uart_num]->write_lock);
    _lock_release_recursive(&s_ctx[uart_num]->read_lock);
}

void uart_vfs_dev_use_driver(int uart_num)
{
    _lock_acquire_recursive(&s_ctx[uart_num]->read_lock);
    _lock_acquire_recursive(&s_ctx[uart_num]->write_lock);
    s_ctx[uart_num]->tx_func = uart_tx_char_via_driver;
    s_ctx[uart_num]->rx_func = uart_rx_char_via_driver;
    s_ctx[uart_num]->get_avail_data_len_func = uart_get_avail_data_len_via_driver;
    _lock_release_recursive(&s_ctx[uart_num]->write_lock);
    _lock_release_recursive(&s_ctx[uart_num]->read_lock);
}

#if CONFIG_ESP_CONSOLE_UART
ESP_SYSTEM_INIT_FN(init_vfs_uart, CORE, BIT(0), 110)
{
    uart_vfs_dev_register();
    return ESP_OK;
}
#endif

void uart_vfs_include_dev_init(void)
{
    // Linker hook function, exists to make the linker examine this file
}

// -------------------------- esp_vfs_dev_uart_xxx ALIAS (deprecated) ----------------------------

void esp_vfs_dev_uart_register(void) __attribute__((alias("uart_vfs_dev_register")));

void esp_vfs_dev_uart_set_rx_line_endings(esp_line_endings_t mode) __attribute__((alias("uart_vfs_dev_set_rx_line_endings")));

void esp_vfs_dev_uart_set_tx_line_endings(esp_line_endings_t mode) __attribute__((alias("uart_vfs_dev_set_tx_line_endings")));

int esp_vfs_dev_uart_port_set_rx_line_endings(int uart_num, esp_line_endings_t mode) __attribute__((alias("uart_vfs_dev_port_set_rx_line_endings")));

int esp_vfs_dev_uart_port_set_tx_line_endings(int uart_num, esp_line_endings_t mode) __attribute__((alias("uart_vfs_dev_port_set_tx_line_endings")));

void esp_vfs_dev_uart_use_nonblocking(int uart_num) __attribute__((alias("uart_vfs_dev_use_nonblocking")));

void esp_vfs_dev_uart_use_driver(int uart_num) __attribute__((alias("uart_vfs_dev_use_driver")));
