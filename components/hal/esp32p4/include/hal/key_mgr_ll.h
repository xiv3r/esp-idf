/*
 * SPDX-FileCopyrightText: 2023-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*******************************************************************************
 * NOTICE
 * The hal is not public api, don't use it in application code.
 ******************************************************************************/

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "hal/assert.h"
#include "hal/key_mgr_types.h"
#include "soc/keymng_reg.h"
#include "soc/hp_sys_clkrst_struct.h"
#include "esp_private/esp_crypto_lock_internal.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Enable the bus clock for Key Manager peripheral
 * Note: Please use key_mgr_ll_enable_bus_clock which requires the critical section
 *       and do not use _key_mgr_ll_enable_bus_clock
 * @param true to enable, false to disable
 */
static inline void _key_mgr_ll_enable_bus_clock(bool enable)
{
    HP_SYS_CLKRST.soc_clk_ctrl1.reg_key_manager_sys_clk_en = enable;
}

/// use a macro to wrap the function, force the caller to use it in a critical section
/// the critical section needs to declare the __DECLARE_RCC_ATOMIC_ENV variable in advance
#define key_mgr_ll_enable_bus_clock(...) do { \
        (void)__DECLARE_RCC_ATOMIC_ENV; \
        _key_mgr_ll_enable_bus_clock(__VA_ARGS__); \
    } while(0)

/**
 * @brief Enable the peripheral clock for Key Manager
 *
 * Note: Please use key_mgr_ll_enable_peripheral_clock which requires the critical section
 *       and do not use _key_mgr_ll_enable_peripheral_clock
 * @param true to enable, false to disable
 */
static inline void _key_mgr_ll_enable_peripheral_clock(bool enable)
{
    HP_SYS_CLKRST.peri_clk_ctrl25.reg_crypto_km_clk_en = enable;
}

#define key_mgr_ll_enable_peripheral_clock(...) do { \
        (void)__DECLARE_RCC_ATOMIC_ENV; \
        _key_mgr_ll_enable_peripheral_clock(__VA_ARGS__); \
    } while(0)

/**
 * @brief Read state of Key Manager
 *
 * @return esp_key_mgr_state_t
 */
static inline esp_key_mgr_state_t key_mgr_ll_get_state(void)
{
    return (esp_key_mgr_state_t) REG_GET_FIELD(KEYMNG_STATE_REG, KEYMNG_STATE);
}

/**
 * @brief Reset the Key Manager peripheral
 * Note: Please use key_mgr_ll_reset_register which requires the critical section
 *       and do not use _key_mgr_ll_reset_register
 */
static inline void _key_mgr_ll_reset_register(void)
{
    HP_SYS_CLKRST.hp_rst_en2.reg_rst_en_km = 1;
    HP_SYS_CLKRST.hp_rst_en2.reg_rst_en_km = 0;

    // Clear reset on parent crypto, otherwise Key Manager is held in reset
    HP_SYS_CLKRST.hp_rst_en2.reg_rst_en_crypto = 0;

    while (key_mgr_ll_get_state() != ESP_KEY_MGR_STATE_IDLE) {
    };
}

/// use a macro to wrap the function, force the caller to use it in a critical section
/// the critical section needs to declare the __DECLARE_RCC_ATOMIC_ENV variable in advance
#define key_mgr_ll_reset_register(...) do { \
        (void)__DECLARE_RCC_ATOMIC_ENV; \
        _key_mgr_ll_reset_register(__VA_ARGS__); \
    } while(0)

/* @brief Start the key manager at IDLE state */
static inline void key_mgr_ll_start(void)
{
    REG_SET_BIT(KEYMNG_START_REG, KEYMNG_START);
}

/* @brief Continue key manager operation at LOAD/GAIN state */
static inline void key_mgr_ll_continue(void)
{
    REG_SET_BIT(KEYMNG_START_REG, KEYMNG_CONTINUE);
}


/* @brief Enable or Disable the KEY_MGR interrupts */
static inline void key_mgr_ll_configure_interrupt(const esp_key_mgr_interrupt_type_t intr, bool en)
{
    switch(intr) {
        case ESP_KEY_MGR_INT_PREP_DONE:
            REG_SET_FIELD(KEYMNG_INT_ENA_REG, KEYMNG_PREP_DONE_INT_ENA, en);
            break;
        case ESP_KEY_MGR_INT_PROC_DONE:
            REG_SET_FIELD(KEYMNG_INT_ENA_REG, KEYMNG_PROC_DONE_INT_ENA, en);
            break;
        case ESP_KEY_MGR_INT_POST_DONE:
            REG_SET_FIELD(KEYMNG_INT_ENA_REG, KEYMNG_POST_DONE_INT_ENA, en);
            break;
        default:
            return;
    }
}

/* @brief Clear the KEY_MGR interrupts */
static inline void key_mgr_ll_clear_int(const esp_key_mgr_interrupt_type_t intr)
{
    switch(intr) {
        case ESP_KEY_MGR_INT_PREP_DONE:
            REG_SET_FIELD(KEYMNG_INT_CLR_REG, KEYMNG_PREP_DONE_INT_CLR, 1);
            break;
        case ESP_KEY_MGR_INT_PROC_DONE:
            REG_SET_FIELD(KEYMNG_INT_CLR_REG, KEYMNG_PROC_DONE_INT_CLR, 1);
            break;
        case ESP_KEY_MGR_INT_POST_DONE:
            REG_SET_FIELD(KEYMNG_INT_CLR_REG, KEYMNG_POST_DONE_INT_CLR, 1);
            break;
        default:
            return;
    }
}


/**
 * @brief Set the key manager to use the software provided init key
 */
static inline void key_mgr_ll_use_sw_init_key(void)
{
    REG_SET_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_SW_INIT_KEY);
}

/**
 * @brief Configure the key manager key usage policy for a particular key type
 *
 */
static inline void key_mgr_ll_set_key_usage(const esp_key_mgr_key_type_t key_type, const esp_key_mgr_key_usage_t key_usage)
{
    switch (key_type) {
        case ESP_KEY_MGR_ECDSA_192_KEY:
        case ESP_KEY_MGR_ECDSA_256_KEY:
            if (key_usage == ESP_KEY_MGR_USE_EFUSE_KEY) {
                REG_SET_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_ECDSA);
            } else {
                REG_CLR_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_ECDSA);
            }
            break;
        case ESP_KEY_MGR_XTS_AES_128_KEY:
        case ESP_KEY_MGR_XTS_AES_256_KEY:
            if (key_usage == ESP_KEY_MGR_USE_EFUSE_KEY) {
                REG_SET_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_XTS);
            } else {
                REG_CLR_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_XTS);
            }
            break;
        default:
            HAL_ASSERT(false && "Unsupported mode");
            return;
    }
}

static inline esp_key_mgr_key_usage_t key_mgr_ll_get_key_usage(esp_key_mgr_key_type_t key_type)
{
    switch (key_type) {
        case ESP_KEY_MGR_ECDSA_192_KEY:
        case ESP_KEY_MGR_ECDSA_256_KEY:
            return (esp_key_mgr_key_usage_t) (REG_GET_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_ECDSA));
            break;

        case ESP_KEY_MGR_XTS_AES_128_KEY:
        case ESP_KEY_MGR_XTS_AES_256_KEY:
            return (esp_key_mgr_key_usage_t) (REG_GET_BIT(KEYMNG_STATIC_REG, KEYMNG_USE_EFUSE_KEY_XTS));
            break;

        default:
            HAL_ASSERT(false && "Unsupported mode");
            return ESP_KEY_MGR_USAGE_INVALID;
    }
    return ESP_KEY_MGR_USAGE_INVALID;
}

/**
 * @brief Set the lock for the use_sw_init_key_reg
 *        After this lock has been set,
 *        The Key manager configuration about the use of software init key cannot be changed
 */
static inline void key_mgr_ll_lock_use_sw_init_key_reg(void)
{
    REG_SET_BIT(KEYMNG_LOCK_REG, KEYMNG_USE_SW_INIT_KEY_LOCK);
}

/**
 * @brief Set the lock for the use_sw_init_key_reg
 *        After this lock has been set,
 *        The Key manager configuration about whether to use a particular key from efuse or key manager cannot be changed.
 */
static inline void key_mgr_ll_lock_use_efuse_key_reg(esp_key_mgr_key_type_t key_type)
{
    switch(key_type) {
        case ESP_KEY_MGR_ECDSA_192_KEY:
        case ESP_KEY_MGR_ECDSA_256_KEY:
            REG_SET_BIT(KEYMNG_LOCK_REG, KEYMNG_USE_EFUSE_KEY_LOCK_ECDSA);
            break;
        case ESP_KEY_MGR_XTS_AES_128_KEY:
        case ESP_KEY_MGR_XTS_AES_256_KEY:
            REG_SET_BIT(KEYMNG_LOCK_REG, KEYMNG_USE_EFUSE_KEY_LOCK_XTS);
            break;
        default:
            HAL_ASSERT(false && "Unsupported key type");
            return;
    }
}

/* @brief Configure the key purpose to be used by the Key Manager for key generator operation */
static inline void key_mgr_ll_set_key_purpose(const esp_key_mgr_key_purpose_t key_purpose)
{
    switch(key_purpose) {
        case ESP_KEY_MGR_KEY_PURPOSE_ECDSA_192:
        case ESP_KEY_MGR_KEY_PURPOSE_ECDSA_256:
            REG_SET_FIELD(KEYMNG_CONF_REG, KEYMNG_KEY_PURPOSE, KEYMNG_KEY_PURPOSE_ECDSA);
            break;
        case ESP_KEY_MGR_KEY_PURPOSE_XTS_AES_256_1:
            REG_SET_FIELD(KEYMNG_CONF_REG, KEYMNG_KEY_PURPOSE, KEYMNG_KEY_PURPOSE_XTS_AES_256_1);
            break;
        case ESP_KEY_MGR_KEY_PURPOSE_XTS_AES_256_2:
            REG_SET_FIELD(KEYMNG_CONF_REG, KEYMNG_KEY_PURPOSE, KEYMNG_KEY_PURPOSE_XTS_AES_256_2);
            break;
        default:
            HAL_ASSERT(false && "Unsupported mode");
            return;
    }
}

/**
 * @brief Configure the mode which is used by the Key Manager for the generator key deployment process
 */
static inline void key_mgr_ll_set_key_generator_mode(const esp_key_mgr_key_generator_mode_t mode)
{
    REG_SET_FIELD(KEYMNG_CONF_REG, KEYMNG_KGEN_MODE, mode);
}

/**
 * @brief Read the key manager process result
 * @return  1 for Success
 *          0 for failure
 */
static inline bool key_mgr_ll_is_result_success(void)
{
    return REG_GET_FIELD(KEYMNG_RESULT_REG, KEYMNG_PROC_RESULT);
}

/**
 * @brief Check if the deployed key is valid or not
 * @return  1 for Success
 *          0 for failure
 */
static inline bool key_mgr_ll_is_key_deployment_valid(const esp_key_mgr_key_type_t key_type)
{
    switch (key_type) {

        case ESP_KEY_MGR_ECDSA_192_KEY:
        case ESP_KEY_MGR_ECDSA_256_KEY:
            return REG_GET_FIELD(KEYMNG_KEY_VLD_REG, KEYMNG_KEY_ECDSA_VLD);
            break;

        case ESP_KEY_MGR_XTS_AES_128_KEY:
        case ESP_KEY_MGR_XTS_AES_256_KEY:
            return REG_GET_FIELD(KEYMNG_KEY_VLD_REG, KEYMNG_KEY_XTS_VLD);
            break;

        default:
            HAL_ASSERT(false && "Unsupported mode");
            return 0;
    }
}

/*
 * @brief Write the SW init key in the key manager registers
 *
 * @input
 * sw_init_key_buf      Init key buffer, this should be a readable buffer of data_len size which should contain the sw init key. The buffer must be 32 bit aligned
 * data_len             Length of the init key buffer
 */
static inline void key_mgr_ll_write_sw_init_key(const uint8_t *sw_init_key_buf, const size_t data_len)
{
    memcpy((uint8_t *)KEYMNG_SW_INIT_KEY_MEM, sw_init_key_buf, data_len);
}

/*
 * @brief Write the Assist info in the key manager registers
 *
 * @input
 * assist_info_buf      Assist info buffer, this should be a readable buffer of data_len size which should contain the assist info.  The buffer must be 32 bit aligned
 * data_len             Length of the assist info buffer
 */
static inline void key_mgr_ll_write_assist_info(const uint8_t *assist_info_buf, const size_t data_len)
{
    memcpy((uint8_t *)KEYMNG_ASSIST_INFO_MEM, assist_info_buf, data_len);
}

/*
 * @brief Read the Assist info from the key manager registers
 *
 * @input
 * assist_info_buf      Assist info buffer, this should be a writable buffer of size KEY_MGR_ASSIST_INFO_LEN. The buffer must be 32 bit aligned
 */
static inline void key_mgr_ll_read_assist_info( uint8_t *assist_info_buf)
{
    memcpy(assist_info_buf, (uint8_t *)KEYMNG_ASSIST_INFO_MEM, KEY_MGR_ASSIST_INFO_LEN);
}

/*
 * @brief Write the Public info in the key manager registers
 * @input
 * public_info_buf      Public info buffer, this should be a readable buffer of data_len size which should contain the public info.  The buffer must be 32 bit aligned
 * data_len             Length of the public info buffer
 */
static inline void key_mgr_ll_write_public_info(const uint8_t *public_info_buf, const size_t data_len)
{
    memcpy((uint8_t *)KEYMNG_PUBLIC_INFO_MEM, public_info_buf, data_len);
}

/*
 * @brief Read the Public info in the key manager registers
 * @input
 * public_info_buf      Public info buffer, this should be a writable buffer of read_len,  The buffer must be 32 bit aligned
 * read_len             Length of the public info buffer
 */
static inline void key_mgr_ll_read_public_info(uint8_t *public_info_buf, const size_t read_len)
{
    memcpy(public_info_buf, (uint8_t *)KEYMNG_PUBLIC_INFO_MEM, read_len);
}

static inline bool key_mgr_ll_is_huk_valid(void)
{
    return REG_GET_FIELD(KEYMNG_HUK_VLD_REG, KEYMNG_HUK_VALID);
}

/* @brief Set the AES-XTS key length for the Key Manager */
static inline void key_mgr_ll_set_xts_aes_key_len(const esp_key_mgr_xts_aes_key_len_t key_len)
{
    REG_SET_FIELD(KEYMNG_STATIC_REG, KEYMNG_XTS_AES_KEY_LEN, key_len);
}

/* @brief Get the AES-XTS key length for the Key Manager */
static inline esp_key_mgr_xts_aes_key_len_t key_mgr_ll_get_xts_aes_key_len(void)
{
    return (esp_key_mgr_xts_aes_key_len_t) REG_GET_FIELD(KEYMNG_STATIC_REG, KEYMNG_XTS_AES_KEY_LEN);
}

/**
 * @brief Read the Key Manager date information
 */
static inline uint32_t key_mgr_ll_get_date_info(void)
{
    // Only the lest siginificantt 28 bits have desired information
    return (uint32_t)(0x0FFFFFFF & REG_READ(KEYMNG_DATE_REG));
}

#ifdef __cplusplus
}
#endif
