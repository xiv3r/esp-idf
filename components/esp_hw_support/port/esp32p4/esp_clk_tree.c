/*
 * SPDX-FileCopyrightText: 2023-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>
#include "esp_clk_tree.h"
#include "esp_err.h"
#include "esp_check.h"
#include "soc/rtc.h"
#include "hal/clk_gate_ll.h"
#include "hal/clk_tree_hal.h"
#include "hal/clk_tree_ll.h"
#include "esp_private/esp_clk_tree_common.h"
#include "esp_private/periph_ctrl.h"

static const char *TAG = "esp_clk_tree";

esp_err_t esp_clk_tree_src_get_freq_hz(soc_module_clk_t clk_src, esp_clk_tree_src_freq_precision_t precision,
                                       uint32_t *freq_value)
{
    ESP_RETURN_ON_FALSE(clk_src > 0 && clk_src < SOC_MOD_CLK_INVALID, ESP_ERR_INVALID_ARG, TAG, "unknown clk src");
    ESP_RETURN_ON_FALSE(precision < ESP_CLK_TREE_SRC_FREQ_PRECISION_INVALID, ESP_ERR_INVALID_ARG, TAG, "unknown precision");
    ESP_RETURN_ON_FALSE(freq_value, ESP_ERR_INVALID_ARG, TAG, "null pointer");

    uint32_t clk_src_freq = 0;
    switch (clk_src) {
    case SOC_MOD_CLK_CPU:
        clk_src_freq = clk_hal_cpu_get_freq_hz();
        break;
    case SOC_MOD_CLK_XTAL:
        clk_src_freq = clk_hal_xtal_get_freq_mhz() * MHZ;
        break;
    case SOC_MOD_CLK_PLL_F20M:
        clk_src_freq = CLK_LL_PLL_480M_FREQ_MHZ / clk_ll_pll_f20m_get_divider() * MHZ;
        break;
    case SOC_MOD_CLK_PLL_F80M:
        clk_src_freq = CLK_LL_PLL_80M_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_PLL_F120M:
        clk_src_freq = CLK_LL_PLL_120M_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_PLL_F160M:
        clk_src_freq = CLK_LL_PLL_160M_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_PLL_F240M:
        clk_src_freq = CLK_LL_PLL_240M_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_CPLL:
        clk_src_freq = clk_ll_cpll_get_freq_mhz(clk_hal_xtal_get_freq_mhz()) * MHZ;
        break;
    case SOC_MOD_CLK_SPLL:
        clk_src_freq = CLK_LL_PLL_480M_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_MPLL:
        clk_src_freq = clk_ll_mpll_get_freq_mhz(clk_hal_xtal_get_freq_mhz()) * MHZ;
        break;
    case SOC_MOD_CLK_APLL:
        clk_src_freq = clk_hal_apll_get_freq_hz();
        break;
    case SOC_MOD_CLK_SDIO_PLL:
        clk_src_freq = CLK_LL_PLL_SDIO_FREQ_MHZ * MHZ;
        break;
    case SOC_MOD_CLK_RTC_SLOW:
        clk_src_freq = esp_clk_tree_lp_slow_get_freq_hz(precision);
        break;
    case SOC_MOD_CLK_RTC_FAST:
    case SOC_MOD_CLK_LP_DYN_FAST: // This clock can be derived from RTC_SLOW_CLK or RTC_FAST_CLK depending on the chip’s power mode.
                                  // However, this function is only supposed to run under active mode, so its frequency is the same as RTC_FAST_CLK.
        clk_src_freq = esp_clk_tree_lp_fast_get_freq_hz(precision);
        break;
    case SOC_MOD_CLK_RC_FAST:
        clk_src_freq = esp_clk_tree_rc_fast_get_freq_hz(precision);
        break;
    case SOC_MOD_CLK_XTAL32K:
        clk_src_freq = esp_clk_tree_xtal32k_get_freq_hz(precision);
        break;
    case SOC_MOD_CLK_XTAL_D2:
        clk_src_freq = (clk_hal_xtal_get_freq_mhz() * MHZ) >> 1;
        break;
    case SOC_MOD_CLK_LP_PLL:
        clk_src_freq = clk_ll_lp_pll_get_freq_mhz() * MHZ;
        break;
    default:
        break;
    }

    ESP_RETURN_ON_FALSE(clk_src_freq, ESP_FAIL, TAG,
                        "freq shouldn't be 0, calibration failed");
    *freq_value = clk_src_freq;
    return ESP_OK;
}

void esp_clk_tree_initialize(void)
{
}

bool esp_clk_tree_is_power_on(soc_root_clk_circuit_t clk_circuit)
{
    (void)clk_circuit;
    return false;
}

esp_err_t esp_clk_tree_enable_power(soc_root_clk_circuit_t clk_circuit, bool enable)
{
    (void)clk_circuit; (void)enable;
    return ESP_OK; // TODO: PM-354
}

esp_err_t esp_clk_tree_enable_src(soc_module_clk_t clk_src, bool enable)
{
    if(!enable) {
        // TODO: remove it after reference counter supported
        return ESP_OK;
    }

    PERIPH_RCC_ATOMIC() {
        switch (clk_src) {
        case SOC_MOD_CLK_PLL_F20M:
            clk_gate_ll_ref_20m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F25M:
            clk_gate_ll_ref_25m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F50M:
            clk_gate_ll_ref_50m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F80M:
            clk_gate_ll_ref_80m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F120M:
            clk_gate_ll_ref_120m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F160M:
            clk_gate_ll_ref_160m_clk_en(enable);
            break;
        case SOC_MOD_CLK_PLL_F240M:
            clk_gate_ll_ref_240m_clk_en(enable);
            break;
        default:
            break;
        }
    }
    return ESP_OK;
}
