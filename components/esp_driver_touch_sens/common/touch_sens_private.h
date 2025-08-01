/*
 * SPDX-FileCopyrightText: 2023-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @brief This header file is private for the internal use of the touch driver
 *        DO NOT use any APIs or types in this file outside of the touch driver
 */

#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "soc/soc_caps.h"
#include "hal/touch_sens_hal.h"
#include "driver/touch_sens_types.h"
#include "esp_memory_utils.h"
#include "esp_check.h"
#include "sdkconfig.h"
#if SOC_TOUCH_SENSOR_VERSION == 1
#include "esp_timer.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Helper macros */
#define TOUCH_NULL_POINTER_CHECK(p)     ESP_RETURN_ON_FALSE((p), ESP_ERR_INVALID_ARG, TAG, "input parameter '"#p"' is NULL")
#define TOUCH_NULL_POINTER_CHECK_ISR(p) ESP_RETURN_ON_FALSE_ISR((p), ESP_ERR_INVALID_ARG, TAG, "input parameter '"#p"' is NULL")
#define FOR_EACH_TOUCH_CHANNEL(i)       for (int i = 0; i < TOUCH_TOTAL_CHAN_NUM; i++)
#define TOUCH_IRAM_CHECK(cb)            (!(cb) || esp_ptr_in_iram(cb))

/* IRAM safe caps */
#if CONFIG_TOUCH_ISR_IRAM_SAFE || CONFIG_TOUCH_CTRL_FUNC_IN_IRAM
#define _TOUCH_INTR_ALLOC_FLAGS     (ESP_INTR_FLAG_IRAM | ESP_INTR_FLAG_LOWMED)
#define TOUCH_MEM_ALLOC_CAPS        (MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT)
#else
#define _TOUCH_INTR_ALLOC_FLAGS    (ESP_INTR_FLAG_LOWMED)
#define TOUCH_MEM_ALLOC_CAPS      MALLOC_CAP_DEFAULT
#endif //CONFIG_TOUCH_ISR_IRAM_SAFE

#if SOC_TOUCH_SENSOR_VERSION == 3
#define TOUCH_INTR_ALLOC_FLAGS      (_TOUCH_INTR_ALLOC_FLAGS)
#else
#define TOUCH_INTR_ALLOC_FLAGS      (_TOUCH_INTR_ALLOC_FLAGS | ESP_INTR_FLAG_SHARED)
#endif

/* Debug caps */
#if CONFIG_TOUCH_SKIP_FSM_CHECK
#define TOUCH_GOTO_ON_FALSE_FSM(...)
#define TOUCH_GOTO_ON_FALSE_FSM_ISR(...)
#define TOUCH_FSM_ERR_TAG(err_tag)
#else
#define TOUCH_GOTO_ON_FALSE_FSM(...)     ESP_GOTO_ON_FALSE(__VA_ARGS__)
#define TOUCH_GOTO_ON_FALSE_FSM_ISR(...) ESP_GOTO_ON_FALSE_ISR(__VA_ARGS__)
#define TOUCH_FSM_ERR_TAG(err_tag)       err_tag:
#endif

/* DMA caps */
#define TOUCH_DMA_ALLOC_CAPS      (MALLOC_CAP_INTERNAL | MALLOC_CAP_DMA)

/* RTC peripheral spin lock */
extern portMUX_TYPE rtc_spinlock;
#define TOUCH_RTC_LOCK              (&rtc_spinlock)

#if SOC_TOUCH_SENSOR_VERSION <= 2
#define TOUCH_PERIPH_LOCK           (&rtc_spinlock)
#else
extern portMUX_TYPE g_touch_spinlock;
#define TOUCH_PERIPH_LOCK           (&g_touch_spinlock)
#endif

#define TOUCH_ENTER_CRITICAL(spinlock)          portENTER_CRITICAL(spinlock)
#define TOUCH_EXIT_CRITICAL(spinlock)           portEXIT_CRITICAL(spinlock)
#define TOUCH_ENTER_CRITICAL_SAFE(spinlock)     portENTER_CRITICAL_SAFE(spinlock)
#define TOUCH_EXIT_CRITICAL_SAFE(spinlock)      portEXIT_CRITICAL_SAFE(spinlock)

/**
 * @brief The touch sensor controller instance structure
 * @note  A touch sensor controller includes multiple channels and sample configurations
 *
 */
struct touch_sensor_s {
    touch_channel_handle_t  ch[SOC_TOUCH_SENSOR_NUM];   /*!< Touch sensor channel handles, will be NULL if the channel is not registered */
    uint32_t                chan_mask;                  /*!< Enabled channel mask, corresponding bit will be set if the channel is registered */
    uint32_t                src_freq_hz;                /*!< Source clock frequency */
    uint32_t                interval_freq_hz;           /*!< Frequency of the interval clock */
    intr_handle_t           intr_handle;                /*!< Interrupt handle */
    touch_event_callbacks_t cbs;                        /*!< Event callbacks */
    touch_channel_handle_t  deep_slp_chan;              /*!< The configured channel for depp sleep, will be NULL if not enable the deep sleep */
#if SOC_TOUCH_SUPPORT_WATERPROOF
    touch_channel_handle_t  guard_chan;                 /*!< The configured channel for the guard ring, will be NULL if not set */
    touch_channel_handle_t  shield_chan;                /*!< The configured channel for the shield pad, will be NULL if not set */
#endif
#if SOC_TOUCH_SENSOR_VERSION == 1
    uint32_t                timer_interval_ms;          /*!< Timer interval in milliseconds for software filter */
    esp_timer_handle_t      sw_filter_timer;            /*!< Software filter timer handle */
    touch_sw_filter_t       data_filter_fn;             /*!< Software filter function pointer */
    void                    *user_filter_ctx;           /*!< User context that will pass to the software filter function */
#endif

    SemaphoreHandle_t       mutex;                      /*!< Mutex lock to ensure thread safety */

    uint8_t                 sample_cfg_num;             /*!< The number of sample configurations that in used */
    void                    *user_ctx;                  /*!< User context that will pass to the callback function */
    union {
        struct {
            bool            is_enabled : 1;             /*!< Flag to indicate whether the scanning is enabled */
            bool            is_started : 1;             /*!< Flag to indicate whether the scanning has started */
            bool            sleep_en : 1;               /*!< Flag to indicate whether the sleep wake-up feature is enabled */
#if SOC_TOUCH_SENSOR_VERSION == 1
            bool            is_below_trig;              /*!< Whether the touch sensor interrupt will trigger below the trigger threshold */
#else  // SOC_TOUCH_SENSOR_VERSION >= 2
            bool            allow_pd : 1;               /*!< Flag to indicate whether allow RTC_PERIPH power down during the sleep */
            bool            is_meas_timeout : 1;        /*!< Flag to indicate whether the measurement timeout, will force to stop the current measurement if the timeout is triggered */
            bool            waterproof_en : 1;          /*!< Flag to indicate whether the water proof feature is enabled */
            bool            immersion_proof : 1;        /*!< Flag to indicate whether to disable scanning when the guard ring is triggered */
            bool            proximity_en : 1;           /*!< Flag to indicate whether the proximity sensing feature is enabled */
            bool            timeout_en : 1;             /*!< Flag to indicate whether the measurement timeout feature (hardware timeout) is enabled */
            bool            denoise_en : 1;             /*!< Flag to indicate whether the denoise channel feature is enabled */
#endif
        };
        uint32_t flags;
    };
};

/**
 * @brief The touch sensor channel instance structure
 *
 */
struct touch_channel_s {
    touch_sensor_handle_t   base;                       /*!< The touch sensor controller handle */
    int                     id;                         /*!< Touch channel id, the range is target-specific */
#if SOC_TOUCH_SUPPORT_PROX_SENSING
    int                     prox_id;                    /*!< The proximity channel id + 1. It is 0 if not a proximity channel */
    uint32_t                prox_cnt;                   /*!< Cache the proximity measurement count, only takes effect when the channel is a proximity channel.
                                                         *   When this count reaches `touch_proximity_config_t::scan_times`,
                                                         *   this field will be cleared and call the `on_proximity_meas_done` callback.
                                                         */
    uint32_t                prox_val[TOUCH_SAMPLE_CFG_NUM]; /*!< The accumulated proximity value of each sample config.
                                                         *   The value will accumulate for each scanning until it reaches `touch_proximity_config_t::scan_times`.
                                                         *   This accumulated proximity value can be read via `touch_channel_read_data` when all scanning finished.
                                                         */
#endif
#if SOC_TOUCH_SENSOR_VERSION == 1
    uint32_t                abs_thresh;                 /*!< Absolute threshold value that evaluate whether the channel is active */
    uint32_t                smooth_data;                /*!< The smoothed data value, which is filtered by the software filter */
    bool                    is_active;                  /*!< Flag to indicate whether the channel is active */
#endif
};

extern touch_sensor_handle_t g_touch;  /*!< Global touch sensor controller handle for `esp_driver_touch_sens` use only */

/**
 * @brief Touch sensor module enable interface
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in] enable    Set true to enable touch sensor module clock
 */
void touch_priv_enable_module(bool enable);

/**
 * @brief Touch sensor default interrupt handler
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in] arg       The input argument
 */
void touch_priv_default_intr_handler(void *arg);

/**
 * @brief Touch sensor controller configuration interface
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in] sens_handle   The touch sensor controller handle
 * @param[in] sens_cfg      The touch sensor controller configuration pointer
 * @return
 *      - ESP_OK        On success
 *      - Others        Version-specific failure code
 */
esp_err_t touch_priv_config_controller(touch_sensor_handle_t sens_handle, const touch_sensor_config_t *sens_cfg);

/**
 * @brief Touch sensor channel configuration interface
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in] chan_handle   The touch sensor channel handle
 * @param[in] chan_cfg      The touch sensor channel configuration pointer
 * @return
 *      - ESP_OK        On success
 *      - Others        Version-specific failure code
 */
esp_err_t touch_priv_config_channel(touch_channel_handle_t chan_handle, const touch_channel_config_t *chan_cfg);

/**
 * @brief Touch sensor controller de-initialize interface
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in] sens_handle   The touch sensor handle
 * @return
 *      - ESP_OK        On success
 *      - Others        Version-specific failure code
 */
esp_err_t touch_priv_deinit_controller(touch_sensor_handle_t sens_handle);

/**
 * @brief Touch sensor channel data read interface
 * @note  This is a private interface of `esp_driver_touch_sens`
 *        It should be implemented by each hardware version
 *
 * @param[in]  chan_handle  The touch sensor channel handle
 * @param[in]  type         The read data type
 * @param[out] data         The output data pointer
 * @return
 *      - ESP_OK        On success
 *      - Others        Version-specific failure code
 */
esp_err_t touch_priv_channel_read_data(touch_channel_handle_t chan_handle, touch_chan_data_type_t type, uint32_t *data);

#if SOC_TOUCH_SENSOR_VERSION == 1
/**
 * @brief Execute software filter for once
 * @note  This is the implementation of the esp_timer callback
 * @param[in]  arg the touch sensor controller handle
 */
void touch_priv_execute_sw_filter(void *arg);
#endif

#ifdef __cplusplus
}
#endif
