/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <stdbool.h>
#include "esp_attr.h"
#include "soc/lp_system_struct.h"
#include "soc/lp_clkrst_struct.h"
#include "soc/hp_sys_clkrst_struct.h"
#include "soc/usb_serial_jtag_struct.h"
#include "hal/usb_serial_jtag_types.h"
#include "hal/misc.h"

#if SOC_USB_SERIAL_JTAG_SUPPORTED

/* ----------------------------- Macros & Types ----------------------------- */

#define USB_SERIAL_JTAG_LL_SELECT_PHY_SUPPORTED     1   // Can route to an external FSLS PHY

#define USB_SERIAL_JTAG_LL_INTR_MASK            (0x7ffff)   // All interrupts mask

// Define USB_SERIAL_JTAG interrupts
// Note the hardware has more interrupts, but they're only useful for debugging
// the hardware.
typedef enum {
    USB_SERIAL_JTAG_INTR_SOF                    = (1 << 1),
    USB_SERIAL_JTAG_INTR_SERIAL_OUT_RECV_PKT    = (1 << 2),
    USB_SERIAL_JTAG_INTR_SERIAL_IN_EMPTY        = (1 << 3),
    USB_SERIAL_JTAG_INTR_TOKEN_REC_IN_EP1       = (1 << 8),
    USB_SERIAL_JTAG_INTR_BUS_RESET              = (1 << 9),
    USB_SERIAL_JTAG_INTR_EP1_ZERO_PAYLOAD       = (1 << 10),
} usb_serial_jtag_ll_intr_t;

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------- USJ Peripheral ----------------------------- */

/**
 * @brief  Enable the USB_SERIAL_JTAG interrupt based on the given mask.
 *
 * @param  mask The bitmap of the interrupts need to be enabled.
 *
 * @return None
 */
static inline void usb_serial_jtag_ll_ena_intr_mask(uint32_t mask)
{
    USB_SERIAL_JTAG.int_ena.val |= mask;
}

/**
 * @brief  Disable the USB_SERIAL_JTAG interrupt based on the given mask.
 *
 * @param  mask The bitmap of the interrupts need to be disabled.
 *
 * @return None
 */
static inline void usb_serial_jtag_ll_disable_intr_mask(uint32_t mask)
{
    USB_SERIAL_JTAG.int_ena.val &= (~mask);
}

/**
 * @brief  Get the USB_SERIAL_JTAG interrupt status.
 *
 * @return The USB_SERIAL_JTAG interrupt status.
 */
static inline uint32_t usb_serial_jtag_ll_get_intsts_mask(void)
{
    return USB_SERIAL_JTAG.int_st.val;
}

/**
 * @brief  Get the USB_SERIAL_JTAG raw interrupt status.
 *
 * @return The USB_SERIAL_JTAG raw interrupt status.
 */
static inline __attribute__((always_inline)) uint32_t usb_serial_jtag_ll_get_intraw_mask(void)
{
    return USB_SERIAL_JTAG.int_raw.val;
}

/**
 * @brief  Clear the USB_SERIAL_JTAG interrupt status based on the given mask.
 *
 * @param  mask The bitmap of the interrupts need to be cleared.
 *
 * @return None
 */
static inline __attribute__((always_inline)) void usb_serial_jtag_ll_clr_intsts_mask(uint32_t mask)
{
    USB_SERIAL_JTAG.int_clr.val = mask;
}

/**
 * @brief  Get status of enabled interrupt.
 *
 * @return interrupt enable value
 */
static inline uint32_t usb_serial_jtag_ll_get_intr_ena_status(void)
{
    return USB_SERIAL_JTAG.int_ena.val;
}

/**
 * @brief  Read the bytes from the USB_SERIAL_JTAG rxfifo.
 *
 * @param  buf The data buffer.
 * @param  rd_len The data length needs to be read.
 *
 * @return amount of bytes read
 */
static inline int usb_serial_jtag_ll_read_rxfifo(uint8_t *buf, uint32_t rd_len)
{
    int i;
    for (i = 0; i < (int)rd_len; i++) {
        if (!USB_SERIAL_JTAG.ep1_conf.serial_out_ep_data_avail) break;
        buf[i] = USB_SERIAL_JTAG.ep1.rdwr_byte;
    }
    return i;
}

/**
 * @brief  Write byte to the USB_SERIAL_JTAG txfifo. Only writes bytes as long / if there
 *         is room in the buffer.
 *
 * @param  buf The data buffer.
 * @param  wr_len The data length needs to be written.
 *
 * @return Amount of bytes actually written. May be less than wr_len.
 */
static inline int usb_serial_jtag_ll_write_txfifo(const uint8_t *buf, uint32_t wr_len)
{
    int i;
    for (i = 0; i < (int)wr_len; i++) {
        if (!USB_SERIAL_JTAG.ep1_conf.serial_in_ep_data_free) break;
        USB_SERIAL_JTAG.ep1.rdwr_byte = buf[i];
    }
    return i;
}

/**
 * @brief  Returns 1 if the USB_SERIAL_JTAG rxfifo has data available.
 *
 * @return 0 if no data available, 1 if data available
 */
static inline int usb_serial_jtag_ll_rxfifo_data_available(void)
{
    return USB_SERIAL_JTAG.ep1_conf.serial_out_ep_data_avail;
}

/**
 * @brief  Returns 1 if the USB_SERIAL_JTAG txfifo has room.
 *
 * @return 0 if no data available, 1 if data available
 */
static inline int usb_serial_jtag_ll_txfifo_writable(void)
{
    return USB_SERIAL_JTAG.ep1_conf.serial_in_ep_data_free;
}

/**
 * @brief  Flushes the TX buffer, that is, make it available for the
 *         host to pick up.
 *
 * @note  When fifo is full (with 64 byte), HW will flush the buffer automatically,
 *        if this function is called directly after, this effectively turns into a
 *        no-op. Because a 64-byte packet will be interpreted as a not-complete USB
 *        transaction, you need to transfer either more data or a zero-length packet
 *        for the data to actually end up at the program listening to the CDC-ACM
 *        serial port. To send a zero-length packet, call
 *        usb_serial_jtag_ll_txfifo_flush() again when
 *        usb_serial_jtag_ll_txfifo_writable() returns true.
 *
 * @return na
 */
static inline void usb_serial_jtag_ll_txfifo_flush(void)
{
    USB_SERIAL_JTAG.ep1_conf.wr_done=1;
}

/**
 * @brief Enable USJ JTAG bridge
 *
 * If enabled, USJ is disconnected from internal JTAG interface. JTAG interface
 * is routed through GPIO matrix instead.
 *
 * @param enable Enable USJ JTAG bridge
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_enable_jtag_bridge(bool enable)
{
    USB_SERIAL_JTAG.conf0.usb_jtag_bridge_en = enable;
}

/* ---------------------------- USB PHY Control  ---------------------------- */

/**
 * @brief Sets PHY defaults
 *
 * Some PHY register fields/features of the USJ are redundant on the ESP32-P4.
 * This function those fields are set to the appropriate default values.
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_set_defaults(void)
{
    // External FSLS PHY is not supported
    USB_SERIAL_JTAG.conf0.phy_sel = 0;
    USB_SERIAL_JTAG.conf0.usb_pad_enable = 1;
}

/**
 * @brief Select the internal USB FSLS PHY for the USJ
 *
 * @param phy_idx Selected PHY's index
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_select(unsigned int phy_idx)
{
    // Enable SW control mapping USB_WRAP and USJ to USB FSLS PHY 0 and 1
    LP_SYS.usb_ctrl.sw_hw_usb_phy_sel = 1;
    /*
    For 'sw_usb_phy_sel':
    False - USJ mapped to USB FSLS PHY 0, USB_WRAP mapped to USB FSLS PHY 1
    True  - USJ mapped to USB FSLS PHY 1, USB_WRAP mapped to USB FSLS PHY 0
    */
    switch (phy_idx) {
    case 0:
        LP_SYS.usb_ctrl.sw_usb_phy_sel = false;
        break;
    case 1:
        LP_SYS.usb_ctrl.sw_usb_phy_sel = true;
        break;
    default:
        break;
    }
}

/**
 * @brief Enables/disables exchanging of the D+/D- pins USB PHY
 *
 * @param enable Enables pin exchange, disabled otherwise
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_enable_pin_exchg(bool enable)
{
    if (enable) {
        USB_SERIAL_JTAG.conf0.exchg_pins = 1;
        USB_SERIAL_JTAG.conf0.exchg_pins_override = 1;
    } else {
        USB_SERIAL_JTAG.conf0.exchg_pins_override = 0;
        USB_SERIAL_JTAG.conf0.exchg_pins = 0;
    }
}

/**
 * @brief Enables and sets voltage threshold overrides for USB FSLS PHY single-ended inputs
 *
 * @param vrefh_step High voltage threshold. 0 to 3 indicating 80mV steps from 1.76V to 2V.
 * @param vrefl_step Low voltage threshold. 0 to 3 indicating 80mV steps from 0.8V to 1.04V.
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_enable_vref_override(unsigned int vrefh_step, unsigned int vrefl_step)
{
    USB_SERIAL_JTAG.conf0.vrefh = vrefh_step;
    USB_SERIAL_JTAG.conf0.vrefl = vrefl_step;
    USB_SERIAL_JTAG.conf0.vref_override = 1;
}

/**
 * @brief Disables voltage threshold overrides for USB FSLS PHY single-ended inputs
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_disable_vref_override(void)
{
    USB_SERIAL_JTAG.conf0.vref_override = 0;
}

/**
 * @brief Enable override of USB FSLS PHY's pull up/down resistors
 *
 * @param vals Override values to set
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_enable_pull_override(const usb_serial_jtag_pull_override_vals_t *vals)
{
    USB_SERIAL_JTAG.conf0.dp_pullup = vals->dp_pu;
    USB_SERIAL_JTAG.conf0.dp_pulldown = vals->dp_pd;
    USB_SERIAL_JTAG.conf0.dm_pullup = vals->dm_pu;
    USB_SERIAL_JTAG.conf0.dm_pulldown = vals->dm_pd;
    USB_SERIAL_JTAG.conf0.pad_pull_override = 1;
}

/**
 * @brief Disable override of USB FSLS PHY pull up/down resistors
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_disable_pull_override(void)
{
    USB_SERIAL_JTAG.conf0.pad_pull_override = 0;
}

/**
 * @brief Sets the strength of the pullup resistor
 *
 * @param strong True is a ~1.4K pullup, false is a ~2.4K pullup
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_set_pullup_strength(bool strong)
{
    USB_SERIAL_JTAG.conf0.pullup_value = strong;
}

/**
 * @brief Check if USB FSLS PHY pads are enabled
 *
 * @return True if enabled, false otherwise
 */
FORCE_INLINE_ATTR bool usb_serial_jtag_ll_phy_is_pad_enabled(void)
{
    return USB_SERIAL_JTAG.conf0.usb_pad_enable;
}

/**
 * @brief Enable the USB FSLS PHY pads
 *
 * @param enable Whether to enable the USB FSLS PHY pads
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_phy_enable_pad(bool enable)
{
    USB_SERIAL_JTAG.conf0.usb_pad_enable = enable;
}

/* ----------------------------- RCC Functions  ----------------------------- */

/**
 * @brief Enable the bus clock for USJ module
 * @param clk_en True if enable the clock of USJ module
 */
FORCE_INLINE_ATTR void _usb_serial_jtag_ll_enable_bus_clock(bool clk_en)
{
    HP_SYS_CLKRST.soc_clk_ctrl2.reg_usb_device_apb_clk_en = clk_en;
    // Enable PHY clock (48MHz) for USB FSLS PHY 0
    LP_AON_CLKRST.hp_usb_clkrst_ctrl0.usb_device_48m_clk_en = clk_en;
}

// HP_SYS_CLKRST.soc_clk_ctrlx and LP_AON_CLKRST.hp_usb_clkrst_ctrlx are shared registers, so this function must be used in an atomic way
#define usb_serial_jtag_ll_enable_bus_clock(...) do { \
        (void)__DECLARE_RCC_ATOMIC_ENV; \
        _usb_serial_jtag_ll_enable_bus_clock(__VA_ARGS__); \
    } while(0)

/**
 * @brief Reset the USJ module
 */
FORCE_INLINE_ATTR void usb_serial_jtag_ll_reset_register(void)
{
    LP_AON_CLKRST.hp_usb_clkrst_ctrl1.rst_en_usb_device = 1;
    LP_AON_CLKRST.hp_usb_clkrst_ctrl1.rst_en_usb_device = 0;
}

// HP_SYS_CLKRST.soc_clk_ctrlx and LP_AON_CLKRST.hp_usb_clkrst_ctrlx are shared registers, so this function must be used in an atomic way
#define usb_serial_jtag_ll_reset_register(...) do { \
        (void)__DECLARE_RCC_ATOMIC_ENV; \
        usb_serial_jtag_ll_reset_register(__VA_ARGS__); \
    } while(0)

/**
 * Get the enable status of the USJ module
 *
 * @return Return true if USJ module is enabled
 */
FORCE_INLINE_ATTR bool usb_serial_jtag_ll_module_is_enabled(void)
{
    return (HP_SYS_CLKRST.soc_clk_ctrl2.reg_usb_device_apb_clk_en && !LP_AON_CLKRST.hp_usb_clkrst_ctrl1.rst_en_usb_device);
}

// HP_SYS_CLKRST.soc_clk_ctrlx and LP_AON_CLKRST.hp_usb_clkrst_ctrlx are shared registers, so this function must be used in an atomic way
#define usb_serial_jtag_ll_module_is_enabled(...) ({    \
    (void)__DECLARE_RCC_ATOMIC_ENV;                     \
    usb_serial_jtag_ll_module_is_enabled(__VA_ARGS__);  \
})

#ifdef __cplusplus
}
#endif

#endif // #if SOC_USB_SERIAL_JTAG_SUPPORTED
