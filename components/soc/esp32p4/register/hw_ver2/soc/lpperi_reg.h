/**
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LPPERI_CLK_EN_REG register
 *  need_des
 */
#define LPPERI_CLK_EN_REG (DR_REG_LPPERI_BASE + 0x0)
/** LPPERI_CK_EN_RNG : R/W; bitpos: [16]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_RNG    (BIT(16))
#define LPPERI_CK_EN_RNG_M  (LPPERI_CK_EN_RNG_V << LPPERI_CK_EN_RNG_S)
#define LPPERI_CK_EN_RNG_V  0x00000001U
#define LPPERI_CK_EN_RNG_S  16
/** LPPERI_CK_EN_LP_TSENS : R/W; bitpos: [17]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_TSENS    (BIT(17))
#define LPPERI_CK_EN_LP_TSENS_M  (LPPERI_CK_EN_LP_TSENS_V << LPPERI_CK_EN_LP_TSENS_S)
#define LPPERI_CK_EN_LP_TSENS_V  0x00000001U
#define LPPERI_CK_EN_LP_TSENS_S  17
/** LPPERI_CK_EN_LP_PMS : R/W; bitpos: [18]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_PMS    (BIT(18))
#define LPPERI_CK_EN_LP_PMS_M  (LPPERI_CK_EN_LP_PMS_V << LPPERI_CK_EN_LP_PMS_S)
#define LPPERI_CK_EN_LP_PMS_V  0x00000001U
#define LPPERI_CK_EN_LP_PMS_S  18
/** LPPERI_CK_EN_LP_EFUSE : R/W; bitpos: [19]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_EFUSE    (BIT(19))
#define LPPERI_CK_EN_LP_EFUSE_M  (LPPERI_CK_EN_LP_EFUSE_V << LPPERI_CK_EN_LP_EFUSE_S)
#define LPPERI_CK_EN_LP_EFUSE_V  0x00000001U
#define LPPERI_CK_EN_LP_EFUSE_S  19
/** LPPERI_CK_EN_LP_IOMUX : R/W; bitpos: [20]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_IOMUX    (BIT(20))
#define LPPERI_CK_EN_LP_IOMUX_M  (LPPERI_CK_EN_LP_IOMUX_V << LPPERI_CK_EN_LP_IOMUX_S)
#define LPPERI_CK_EN_LP_IOMUX_V  0x00000001U
#define LPPERI_CK_EN_LP_IOMUX_S  20
/** LPPERI_CK_EN_LP_TOUCH : R/W; bitpos: [21]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_TOUCH    (BIT(21))
#define LPPERI_CK_EN_LP_TOUCH_M  (LPPERI_CK_EN_LP_TOUCH_V << LPPERI_CK_EN_LP_TOUCH_S)
#define LPPERI_CK_EN_LP_TOUCH_V  0x00000001U
#define LPPERI_CK_EN_LP_TOUCH_S  21
/** LPPERI_CK_EN_LP_SPI : R/W; bitpos: [22]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_SPI    (BIT(22))
#define LPPERI_CK_EN_LP_SPI_M  (LPPERI_CK_EN_LP_SPI_V << LPPERI_CK_EN_LP_SPI_S)
#define LPPERI_CK_EN_LP_SPI_V  0x00000001U
#define LPPERI_CK_EN_LP_SPI_S  22
/** LPPERI_CK_EN_LP_ADC : R/W; bitpos: [23]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_ADC    (BIT(23))
#define LPPERI_CK_EN_LP_ADC_M  (LPPERI_CK_EN_LP_ADC_V << LPPERI_CK_EN_LP_ADC_S)
#define LPPERI_CK_EN_LP_ADC_V  0x00000001U
#define LPPERI_CK_EN_LP_ADC_S  23
/** LPPERI_CK_EN_LP_I2S_TX : R/W; bitpos: [24]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_I2S_TX    (BIT(24))
#define LPPERI_CK_EN_LP_I2S_TX_M  (LPPERI_CK_EN_LP_I2S_TX_V << LPPERI_CK_EN_LP_I2S_TX_S)
#define LPPERI_CK_EN_LP_I2S_TX_V  0x00000001U
#define LPPERI_CK_EN_LP_I2S_TX_S  24
/** LPPERI_CK_EN_LP_I2S_RX : R/W; bitpos: [25]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_I2S_RX    (BIT(25))
#define LPPERI_CK_EN_LP_I2S_RX_M  (LPPERI_CK_EN_LP_I2S_RX_V << LPPERI_CK_EN_LP_I2S_RX_S)
#define LPPERI_CK_EN_LP_I2S_RX_V  0x00000001U
#define LPPERI_CK_EN_LP_I2S_RX_S  25
/** LPPERI_CK_EN_LP_I2S : R/W; bitpos: [26]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_I2S    (BIT(26))
#define LPPERI_CK_EN_LP_I2S_M  (LPPERI_CK_EN_LP_I2S_V << LPPERI_CK_EN_LP_I2S_S)
#define LPPERI_CK_EN_LP_I2S_V  0x00000001U
#define LPPERI_CK_EN_LP_I2S_S  26
/** LPPERI_CK_EN_LP_I2CMST : R/W; bitpos: [27]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_I2CMST    (BIT(27))
#define LPPERI_CK_EN_LP_I2CMST_M  (LPPERI_CK_EN_LP_I2CMST_V << LPPERI_CK_EN_LP_I2CMST_S)
#define LPPERI_CK_EN_LP_I2CMST_V  0x00000001U
#define LPPERI_CK_EN_LP_I2CMST_S  27
/** LPPERI_CK_EN_LP_I2C : R/W; bitpos: [28]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_I2C    (BIT(28))
#define LPPERI_CK_EN_LP_I2C_M  (LPPERI_CK_EN_LP_I2C_V << LPPERI_CK_EN_LP_I2C_S)
#define LPPERI_CK_EN_LP_I2C_V  0x00000001U
#define LPPERI_CK_EN_LP_I2C_S  28
/** LPPERI_CK_EN_LP_UART : R/W; bitpos: [29]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_UART    (BIT(29))
#define LPPERI_CK_EN_LP_UART_M  (LPPERI_CK_EN_LP_UART_V << LPPERI_CK_EN_LP_UART_S)
#define LPPERI_CK_EN_LP_UART_V  0x00000001U
#define LPPERI_CK_EN_LP_UART_S  29
/** LPPERI_CK_EN_LP_INTR : R/W; bitpos: [30]; default: 1;
 *  need_des
 */
#define LPPERI_CK_EN_LP_INTR    (BIT(30))
#define LPPERI_CK_EN_LP_INTR_M  (LPPERI_CK_EN_LP_INTR_V << LPPERI_CK_EN_LP_INTR_S)
#define LPPERI_CK_EN_LP_INTR_V  0x00000001U
#define LPPERI_CK_EN_LP_INTR_S  30
/** LPPERI_CK_EN_LP_CORE : R/W; bitpos: [31]; default: 0;
 *  write 1 to force on lp_core clk
 */
#define LPPERI_CK_EN_LP_CORE    (BIT(31))
#define LPPERI_CK_EN_LP_CORE_M  (LPPERI_CK_EN_LP_CORE_V << LPPERI_CK_EN_LP_CORE_S)
#define LPPERI_CK_EN_LP_CORE_V  0x00000001U
#define LPPERI_CK_EN_LP_CORE_S  31

/** LPPERI_CORE_CLK_SEL_REG register
 *  need_des
 */
#define LPPERI_CORE_CLK_SEL_REG (DR_REG_LPPERI_BASE + 0x4)
/** LPPERI_LP_I2S_TX_CLK_SEL : R/W; bitpos: [25:24]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLK_SEL    0x00000003U
#define LPPERI_LP_I2S_TX_CLK_SEL_M  (LPPERI_LP_I2S_TX_CLK_SEL_V << LPPERI_LP_I2S_TX_CLK_SEL_S)
#define LPPERI_LP_I2S_TX_CLK_SEL_V  0x00000003U
#define LPPERI_LP_I2S_TX_CLK_SEL_S  24
/** LPPERI_LP_I2S_RX_CLK_SEL : R/W; bitpos: [27:26]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLK_SEL    0x00000003U
#define LPPERI_LP_I2S_RX_CLK_SEL_M  (LPPERI_LP_I2S_RX_CLK_SEL_V << LPPERI_LP_I2S_RX_CLK_SEL_S)
#define LPPERI_LP_I2S_RX_CLK_SEL_V  0x00000003U
#define LPPERI_LP_I2S_RX_CLK_SEL_S  26
/** LPPERI_LP_I2C_CLK_SEL : R/W; bitpos: [29:28]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2C_CLK_SEL    0x00000003U
#define LPPERI_LP_I2C_CLK_SEL_M  (LPPERI_LP_I2C_CLK_SEL_V << LPPERI_LP_I2C_CLK_SEL_S)
#define LPPERI_LP_I2C_CLK_SEL_V  0x00000003U
#define LPPERI_LP_I2C_CLK_SEL_S  28
/** LPPERI_LP_UART_CLK_SEL : R/W; bitpos: [31:30]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_CLK_SEL    0x00000003U
#define LPPERI_LP_UART_CLK_SEL_M  (LPPERI_LP_UART_CLK_SEL_V << LPPERI_LP_UART_CLK_SEL_S)
#define LPPERI_LP_UART_CLK_SEL_V  0x00000003U
#define LPPERI_LP_UART_CLK_SEL_S  30

/** LPPERI_RESET_EN_REG register
 *  need_des
 */
#define LPPERI_RESET_EN_REG (DR_REG_LPPERI_BASE + 0x8)
/** LPPERI_RST_EN_LP_RNG : R/W; bitpos: [17]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_RNG    (BIT(17))
#define LPPERI_RST_EN_LP_RNG_M  (LPPERI_RST_EN_LP_RNG_V << LPPERI_RST_EN_LP_RNG_S)
#define LPPERI_RST_EN_LP_RNG_V  0x00000001U
#define LPPERI_RST_EN_LP_RNG_S  17
/** LPPERI_RST_EN_LP_TSENS : R/W; bitpos: [18]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_TSENS    (BIT(18))
#define LPPERI_RST_EN_LP_TSENS_M  (LPPERI_RST_EN_LP_TSENS_V << LPPERI_RST_EN_LP_TSENS_S)
#define LPPERI_RST_EN_LP_TSENS_V  0x00000001U
#define LPPERI_RST_EN_LP_TSENS_S  18
/** LPPERI_RST_EN_LP_PMS : R/W; bitpos: [19]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_PMS    (BIT(19))
#define LPPERI_RST_EN_LP_PMS_M  (LPPERI_RST_EN_LP_PMS_V << LPPERI_RST_EN_LP_PMS_S)
#define LPPERI_RST_EN_LP_PMS_V  0x00000001U
#define LPPERI_RST_EN_LP_PMS_S  19
/** LPPERI_RST_EN_LP_EFUSE : R/W; bitpos: [20]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_EFUSE    (BIT(20))
#define LPPERI_RST_EN_LP_EFUSE_M  (LPPERI_RST_EN_LP_EFUSE_V << LPPERI_RST_EN_LP_EFUSE_S)
#define LPPERI_RST_EN_LP_EFUSE_V  0x00000001U
#define LPPERI_RST_EN_LP_EFUSE_S  20
/** LPPERI_RST_EN_LP_IOMUX : R/W; bitpos: [21]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_IOMUX    (BIT(21))
#define LPPERI_RST_EN_LP_IOMUX_M  (LPPERI_RST_EN_LP_IOMUX_V << LPPERI_RST_EN_LP_IOMUX_S)
#define LPPERI_RST_EN_LP_IOMUX_V  0x00000001U
#define LPPERI_RST_EN_LP_IOMUX_S  21
/** LPPERI_RST_EN_LP_TOUCH : R/W; bitpos: [22]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_TOUCH    (BIT(22))
#define LPPERI_RST_EN_LP_TOUCH_M  (LPPERI_RST_EN_LP_TOUCH_V << LPPERI_RST_EN_LP_TOUCH_S)
#define LPPERI_RST_EN_LP_TOUCH_V  0x00000001U
#define LPPERI_RST_EN_LP_TOUCH_S  22
/** LPPERI_RST_EN_LP_SPI : R/W; bitpos: [23]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_SPI    (BIT(23))
#define LPPERI_RST_EN_LP_SPI_M  (LPPERI_RST_EN_LP_SPI_V << LPPERI_RST_EN_LP_SPI_S)
#define LPPERI_RST_EN_LP_SPI_V  0x00000001U
#define LPPERI_RST_EN_LP_SPI_S  23
/** LPPERI_RST_EN_LP_ADC : R/W; bitpos: [24]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_ADC    (BIT(24))
#define LPPERI_RST_EN_LP_ADC_M  (LPPERI_RST_EN_LP_ADC_V << LPPERI_RST_EN_LP_ADC_S)
#define LPPERI_RST_EN_LP_ADC_V  0x00000001U
#define LPPERI_RST_EN_LP_ADC_S  24
/** LPPERI_RST_EN_LP_I2S : R/W; bitpos: [25]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_I2S    (BIT(25))
#define LPPERI_RST_EN_LP_I2S_M  (LPPERI_RST_EN_LP_I2S_V << LPPERI_RST_EN_LP_I2S_S)
#define LPPERI_RST_EN_LP_I2S_V  0x00000001U
#define LPPERI_RST_EN_LP_I2S_S  25
/** LPPERI_RST_EN_LP_I2CMST : R/W; bitpos: [26]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_I2CMST    (BIT(26))
#define LPPERI_RST_EN_LP_I2CMST_M  (LPPERI_RST_EN_LP_I2CMST_V << LPPERI_RST_EN_LP_I2CMST_S)
#define LPPERI_RST_EN_LP_I2CMST_V  0x00000001U
#define LPPERI_RST_EN_LP_I2CMST_S  26
/** LPPERI_RST_EN_LP_I2C : R/W; bitpos: [27]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_I2C    (BIT(27))
#define LPPERI_RST_EN_LP_I2C_M  (LPPERI_RST_EN_LP_I2C_V << LPPERI_RST_EN_LP_I2C_S)
#define LPPERI_RST_EN_LP_I2C_V  0x00000001U
#define LPPERI_RST_EN_LP_I2C_S  27
/** LPPERI_RST_EN_LP_UART : R/W; bitpos: [28]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_UART    (BIT(28))
#define LPPERI_RST_EN_LP_UART_M  (LPPERI_RST_EN_LP_UART_V << LPPERI_RST_EN_LP_UART_S)
#define LPPERI_RST_EN_LP_UART_V  0x00000001U
#define LPPERI_RST_EN_LP_UART_S  28
/** LPPERI_RST_EN_LP_INTR : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_INTR    (BIT(29))
#define LPPERI_RST_EN_LP_INTR_M  (LPPERI_RST_EN_LP_INTR_V << LPPERI_RST_EN_LP_INTR_S)
#define LPPERI_RST_EN_LP_INTR_V  0x00000001U
#define LPPERI_RST_EN_LP_INTR_S  29
/** LPPERI_RST_EN_LP_ROM : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_ROM    (BIT(30))
#define LPPERI_RST_EN_LP_ROM_M  (LPPERI_RST_EN_LP_ROM_V << LPPERI_RST_EN_LP_ROM_S)
#define LPPERI_RST_EN_LP_ROM_V  0x00000001U
#define LPPERI_RST_EN_LP_ROM_S  30
/** LPPERI_RST_EN_LP_CORE : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LPPERI_RST_EN_LP_CORE    (BIT(31))
#define LPPERI_RST_EN_LP_CORE_M  (LPPERI_RST_EN_LP_CORE_V << LPPERI_RST_EN_LP_CORE_S)
#define LPPERI_RST_EN_LP_CORE_V  0x00000001U
#define LPPERI_RST_EN_LP_CORE_S  31

/** LPPERI_CPU_REG register
 *  need_des
 */
#define LPPERI_CPU_REG (DR_REG_LPPERI_BASE + 0xc)
/** LPPERI_LPCORE_DBGM_UNAVAILABLE : R/W; bitpos: [31]; default: 1;
 *  need_des
 */
#define LPPERI_LPCORE_DBGM_UNAVAILABLE    (BIT(31))
#define LPPERI_LPCORE_DBGM_UNAVAILABLE_M  (LPPERI_LPCORE_DBGM_UNAVAILABLE_V << LPPERI_LPCORE_DBGM_UNAVAILABLE_S)
#define LPPERI_LPCORE_DBGM_UNAVAILABLE_V  0x00000001U
#define LPPERI_LPCORE_DBGM_UNAVAILABLE_S  31

/** LPPERI_MEM_CTRL_REG register
 *  need_des
 */
#define LPPERI_MEM_CTRL_REG (DR_REG_LPPERI_BASE + 0x28)
/** LPPERI_LP_UART_WAKEUP_FLAG_CLR : WT; bitpos: [0]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_WAKEUP_FLAG_CLR    (BIT(0))
#define LPPERI_LP_UART_WAKEUP_FLAG_CLR_M  (LPPERI_LP_UART_WAKEUP_FLAG_CLR_V << LPPERI_LP_UART_WAKEUP_FLAG_CLR_S)
#define LPPERI_LP_UART_WAKEUP_FLAG_CLR_V  0x00000001U
#define LPPERI_LP_UART_WAKEUP_FLAG_CLR_S  0
/** LPPERI_LP_UART_WAKEUP_FLAG : R/WTC/SS; bitpos: [1]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_WAKEUP_FLAG    (BIT(1))
#define LPPERI_LP_UART_WAKEUP_FLAG_M  (LPPERI_LP_UART_WAKEUP_FLAG_V << LPPERI_LP_UART_WAKEUP_FLAG_S)
#define LPPERI_LP_UART_WAKEUP_FLAG_V  0x00000001U
#define LPPERI_LP_UART_WAKEUP_FLAG_S  1
/** LPPERI_LP_UART_WAKEUP_EN : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_WAKEUP_EN    (BIT(29))
#define LPPERI_LP_UART_WAKEUP_EN_M  (LPPERI_LP_UART_WAKEUP_EN_V << LPPERI_LP_UART_WAKEUP_EN_S)
#define LPPERI_LP_UART_WAKEUP_EN_V  0x00000001U
#define LPPERI_LP_UART_WAKEUP_EN_S  29
/** LPPERI_LP_UART_MEM_FORCE_PD : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_MEM_FORCE_PD    (BIT(30))
#define LPPERI_LP_UART_MEM_FORCE_PD_M  (LPPERI_LP_UART_MEM_FORCE_PD_V << LPPERI_LP_UART_MEM_FORCE_PD_S)
#define LPPERI_LP_UART_MEM_FORCE_PD_V  0x00000001U
#define LPPERI_LP_UART_MEM_FORCE_PD_S  30
/** LPPERI_LP_UART_MEM_FORCE_PU : R/W; bitpos: [31]; default: 1;
 *  need_des
 */
#define LPPERI_LP_UART_MEM_FORCE_PU    (BIT(31))
#define LPPERI_LP_UART_MEM_FORCE_PU_M  (LPPERI_LP_UART_MEM_FORCE_PU_V << LPPERI_LP_UART_MEM_FORCE_PU_S)
#define LPPERI_LP_UART_MEM_FORCE_PU_V  0x00000001U
#define LPPERI_LP_UART_MEM_FORCE_PU_S  31

/** LPPERI_ADC_CTRL_REG register
 *  need_des
 */
#define LPPERI_ADC_CTRL_REG (DR_REG_LPPERI_BASE + 0x2c)
/** LPPERI_SAR2_CLK_FORCE_ON : R/W; bitpos: [6]; default: 0;
 *  need_des
 */
#define LPPERI_SAR2_CLK_FORCE_ON    (BIT(6))
#define LPPERI_SAR2_CLK_FORCE_ON_M  (LPPERI_SAR2_CLK_FORCE_ON_V << LPPERI_SAR2_CLK_FORCE_ON_S)
#define LPPERI_SAR2_CLK_FORCE_ON_V  0x00000001U
#define LPPERI_SAR2_CLK_FORCE_ON_S  6
/** LPPERI_SAR1_CLK_FORCE_ON : R/W; bitpos: [7]; default: 0;
 *  need_des
 */
#define LPPERI_SAR1_CLK_FORCE_ON    (BIT(7))
#define LPPERI_SAR1_CLK_FORCE_ON_M  (LPPERI_SAR1_CLK_FORCE_ON_V << LPPERI_SAR1_CLK_FORCE_ON_S)
#define LPPERI_SAR1_CLK_FORCE_ON_V  0x00000001U
#define LPPERI_SAR1_CLK_FORCE_ON_S  7
/** LPPERI_LPADC_FUNC_DIV_NUM : R/W; bitpos: [15:8]; default: 4;
 *  need_des
 */
#define LPPERI_LPADC_FUNC_DIV_NUM    0x000000FFU
#define LPPERI_LPADC_FUNC_DIV_NUM_M  (LPPERI_LPADC_FUNC_DIV_NUM_V << LPPERI_LPADC_FUNC_DIV_NUM_S)
#define LPPERI_LPADC_FUNC_DIV_NUM_V  0x000000FFU
#define LPPERI_LPADC_FUNC_DIV_NUM_S  8
/** LPPERI_LPADC_SAR2_DIV_NUM : R/W; bitpos: [23:16]; default: 4;
 *  need_des
 */
#define LPPERI_LPADC_SAR2_DIV_NUM    0x000000FFU
#define LPPERI_LPADC_SAR2_DIV_NUM_M  (LPPERI_LPADC_SAR2_DIV_NUM_V << LPPERI_LPADC_SAR2_DIV_NUM_S)
#define LPPERI_LPADC_SAR2_DIV_NUM_V  0x000000FFU
#define LPPERI_LPADC_SAR2_DIV_NUM_S  16
/** LPPERI_LPADC_SAR1_DIV_NUM : R/W; bitpos: [31:24]; default: 4;
 *  need_des
 */
#define LPPERI_LPADC_SAR1_DIV_NUM    0x000000FFU
#define LPPERI_LPADC_SAR1_DIV_NUM_M  (LPPERI_LPADC_SAR1_DIV_NUM_V << LPPERI_LPADC_SAR1_DIV_NUM_S)
#define LPPERI_LPADC_SAR1_DIV_NUM_V  0x000000FFU
#define LPPERI_LPADC_SAR1_DIV_NUM_S  24

/** LPPERI_LP_I2S_RXCLK_DIV_NUM_REG register
 *  need_des
 */
#define LPPERI_LP_I2S_RXCLK_DIV_NUM_REG (DR_REG_LPPERI_BASE + 0x30)
/** LPPERI_LP_I2S_RX_CLKM_DIV_NUM : R/W; bitpos: [31:24]; default: 2;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLKM_DIV_NUM    0x000000FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_NUM_M  (LPPERI_LP_I2S_RX_CLKM_DIV_NUM_V << LPPERI_LP_I2S_RX_CLKM_DIV_NUM_S)
#define LPPERI_LP_I2S_RX_CLKM_DIV_NUM_V  0x000000FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_NUM_S  24

/** LPPERI_LP_I2S_RXCLK_DIV_XYZ_REG register
 *  need_des
 */
#define LPPERI_LP_I2S_RXCLK_DIV_XYZ_REG (DR_REG_LPPERI_BASE + 0x34)
/** LPPERI_LP_I2S_RX_CLKM_DIV_YN1 : R/W; bitpos: [4]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLKM_DIV_YN1    (BIT(4))
#define LPPERI_LP_I2S_RX_CLKM_DIV_YN1_M  (LPPERI_LP_I2S_RX_CLKM_DIV_YN1_V << LPPERI_LP_I2S_RX_CLKM_DIV_YN1_S)
#define LPPERI_LP_I2S_RX_CLKM_DIV_YN1_V  0x00000001U
#define LPPERI_LP_I2S_RX_CLKM_DIV_YN1_S  4
/** LPPERI_LP_I2S_RX_CLKM_DIV_Z : R/W; bitpos: [13:5]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLKM_DIV_Z    0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_Z_M  (LPPERI_LP_I2S_RX_CLKM_DIV_Z_V << LPPERI_LP_I2S_RX_CLKM_DIV_Z_S)
#define LPPERI_LP_I2S_RX_CLKM_DIV_Z_V  0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_Z_S  5
/** LPPERI_LP_I2S_RX_CLKM_DIV_Y : R/W; bitpos: [22:14]; default: 1;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLKM_DIV_Y    0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_Y_M  (LPPERI_LP_I2S_RX_CLKM_DIV_Y_V << LPPERI_LP_I2S_RX_CLKM_DIV_Y_S)
#define LPPERI_LP_I2S_RX_CLKM_DIV_Y_V  0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_Y_S  14
/** LPPERI_LP_I2S_RX_CLKM_DIV_X : R/W; bitpos: [31:23]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_RX_CLKM_DIV_X    0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_X_M  (LPPERI_LP_I2S_RX_CLKM_DIV_X_V << LPPERI_LP_I2S_RX_CLKM_DIV_X_S)
#define LPPERI_LP_I2S_RX_CLKM_DIV_X_V  0x000001FFU
#define LPPERI_LP_I2S_RX_CLKM_DIV_X_S  23

/** LPPERI_LP_I2S_TXCLK_DIV_NUM_REG register
 *  need_des
 */
#define LPPERI_LP_I2S_TXCLK_DIV_NUM_REG (DR_REG_LPPERI_BASE + 0x38)
/** LPPERI_LP_I2S_TX_CLKM_DIV_NUM : R/W; bitpos: [31:24]; default: 2;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLKM_DIV_NUM    0x000000FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_NUM_M  (LPPERI_LP_I2S_TX_CLKM_DIV_NUM_V << LPPERI_LP_I2S_TX_CLKM_DIV_NUM_S)
#define LPPERI_LP_I2S_TX_CLKM_DIV_NUM_V  0x000000FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_NUM_S  24

/** LPPERI_LP_I2S_TXCLK_DIV_XYZ_REG register
 *  need_des
 */
#define LPPERI_LP_I2S_TXCLK_DIV_XYZ_REG (DR_REG_LPPERI_BASE + 0x3c)
/** LPPERI_LP_I2S_TX_CLKM_DIV_YN1 : R/W; bitpos: [4]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLKM_DIV_YN1    (BIT(4))
#define LPPERI_LP_I2S_TX_CLKM_DIV_YN1_M  (LPPERI_LP_I2S_TX_CLKM_DIV_YN1_V << LPPERI_LP_I2S_TX_CLKM_DIV_YN1_S)
#define LPPERI_LP_I2S_TX_CLKM_DIV_YN1_V  0x00000001U
#define LPPERI_LP_I2S_TX_CLKM_DIV_YN1_S  4
/** LPPERI_LP_I2S_TX_CLKM_DIV_Z : R/W; bitpos: [13:5]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLKM_DIV_Z    0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_Z_M  (LPPERI_LP_I2S_TX_CLKM_DIV_Z_V << LPPERI_LP_I2S_TX_CLKM_DIV_Z_S)
#define LPPERI_LP_I2S_TX_CLKM_DIV_Z_V  0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_Z_S  5
/** LPPERI_LP_I2S_TX_CLKM_DIV_Y : R/W; bitpos: [22:14]; default: 1;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLKM_DIV_Y    0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_Y_M  (LPPERI_LP_I2S_TX_CLKM_DIV_Y_V << LPPERI_LP_I2S_TX_CLKM_DIV_Y_S)
#define LPPERI_LP_I2S_TX_CLKM_DIV_Y_V  0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_Y_S  14
/** LPPERI_LP_I2S_TX_CLKM_DIV_X : R/W; bitpos: [31:23]; default: 0;
 *  need_des
 */
#define LPPERI_LP_I2S_TX_CLKM_DIV_X    0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_X_M  (LPPERI_LP_I2S_TX_CLKM_DIV_X_V << LPPERI_LP_I2S_TX_CLKM_DIV_X_S)
#define LPPERI_LP_I2S_TX_CLKM_DIV_X_V  0x000001FFU
#define LPPERI_LP_I2S_TX_CLKM_DIV_X_S  23

/** LPPERI_DATE_REG register
 *  need_des
 */
#define LPPERI_DATE_REG (DR_REG_LPPERI_BASE + 0x3fc)
/** LPPERI_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LPPERI_CLK_EN    (BIT(31))
#define LPPERI_CLK_EN_M  (LPPERI_CLK_EN_V << LPPERI_CLK_EN_S)
#define LPPERI_CLK_EN_V  0x00000001U
#define LPPERI_CLK_EN_S  31

#ifdef __cplusplus
}
#endif
