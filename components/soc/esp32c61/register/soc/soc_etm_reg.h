/**
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** SOC_ETM_CH_ENA_AD0_REG register
 *  Channel enable status register
 */
#define SOC_ETM_CH_ENA_AD0_REG (DR_REG_SOC_ETM_BASE + 0x0)
/** SOC_ETM_CH_ENABLED0 : R/WTC/WS; bitpos: [0]; default: 0;
 *  Represents channel0 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED0    (BIT(0))
#define SOC_ETM_CH_ENABLED0_M  (SOC_ETM_CH_ENABLED0_V << SOC_ETM_CH_ENABLED0_S)
#define SOC_ETM_CH_ENABLED0_V  0x00000001U
#define SOC_ETM_CH_ENABLED0_S  0
/** SOC_ETM_CH_ENABLED1 : R/WTC/WS; bitpos: [1]; default: 0;
 *  Represents channel1 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED1    (BIT(1))
#define SOC_ETM_CH_ENABLED1_M  (SOC_ETM_CH_ENABLED1_V << SOC_ETM_CH_ENABLED1_S)
#define SOC_ETM_CH_ENABLED1_V  0x00000001U
#define SOC_ETM_CH_ENABLED1_S  1
/** SOC_ETM_CH_ENABLED2 : R/WTC/WS; bitpos: [2]; default: 0;
 *  Represents channel2 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED2    (BIT(2))
#define SOC_ETM_CH_ENABLED2_M  (SOC_ETM_CH_ENABLED2_V << SOC_ETM_CH_ENABLED2_S)
#define SOC_ETM_CH_ENABLED2_V  0x00000001U
#define SOC_ETM_CH_ENABLED2_S  2
/** SOC_ETM_CH_ENABLED3 : R/WTC/WS; bitpos: [3]; default: 0;
 *  Represents channel3 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED3    (BIT(3))
#define SOC_ETM_CH_ENABLED3_M  (SOC_ETM_CH_ENABLED3_V << SOC_ETM_CH_ENABLED3_S)
#define SOC_ETM_CH_ENABLED3_V  0x00000001U
#define SOC_ETM_CH_ENABLED3_S  3
/** SOC_ETM_CH_ENABLED4 : R/WTC/WS; bitpos: [4]; default: 0;
 *  Represents channel4 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED4    (BIT(4))
#define SOC_ETM_CH_ENABLED4_M  (SOC_ETM_CH_ENABLED4_V << SOC_ETM_CH_ENABLED4_S)
#define SOC_ETM_CH_ENABLED4_V  0x00000001U
#define SOC_ETM_CH_ENABLED4_S  4
/** SOC_ETM_CH_ENABLED5 : R/WTC/WS; bitpos: [5]; default: 0;
 *  Represents channel5 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED5    (BIT(5))
#define SOC_ETM_CH_ENABLED5_M  (SOC_ETM_CH_ENABLED5_V << SOC_ETM_CH_ENABLED5_S)
#define SOC_ETM_CH_ENABLED5_V  0x00000001U
#define SOC_ETM_CH_ENABLED5_S  5
/** SOC_ETM_CH_ENABLED6 : R/WTC/WS; bitpos: [6]; default: 0;
 *  Represents channel6 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED6    (BIT(6))
#define SOC_ETM_CH_ENABLED6_M  (SOC_ETM_CH_ENABLED6_V << SOC_ETM_CH_ENABLED6_S)
#define SOC_ETM_CH_ENABLED6_V  0x00000001U
#define SOC_ETM_CH_ENABLED6_S  6
/** SOC_ETM_CH_ENABLED7 : R/WTC/WS; bitpos: [7]; default: 0;
 *  Represents channel7 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED7    (BIT(7))
#define SOC_ETM_CH_ENABLED7_M  (SOC_ETM_CH_ENABLED7_V << SOC_ETM_CH_ENABLED7_S)
#define SOC_ETM_CH_ENABLED7_V  0x00000001U
#define SOC_ETM_CH_ENABLED7_S  7
/** SOC_ETM_CH_ENABLED8 : R/WTC/WS; bitpos: [8]; default: 0;
 *  Represents channel8 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED8    (BIT(8))
#define SOC_ETM_CH_ENABLED8_M  (SOC_ETM_CH_ENABLED8_V << SOC_ETM_CH_ENABLED8_S)
#define SOC_ETM_CH_ENABLED8_V  0x00000001U
#define SOC_ETM_CH_ENABLED8_S  8
/** SOC_ETM_CH_ENABLED9 : R/WTC/WS; bitpos: [9]; default: 0;
 *  Represents channel9 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED9    (BIT(9))
#define SOC_ETM_CH_ENABLED9_M  (SOC_ETM_CH_ENABLED9_V << SOC_ETM_CH_ENABLED9_S)
#define SOC_ETM_CH_ENABLED9_V  0x00000001U
#define SOC_ETM_CH_ENABLED9_S  9
/** SOC_ETM_CH_ENABLED10 : R/WTC/WS; bitpos: [10]; default: 0;
 *  Represents channel10 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED10    (BIT(10))
#define SOC_ETM_CH_ENABLED10_M  (SOC_ETM_CH_ENABLED10_V << SOC_ETM_CH_ENABLED10_S)
#define SOC_ETM_CH_ENABLED10_V  0x00000001U
#define SOC_ETM_CH_ENABLED10_S  10
/** SOC_ETM_CH_ENABLED11 : R/WTC/WS; bitpos: [11]; default: 0;
 *  Represents channel11 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED11    (BIT(11))
#define SOC_ETM_CH_ENABLED11_M  (SOC_ETM_CH_ENABLED11_V << SOC_ETM_CH_ENABLED11_S)
#define SOC_ETM_CH_ENABLED11_V  0x00000001U
#define SOC_ETM_CH_ENABLED11_S  11
/** SOC_ETM_CH_ENABLED12 : R/WTC/WS; bitpos: [12]; default: 0;
 *  Represents channel12 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED12    (BIT(12))
#define SOC_ETM_CH_ENABLED12_M  (SOC_ETM_CH_ENABLED12_V << SOC_ETM_CH_ENABLED12_S)
#define SOC_ETM_CH_ENABLED12_V  0x00000001U
#define SOC_ETM_CH_ENABLED12_S  12
/** SOC_ETM_CH_ENABLED13 : R/WTC/WS; bitpos: [13]; default: 0;
 *  Represents channel13 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED13    (BIT(13))
#define SOC_ETM_CH_ENABLED13_M  (SOC_ETM_CH_ENABLED13_V << SOC_ETM_CH_ENABLED13_S)
#define SOC_ETM_CH_ENABLED13_V  0x00000001U
#define SOC_ETM_CH_ENABLED13_S  13
/** SOC_ETM_CH_ENABLED14 : R/WTC/WS; bitpos: [14]; default: 0;
 *  Represents channel14 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED14    (BIT(14))
#define SOC_ETM_CH_ENABLED14_M  (SOC_ETM_CH_ENABLED14_V << SOC_ETM_CH_ENABLED14_S)
#define SOC_ETM_CH_ENABLED14_V  0x00000001U
#define SOC_ETM_CH_ENABLED14_S  14
/** SOC_ETM_CH_ENABLED15 : R/WTC/WS; bitpos: [15]; default: 0;
 *  Represents channel15 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED15    (BIT(15))
#define SOC_ETM_CH_ENABLED15_M  (SOC_ETM_CH_ENABLED15_V << SOC_ETM_CH_ENABLED15_S)
#define SOC_ETM_CH_ENABLED15_V  0x00000001U
#define SOC_ETM_CH_ENABLED15_S  15
/** SOC_ETM_CH_ENABLED16 : R/WTC/WS; bitpos: [16]; default: 0;
 *  Represents channel16 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED16    (BIT(16))
#define SOC_ETM_CH_ENABLED16_M  (SOC_ETM_CH_ENABLED16_V << SOC_ETM_CH_ENABLED16_S)
#define SOC_ETM_CH_ENABLED16_V  0x00000001U
#define SOC_ETM_CH_ENABLED16_S  16
/** SOC_ETM_CH_ENABLED17 : R/WTC/WS; bitpos: [17]; default: 0;
 *  Represents channel17 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED17    (BIT(17))
#define SOC_ETM_CH_ENABLED17_M  (SOC_ETM_CH_ENABLED17_V << SOC_ETM_CH_ENABLED17_S)
#define SOC_ETM_CH_ENABLED17_V  0x00000001U
#define SOC_ETM_CH_ENABLED17_S  17
/** SOC_ETM_CH_ENABLED18 : R/WTC/WS; bitpos: [18]; default: 0;
 *  Represents channel18 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED18    (BIT(18))
#define SOC_ETM_CH_ENABLED18_M  (SOC_ETM_CH_ENABLED18_V << SOC_ETM_CH_ENABLED18_S)
#define SOC_ETM_CH_ENABLED18_V  0x00000001U
#define SOC_ETM_CH_ENABLED18_S  18
/** SOC_ETM_CH_ENABLED19 : R/WTC/WS; bitpos: [19]; default: 0;
 *  Represents channel19 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED19    (BIT(19))
#define SOC_ETM_CH_ENABLED19_M  (SOC_ETM_CH_ENABLED19_V << SOC_ETM_CH_ENABLED19_S)
#define SOC_ETM_CH_ENABLED19_V  0x00000001U
#define SOC_ETM_CH_ENABLED19_S  19
/** SOC_ETM_CH_ENABLED20 : R/WTC/WS; bitpos: [20]; default: 0;
 *  Represents channel20 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED20    (BIT(20))
#define SOC_ETM_CH_ENABLED20_M  (SOC_ETM_CH_ENABLED20_V << SOC_ETM_CH_ENABLED20_S)
#define SOC_ETM_CH_ENABLED20_V  0x00000001U
#define SOC_ETM_CH_ENABLED20_S  20
/** SOC_ETM_CH_ENABLED21 : R/WTC/WS; bitpos: [21]; default: 0;
 *  Represents channel21 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED21    (BIT(21))
#define SOC_ETM_CH_ENABLED21_M  (SOC_ETM_CH_ENABLED21_V << SOC_ETM_CH_ENABLED21_S)
#define SOC_ETM_CH_ENABLED21_V  0x00000001U
#define SOC_ETM_CH_ENABLED21_S  21
/** SOC_ETM_CH_ENABLED22 : R/WTC/WS; bitpos: [22]; default: 0;
 *  Represents channel22 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED22    (BIT(22))
#define SOC_ETM_CH_ENABLED22_M  (SOC_ETM_CH_ENABLED22_V << SOC_ETM_CH_ENABLED22_S)
#define SOC_ETM_CH_ENABLED22_V  0x00000001U
#define SOC_ETM_CH_ENABLED22_S  22
/** SOC_ETM_CH_ENABLED23 : R/WTC/WS; bitpos: [23]; default: 0;
 *  Represents channel23 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED23    (BIT(23))
#define SOC_ETM_CH_ENABLED23_M  (SOC_ETM_CH_ENABLED23_V << SOC_ETM_CH_ENABLED23_S)
#define SOC_ETM_CH_ENABLED23_V  0x00000001U
#define SOC_ETM_CH_ENABLED23_S  23
/** SOC_ETM_CH_ENABLED24 : R/WTC/WS; bitpos: [24]; default: 0;
 *  Represents channel24 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED24    (BIT(24))
#define SOC_ETM_CH_ENABLED24_M  (SOC_ETM_CH_ENABLED24_V << SOC_ETM_CH_ENABLED24_S)
#define SOC_ETM_CH_ENABLED24_V  0x00000001U
#define SOC_ETM_CH_ENABLED24_S  24
/** SOC_ETM_CH_ENABLED25 : R/WTC/WS; bitpos: [25]; default: 0;
 *  Represents channel25 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED25    (BIT(25))
#define SOC_ETM_CH_ENABLED25_M  (SOC_ETM_CH_ENABLED25_V << SOC_ETM_CH_ENABLED25_S)
#define SOC_ETM_CH_ENABLED25_V  0x00000001U
#define SOC_ETM_CH_ENABLED25_S  25
/** SOC_ETM_CH_ENABLED26 : R/WTC/WS; bitpos: [26]; default: 0;
 *  Represents channel26 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED26    (BIT(26))
#define SOC_ETM_CH_ENABLED26_M  (SOC_ETM_CH_ENABLED26_V << SOC_ETM_CH_ENABLED26_S)
#define SOC_ETM_CH_ENABLED26_V  0x00000001U
#define SOC_ETM_CH_ENABLED26_S  26
/** SOC_ETM_CH_ENABLED27 : R/WTC/WS; bitpos: [27]; default: 0;
 *  Represents channel27 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED27    (BIT(27))
#define SOC_ETM_CH_ENABLED27_M  (SOC_ETM_CH_ENABLED27_V << SOC_ETM_CH_ENABLED27_S)
#define SOC_ETM_CH_ENABLED27_V  0x00000001U
#define SOC_ETM_CH_ENABLED27_S  27
/** SOC_ETM_CH_ENABLED28 : R/WTC/WS; bitpos: [28]; default: 0;
 *  Represents channel28 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED28    (BIT(28))
#define SOC_ETM_CH_ENABLED28_M  (SOC_ETM_CH_ENABLED28_V << SOC_ETM_CH_ENABLED28_S)
#define SOC_ETM_CH_ENABLED28_V  0x00000001U
#define SOC_ETM_CH_ENABLED28_S  28
/** SOC_ETM_CH_ENABLED29 : R/WTC/WS; bitpos: [29]; default: 0;
 *  Represents channel29 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED29    (BIT(29))
#define SOC_ETM_CH_ENABLED29_M  (SOC_ETM_CH_ENABLED29_V << SOC_ETM_CH_ENABLED29_S)
#define SOC_ETM_CH_ENABLED29_V  0x00000001U
#define SOC_ETM_CH_ENABLED29_S  29
/** SOC_ETM_CH_ENABLED30 : R/WTC/WS; bitpos: [30]; default: 0;
 *  Represents channel30 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED30    (BIT(30))
#define SOC_ETM_CH_ENABLED30_M  (SOC_ETM_CH_ENABLED30_V << SOC_ETM_CH_ENABLED30_S)
#define SOC_ETM_CH_ENABLED30_V  0x00000001U
#define SOC_ETM_CH_ENABLED30_S  30
/** SOC_ETM_CH_ENABLED31 : R/WTC/WS; bitpos: [31]; default: 0;
 *  Represents channel31 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED31    (BIT(31))
#define SOC_ETM_CH_ENABLED31_M  (SOC_ETM_CH_ENABLED31_V << SOC_ETM_CH_ENABLED31_S)
#define SOC_ETM_CH_ENABLED31_V  0x00000001U
#define SOC_ETM_CH_ENABLED31_S  31

/** SOC_ETM_CH_ENA_AD0_SET_REG register
 *  Channel enable register
 */
#define SOC_ETM_CH_ENA_AD0_SET_REG (DR_REG_SOC_ETM_BASE + 0x4)
/** SOC_ETM_CH_ENABLE0 : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to enable channel0.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE0    (BIT(0))
#define SOC_ETM_CH_ENABLE0_M  (SOC_ETM_CH_ENABLE0_V << SOC_ETM_CH_ENABLE0_S)
#define SOC_ETM_CH_ENABLE0_V  0x00000001U
#define SOC_ETM_CH_ENABLE0_S  0
/** SOC_ETM_CH_ENABLE1 : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to enable channel1.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE1    (BIT(1))
#define SOC_ETM_CH_ENABLE1_M  (SOC_ETM_CH_ENABLE1_V << SOC_ETM_CH_ENABLE1_S)
#define SOC_ETM_CH_ENABLE1_V  0x00000001U
#define SOC_ETM_CH_ENABLE1_S  1
/** SOC_ETM_CH_ENABLE2 : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to enable channel2.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE2    (BIT(2))
#define SOC_ETM_CH_ENABLE2_M  (SOC_ETM_CH_ENABLE2_V << SOC_ETM_CH_ENABLE2_S)
#define SOC_ETM_CH_ENABLE2_V  0x00000001U
#define SOC_ETM_CH_ENABLE2_S  2
/** SOC_ETM_CH_ENABLE3 : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to enable channel3.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE3    (BIT(3))
#define SOC_ETM_CH_ENABLE3_M  (SOC_ETM_CH_ENABLE3_V << SOC_ETM_CH_ENABLE3_S)
#define SOC_ETM_CH_ENABLE3_V  0x00000001U
#define SOC_ETM_CH_ENABLE3_S  3
/** SOC_ETM_CH_ENABLE4 : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to enable channel4.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE4    (BIT(4))
#define SOC_ETM_CH_ENABLE4_M  (SOC_ETM_CH_ENABLE4_V << SOC_ETM_CH_ENABLE4_S)
#define SOC_ETM_CH_ENABLE4_V  0x00000001U
#define SOC_ETM_CH_ENABLE4_S  4
/** SOC_ETM_CH_ENABLE5 : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to enable channel5.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE5    (BIT(5))
#define SOC_ETM_CH_ENABLE5_M  (SOC_ETM_CH_ENABLE5_V << SOC_ETM_CH_ENABLE5_S)
#define SOC_ETM_CH_ENABLE5_V  0x00000001U
#define SOC_ETM_CH_ENABLE5_S  5
/** SOC_ETM_CH_ENABLE6 : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to enable channel6.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE6    (BIT(6))
#define SOC_ETM_CH_ENABLE6_M  (SOC_ETM_CH_ENABLE6_V << SOC_ETM_CH_ENABLE6_S)
#define SOC_ETM_CH_ENABLE6_V  0x00000001U
#define SOC_ETM_CH_ENABLE6_S  6
/** SOC_ETM_CH_ENABLE7 : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to enable channel7.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE7    (BIT(7))
#define SOC_ETM_CH_ENABLE7_M  (SOC_ETM_CH_ENABLE7_V << SOC_ETM_CH_ENABLE7_S)
#define SOC_ETM_CH_ENABLE7_V  0x00000001U
#define SOC_ETM_CH_ENABLE7_S  7
/** SOC_ETM_CH_ENABLE8 : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to enable channel8.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE8    (BIT(8))
#define SOC_ETM_CH_ENABLE8_M  (SOC_ETM_CH_ENABLE8_V << SOC_ETM_CH_ENABLE8_S)
#define SOC_ETM_CH_ENABLE8_V  0x00000001U
#define SOC_ETM_CH_ENABLE8_S  8
/** SOC_ETM_CH_ENABLE9 : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to enable channel9.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE9    (BIT(9))
#define SOC_ETM_CH_ENABLE9_M  (SOC_ETM_CH_ENABLE9_V << SOC_ETM_CH_ENABLE9_S)
#define SOC_ETM_CH_ENABLE9_V  0x00000001U
#define SOC_ETM_CH_ENABLE9_S  9
/** SOC_ETM_CH_ENABLE10 : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to enable channel10.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE10    (BIT(10))
#define SOC_ETM_CH_ENABLE10_M  (SOC_ETM_CH_ENABLE10_V << SOC_ETM_CH_ENABLE10_S)
#define SOC_ETM_CH_ENABLE10_V  0x00000001U
#define SOC_ETM_CH_ENABLE10_S  10
/** SOC_ETM_CH_ENABLE11 : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to enable channel11.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE11    (BIT(11))
#define SOC_ETM_CH_ENABLE11_M  (SOC_ETM_CH_ENABLE11_V << SOC_ETM_CH_ENABLE11_S)
#define SOC_ETM_CH_ENABLE11_V  0x00000001U
#define SOC_ETM_CH_ENABLE11_S  11
/** SOC_ETM_CH_ENABLE12 : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to enable channel12.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE12    (BIT(12))
#define SOC_ETM_CH_ENABLE12_M  (SOC_ETM_CH_ENABLE12_V << SOC_ETM_CH_ENABLE12_S)
#define SOC_ETM_CH_ENABLE12_V  0x00000001U
#define SOC_ETM_CH_ENABLE12_S  12
/** SOC_ETM_CH_ENABLE13 : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to enable channel13.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE13    (BIT(13))
#define SOC_ETM_CH_ENABLE13_M  (SOC_ETM_CH_ENABLE13_V << SOC_ETM_CH_ENABLE13_S)
#define SOC_ETM_CH_ENABLE13_V  0x00000001U
#define SOC_ETM_CH_ENABLE13_S  13
/** SOC_ETM_CH_ENABLE14 : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to enable channel14.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE14    (BIT(14))
#define SOC_ETM_CH_ENABLE14_M  (SOC_ETM_CH_ENABLE14_V << SOC_ETM_CH_ENABLE14_S)
#define SOC_ETM_CH_ENABLE14_V  0x00000001U
#define SOC_ETM_CH_ENABLE14_S  14
/** SOC_ETM_CH_ENABLE15 : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to enable channel15.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE15    (BIT(15))
#define SOC_ETM_CH_ENABLE15_M  (SOC_ETM_CH_ENABLE15_V << SOC_ETM_CH_ENABLE15_S)
#define SOC_ETM_CH_ENABLE15_V  0x00000001U
#define SOC_ETM_CH_ENABLE15_S  15
/** SOC_ETM_CH_ENABLE16 : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to enable channel16.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE16    (BIT(16))
#define SOC_ETM_CH_ENABLE16_M  (SOC_ETM_CH_ENABLE16_V << SOC_ETM_CH_ENABLE16_S)
#define SOC_ETM_CH_ENABLE16_V  0x00000001U
#define SOC_ETM_CH_ENABLE16_S  16
/** SOC_ETM_CH_ENABLE17 : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to enable channel17.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE17    (BIT(17))
#define SOC_ETM_CH_ENABLE17_M  (SOC_ETM_CH_ENABLE17_V << SOC_ETM_CH_ENABLE17_S)
#define SOC_ETM_CH_ENABLE17_V  0x00000001U
#define SOC_ETM_CH_ENABLE17_S  17
/** SOC_ETM_CH_ENABLE18 : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to enable channel18.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE18    (BIT(18))
#define SOC_ETM_CH_ENABLE18_M  (SOC_ETM_CH_ENABLE18_V << SOC_ETM_CH_ENABLE18_S)
#define SOC_ETM_CH_ENABLE18_V  0x00000001U
#define SOC_ETM_CH_ENABLE18_S  18
/** SOC_ETM_CH_ENABLE19 : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to enable channel19.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE19    (BIT(19))
#define SOC_ETM_CH_ENABLE19_M  (SOC_ETM_CH_ENABLE19_V << SOC_ETM_CH_ENABLE19_S)
#define SOC_ETM_CH_ENABLE19_V  0x00000001U
#define SOC_ETM_CH_ENABLE19_S  19
/** SOC_ETM_CH_ENABLE20 : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to enable channel20.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE20    (BIT(20))
#define SOC_ETM_CH_ENABLE20_M  (SOC_ETM_CH_ENABLE20_V << SOC_ETM_CH_ENABLE20_S)
#define SOC_ETM_CH_ENABLE20_V  0x00000001U
#define SOC_ETM_CH_ENABLE20_S  20
/** SOC_ETM_CH_ENABLE21 : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to enable channel21.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE21    (BIT(21))
#define SOC_ETM_CH_ENABLE21_M  (SOC_ETM_CH_ENABLE21_V << SOC_ETM_CH_ENABLE21_S)
#define SOC_ETM_CH_ENABLE21_V  0x00000001U
#define SOC_ETM_CH_ENABLE21_S  21
/** SOC_ETM_CH_ENABLE22 : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to enable channel22.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE22    (BIT(22))
#define SOC_ETM_CH_ENABLE22_M  (SOC_ETM_CH_ENABLE22_V << SOC_ETM_CH_ENABLE22_S)
#define SOC_ETM_CH_ENABLE22_V  0x00000001U
#define SOC_ETM_CH_ENABLE22_S  22
/** SOC_ETM_CH_ENABLE23 : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to enable channel23.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE23    (BIT(23))
#define SOC_ETM_CH_ENABLE23_M  (SOC_ETM_CH_ENABLE23_V << SOC_ETM_CH_ENABLE23_S)
#define SOC_ETM_CH_ENABLE23_V  0x00000001U
#define SOC_ETM_CH_ENABLE23_S  23
/** SOC_ETM_CH_ENABLE24 : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to enable channel24.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE24    (BIT(24))
#define SOC_ETM_CH_ENABLE24_M  (SOC_ETM_CH_ENABLE24_V << SOC_ETM_CH_ENABLE24_S)
#define SOC_ETM_CH_ENABLE24_V  0x00000001U
#define SOC_ETM_CH_ENABLE24_S  24
/** SOC_ETM_CH_ENABLE25 : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to enable channel25.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE25    (BIT(25))
#define SOC_ETM_CH_ENABLE25_M  (SOC_ETM_CH_ENABLE25_V << SOC_ETM_CH_ENABLE25_S)
#define SOC_ETM_CH_ENABLE25_V  0x00000001U
#define SOC_ETM_CH_ENABLE25_S  25
/** SOC_ETM_CH_ENABLE26 : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to enable channel26.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE26    (BIT(26))
#define SOC_ETM_CH_ENABLE26_M  (SOC_ETM_CH_ENABLE26_V << SOC_ETM_CH_ENABLE26_S)
#define SOC_ETM_CH_ENABLE26_V  0x00000001U
#define SOC_ETM_CH_ENABLE26_S  26
/** SOC_ETM_CH_ENABLE27 : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to enable channel27.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE27    (BIT(27))
#define SOC_ETM_CH_ENABLE27_M  (SOC_ETM_CH_ENABLE27_V << SOC_ETM_CH_ENABLE27_S)
#define SOC_ETM_CH_ENABLE27_V  0x00000001U
#define SOC_ETM_CH_ENABLE27_S  27
/** SOC_ETM_CH_ENABLE28 : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to enable channel28.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE28    (BIT(28))
#define SOC_ETM_CH_ENABLE28_M  (SOC_ETM_CH_ENABLE28_V << SOC_ETM_CH_ENABLE28_S)
#define SOC_ETM_CH_ENABLE28_V  0x00000001U
#define SOC_ETM_CH_ENABLE28_S  28
/** SOC_ETM_CH_ENABLE29 : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to enable channel29.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE29    (BIT(29))
#define SOC_ETM_CH_ENABLE29_M  (SOC_ETM_CH_ENABLE29_V << SOC_ETM_CH_ENABLE29_S)
#define SOC_ETM_CH_ENABLE29_V  0x00000001U
#define SOC_ETM_CH_ENABLE29_S  29
/** SOC_ETM_CH_ENABLE30 : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to enable channel30.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE30    (BIT(30))
#define SOC_ETM_CH_ENABLE30_M  (SOC_ETM_CH_ENABLE30_V << SOC_ETM_CH_ENABLE30_S)
#define SOC_ETM_CH_ENABLE30_V  0x00000001U
#define SOC_ETM_CH_ENABLE30_S  30
/** SOC_ETM_CH_ENABLE31 : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to enable channel31.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE31    (BIT(31))
#define SOC_ETM_CH_ENABLE31_M  (SOC_ETM_CH_ENABLE31_V << SOC_ETM_CH_ENABLE31_S)
#define SOC_ETM_CH_ENABLE31_V  0x00000001U
#define SOC_ETM_CH_ENABLE31_S  31

/** SOC_ETM_CH_ENA_AD0_CLR_REG register
 *  Channel disable register
 */
#define SOC_ETM_CH_ENA_AD0_CLR_REG (DR_REG_SOC_ETM_BASE + 0x8)
/** SOC_ETM_CH_DISABLE0 : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to disable channel0.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE0    (BIT(0))
#define SOC_ETM_CH_DISABLE0_M  (SOC_ETM_CH_DISABLE0_V << SOC_ETM_CH_DISABLE0_S)
#define SOC_ETM_CH_DISABLE0_V  0x00000001U
#define SOC_ETM_CH_DISABLE0_S  0
/** SOC_ETM_CH_DISABLE1 : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to disable channel1.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE1    (BIT(1))
#define SOC_ETM_CH_DISABLE1_M  (SOC_ETM_CH_DISABLE1_V << SOC_ETM_CH_DISABLE1_S)
#define SOC_ETM_CH_DISABLE1_V  0x00000001U
#define SOC_ETM_CH_DISABLE1_S  1
/** SOC_ETM_CH_DISABLE2 : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to disable channel2.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE2    (BIT(2))
#define SOC_ETM_CH_DISABLE2_M  (SOC_ETM_CH_DISABLE2_V << SOC_ETM_CH_DISABLE2_S)
#define SOC_ETM_CH_DISABLE2_V  0x00000001U
#define SOC_ETM_CH_DISABLE2_S  2
/** SOC_ETM_CH_DISABLE3 : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to disable channel3.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE3    (BIT(3))
#define SOC_ETM_CH_DISABLE3_M  (SOC_ETM_CH_DISABLE3_V << SOC_ETM_CH_DISABLE3_S)
#define SOC_ETM_CH_DISABLE3_V  0x00000001U
#define SOC_ETM_CH_DISABLE3_S  3
/** SOC_ETM_CH_DISABLE4 : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to disable channel4.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE4    (BIT(4))
#define SOC_ETM_CH_DISABLE4_M  (SOC_ETM_CH_DISABLE4_V << SOC_ETM_CH_DISABLE4_S)
#define SOC_ETM_CH_DISABLE4_V  0x00000001U
#define SOC_ETM_CH_DISABLE4_S  4
/** SOC_ETM_CH_DISABLE5 : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to disable channel5.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE5    (BIT(5))
#define SOC_ETM_CH_DISABLE5_M  (SOC_ETM_CH_DISABLE5_V << SOC_ETM_CH_DISABLE5_S)
#define SOC_ETM_CH_DISABLE5_V  0x00000001U
#define SOC_ETM_CH_DISABLE5_S  5
/** SOC_ETM_CH_DISABLE6 : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to disable channel6.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE6    (BIT(6))
#define SOC_ETM_CH_DISABLE6_M  (SOC_ETM_CH_DISABLE6_V << SOC_ETM_CH_DISABLE6_S)
#define SOC_ETM_CH_DISABLE6_V  0x00000001U
#define SOC_ETM_CH_DISABLE6_S  6
/** SOC_ETM_CH_DISABLE7 : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to disable channel7.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE7    (BIT(7))
#define SOC_ETM_CH_DISABLE7_M  (SOC_ETM_CH_DISABLE7_V << SOC_ETM_CH_DISABLE7_S)
#define SOC_ETM_CH_DISABLE7_V  0x00000001U
#define SOC_ETM_CH_DISABLE7_S  7
/** SOC_ETM_CH_DISABLE8 : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to disable channel8.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE8    (BIT(8))
#define SOC_ETM_CH_DISABLE8_M  (SOC_ETM_CH_DISABLE8_V << SOC_ETM_CH_DISABLE8_S)
#define SOC_ETM_CH_DISABLE8_V  0x00000001U
#define SOC_ETM_CH_DISABLE8_S  8
/** SOC_ETM_CH_DISABLE9 : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to disable channel9.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE9    (BIT(9))
#define SOC_ETM_CH_DISABLE9_M  (SOC_ETM_CH_DISABLE9_V << SOC_ETM_CH_DISABLE9_S)
#define SOC_ETM_CH_DISABLE9_V  0x00000001U
#define SOC_ETM_CH_DISABLE9_S  9
/** SOC_ETM_CH_DISABLE10 : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to disable channel10.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE10    (BIT(10))
#define SOC_ETM_CH_DISABLE10_M  (SOC_ETM_CH_DISABLE10_V << SOC_ETM_CH_DISABLE10_S)
#define SOC_ETM_CH_DISABLE10_V  0x00000001U
#define SOC_ETM_CH_DISABLE10_S  10
/** SOC_ETM_CH_DISABLE11 : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to disable channel11.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE11    (BIT(11))
#define SOC_ETM_CH_DISABLE11_M  (SOC_ETM_CH_DISABLE11_V << SOC_ETM_CH_DISABLE11_S)
#define SOC_ETM_CH_DISABLE11_V  0x00000001U
#define SOC_ETM_CH_DISABLE11_S  11
/** SOC_ETM_CH_DISABLE12 : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to disable channel12.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE12    (BIT(12))
#define SOC_ETM_CH_DISABLE12_M  (SOC_ETM_CH_DISABLE12_V << SOC_ETM_CH_DISABLE12_S)
#define SOC_ETM_CH_DISABLE12_V  0x00000001U
#define SOC_ETM_CH_DISABLE12_S  12
/** SOC_ETM_CH_DISABLE13 : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to disable channel13.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE13    (BIT(13))
#define SOC_ETM_CH_DISABLE13_M  (SOC_ETM_CH_DISABLE13_V << SOC_ETM_CH_DISABLE13_S)
#define SOC_ETM_CH_DISABLE13_V  0x00000001U
#define SOC_ETM_CH_DISABLE13_S  13
/** SOC_ETM_CH_DISABLE14 : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to disable channel14.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE14    (BIT(14))
#define SOC_ETM_CH_DISABLE14_M  (SOC_ETM_CH_DISABLE14_V << SOC_ETM_CH_DISABLE14_S)
#define SOC_ETM_CH_DISABLE14_V  0x00000001U
#define SOC_ETM_CH_DISABLE14_S  14
/** SOC_ETM_CH_DISABLE15 : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to disable channel15.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE15    (BIT(15))
#define SOC_ETM_CH_DISABLE15_M  (SOC_ETM_CH_DISABLE15_V << SOC_ETM_CH_DISABLE15_S)
#define SOC_ETM_CH_DISABLE15_V  0x00000001U
#define SOC_ETM_CH_DISABLE15_S  15
/** SOC_ETM_CH_DISABLE16 : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to disable channel16.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE16    (BIT(16))
#define SOC_ETM_CH_DISABLE16_M  (SOC_ETM_CH_DISABLE16_V << SOC_ETM_CH_DISABLE16_S)
#define SOC_ETM_CH_DISABLE16_V  0x00000001U
#define SOC_ETM_CH_DISABLE16_S  16
/** SOC_ETM_CH_DISABLE17 : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to disable channel17.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE17    (BIT(17))
#define SOC_ETM_CH_DISABLE17_M  (SOC_ETM_CH_DISABLE17_V << SOC_ETM_CH_DISABLE17_S)
#define SOC_ETM_CH_DISABLE17_V  0x00000001U
#define SOC_ETM_CH_DISABLE17_S  17
/** SOC_ETM_CH_DISABLE18 : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to disable channel18.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE18    (BIT(18))
#define SOC_ETM_CH_DISABLE18_M  (SOC_ETM_CH_DISABLE18_V << SOC_ETM_CH_DISABLE18_S)
#define SOC_ETM_CH_DISABLE18_V  0x00000001U
#define SOC_ETM_CH_DISABLE18_S  18
/** SOC_ETM_CH_DISABLE19 : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to disable channel19.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE19    (BIT(19))
#define SOC_ETM_CH_DISABLE19_M  (SOC_ETM_CH_DISABLE19_V << SOC_ETM_CH_DISABLE19_S)
#define SOC_ETM_CH_DISABLE19_V  0x00000001U
#define SOC_ETM_CH_DISABLE19_S  19
/** SOC_ETM_CH_DISABLE20 : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to disable channel20.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE20    (BIT(20))
#define SOC_ETM_CH_DISABLE20_M  (SOC_ETM_CH_DISABLE20_V << SOC_ETM_CH_DISABLE20_S)
#define SOC_ETM_CH_DISABLE20_V  0x00000001U
#define SOC_ETM_CH_DISABLE20_S  20
/** SOC_ETM_CH_DISABLE21 : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to disable channel21.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE21    (BIT(21))
#define SOC_ETM_CH_DISABLE21_M  (SOC_ETM_CH_DISABLE21_V << SOC_ETM_CH_DISABLE21_S)
#define SOC_ETM_CH_DISABLE21_V  0x00000001U
#define SOC_ETM_CH_DISABLE21_S  21
/** SOC_ETM_CH_DISABLE22 : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to disable channel22.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE22    (BIT(22))
#define SOC_ETM_CH_DISABLE22_M  (SOC_ETM_CH_DISABLE22_V << SOC_ETM_CH_DISABLE22_S)
#define SOC_ETM_CH_DISABLE22_V  0x00000001U
#define SOC_ETM_CH_DISABLE22_S  22
/** SOC_ETM_CH_DISABLE23 : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to disable channel23.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE23    (BIT(23))
#define SOC_ETM_CH_DISABLE23_M  (SOC_ETM_CH_DISABLE23_V << SOC_ETM_CH_DISABLE23_S)
#define SOC_ETM_CH_DISABLE23_V  0x00000001U
#define SOC_ETM_CH_DISABLE23_S  23
/** SOC_ETM_CH_DISABLE24 : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to disable channel24.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE24    (BIT(24))
#define SOC_ETM_CH_DISABLE24_M  (SOC_ETM_CH_DISABLE24_V << SOC_ETM_CH_DISABLE24_S)
#define SOC_ETM_CH_DISABLE24_V  0x00000001U
#define SOC_ETM_CH_DISABLE24_S  24
/** SOC_ETM_CH_DISABLE25 : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to disable channel25.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE25    (BIT(25))
#define SOC_ETM_CH_DISABLE25_M  (SOC_ETM_CH_DISABLE25_V << SOC_ETM_CH_DISABLE25_S)
#define SOC_ETM_CH_DISABLE25_V  0x00000001U
#define SOC_ETM_CH_DISABLE25_S  25
/** SOC_ETM_CH_DISABLE26 : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to disable channel26.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE26    (BIT(26))
#define SOC_ETM_CH_DISABLE26_M  (SOC_ETM_CH_DISABLE26_V << SOC_ETM_CH_DISABLE26_S)
#define SOC_ETM_CH_DISABLE26_V  0x00000001U
#define SOC_ETM_CH_DISABLE26_S  26
/** SOC_ETM_CH_DISABLE27 : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to disable channel27.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE27    (BIT(27))
#define SOC_ETM_CH_DISABLE27_M  (SOC_ETM_CH_DISABLE27_V << SOC_ETM_CH_DISABLE27_S)
#define SOC_ETM_CH_DISABLE27_V  0x00000001U
#define SOC_ETM_CH_DISABLE27_S  27
/** SOC_ETM_CH_DISABLE28 : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to disable channel28.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE28    (BIT(28))
#define SOC_ETM_CH_DISABLE28_M  (SOC_ETM_CH_DISABLE28_V << SOC_ETM_CH_DISABLE28_S)
#define SOC_ETM_CH_DISABLE28_V  0x00000001U
#define SOC_ETM_CH_DISABLE28_S  28
/** SOC_ETM_CH_DISABLE29 : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to disable channel29.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE29    (BIT(29))
#define SOC_ETM_CH_DISABLE29_M  (SOC_ETM_CH_DISABLE29_V << SOC_ETM_CH_DISABLE29_S)
#define SOC_ETM_CH_DISABLE29_V  0x00000001U
#define SOC_ETM_CH_DISABLE29_S  29
/** SOC_ETM_CH_DISABLE30 : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to disable channel30.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE30    (BIT(30))
#define SOC_ETM_CH_DISABLE30_M  (SOC_ETM_CH_DISABLE30_V << SOC_ETM_CH_DISABLE30_S)
#define SOC_ETM_CH_DISABLE30_V  0x00000001U
#define SOC_ETM_CH_DISABLE30_S  30
/** SOC_ETM_CH_DISABLE31 : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to disable channel31.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE31    (BIT(31))
#define SOC_ETM_CH_DISABLE31_M  (SOC_ETM_CH_DISABLE31_V << SOC_ETM_CH_DISABLE31_S)
#define SOC_ETM_CH_DISABLE31_V  0x00000001U
#define SOC_ETM_CH_DISABLE31_S  31

/** SOC_ETM_CH_ENA_AD1_REG register
 *  Channel enable status register
 */
#define SOC_ETM_CH_ENA_AD1_REG (DR_REG_SOC_ETM_BASE + 0xc)
/** SOC_ETM_CH_ENABLED32 : R/WTC/WS; bitpos: [0]; default: 0;
 *  Represents channel32 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED32    (BIT(0))
#define SOC_ETM_CH_ENABLED32_M  (SOC_ETM_CH_ENABLED32_V << SOC_ETM_CH_ENABLED32_S)
#define SOC_ETM_CH_ENABLED32_V  0x00000001U
#define SOC_ETM_CH_ENABLED32_S  0
/** SOC_ETM_CH_ENABLED33 : R/WTC/WS; bitpos: [1]; default: 0;
 *  Represents channel33 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED33    (BIT(1))
#define SOC_ETM_CH_ENABLED33_M  (SOC_ETM_CH_ENABLED33_V << SOC_ETM_CH_ENABLED33_S)
#define SOC_ETM_CH_ENABLED33_V  0x00000001U
#define SOC_ETM_CH_ENABLED33_S  1
/** SOC_ETM_CH_ENABLED34 : R/WTC/WS; bitpos: [2]; default: 0;
 *  Represents channel34 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED34    (BIT(2))
#define SOC_ETM_CH_ENABLED34_M  (SOC_ETM_CH_ENABLED34_V << SOC_ETM_CH_ENABLED34_S)
#define SOC_ETM_CH_ENABLED34_V  0x00000001U
#define SOC_ETM_CH_ENABLED34_S  2
/** SOC_ETM_CH_ENABLED35 : R/WTC/WS; bitpos: [3]; default: 0;
 *  Represents channel35 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED35    (BIT(3))
#define SOC_ETM_CH_ENABLED35_M  (SOC_ETM_CH_ENABLED35_V << SOC_ETM_CH_ENABLED35_S)
#define SOC_ETM_CH_ENABLED35_V  0x00000001U
#define SOC_ETM_CH_ENABLED35_S  3
/** SOC_ETM_CH_ENABLED36 : R/WTC/WS; bitpos: [4]; default: 0;
 *  Represents channel36 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED36    (BIT(4))
#define SOC_ETM_CH_ENABLED36_M  (SOC_ETM_CH_ENABLED36_V << SOC_ETM_CH_ENABLED36_S)
#define SOC_ETM_CH_ENABLED36_V  0x00000001U
#define SOC_ETM_CH_ENABLED36_S  4
/** SOC_ETM_CH_ENABLED37 : R/WTC/WS; bitpos: [5]; default: 0;
 *  Represents channel37 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED37    (BIT(5))
#define SOC_ETM_CH_ENABLED37_M  (SOC_ETM_CH_ENABLED37_V << SOC_ETM_CH_ENABLED37_S)
#define SOC_ETM_CH_ENABLED37_V  0x00000001U
#define SOC_ETM_CH_ENABLED37_S  5
/** SOC_ETM_CH_ENABLED38 : R/WTC/WS; bitpos: [6]; default: 0;
 *  Represents channel38 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED38    (BIT(6))
#define SOC_ETM_CH_ENABLED38_M  (SOC_ETM_CH_ENABLED38_V << SOC_ETM_CH_ENABLED38_S)
#define SOC_ETM_CH_ENABLED38_V  0x00000001U
#define SOC_ETM_CH_ENABLED38_S  6
/** SOC_ETM_CH_ENABLED39 : R/WTC/WS; bitpos: [7]; default: 0;
 *  Represents channel39 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED39    (BIT(7))
#define SOC_ETM_CH_ENABLED39_M  (SOC_ETM_CH_ENABLED39_V << SOC_ETM_CH_ENABLED39_S)
#define SOC_ETM_CH_ENABLED39_V  0x00000001U
#define SOC_ETM_CH_ENABLED39_S  7
/** SOC_ETM_CH_ENABLED40 : R/WTC/WS; bitpos: [8]; default: 0;
 *  Represents channel40 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED40    (BIT(8))
#define SOC_ETM_CH_ENABLED40_M  (SOC_ETM_CH_ENABLED40_V << SOC_ETM_CH_ENABLED40_S)
#define SOC_ETM_CH_ENABLED40_V  0x00000001U
#define SOC_ETM_CH_ENABLED40_S  8
/** SOC_ETM_CH_ENABLED41 : R/WTC/WS; bitpos: [9]; default: 0;
 *  Represents channel41 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED41    (BIT(9))
#define SOC_ETM_CH_ENABLED41_M  (SOC_ETM_CH_ENABLED41_V << SOC_ETM_CH_ENABLED41_S)
#define SOC_ETM_CH_ENABLED41_V  0x00000001U
#define SOC_ETM_CH_ENABLED41_S  9
/** SOC_ETM_CH_ENABLED42 : R/WTC/WS; bitpos: [10]; default: 0;
 *  Represents channel42 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED42    (BIT(10))
#define SOC_ETM_CH_ENABLED42_M  (SOC_ETM_CH_ENABLED42_V << SOC_ETM_CH_ENABLED42_S)
#define SOC_ETM_CH_ENABLED42_V  0x00000001U
#define SOC_ETM_CH_ENABLED42_S  10
/** SOC_ETM_CH_ENABLED43 : R/WTC/WS; bitpos: [11]; default: 0;
 *  Represents channel43 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED43    (BIT(11))
#define SOC_ETM_CH_ENABLED43_M  (SOC_ETM_CH_ENABLED43_V << SOC_ETM_CH_ENABLED43_S)
#define SOC_ETM_CH_ENABLED43_V  0x00000001U
#define SOC_ETM_CH_ENABLED43_S  11
/** SOC_ETM_CH_ENABLED44 : R/WTC/WS; bitpos: [12]; default: 0;
 *  Represents channel44 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED44    (BIT(12))
#define SOC_ETM_CH_ENABLED44_M  (SOC_ETM_CH_ENABLED44_V << SOC_ETM_CH_ENABLED44_S)
#define SOC_ETM_CH_ENABLED44_V  0x00000001U
#define SOC_ETM_CH_ENABLED44_S  12
/** SOC_ETM_CH_ENABLED45 : R/WTC/WS; bitpos: [13]; default: 0;
 *  Represents channel45 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED45    (BIT(13))
#define SOC_ETM_CH_ENABLED45_M  (SOC_ETM_CH_ENABLED45_V << SOC_ETM_CH_ENABLED45_S)
#define SOC_ETM_CH_ENABLED45_V  0x00000001U
#define SOC_ETM_CH_ENABLED45_S  13
/** SOC_ETM_CH_ENABLED46 : R/WTC/WS; bitpos: [14]; default: 0;
 *  Represents channel46 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED46    (BIT(14))
#define SOC_ETM_CH_ENABLED46_M  (SOC_ETM_CH_ENABLED46_V << SOC_ETM_CH_ENABLED46_S)
#define SOC_ETM_CH_ENABLED46_V  0x00000001U
#define SOC_ETM_CH_ENABLED46_S  14
/** SOC_ETM_CH_ENABLED47 : R/WTC/WS; bitpos: [15]; default: 0;
 *  Represents channel47 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED47    (BIT(15))
#define SOC_ETM_CH_ENABLED47_M  (SOC_ETM_CH_ENABLED47_V << SOC_ETM_CH_ENABLED47_S)
#define SOC_ETM_CH_ENABLED47_V  0x00000001U
#define SOC_ETM_CH_ENABLED47_S  15
/** SOC_ETM_CH_ENABLED48 : R/WTC/WS; bitpos: [16]; default: 0;
 *  Represents channel48 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED48    (BIT(16))
#define SOC_ETM_CH_ENABLED48_M  (SOC_ETM_CH_ENABLED48_V << SOC_ETM_CH_ENABLED48_S)
#define SOC_ETM_CH_ENABLED48_V  0x00000001U
#define SOC_ETM_CH_ENABLED48_S  16
/** SOC_ETM_CH_ENABLED49 : R/WTC/WS; bitpos: [17]; default: 0;
 *  Represents channel49 enable status.
 *  0: Disable
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLED49    (BIT(17))
#define SOC_ETM_CH_ENABLED49_M  (SOC_ETM_CH_ENABLED49_V << SOC_ETM_CH_ENABLED49_S)
#define SOC_ETM_CH_ENABLED49_V  0x00000001U
#define SOC_ETM_CH_ENABLED49_S  17

/** SOC_ETM_CH_ENA_AD1_SET_REG register
 *  Channel enable register
 */
#define SOC_ETM_CH_ENA_AD1_SET_REG (DR_REG_SOC_ETM_BASE + 0x10)
/** SOC_ETM_CH_ENABLE32 : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to enable channel32.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE32    (BIT(0))
#define SOC_ETM_CH_ENABLE32_M  (SOC_ETM_CH_ENABLE32_V << SOC_ETM_CH_ENABLE32_S)
#define SOC_ETM_CH_ENABLE32_V  0x00000001U
#define SOC_ETM_CH_ENABLE32_S  0
/** SOC_ETM_CH_ENABLE33 : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to enable channel33.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE33    (BIT(1))
#define SOC_ETM_CH_ENABLE33_M  (SOC_ETM_CH_ENABLE33_V << SOC_ETM_CH_ENABLE33_S)
#define SOC_ETM_CH_ENABLE33_V  0x00000001U
#define SOC_ETM_CH_ENABLE33_S  1
/** SOC_ETM_CH_ENABLE34 : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to enable channel34.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE34    (BIT(2))
#define SOC_ETM_CH_ENABLE34_M  (SOC_ETM_CH_ENABLE34_V << SOC_ETM_CH_ENABLE34_S)
#define SOC_ETM_CH_ENABLE34_V  0x00000001U
#define SOC_ETM_CH_ENABLE34_S  2
/** SOC_ETM_CH_ENABLE35 : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to enable channel35.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE35    (BIT(3))
#define SOC_ETM_CH_ENABLE35_M  (SOC_ETM_CH_ENABLE35_V << SOC_ETM_CH_ENABLE35_S)
#define SOC_ETM_CH_ENABLE35_V  0x00000001U
#define SOC_ETM_CH_ENABLE35_S  3
/** SOC_ETM_CH_ENABLE36 : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to enable channel36.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE36    (BIT(4))
#define SOC_ETM_CH_ENABLE36_M  (SOC_ETM_CH_ENABLE36_V << SOC_ETM_CH_ENABLE36_S)
#define SOC_ETM_CH_ENABLE36_V  0x00000001U
#define SOC_ETM_CH_ENABLE36_S  4
/** SOC_ETM_CH_ENABLE37 : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to enable channel37.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE37    (BIT(5))
#define SOC_ETM_CH_ENABLE37_M  (SOC_ETM_CH_ENABLE37_V << SOC_ETM_CH_ENABLE37_S)
#define SOC_ETM_CH_ENABLE37_V  0x00000001U
#define SOC_ETM_CH_ENABLE37_S  5
/** SOC_ETM_CH_ENABLE38 : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to enable channel38.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE38    (BIT(6))
#define SOC_ETM_CH_ENABLE38_M  (SOC_ETM_CH_ENABLE38_V << SOC_ETM_CH_ENABLE38_S)
#define SOC_ETM_CH_ENABLE38_V  0x00000001U
#define SOC_ETM_CH_ENABLE38_S  6
/** SOC_ETM_CH_ENABLE39 : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to enable channel39.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE39    (BIT(7))
#define SOC_ETM_CH_ENABLE39_M  (SOC_ETM_CH_ENABLE39_V << SOC_ETM_CH_ENABLE39_S)
#define SOC_ETM_CH_ENABLE39_V  0x00000001U
#define SOC_ETM_CH_ENABLE39_S  7
/** SOC_ETM_CH_ENABLE40 : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to enable channel40.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE40    (BIT(8))
#define SOC_ETM_CH_ENABLE40_M  (SOC_ETM_CH_ENABLE40_V << SOC_ETM_CH_ENABLE40_S)
#define SOC_ETM_CH_ENABLE40_V  0x00000001U
#define SOC_ETM_CH_ENABLE40_S  8
/** SOC_ETM_CH_ENABLE41 : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to enable channel41.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE41    (BIT(9))
#define SOC_ETM_CH_ENABLE41_M  (SOC_ETM_CH_ENABLE41_V << SOC_ETM_CH_ENABLE41_S)
#define SOC_ETM_CH_ENABLE41_V  0x00000001U
#define SOC_ETM_CH_ENABLE41_S  9
/** SOC_ETM_CH_ENABLE42 : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to enable channel42.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE42    (BIT(10))
#define SOC_ETM_CH_ENABLE42_M  (SOC_ETM_CH_ENABLE42_V << SOC_ETM_CH_ENABLE42_S)
#define SOC_ETM_CH_ENABLE42_V  0x00000001U
#define SOC_ETM_CH_ENABLE42_S  10
/** SOC_ETM_CH_ENABLE43 : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to enable channel43.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE43    (BIT(11))
#define SOC_ETM_CH_ENABLE43_M  (SOC_ETM_CH_ENABLE43_V << SOC_ETM_CH_ENABLE43_S)
#define SOC_ETM_CH_ENABLE43_V  0x00000001U
#define SOC_ETM_CH_ENABLE43_S  11
/** SOC_ETM_CH_ENABLE44 : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to enable channel44.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE44    (BIT(12))
#define SOC_ETM_CH_ENABLE44_M  (SOC_ETM_CH_ENABLE44_V << SOC_ETM_CH_ENABLE44_S)
#define SOC_ETM_CH_ENABLE44_V  0x00000001U
#define SOC_ETM_CH_ENABLE44_S  12
/** SOC_ETM_CH_ENABLE45 : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to enable channel45.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE45    (BIT(13))
#define SOC_ETM_CH_ENABLE45_M  (SOC_ETM_CH_ENABLE45_V << SOC_ETM_CH_ENABLE45_S)
#define SOC_ETM_CH_ENABLE45_V  0x00000001U
#define SOC_ETM_CH_ENABLE45_S  13
/** SOC_ETM_CH_ENABLE46 : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to enable channel46.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE46    (BIT(14))
#define SOC_ETM_CH_ENABLE46_M  (SOC_ETM_CH_ENABLE46_V << SOC_ETM_CH_ENABLE46_S)
#define SOC_ETM_CH_ENABLE46_V  0x00000001U
#define SOC_ETM_CH_ENABLE46_S  14
/** SOC_ETM_CH_ENABLE47 : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to enable channel47.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE47    (BIT(15))
#define SOC_ETM_CH_ENABLE47_M  (SOC_ETM_CH_ENABLE47_V << SOC_ETM_CH_ENABLE47_S)
#define SOC_ETM_CH_ENABLE47_V  0x00000001U
#define SOC_ETM_CH_ENABLE47_S  15
/** SOC_ETM_CH_ENABLE48 : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to enable channel48.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE48    (BIT(16))
#define SOC_ETM_CH_ENABLE48_M  (SOC_ETM_CH_ENABLE48_V << SOC_ETM_CH_ENABLE48_S)
#define SOC_ETM_CH_ENABLE48_V  0x00000001U
#define SOC_ETM_CH_ENABLE48_S  16
/** SOC_ETM_CH_ENABLE49 : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to enable channel49.
 *  0: Invalid. No effect
 *  1: Enable
 */
#define SOC_ETM_CH_ENABLE49    (BIT(17))
#define SOC_ETM_CH_ENABLE49_M  (SOC_ETM_CH_ENABLE49_V << SOC_ETM_CH_ENABLE49_S)
#define SOC_ETM_CH_ENABLE49_V  0x00000001U
#define SOC_ETM_CH_ENABLE49_S  17

/** SOC_ETM_CH_ENA_AD1_CLR_REG register
 *  Channel disable register
 */
#define SOC_ETM_CH_ENA_AD1_CLR_REG (DR_REG_SOC_ETM_BASE + 0x14)
/** SOC_ETM_CH_DISABLE32 : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to disable channel32.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE32    (BIT(0))
#define SOC_ETM_CH_DISABLE32_M  (SOC_ETM_CH_DISABLE32_V << SOC_ETM_CH_DISABLE32_S)
#define SOC_ETM_CH_DISABLE32_V  0x00000001U
#define SOC_ETM_CH_DISABLE32_S  0
/** SOC_ETM_CH_DISABLE33 : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to disable channel33.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE33    (BIT(1))
#define SOC_ETM_CH_DISABLE33_M  (SOC_ETM_CH_DISABLE33_V << SOC_ETM_CH_DISABLE33_S)
#define SOC_ETM_CH_DISABLE33_V  0x00000001U
#define SOC_ETM_CH_DISABLE33_S  1
/** SOC_ETM_CH_DISABLE34 : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to disable channel34.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE34    (BIT(2))
#define SOC_ETM_CH_DISABLE34_M  (SOC_ETM_CH_DISABLE34_V << SOC_ETM_CH_DISABLE34_S)
#define SOC_ETM_CH_DISABLE34_V  0x00000001U
#define SOC_ETM_CH_DISABLE34_S  2
/** SOC_ETM_CH_DISABLE35 : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to disable channel35.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE35    (BIT(3))
#define SOC_ETM_CH_DISABLE35_M  (SOC_ETM_CH_DISABLE35_V << SOC_ETM_CH_DISABLE35_S)
#define SOC_ETM_CH_DISABLE35_V  0x00000001U
#define SOC_ETM_CH_DISABLE35_S  3
/** SOC_ETM_CH_DISABLE36 : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to disable channel36.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE36    (BIT(4))
#define SOC_ETM_CH_DISABLE36_M  (SOC_ETM_CH_DISABLE36_V << SOC_ETM_CH_DISABLE36_S)
#define SOC_ETM_CH_DISABLE36_V  0x00000001U
#define SOC_ETM_CH_DISABLE36_S  4
/** SOC_ETM_CH_DISABLE37 : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to disable channel37.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE37    (BIT(5))
#define SOC_ETM_CH_DISABLE37_M  (SOC_ETM_CH_DISABLE37_V << SOC_ETM_CH_DISABLE37_S)
#define SOC_ETM_CH_DISABLE37_V  0x00000001U
#define SOC_ETM_CH_DISABLE37_S  5
/** SOC_ETM_CH_DISABLE38 : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to disable channel38.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE38    (BIT(6))
#define SOC_ETM_CH_DISABLE38_M  (SOC_ETM_CH_DISABLE38_V << SOC_ETM_CH_DISABLE38_S)
#define SOC_ETM_CH_DISABLE38_V  0x00000001U
#define SOC_ETM_CH_DISABLE38_S  6
/** SOC_ETM_CH_DISABLE39 : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to disable channel39.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE39    (BIT(7))
#define SOC_ETM_CH_DISABLE39_M  (SOC_ETM_CH_DISABLE39_V << SOC_ETM_CH_DISABLE39_S)
#define SOC_ETM_CH_DISABLE39_V  0x00000001U
#define SOC_ETM_CH_DISABLE39_S  7
/** SOC_ETM_CH_DISABLE40 : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to disable channel40.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE40    (BIT(8))
#define SOC_ETM_CH_DISABLE40_M  (SOC_ETM_CH_DISABLE40_V << SOC_ETM_CH_DISABLE40_S)
#define SOC_ETM_CH_DISABLE40_V  0x00000001U
#define SOC_ETM_CH_DISABLE40_S  8
/** SOC_ETM_CH_DISABLE41 : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to disable channel41.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE41    (BIT(9))
#define SOC_ETM_CH_DISABLE41_M  (SOC_ETM_CH_DISABLE41_V << SOC_ETM_CH_DISABLE41_S)
#define SOC_ETM_CH_DISABLE41_V  0x00000001U
#define SOC_ETM_CH_DISABLE41_S  9
/** SOC_ETM_CH_DISABLE42 : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to disable channel42.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE42    (BIT(10))
#define SOC_ETM_CH_DISABLE42_M  (SOC_ETM_CH_DISABLE42_V << SOC_ETM_CH_DISABLE42_S)
#define SOC_ETM_CH_DISABLE42_V  0x00000001U
#define SOC_ETM_CH_DISABLE42_S  10
/** SOC_ETM_CH_DISABLE43 : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to disable channel43.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE43    (BIT(11))
#define SOC_ETM_CH_DISABLE43_M  (SOC_ETM_CH_DISABLE43_V << SOC_ETM_CH_DISABLE43_S)
#define SOC_ETM_CH_DISABLE43_V  0x00000001U
#define SOC_ETM_CH_DISABLE43_S  11
/** SOC_ETM_CH_DISABLE44 : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to disable channel44.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE44    (BIT(12))
#define SOC_ETM_CH_DISABLE44_M  (SOC_ETM_CH_DISABLE44_V << SOC_ETM_CH_DISABLE44_S)
#define SOC_ETM_CH_DISABLE44_V  0x00000001U
#define SOC_ETM_CH_DISABLE44_S  12
/** SOC_ETM_CH_DISABLE45 : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to disable channel45.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE45    (BIT(13))
#define SOC_ETM_CH_DISABLE45_M  (SOC_ETM_CH_DISABLE45_V << SOC_ETM_CH_DISABLE45_S)
#define SOC_ETM_CH_DISABLE45_V  0x00000001U
#define SOC_ETM_CH_DISABLE45_S  13
/** SOC_ETM_CH_DISABLE46 : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to disable channel46.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE46    (BIT(14))
#define SOC_ETM_CH_DISABLE46_M  (SOC_ETM_CH_DISABLE46_V << SOC_ETM_CH_DISABLE46_S)
#define SOC_ETM_CH_DISABLE46_V  0x00000001U
#define SOC_ETM_CH_DISABLE46_S  14
/** SOC_ETM_CH_DISABLE47 : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to disable channel47.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE47    (BIT(15))
#define SOC_ETM_CH_DISABLE47_M  (SOC_ETM_CH_DISABLE47_V << SOC_ETM_CH_DISABLE47_S)
#define SOC_ETM_CH_DISABLE47_V  0x00000001U
#define SOC_ETM_CH_DISABLE47_S  15
/** SOC_ETM_CH_DISABLE48 : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to disable channel48.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE48    (BIT(16))
#define SOC_ETM_CH_DISABLE48_M  (SOC_ETM_CH_DISABLE48_V << SOC_ETM_CH_DISABLE48_S)
#define SOC_ETM_CH_DISABLE48_V  0x00000001U
#define SOC_ETM_CH_DISABLE48_S  16
/** SOC_ETM_CH_DISABLE49 : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to disable channel49.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_CH_DISABLE49    (BIT(17))
#define SOC_ETM_CH_DISABLE49_M  (SOC_ETM_CH_DISABLE49_V << SOC_ETM_CH_DISABLE49_S)
#define SOC_ETM_CH_DISABLE49_V  0x00000001U
#define SOC_ETM_CH_DISABLE49_S  17

/** SOC_ETM_CH0_EVT_ID_REG register
 *  Channel0 event ID register
 */
#define SOC_ETM_CH0_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x18)
/** SOC_ETM_CH0_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel0 event ID.
 */
#define SOC_ETM_CH0_EVT_ID    0x0000007FU
#define SOC_ETM_CH0_EVT_ID_M  (SOC_ETM_CH0_EVT_ID_V << SOC_ETM_CH0_EVT_ID_S)
#define SOC_ETM_CH0_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH0_EVT_ID_S  0

/** SOC_ETM_CH0_TASK_ID_REG register
 *  Channel0 task ID register
 */
#define SOC_ETM_CH0_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x1c)
/** SOC_ETM_CH0_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel0 task ID.
 */
#define SOC_ETM_CH0_TASK_ID    0x000000FFU
#define SOC_ETM_CH0_TASK_ID_M  (SOC_ETM_CH0_TASK_ID_V << SOC_ETM_CH0_TASK_ID_S)
#define SOC_ETM_CH0_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH0_TASK_ID_S  0

/** SOC_ETM_CH1_EVT_ID_REG register
 *  Channel1 event ID register
 */
#define SOC_ETM_CH1_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x20)
/** SOC_ETM_CH1_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel1 event ID.
 */
#define SOC_ETM_CH1_EVT_ID    0x0000007FU
#define SOC_ETM_CH1_EVT_ID_M  (SOC_ETM_CH1_EVT_ID_V << SOC_ETM_CH1_EVT_ID_S)
#define SOC_ETM_CH1_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH1_EVT_ID_S  0

/** SOC_ETM_CH1_TASK_ID_REG register
 *  Channel1 task ID register
 */
#define SOC_ETM_CH1_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x24)
/** SOC_ETM_CH1_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel1 task ID.
 */
#define SOC_ETM_CH1_TASK_ID    0x000000FFU
#define SOC_ETM_CH1_TASK_ID_M  (SOC_ETM_CH1_TASK_ID_V << SOC_ETM_CH1_TASK_ID_S)
#define SOC_ETM_CH1_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH1_TASK_ID_S  0

/** SOC_ETM_CH2_EVT_ID_REG register
 *  Channel2 event ID register
 */
#define SOC_ETM_CH2_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x28)
/** SOC_ETM_CH2_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel2 event ID.
 */
#define SOC_ETM_CH2_EVT_ID    0x0000007FU
#define SOC_ETM_CH2_EVT_ID_M  (SOC_ETM_CH2_EVT_ID_V << SOC_ETM_CH2_EVT_ID_S)
#define SOC_ETM_CH2_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH2_EVT_ID_S  0

/** SOC_ETM_CH2_TASK_ID_REG register
 *  Channel2 task ID register
 */
#define SOC_ETM_CH2_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x2c)
/** SOC_ETM_CH2_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel2 task ID.
 */
#define SOC_ETM_CH2_TASK_ID    0x000000FFU
#define SOC_ETM_CH2_TASK_ID_M  (SOC_ETM_CH2_TASK_ID_V << SOC_ETM_CH2_TASK_ID_S)
#define SOC_ETM_CH2_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH2_TASK_ID_S  0

/** SOC_ETM_CH3_EVT_ID_REG register
 *  Channel3 event ID register
 */
#define SOC_ETM_CH3_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x30)
/** SOC_ETM_CH3_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel3 event ID.
 */
#define SOC_ETM_CH3_EVT_ID    0x0000007FU
#define SOC_ETM_CH3_EVT_ID_M  (SOC_ETM_CH3_EVT_ID_V << SOC_ETM_CH3_EVT_ID_S)
#define SOC_ETM_CH3_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH3_EVT_ID_S  0

/** SOC_ETM_CH3_TASK_ID_REG register
 *  Channel3 task ID register
 */
#define SOC_ETM_CH3_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x34)
/** SOC_ETM_CH3_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel3 task ID.
 */
#define SOC_ETM_CH3_TASK_ID    0x000000FFU
#define SOC_ETM_CH3_TASK_ID_M  (SOC_ETM_CH3_TASK_ID_V << SOC_ETM_CH3_TASK_ID_S)
#define SOC_ETM_CH3_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH3_TASK_ID_S  0

/** SOC_ETM_CH4_EVT_ID_REG register
 *  Channel4 event ID register
 */
#define SOC_ETM_CH4_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x38)
/** SOC_ETM_CH4_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel4 event ID.
 */
#define SOC_ETM_CH4_EVT_ID    0x0000007FU
#define SOC_ETM_CH4_EVT_ID_M  (SOC_ETM_CH4_EVT_ID_V << SOC_ETM_CH4_EVT_ID_S)
#define SOC_ETM_CH4_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH4_EVT_ID_S  0

/** SOC_ETM_CH4_TASK_ID_REG register
 *  Channel4 task ID register
 */
#define SOC_ETM_CH4_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x3c)
/** SOC_ETM_CH4_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel4 task ID.
 */
#define SOC_ETM_CH4_TASK_ID    0x000000FFU
#define SOC_ETM_CH4_TASK_ID_M  (SOC_ETM_CH4_TASK_ID_V << SOC_ETM_CH4_TASK_ID_S)
#define SOC_ETM_CH4_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH4_TASK_ID_S  0

/** SOC_ETM_CH5_EVT_ID_REG register
 *  Channel5 event ID register
 */
#define SOC_ETM_CH5_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x40)
/** SOC_ETM_CH5_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel5 event ID.
 */
#define SOC_ETM_CH5_EVT_ID    0x0000007FU
#define SOC_ETM_CH5_EVT_ID_M  (SOC_ETM_CH5_EVT_ID_V << SOC_ETM_CH5_EVT_ID_S)
#define SOC_ETM_CH5_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH5_EVT_ID_S  0

/** SOC_ETM_CH5_TASK_ID_REG register
 *  Channel5 task ID register
 */
#define SOC_ETM_CH5_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x44)
/** SOC_ETM_CH5_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel5 task ID.
 */
#define SOC_ETM_CH5_TASK_ID    0x000000FFU
#define SOC_ETM_CH5_TASK_ID_M  (SOC_ETM_CH5_TASK_ID_V << SOC_ETM_CH5_TASK_ID_S)
#define SOC_ETM_CH5_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH5_TASK_ID_S  0

/** SOC_ETM_CH6_EVT_ID_REG register
 *  Channel6 event ID register
 */
#define SOC_ETM_CH6_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x48)
/** SOC_ETM_CH6_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel6 event ID.
 */
#define SOC_ETM_CH6_EVT_ID    0x0000007FU
#define SOC_ETM_CH6_EVT_ID_M  (SOC_ETM_CH6_EVT_ID_V << SOC_ETM_CH6_EVT_ID_S)
#define SOC_ETM_CH6_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH6_EVT_ID_S  0

/** SOC_ETM_CH6_TASK_ID_REG register
 *  Channel6 task ID register
 */
#define SOC_ETM_CH6_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x4c)
/** SOC_ETM_CH6_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel6 task ID.
 */
#define SOC_ETM_CH6_TASK_ID    0x000000FFU
#define SOC_ETM_CH6_TASK_ID_M  (SOC_ETM_CH6_TASK_ID_V << SOC_ETM_CH6_TASK_ID_S)
#define SOC_ETM_CH6_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH6_TASK_ID_S  0

/** SOC_ETM_CH7_EVT_ID_REG register
 *  Channel7 event ID register
 */
#define SOC_ETM_CH7_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x50)
/** SOC_ETM_CH7_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel7 event ID.
 */
#define SOC_ETM_CH7_EVT_ID    0x0000007FU
#define SOC_ETM_CH7_EVT_ID_M  (SOC_ETM_CH7_EVT_ID_V << SOC_ETM_CH7_EVT_ID_S)
#define SOC_ETM_CH7_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH7_EVT_ID_S  0

/** SOC_ETM_CH7_TASK_ID_REG register
 *  Channel7 task ID register
 */
#define SOC_ETM_CH7_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x54)
/** SOC_ETM_CH7_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel7 task ID.
 */
#define SOC_ETM_CH7_TASK_ID    0x000000FFU
#define SOC_ETM_CH7_TASK_ID_M  (SOC_ETM_CH7_TASK_ID_V << SOC_ETM_CH7_TASK_ID_S)
#define SOC_ETM_CH7_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH7_TASK_ID_S  0

/** SOC_ETM_CH8_EVT_ID_REG register
 *  Channel8 event ID register
 */
#define SOC_ETM_CH8_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x58)
/** SOC_ETM_CH8_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel8 event ID.
 */
#define SOC_ETM_CH8_EVT_ID    0x0000007FU
#define SOC_ETM_CH8_EVT_ID_M  (SOC_ETM_CH8_EVT_ID_V << SOC_ETM_CH8_EVT_ID_S)
#define SOC_ETM_CH8_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH8_EVT_ID_S  0

/** SOC_ETM_CH8_TASK_ID_REG register
 *  Channel8 task ID register
 */
#define SOC_ETM_CH8_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x5c)
/** SOC_ETM_CH8_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel8 task ID.
 */
#define SOC_ETM_CH8_TASK_ID    0x000000FFU
#define SOC_ETM_CH8_TASK_ID_M  (SOC_ETM_CH8_TASK_ID_V << SOC_ETM_CH8_TASK_ID_S)
#define SOC_ETM_CH8_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH8_TASK_ID_S  0

/** SOC_ETM_CH9_EVT_ID_REG register
 *  Channel9 event ID register
 */
#define SOC_ETM_CH9_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x60)
/** SOC_ETM_CH9_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel9 event ID.
 */
#define SOC_ETM_CH9_EVT_ID    0x0000007FU
#define SOC_ETM_CH9_EVT_ID_M  (SOC_ETM_CH9_EVT_ID_V << SOC_ETM_CH9_EVT_ID_S)
#define SOC_ETM_CH9_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH9_EVT_ID_S  0

/** SOC_ETM_CH9_TASK_ID_REG register
 *  Channel9 task ID register
 */
#define SOC_ETM_CH9_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x64)
/** SOC_ETM_CH9_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel9 task ID.
 */
#define SOC_ETM_CH9_TASK_ID    0x000000FFU
#define SOC_ETM_CH9_TASK_ID_M  (SOC_ETM_CH9_TASK_ID_V << SOC_ETM_CH9_TASK_ID_S)
#define SOC_ETM_CH9_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH9_TASK_ID_S  0

/** SOC_ETM_CH10_EVT_ID_REG register
 *  Channel10 event ID register
 */
#define SOC_ETM_CH10_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x68)
/** SOC_ETM_CH10_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel10 event ID.
 */
#define SOC_ETM_CH10_EVT_ID    0x0000007FU
#define SOC_ETM_CH10_EVT_ID_M  (SOC_ETM_CH10_EVT_ID_V << SOC_ETM_CH10_EVT_ID_S)
#define SOC_ETM_CH10_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH10_EVT_ID_S  0

/** SOC_ETM_CH10_TASK_ID_REG register
 *  Channel10 task ID register
 */
#define SOC_ETM_CH10_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x6c)
/** SOC_ETM_CH10_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel10 task ID.
 */
#define SOC_ETM_CH10_TASK_ID    0x000000FFU
#define SOC_ETM_CH10_TASK_ID_M  (SOC_ETM_CH10_TASK_ID_V << SOC_ETM_CH10_TASK_ID_S)
#define SOC_ETM_CH10_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH10_TASK_ID_S  0

/** SOC_ETM_CH11_EVT_ID_REG register
 *  Channel11 event ID register
 */
#define SOC_ETM_CH11_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x70)
/** SOC_ETM_CH11_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel11 event ID.
 */
#define SOC_ETM_CH11_EVT_ID    0x0000007FU
#define SOC_ETM_CH11_EVT_ID_M  (SOC_ETM_CH11_EVT_ID_V << SOC_ETM_CH11_EVT_ID_S)
#define SOC_ETM_CH11_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH11_EVT_ID_S  0

/** SOC_ETM_CH11_TASK_ID_REG register
 *  Channel11 task ID register
 */
#define SOC_ETM_CH11_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x74)
/** SOC_ETM_CH11_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel11 task ID.
 */
#define SOC_ETM_CH11_TASK_ID    0x000000FFU
#define SOC_ETM_CH11_TASK_ID_M  (SOC_ETM_CH11_TASK_ID_V << SOC_ETM_CH11_TASK_ID_S)
#define SOC_ETM_CH11_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH11_TASK_ID_S  0

/** SOC_ETM_CH12_EVT_ID_REG register
 *  Channel12 event ID register
 */
#define SOC_ETM_CH12_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x78)
/** SOC_ETM_CH12_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel12 event ID.
 */
#define SOC_ETM_CH12_EVT_ID    0x0000007FU
#define SOC_ETM_CH12_EVT_ID_M  (SOC_ETM_CH12_EVT_ID_V << SOC_ETM_CH12_EVT_ID_S)
#define SOC_ETM_CH12_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH12_EVT_ID_S  0

/** SOC_ETM_CH12_TASK_ID_REG register
 *  Channel12 task ID register
 */
#define SOC_ETM_CH12_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x7c)
/** SOC_ETM_CH12_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel12 task ID.
 */
#define SOC_ETM_CH12_TASK_ID    0x000000FFU
#define SOC_ETM_CH12_TASK_ID_M  (SOC_ETM_CH12_TASK_ID_V << SOC_ETM_CH12_TASK_ID_S)
#define SOC_ETM_CH12_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH12_TASK_ID_S  0

/** SOC_ETM_CH13_EVT_ID_REG register
 *  Channel13 event ID register
 */
#define SOC_ETM_CH13_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x80)
/** SOC_ETM_CH13_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel13 event ID.
 */
#define SOC_ETM_CH13_EVT_ID    0x0000007FU
#define SOC_ETM_CH13_EVT_ID_M  (SOC_ETM_CH13_EVT_ID_V << SOC_ETM_CH13_EVT_ID_S)
#define SOC_ETM_CH13_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH13_EVT_ID_S  0

/** SOC_ETM_CH13_TASK_ID_REG register
 *  Channel13 task ID register
 */
#define SOC_ETM_CH13_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x84)
/** SOC_ETM_CH13_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel13 task ID.
 */
#define SOC_ETM_CH13_TASK_ID    0x000000FFU
#define SOC_ETM_CH13_TASK_ID_M  (SOC_ETM_CH13_TASK_ID_V << SOC_ETM_CH13_TASK_ID_S)
#define SOC_ETM_CH13_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH13_TASK_ID_S  0

/** SOC_ETM_CH14_EVT_ID_REG register
 *  Channel14 event ID register
 */
#define SOC_ETM_CH14_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x88)
/** SOC_ETM_CH14_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel14 event ID.
 */
#define SOC_ETM_CH14_EVT_ID    0x0000007FU
#define SOC_ETM_CH14_EVT_ID_M  (SOC_ETM_CH14_EVT_ID_V << SOC_ETM_CH14_EVT_ID_S)
#define SOC_ETM_CH14_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH14_EVT_ID_S  0

/** SOC_ETM_CH14_TASK_ID_REG register
 *  Channel14 task ID register
 */
#define SOC_ETM_CH14_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x8c)
/** SOC_ETM_CH14_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel14 task ID.
 */
#define SOC_ETM_CH14_TASK_ID    0x000000FFU
#define SOC_ETM_CH14_TASK_ID_M  (SOC_ETM_CH14_TASK_ID_V << SOC_ETM_CH14_TASK_ID_S)
#define SOC_ETM_CH14_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH14_TASK_ID_S  0

/** SOC_ETM_CH15_EVT_ID_REG register
 *  Channel15 event ID register
 */
#define SOC_ETM_CH15_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x90)
/** SOC_ETM_CH15_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel15 event ID.
 */
#define SOC_ETM_CH15_EVT_ID    0x0000007FU
#define SOC_ETM_CH15_EVT_ID_M  (SOC_ETM_CH15_EVT_ID_V << SOC_ETM_CH15_EVT_ID_S)
#define SOC_ETM_CH15_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH15_EVT_ID_S  0

/** SOC_ETM_CH15_TASK_ID_REG register
 *  Channel15 task ID register
 */
#define SOC_ETM_CH15_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x94)
/** SOC_ETM_CH15_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel15 task ID.
 */
#define SOC_ETM_CH15_TASK_ID    0x000000FFU
#define SOC_ETM_CH15_TASK_ID_M  (SOC_ETM_CH15_TASK_ID_V << SOC_ETM_CH15_TASK_ID_S)
#define SOC_ETM_CH15_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH15_TASK_ID_S  0

/** SOC_ETM_CH16_EVT_ID_REG register
 *  Channel16 event ID register
 */
#define SOC_ETM_CH16_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x98)
/** SOC_ETM_CH16_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel16 event ID.
 */
#define SOC_ETM_CH16_EVT_ID    0x0000007FU
#define SOC_ETM_CH16_EVT_ID_M  (SOC_ETM_CH16_EVT_ID_V << SOC_ETM_CH16_EVT_ID_S)
#define SOC_ETM_CH16_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH16_EVT_ID_S  0

/** SOC_ETM_CH16_TASK_ID_REG register
 *  Channel16 task ID register
 */
#define SOC_ETM_CH16_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x9c)
/** SOC_ETM_CH16_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel16 task ID.
 */
#define SOC_ETM_CH16_TASK_ID    0x000000FFU
#define SOC_ETM_CH16_TASK_ID_M  (SOC_ETM_CH16_TASK_ID_V << SOC_ETM_CH16_TASK_ID_S)
#define SOC_ETM_CH16_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH16_TASK_ID_S  0

/** SOC_ETM_CH17_EVT_ID_REG register
 *  Channel17 event ID register
 */
#define SOC_ETM_CH17_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xa0)
/** SOC_ETM_CH17_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel17 event ID.
 */
#define SOC_ETM_CH17_EVT_ID    0x0000007FU
#define SOC_ETM_CH17_EVT_ID_M  (SOC_ETM_CH17_EVT_ID_V << SOC_ETM_CH17_EVT_ID_S)
#define SOC_ETM_CH17_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH17_EVT_ID_S  0

/** SOC_ETM_CH17_TASK_ID_REG register
 *  Channel17 task ID register
 */
#define SOC_ETM_CH17_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xa4)
/** SOC_ETM_CH17_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel17 task ID.
 */
#define SOC_ETM_CH17_TASK_ID    0x000000FFU
#define SOC_ETM_CH17_TASK_ID_M  (SOC_ETM_CH17_TASK_ID_V << SOC_ETM_CH17_TASK_ID_S)
#define SOC_ETM_CH17_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH17_TASK_ID_S  0

/** SOC_ETM_CH18_EVT_ID_REG register
 *  Channel18 event ID register
 */
#define SOC_ETM_CH18_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xa8)
/** SOC_ETM_CH18_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel18 event ID.
 */
#define SOC_ETM_CH18_EVT_ID    0x0000007FU
#define SOC_ETM_CH18_EVT_ID_M  (SOC_ETM_CH18_EVT_ID_V << SOC_ETM_CH18_EVT_ID_S)
#define SOC_ETM_CH18_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH18_EVT_ID_S  0

/** SOC_ETM_CH18_TASK_ID_REG register
 *  Channel18 task ID register
 */
#define SOC_ETM_CH18_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xac)
/** SOC_ETM_CH18_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel18 task ID.
 */
#define SOC_ETM_CH18_TASK_ID    0x000000FFU
#define SOC_ETM_CH18_TASK_ID_M  (SOC_ETM_CH18_TASK_ID_V << SOC_ETM_CH18_TASK_ID_S)
#define SOC_ETM_CH18_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH18_TASK_ID_S  0

/** SOC_ETM_CH19_EVT_ID_REG register
 *  Channel19 event ID register
 */
#define SOC_ETM_CH19_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xb0)
/** SOC_ETM_CH19_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel19 event ID.
 */
#define SOC_ETM_CH19_EVT_ID    0x0000007FU
#define SOC_ETM_CH19_EVT_ID_M  (SOC_ETM_CH19_EVT_ID_V << SOC_ETM_CH19_EVT_ID_S)
#define SOC_ETM_CH19_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH19_EVT_ID_S  0

/** SOC_ETM_CH19_TASK_ID_REG register
 *  Channel19 task ID register
 */
#define SOC_ETM_CH19_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xb4)
/** SOC_ETM_CH19_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel19 task ID.
 */
#define SOC_ETM_CH19_TASK_ID    0x000000FFU
#define SOC_ETM_CH19_TASK_ID_M  (SOC_ETM_CH19_TASK_ID_V << SOC_ETM_CH19_TASK_ID_S)
#define SOC_ETM_CH19_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH19_TASK_ID_S  0

/** SOC_ETM_CH20_EVT_ID_REG register
 *  Channel20 event ID register
 */
#define SOC_ETM_CH20_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xb8)
/** SOC_ETM_CH20_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel20 event ID.
 */
#define SOC_ETM_CH20_EVT_ID    0x0000007FU
#define SOC_ETM_CH20_EVT_ID_M  (SOC_ETM_CH20_EVT_ID_V << SOC_ETM_CH20_EVT_ID_S)
#define SOC_ETM_CH20_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH20_EVT_ID_S  0

/** SOC_ETM_CH20_TASK_ID_REG register
 *  Channel20 task ID register
 */
#define SOC_ETM_CH20_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xbc)
/** SOC_ETM_CH20_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel20 task ID.
 */
#define SOC_ETM_CH20_TASK_ID    0x000000FFU
#define SOC_ETM_CH20_TASK_ID_M  (SOC_ETM_CH20_TASK_ID_V << SOC_ETM_CH20_TASK_ID_S)
#define SOC_ETM_CH20_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH20_TASK_ID_S  0

/** SOC_ETM_CH21_EVT_ID_REG register
 *  Channel21 event ID register
 */
#define SOC_ETM_CH21_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xc0)
/** SOC_ETM_CH21_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel21 event ID.
 */
#define SOC_ETM_CH21_EVT_ID    0x0000007FU
#define SOC_ETM_CH21_EVT_ID_M  (SOC_ETM_CH21_EVT_ID_V << SOC_ETM_CH21_EVT_ID_S)
#define SOC_ETM_CH21_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH21_EVT_ID_S  0

/** SOC_ETM_CH21_TASK_ID_REG register
 *  Channel21 task ID register
 */
#define SOC_ETM_CH21_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xc4)
/** SOC_ETM_CH21_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel21 task ID.
 */
#define SOC_ETM_CH21_TASK_ID    0x000000FFU
#define SOC_ETM_CH21_TASK_ID_M  (SOC_ETM_CH21_TASK_ID_V << SOC_ETM_CH21_TASK_ID_S)
#define SOC_ETM_CH21_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH21_TASK_ID_S  0

/** SOC_ETM_CH22_EVT_ID_REG register
 *  Channel22 event ID register
 */
#define SOC_ETM_CH22_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xc8)
/** SOC_ETM_CH22_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel22 event ID.
 */
#define SOC_ETM_CH22_EVT_ID    0x0000007FU
#define SOC_ETM_CH22_EVT_ID_M  (SOC_ETM_CH22_EVT_ID_V << SOC_ETM_CH22_EVT_ID_S)
#define SOC_ETM_CH22_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH22_EVT_ID_S  0

/** SOC_ETM_CH22_TASK_ID_REG register
 *  Channel22 task ID register
 */
#define SOC_ETM_CH22_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xcc)
/** SOC_ETM_CH22_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel22 task ID.
 */
#define SOC_ETM_CH22_TASK_ID    0x000000FFU
#define SOC_ETM_CH22_TASK_ID_M  (SOC_ETM_CH22_TASK_ID_V << SOC_ETM_CH22_TASK_ID_S)
#define SOC_ETM_CH22_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH22_TASK_ID_S  0

/** SOC_ETM_CH23_EVT_ID_REG register
 *  Channel23 event ID register
 */
#define SOC_ETM_CH23_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xd0)
/** SOC_ETM_CH23_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel23 event ID.
 */
#define SOC_ETM_CH23_EVT_ID    0x0000007FU
#define SOC_ETM_CH23_EVT_ID_M  (SOC_ETM_CH23_EVT_ID_V << SOC_ETM_CH23_EVT_ID_S)
#define SOC_ETM_CH23_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH23_EVT_ID_S  0

/** SOC_ETM_CH23_TASK_ID_REG register
 *  Channel23 task ID register
 */
#define SOC_ETM_CH23_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xd4)
/** SOC_ETM_CH23_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel23 task ID.
 */
#define SOC_ETM_CH23_TASK_ID    0x000000FFU
#define SOC_ETM_CH23_TASK_ID_M  (SOC_ETM_CH23_TASK_ID_V << SOC_ETM_CH23_TASK_ID_S)
#define SOC_ETM_CH23_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH23_TASK_ID_S  0

/** SOC_ETM_CH24_EVT_ID_REG register
 *  Channel24 event ID register
 */
#define SOC_ETM_CH24_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xd8)
/** SOC_ETM_CH24_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel24 event ID.
 */
#define SOC_ETM_CH24_EVT_ID    0x0000007FU
#define SOC_ETM_CH24_EVT_ID_M  (SOC_ETM_CH24_EVT_ID_V << SOC_ETM_CH24_EVT_ID_S)
#define SOC_ETM_CH24_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH24_EVT_ID_S  0

/** SOC_ETM_CH24_TASK_ID_REG register
 *  Channel24 task ID register
 */
#define SOC_ETM_CH24_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xdc)
/** SOC_ETM_CH24_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel24 task ID.
 */
#define SOC_ETM_CH24_TASK_ID    0x000000FFU
#define SOC_ETM_CH24_TASK_ID_M  (SOC_ETM_CH24_TASK_ID_V << SOC_ETM_CH24_TASK_ID_S)
#define SOC_ETM_CH24_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH24_TASK_ID_S  0

/** SOC_ETM_CH25_EVT_ID_REG register
 *  Channel25 event ID register
 */
#define SOC_ETM_CH25_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xe0)
/** SOC_ETM_CH25_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel25 event ID.
 */
#define SOC_ETM_CH25_EVT_ID    0x0000007FU
#define SOC_ETM_CH25_EVT_ID_M  (SOC_ETM_CH25_EVT_ID_V << SOC_ETM_CH25_EVT_ID_S)
#define SOC_ETM_CH25_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH25_EVT_ID_S  0

/** SOC_ETM_CH25_TASK_ID_REG register
 *  Channel25 task ID register
 */
#define SOC_ETM_CH25_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xe4)
/** SOC_ETM_CH25_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel25 task ID.
 */
#define SOC_ETM_CH25_TASK_ID    0x000000FFU
#define SOC_ETM_CH25_TASK_ID_M  (SOC_ETM_CH25_TASK_ID_V << SOC_ETM_CH25_TASK_ID_S)
#define SOC_ETM_CH25_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH25_TASK_ID_S  0

/** SOC_ETM_CH26_EVT_ID_REG register
 *  Channel26 event ID register
 */
#define SOC_ETM_CH26_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xe8)
/** SOC_ETM_CH26_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel26 event ID.
 */
#define SOC_ETM_CH26_EVT_ID    0x0000007FU
#define SOC_ETM_CH26_EVT_ID_M  (SOC_ETM_CH26_EVT_ID_V << SOC_ETM_CH26_EVT_ID_S)
#define SOC_ETM_CH26_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH26_EVT_ID_S  0

/** SOC_ETM_CH26_TASK_ID_REG register
 *  Channel26 task ID register
 */
#define SOC_ETM_CH26_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xec)
/** SOC_ETM_CH26_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel26 task ID.
 */
#define SOC_ETM_CH26_TASK_ID    0x000000FFU
#define SOC_ETM_CH26_TASK_ID_M  (SOC_ETM_CH26_TASK_ID_V << SOC_ETM_CH26_TASK_ID_S)
#define SOC_ETM_CH26_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH26_TASK_ID_S  0

/** SOC_ETM_CH27_EVT_ID_REG register
 *  Channel27 event ID register
 */
#define SOC_ETM_CH27_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xf0)
/** SOC_ETM_CH27_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel27 event ID.
 */
#define SOC_ETM_CH27_EVT_ID    0x0000007FU
#define SOC_ETM_CH27_EVT_ID_M  (SOC_ETM_CH27_EVT_ID_V << SOC_ETM_CH27_EVT_ID_S)
#define SOC_ETM_CH27_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH27_EVT_ID_S  0

/** SOC_ETM_CH27_TASK_ID_REG register
 *  Channel27 task ID register
 */
#define SOC_ETM_CH27_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xf4)
/** SOC_ETM_CH27_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel27 task ID.
 */
#define SOC_ETM_CH27_TASK_ID    0x000000FFU
#define SOC_ETM_CH27_TASK_ID_M  (SOC_ETM_CH27_TASK_ID_V << SOC_ETM_CH27_TASK_ID_S)
#define SOC_ETM_CH27_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH27_TASK_ID_S  0

/** SOC_ETM_CH28_EVT_ID_REG register
 *  Channel28 event ID register
 */
#define SOC_ETM_CH28_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0xf8)
/** SOC_ETM_CH28_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel28 event ID.
 */
#define SOC_ETM_CH28_EVT_ID    0x0000007FU
#define SOC_ETM_CH28_EVT_ID_M  (SOC_ETM_CH28_EVT_ID_V << SOC_ETM_CH28_EVT_ID_S)
#define SOC_ETM_CH28_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH28_EVT_ID_S  0

/** SOC_ETM_CH28_TASK_ID_REG register
 *  Channel28 task ID register
 */
#define SOC_ETM_CH28_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0xfc)
/** SOC_ETM_CH28_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel28 task ID.
 */
#define SOC_ETM_CH28_TASK_ID    0x000000FFU
#define SOC_ETM_CH28_TASK_ID_M  (SOC_ETM_CH28_TASK_ID_V << SOC_ETM_CH28_TASK_ID_S)
#define SOC_ETM_CH28_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH28_TASK_ID_S  0

/** SOC_ETM_CH29_EVT_ID_REG register
 *  Channel29 event ID register
 */
#define SOC_ETM_CH29_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x100)
/** SOC_ETM_CH29_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel29 event ID.
 */
#define SOC_ETM_CH29_EVT_ID    0x0000007FU
#define SOC_ETM_CH29_EVT_ID_M  (SOC_ETM_CH29_EVT_ID_V << SOC_ETM_CH29_EVT_ID_S)
#define SOC_ETM_CH29_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH29_EVT_ID_S  0

/** SOC_ETM_CH29_TASK_ID_REG register
 *  Channel29 task ID register
 */
#define SOC_ETM_CH29_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x104)
/** SOC_ETM_CH29_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel29 task ID.
 */
#define SOC_ETM_CH29_TASK_ID    0x000000FFU
#define SOC_ETM_CH29_TASK_ID_M  (SOC_ETM_CH29_TASK_ID_V << SOC_ETM_CH29_TASK_ID_S)
#define SOC_ETM_CH29_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH29_TASK_ID_S  0

/** SOC_ETM_CH30_EVT_ID_REG register
 *  Channel30 event ID register
 */
#define SOC_ETM_CH30_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x108)
/** SOC_ETM_CH30_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel30 event ID.
 */
#define SOC_ETM_CH30_EVT_ID    0x0000007FU
#define SOC_ETM_CH30_EVT_ID_M  (SOC_ETM_CH30_EVT_ID_V << SOC_ETM_CH30_EVT_ID_S)
#define SOC_ETM_CH30_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH30_EVT_ID_S  0

/** SOC_ETM_CH30_TASK_ID_REG register
 *  Channel30 task ID register
 */
#define SOC_ETM_CH30_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x10c)
/** SOC_ETM_CH30_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel30 task ID.
 */
#define SOC_ETM_CH30_TASK_ID    0x000000FFU
#define SOC_ETM_CH30_TASK_ID_M  (SOC_ETM_CH30_TASK_ID_V << SOC_ETM_CH30_TASK_ID_S)
#define SOC_ETM_CH30_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH30_TASK_ID_S  0

/** SOC_ETM_CH31_EVT_ID_REG register
 *  Channel31 event ID register
 */
#define SOC_ETM_CH31_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x110)
/** SOC_ETM_CH31_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel31 event ID.
 */
#define SOC_ETM_CH31_EVT_ID    0x0000007FU
#define SOC_ETM_CH31_EVT_ID_M  (SOC_ETM_CH31_EVT_ID_V << SOC_ETM_CH31_EVT_ID_S)
#define SOC_ETM_CH31_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH31_EVT_ID_S  0

/** SOC_ETM_CH31_TASK_ID_REG register
 *  Channel31 task ID register
 */
#define SOC_ETM_CH31_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x114)
/** SOC_ETM_CH31_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel31 task ID.
 */
#define SOC_ETM_CH31_TASK_ID    0x000000FFU
#define SOC_ETM_CH31_TASK_ID_M  (SOC_ETM_CH31_TASK_ID_V << SOC_ETM_CH31_TASK_ID_S)
#define SOC_ETM_CH31_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH31_TASK_ID_S  0

/** SOC_ETM_CH32_EVT_ID_REG register
 *  Channel32 event ID register
 */
#define SOC_ETM_CH32_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x118)
/** SOC_ETM_CH32_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel32 event ID.
 */
#define SOC_ETM_CH32_EVT_ID    0x0000007FU
#define SOC_ETM_CH32_EVT_ID_M  (SOC_ETM_CH32_EVT_ID_V << SOC_ETM_CH32_EVT_ID_S)
#define SOC_ETM_CH32_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH32_EVT_ID_S  0

/** SOC_ETM_CH32_TASK_ID_REG register
 *  Channel32 task ID register
 */
#define SOC_ETM_CH32_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x11c)
/** SOC_ETM_CH32_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel32 task ID.
 */
#define SOC_ETM_CH32_TASK_ID    0x000000FFU
#define SOC_ETM_CH32_TASK_ID_M  (SOC_ETM_CH32_TASK_ID_V << SOC_ETM_CH32_TASK_ID_S)
#define SOC_ETM_CH32_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH32_TASK_ID_S  0

/** SOC_ETM_CH33_EVT_ID_REG register
 *  Channel33 event ID register
 */
#define SOC_ETM_CH33_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x120)
/** SOC_ETM_CH33_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel33 event ID.
 */
#define SOC_ETM_CH33_EVT_ID    0x0000007FU
#define SOC_ETM_CH33_EVT_ID_M  (SOC_ETM_CH33_EVT_ID_V << SOC_ETM_CH33_EVT_ID_S)
#define SOC_ETM_CH33_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH33_EVT_ID_S  0

/** SOC_ETM_CH33_TASK_ID_REG register
 *  Channel33 task ID register
 */
#define SOC_ETM_CH33_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x124)
/** SOC_ETM_CH33_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel33 task ID.
 */
#define SOC_ETM_CH33_TASK_ID    0x000000FFU
#define SOC_ETM_CH33_TASK_ID_M  (SOC_ETM_CH33_TASK_ID_V << SOC_ETM_CH33_TASK_ID_S)
#define SOC_ETM_CH33_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH33_TASK_ID_S  0

/** SOC_ETM_CH34_EVT_ID_REG register
 *  Channel34 event ID register
 */
#define SOC_ETM_CH34_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x128)
/** SOC_ETM_CH34_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel34 event ID.
 */
#define SOC_ETM_CH34_EVT_ID    0x0000007FU
#define SOC_ETM_CH34_EVT_ID_M  (SOC_ETM_CH34_EVT_ID_V << SOC_ETM_CH34_EVT_ID_S)
#define SOC_ETM_CH34_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH34_EVT_ID_S  0

/** SOC_ETM_CH34_TASK_ID_REG register
 *  Channel34 task ID register
 */
#define SOC_ETM_CH34_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x12c)
/** SOC_ETM_CH34_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel34 task ID.
 */
#define SOC_ETM_CH34_TASK_ID    0x000000FFU
#define SOC_ETM_CH34_TASK_ID_M  (SOC_ETM_CH34_TASK_ID_V << SOC_ETM_CH34_TASK_ID_S)
#define SOC_ETM_CH34_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH34_TASK_ID_S  0

/** SOC_ETM_CH35_EVT_ID_REG register
 *  Channel35 event ID register
 */
#define SOC_ETM_CH35_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x130)
/** SOC_ETM_CH35_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel35 event ID.
 */
#define SOC_ETM_CH35_EVT_ID    0x0000007FU
#define SOC_ETM_CH35_EVT_ID_M  (SOC_ETM_CH35_EVT_ID_V << SOC_ETM_CH35_EVT_ID_S)
#define SOC_ETM_CH35_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH35_EVT_ID_S  0

/** SOC_ETM_CH35_TASK_ID_REG register
 *  Channel35 task ID register
 */
#define SOC_ETM_CH35_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x134)
/** SOC_ETM_CH35_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel35 task ID.
 */
#define SOC_ETM_CH35_TASK_ID    0x000000FFU
#define SOC_ETM_CH35_TASK_ID_M  (SOC_ETM_CH35_TASK_ID_V << SOC_ETM_CH35_TASK_ID_S)
#define SOC_ETM_CH35_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH35_TASK_ID_S  0

/** SOC_ETM_CH36_EVT_ID_REG register
 *  Channel36 event ID register
 */
#define SOC_ETM_CH36_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x138)
/** SOC_ETM_CH36_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel36 event ID.
 */
#define SOC_ETM_CH36_EVT_ID    0x0000007FU
#define SOC_ETM_CH36_EVT_ID_M  (SOC_ETM_CH36_EVT_ID_V << SOC_ETM_CH36_EVT_ID_S)
#define SOC_ETM_CH36_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH36_EVT_ID_S  0

/** SOC_ETM_CH36_TASK_ID_REG register
 *  Channel36 task ID register
 */
#define SOC_ETM_CH36_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x13c)
/** SOC_ETM_CH36_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel36 task ID.
 */
#define SOC_ETM_CH36_TASK_ID    0x000000FFU
#define SOC_ETM_CH36_TASK_ID_M  (SOC_ETM_CH36_TASK_ID_V << SOC_ETM_CH36_TASK_ID_S)
#define SOC_ETM_CH36_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH36_TASK_ID_S  0

/** SOC_ETM_CH37_EVT_ID_REG register
 *  Channel37 event ID register
 */
#define SOC_ETM_CH37_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x140)
/** SOC_ETM_CH37_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel37 event ID.
 */
#define SOC_ETM_CH37_EVT_ID    0x0000007FU
#define SOC_ETM_CH37_EVT_ID_M  (SOC_ETM_CH37_EVT_ID_V << SOC_ETM_CH37_EVT_ID_S)
#define SOC_ETM_CH37_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH37_EVT_ID_S  0

/** SOC_ETM_CH37_TASK_ID_REG register
 *  Channel37 task ID register
 */
#define SOC_ETM_CH37_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x144)
/** SOC_ETM_CH37_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel37 task ID.
 */
#define SOC_ETM_CH37_TASK_ID    0x000000FFU
#define SOC_ETM_CH37_TASK_ID_M  (SOC_ETM_CH37_TASK_ID_V << SOC_ETM_CH37_TASK_ID_S)
#define SOC_ETM_CH37_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH37_TASK_ID_S  0

/** SOC_ETM_CH38_EVT_ID_REG register
 *  Channel38 event ID register
 */
#define SOC_ETM_CH38_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x148)
/** SOC_ETM_CH38_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel38 event ID.
 */
#define SOC_ETM_CH38_EVT_ID    0x0000007FU
#define SOC_ETM_CH38_EVT_ID_M  (SOC_ETM_CH38_EVT_ID_V << SOC_ETM_CH38_EVT_ID_S)
#define SOC_ETM_CH38_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH38_EVT_ID_S  0

/** SOC_ETM_CH38_TASK_ID_REG register
 *  Channel38 task ID register
 */
#define SOC_ETM_CH38_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x14c)
/** SOC_ETM_CH38_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel38 task ID.
 */
#define SOC_ETM_CH38_TASK_ID    0x000000FFU
#define SOC_ETM_CH38_TASK_ID_M  (SOC_ETM_CH38_TASK_ID_V << SOC_ETM_CH38_TASK_ID_S)
#define SOC_ETM_CH38_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH38_TASK_ID_S  0

/** SOC_ETM_CH39_EVT_ID_REG register
 *  Channel39 event ID register
 */
#define SOC_ETM_CH39_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x150)
/** SOC_ETM_CH39_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel39 event ID.
 */
#define SOC_ETM_CH39_EVT_ID    0x0000007FU
#define SOC_ETM_CH39_EVT_ID_M  (SOC_ETM_CH39_EVT_ID_V << SOC_ETM_CH39_EVT_ID_S)
#define SOC_ETM_CH39_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH39_EVT_ID_S  0

/** SOC_ETM_CH39_TASK_ID_REG register
 *  Channel39 task ID register
 */
#define SOC_ETM_CH39_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x154)
/** SOC_ETM_CH39_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel39 task ID.
 */
#define SOC_ETM_CH39_TASK_ID    0x000000FFU
#define SOC_ETM_CH39_TASK_ID_M  (SOC_ETM_CH39_TASK_ID_V << SOC_ETM_CH39_TASK_ID_S)
#define SOC_ETM_CH39_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH39_TASK_ID_S  0

/** SOC_ETM_CH40_EVT_ID_REG register
 *  Channel40 event ID register
 */
#define SOC_ETM_CH40_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x158)
/** SOC_ETM_CH40_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel40 event ID.
 */
#define SOC_ETM_CH40_EVT_ID    0x0000007FU
#define SOC_ETM_CH40_EVT_ID_M  (SOC_ETM_CH40_EVT_ID_V << SOC_ETM_CH40_EVT_ID_S)
#define SOC_ETM_CH40_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH40_EVT_ID_S  0

/** SOC_ETM_CH40_TASK_ID_REG register
 *  Channel40 task ID register
 */
#define SOC_ETM_CH40_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x15c)
/** SOC_ETM_CH40_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel40 task ID.
 */
#define SOC_ETM_CH40_TASK_ID    0x000000FFU
#define SOC_ETM_CH40_TASK_ID_M  (SOC_ETM_CH40_TASK_ID_V << SOC_ETM_CH40_TASK_ID_S)
#define SOC_ETM_CH40_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH40_TASK_ID_S  0

/** SOC_ETM_CH41_EVT_ID_REG register
 *  Channel41 event ID register
 */
#define SOC_ETM_CH41_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x160)
/** SOC_ETM_CH41_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel41 event ID.
 */
#define SOC_ETM_CH41_EVT_ID    0x0000007FU
#define SOC_ETM_CH41_EVT_ID_M  (SOC_ETM_CH41_EVT_ID_V << SOC_ETM_CH41_EVT_ID_S)
#define SOC_ETM_CH41_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH41_EVT_ID_S  0

/** SOC_ETM_CH41_TASK_ID_REG register
 *  Channel41 task ID register
 */
#define SOC_ETM_CH41_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x164)
/** SOC_ETM_CH41_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel41 task ID.
 */
#define SOC_ETM_CH41_TASK_ID    0x000000FFU
#define SOC_ETM_CH41_TASK_ID_M  (SOC_ETM_CH41_TASK_ID_V << SOC_ETM_CH41_TASK_ID_S)
#define SOC_ETM_CH41_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH41_TASK_ID_S  0

/** SOC_ETM_CH42_EVT_ID_REG register
 *  Channel42 event ID register
 */
#define SOC_ETM_CH42_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x168)
/** SOC_ETM_CH42_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel42 event ID.
 */
#define SOC_ETM_CH42_EVT_ID    0x0000007FU
#define SOC_ETM_CH42_EVT_ID_M  (SOC_ETM_CH42_EVT_ID_V << SOC_ETM_CH42_EVT_ID_S)
#define SOC_ETM_CH42_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH42_EVT_ID_S  0

/** SOC_ETM_CH42_TASK_ID_REG register
 *  Channel42 task ID register
 */
#define SOC_ETM_CH42_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x16c)
/** SOC_ETM_CH42_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel42 task ID.
 */
#define SOC_ETM_CH42_TASK_ID    0x000000FFU
#define SOC_ETM_CH42_TASK_ID_M  (SOC_ETM_CH42_TASK_ID_V << SOC_ETM_CH42_TASK_ID_S)
#define SOC_ETM_CH42_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH42_TASK_ID_S  0

/** SOC_ETM_CH43_EVT_ID_REG register
 *  Channel43 event ID register
 */
#define SOC_ETM_CH43_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x170)
/** SOC_ETM_CH43_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel43 event ID.
 */
#define SOC_ETM_CH43_EVT_ID    0x0000007FU
#define SOC_ETM_CH43_EVT_ID_M  (SOC_ETM_CH43_EVT_ID_V << SOC_ETM_CH43_EVT_ID_S)
#define SOC_ETM_CH43_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH43_EVT_ID_S  0

/** SOC_ETM_CH43_TASK_ID_REG register
 *  Channel43 task ID register
 */
#define SOC_ETM_CH43_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x174)
/** SOC_ETM_CH43_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel43 task ID.
 */
#define SOC_ETM_CH43_TASK_ID    0x000000FFU
#define SOC_ETM_CH43_TASK_ID_M  (SOC_ETM_CH43_TASK_ID_V << SOC_ETM_CH43_TASK_ID_S)
#define SOC_ETM_CH43_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH43_TASK_ID_S  0

/** SOC_ETM_CH44_EVT_ID_REG register
 *  Channel44 event ID register
 */
#define SOC_ETM_CH44_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x178)
/** SOC_ETM_CH44_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel44 event ID.
 */
#define SOC_ETM_CH44_EVT_ID    0x0000007FU
#define SOC_ETM_CH44_EVT_ID_M  (SOC_ETM_CH44_EVT_ID_V << SOC_ETM_CH44_EVT_ID_S)
#define SOC_ETM_CH44_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH44_EVT_ID_S  0

/** SOC_ETM_CH44_TASK_ID_REG register
 *  Channel44 task ID register
 */
#define SOC_ETM_CH44_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x17c)
/** SOC_ETM_CH44_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel44 task ID.
 */
#define SOC_ETM_CH44_TASK_ID    0x000000FFU
#define SOC_ETM_CH44_TASK_ID_M  (SOC_ETM_CH44_TASK_ID_V << SOC_ETM_CH44_TASK_ID_S)
#define SOC_ETM_CH44_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH44_TASK_ID_S  0

/** SOC_ETM_CH45_EVT_ID_REG register
 *  Channel45 event ID register
 */
#define SOC_ETM_CH45_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x180)
/** SOC_ETM_CH45_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel45 event ID.
 */
#define SOC_ETM_CH45_EVT_ID    0x0000007FU
#define SOC_ETM_CH45_EVT_ID_M  (SOC_ETM_CH45_EVT_ID_V << SOC_ETM_CH45_EVT_ID_S)
#define SOC_ETM_CH45_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH45_EVT_ID_S  0

/** SOC_ETM_CH45_TASK_ID_REG register
 *  Channel45 task ID register
 */
#define SOC_ETM_CH45_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x184)
/** SOC_ETM_CH45_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel45 task ID.
 */
#define SOC_ETM_CH45_TASK_ID    0x000000FFU
#define SOC_ETM_CH45_TASK_ID_M  (SOC_ETM_CH45_TASK_ID_V << SOC_ETM_CH45_TASK_ID_S)
#define SOC_ETM_CH45_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH45_TASK_ID_S  0

/** SOC_ETM_CH46_EVT_ID_REG register
 *  Channel46 event ID register
 */
#define SOC_ETM_CH46_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x188)
/** SOC_ETM_CH46_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel46 event ID.
 */
#define SOC_ETM_CH46_EVT_ID    0x0000007FU
#define SOC_ETM_CH46_EVT_ID_M  (SOC_ETM_CH46_EVT_ID_V << SOC_ETM_CH46_EVT_ID_S)
#define SOC_ETM_CH46_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH46_EVT_ID_S  0

/** SOC_ETM_CH46_TASK_ID_REG register
 *  Channel46 task ID register
 */
#define SOC_ETM_CH46_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x18c)
/** SOC_ETM_CH46_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel46 task ID.
 */
#define SOC_ETM_CH46_TASK_ID    0x000000FFU
#define SOC_ETM_CH46_TASK_ID_M  (SOC_ETM_CH46_TASK_ID_V << SOC_ETM_CH46_TASK_ID_S)
#define SOC_ETM_CH46_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH46_TASK_ID_S  0

/** SOC_ETM_CH47_EVT_ID_REG register
 *  Channel47 event ID register
 */
#define SOC_ETM_CH47_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x190)
/** SOC_ETM_CH47_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel47 event ID.
 */
#define SOC_ETM_CH47_EVT_ID    0x0000007FU
#define SOC_ETM_CH47_EVT_ID_M  (SOC_ETM_CH47_EVT_ID_V << SOC_ETM_CH47_EVT_ID_S)
#define SOC_ETM_CH47_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH47_EVT_ID_S  0

/** SOC_ETM_CH47_TASK_ID_REG register
 *  Channel47 task ID register
 */
#define SOC_ETM_CH47_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x194)
/** SOC_ETM_CH47_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel47 task ID.
 */
#define SOC_ETM_CH47_TASK_ID    0x000000FFU
#define SOC_ETM_CH47_TASK_ID_M  (SOC_ETM_CH47_TASK_ID_V << SOC_ETM_CH47_TASK_ID_S)
#define SOC_ETM_CH47_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH47_TASK_ID_S  0

/** SOC_ETM_CH48_EVT_ID_REG register
 *  Channel48 event ID register
 */
#define SOC_ETM_CH48_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x198)
/** SOC_ETM_CH48_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel48 event ID.
 */
#define SOC_ETM_CH48_EVT_ID    0x0000007FU
#define SOC_ETM_CH48_EVT_ID_M  (SOC_ETM_CH48_EVT_ID_V << SOC_ETM_CH48_EVT_ID_S)
#define SOC_ETM_CH48_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH48_EVT_ID_S  0

/** SOC_ETM_CH48_TASK_ID_REG register
 *  Channel48 task ID register
 */
#define SOC_ETM_CH48_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x19c)
/** SOC_ETM_CH48_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel48 task ID.
 */
#define SOC_ETM_CH48_TASK_ID    0x000000FFU
#define SOC_ETM_CH48_TASK_ID_M  (SOC_ETM_CH48_TASK_ID_V << SOC_ETM_CH48_TASK_ID_S)
#define SOC_ETM_CH48_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH48_TASK_ID_S  0

/** SOC_ETM_CH49_EVT_ID_REG register
 *  Channel49 event ID register
 */
#define SOC_ETM_CH49_EVT_ID_REG (DR_REG_SOC_ETM_BASE + 0x1a0)
/** SOC_ETM_CH49_EVT_ID : R/W; bitpos: [6:0]; default: 0;
 *  Configures channel49 event ID.
 */
#define SOC_ETM_CH49_EVT_ID    0x0000007FU
#define SOC_ETM_CH49_EVT_ID_M  (SOC_ETM_CH49_EVT_ID_V << SOC_ETM_CH49_EVT_ID_S)
#define SOC_ETM_CH49_EVT_ID_V  0x0000007FU
#define SOC_ETM_CH49_EVT_ID_S  0

/** SOC_ETM_CH49_TASK_ID_REG register
 *  Channel49 task ID register
 */
#define SOC_ETM_CH49_TASK_ID_REG (DR_REG_SOC_ETM_BASE + 0x1a4)
/** SOC_ETM_CH49_TASK_ID : R/W; bitpos: [7:0]; default: 0;
 *  Configures channel49 task ID.
 */
#define SOC_ETM_CH49_TASK_ID    0x000000FFU
#define SOC_ETM_CH49_TASK_ID_M  (SOC_ETM_CH49_TASK_ID_V << SOC_ETM_CH49_TASK_ID_S)
#define SOC_ETM_CH49_TASK_ID_V  0x000000FFU
#define SOC_ETM_CH49_TASK_ID_S  0

/** SOC_ETM_EVT_ST0_REG register
 *  Event trigger status register
 */
#define SOC_ETM_EVT_ST0_REG (DR_REG_SOC_ETM_BASE + 0x1a8)
/** SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents GPIO_EVT_CH0_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST    (BIT(0))
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_S  0
/** SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents GPIO_EVT_CH1_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST    (BIT(1))
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_S  1
/** SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents GPIO_EVT_CH2_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST    (BIT(2))
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_S  2
/** SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents GPIO_EVT_CH3_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST    (BIT(3))
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_S  3
/** SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents GPIO_EVT_CH4_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST    (BIT(4))
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_S  4
/** SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents GPIO_EVT_CH5_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST    (BIT(5))
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_S  5
/** SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents GPIO_EVT_CH6_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST    (BIT(6))
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_S  6
/** SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents GPIO_EVT_CH7_RISE_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST    (BIT(7))
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_S  7
/** SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents GPIO_EVT_CH0_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST    (BIT(8))
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_S  8
/** SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents GPIO_EVT_CH1_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST    (BIT(9))
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_S  9
/** SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents GPIO_EVT_CH2_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST    (BIT(10))
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_S  10
/** SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents GPIO_EVT_CH3_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST    (BIT(11))
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_S  11
/** SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents GPIO_EVT_CH4_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST    (BIT(12))
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_S  12
/** SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents GPIO_EVT_CH5_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST    (BIT(13))
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_S  13
/** SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents GPIO_EVT_CH6_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST    (BIT(14))
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_S  14
/** SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents GPIO_EVT_CH7_FALL_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST    (BIT(15))
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_S  15
/** SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents GPIO_EVT_CH0_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST    (BIT(16))
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_S  16
/** SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents GPIO_EVT_CH1_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST    (BIT(17))
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_S  17
/** SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST : R/WTC/SS; bitpos: [18]; default: 0;
 *  Represents GPIO_EVT_CH2_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST    (BIT(18))
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_S  18
/** SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents GPIO_EVT_CH3_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST    (BIT(19))
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_S  19
/** SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents GPIO_EVT_CH4_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST    (BIT(20))
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_S  20
/** SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents GPIO_EVT_CH5_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST    (BIT(21))
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_S  21
/** SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents GPIO_EVT_CH6_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST    (BIT(22))
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_S  22
/** SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents GPIO_EVT_CH7_ANY_EDGE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST    (BIT(23))
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_M  (SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_V << SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_S)
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_S  23
/** SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST : R/WTC/SS; bitpos: [24]; default: 0;
 *  Represents GPIO_EVT_ZERO_DET_POS0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST    (BIT(24))
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_M  (SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_V << SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_S)
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_S  24
/** SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents GPIO_EVT_ZERO_DET_NEG0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST    (BIT(25))
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_M  (SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_V << SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_S)
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_V  0x00000001U
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_S  25
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST    (BIT(28))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_S  28
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST    (BIT(29))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_S  29
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST : R/WTC/SS; bitpos: [30]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST    (BIT(30))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_S  30
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST    (BIT(31))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_S  31

/** SOC_ETM_EVT_ST0_CLR_REG register
 *  Event trigger status clear register
 */
#define SOC_ETM_EVT_ST0_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1ac)
/** SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH0_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR    (BIT(0))
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_RISE_EDGE_ST_CLR_S  0
/** SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH1_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR    (BIT(1))
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_RISE_EDGE_ST_CLR_S  1
/** SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH2_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR    (BIT(2))
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_RISE_EDGE_ST_CLR_S  2
/** SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH3_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR    (BIT(3))
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_RISE_EDGE_ST_CLR_S  3
/** SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH4_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR    (BIT(4))
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_RISE_EDGE_ST_CLR_S  4
/** SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH5_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR    (BIT(5))
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_RISE_EDGE_ST_CLR_S  5
/** SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH6_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR    (BIT(6))
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_RISE_EDGE_ST_CLR_S  6
/** SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH7_RISE_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR    (BIT(7))
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_RISE_EDGE_ST_CLR_S  7
/** SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH0_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR    (BIT(8))
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_FALL_EDGE_ST_CLR_S  8
/** SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH1_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR    (BIT(9))
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_FALL_EDGE_ST_CLR_S  9
/** SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH2_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR    (BIT(10))
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_FALL_EDGE_ST_CLR_S  10
/** SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH3_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR    (BIT(11))
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_FALL_EDGE_ST_CLR_S  11
/** SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH4_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR    (BIT(12))
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_FALL_EDGE_ST_CLR_S  12
/** SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH5_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR    (BIT(13))
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_FALL_EDGE_ST_CLR_S  13
/** SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH6_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR    (BIT(14))
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_FALL_EDGE_ST_CLR_S  14
/** SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH7_FALL_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR    (BIT(15))
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_FALL_EDGE_ST_CLR_S  15
/** SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH0_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR    (BIT(16))
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH0_ANY_EDGE_ST_CLR_S  16
/** SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH1_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR    (BIT(17))
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH1_ANY_EDGE_ST_CLR_S  17
/** SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH2_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR    (BIT(18))
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH2_ANY_EDGE_ST_CLR_S  18
/** SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH3_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR    (BIT(19))
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH3_ANY_EDGE_ST_CLR_S  19
/** SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH4_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR    (BIT(20))
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH4_ANY_EDGE_ST_CLR_S  20
/** SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH5_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR    (BIT(21))
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH5_ANY_EDGE_ST_CLR_S  21
/** SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH6_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR    (BIT(22))
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH6_ANY_EDGE_ST_CLR_S  22
/** SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_CH7_ANY_EDGE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR    (BIT(23))
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR_M  (SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR_V << SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_CH7_ANY_EDGE_ST_CLR_S  23
/** SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_ZERO_DET_POS0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR    (BIT(24))
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR_M  (SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR_V << SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_ZERO_DET_POS0_ST_CLR_S  24
/** SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear GPIO_EVT_ZERO_DET_NEG0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR    (BIT(25))
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR_M  (SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR_V << SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR_S)
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_EVT_ZERO_DET_NEG0_ST_CLR_S  25
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR    (BIT(28))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH0_ST_CLR_S  28
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR    (BIT(29))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH1_ST_CLR_S  29
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR    (BIT(30))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH2_ST_CLR_S  30
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR    (BIT(31))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH3_ST_CLR_S  31

/** SOC_ETM_EVT_ST1_REG register
 *  Event trigger status register
 */
#define SOC_ETM_EVT_ST1_REG (DR_REG_SOC_ETM_BASE + 0x1b0)
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST    (BIT(0))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_S  0
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents LEDC_EVT_DUTY_CHNG_END_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST    (BIT(1))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_S  1
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST    (BIT(2))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_S  2
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST    (BIT(3))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_S  3
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST    (BIT(4))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_S  4
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST    (BIT(5))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_S  5
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST    (BIT(6))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_S  6
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents LEDC_EVT_OVF_CNT_PLS_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST    (BIT(7))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_S  7
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents LEDC_EVT_TIME_OVF_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST    (BIT(8))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_S  8
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents LEDC_EVT_TIME_OVF_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST    (BIT(9))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_S  9
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents LEDC_EVT_TIME_OVF_TIMER2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST    (BIT(10))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_S  10
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents LEDC_EVT_TIME_OVF_TIMER3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST    (BIT(11))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_S  11
/** SOC_ETM_LEDC_EVT_TIMER0_CMP_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents LEDC_EVT_TIMER0_CMP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST    (BIT(12))
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_M  (SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_V << SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_S)
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_S  12
/** SOC_ETM_LEDC_EVT_TIMER1_CMP_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents LEDC_EVT_TIMER1_CMP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST    (BIT(13))
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_M  (SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_V << SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_S)
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_S  13
/** SOC_ETM_LEDC_EVT_TIMER2_CMP_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents LEDC_EVT_TIMER2_CMP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST    (BIT(14))
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_M  (SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_V << SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_S)
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_S  14
/** SOC_ETM_LEDC_EVT_TIMER3_CMP_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents LEDC_EVT_TIMER3_CMP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST    (BIT(15))
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_M  (SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_V << SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_S)
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_S  15
/** SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents TG0_EVT_CNT_CMP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST    (BIT(16))
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_M  (SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_V << SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_S)
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_S  16
/** SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents TG0_EVT_CNT_CMP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST    (BIT(17))
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_M  (SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_V << SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_S)
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_S  17
/** SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST : R/WTC/SS; bitpos: [18]; default: 0;
 *  Represents TG1_EVT_CNT_CMP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST    (BIT(18))
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_M  (SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_V << SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_S)
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_S  18
/** SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents TG1_EVT_CNT_CMP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST    (BIT(19))
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_M  (SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_V << SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_S)
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_S  19
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents SYSTIMER_EVT_CNT_CMP0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST    (BIT(20))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_S  20
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents SYSTIMER_EVT_CNT_CMP1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST    (BIT(21))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_S  21
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents SYSTIMER_EVT_CNT_CMP2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST    (BIT(22))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_S  22
/** SOC_ETM_ADC_EVT_CONV_CMPLT0_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents ADC_EVT_CONV_CMPLT0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST    (BIT(23))
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_M  (SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_V << SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_S)
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_S  23
/** SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST : R/WTC/SS; bitpos: [24]; default: 0;
 *  Represents ADC_EVT_EQ_ABOVE_THRESH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST    (BIT(24))
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_M  (SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_V << SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_S)
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_S  24
/** SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents ADC_EVT_EQ_ABOVE_THRESH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST    (BIT(25))
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_M  (SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_V << SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_S)
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_S  25
/** SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST : R/WTC/SS; bitpos: [26]; default: 0;
 *  Represents ADC_EVT_EQ_BELOW_THRESH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST    (BIT(26))
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_M  (SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_V << SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_S)
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_S  26
/** SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST : R/WTC/SS; bitpos: [27]; default: 0;
 *  Represents ADC_EVT_EQ_BELOW_THRESH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST    (BIT(27))
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_M  (SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_V << SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_S)
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_S  27
/** SOC_ETM_ADC_EVT_RESULT_DONE0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents ADC_EVT_RESULT_DONE0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST    (BIT(28))
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_M  (SOC_ETM_ADC_EVT_RESULT_DONE0_ST_V << SOC_ETM_ADC_EVT_RESULT_DONE0_ST_S)
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_S  28
/** SOC_ETM_ADC_EVT_STOPPED0_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents ADC_EVT_STOPPED0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_STOPPED0_ST    (BIT(29))
#define SOC_ETM_ADC_EVT_STOPPED0_ST_M  (SOC_ETM_ADC_EVT_STOPPED0_ST_V << SOC_ETM_ADC_EVT_STOPPED0_ST_S)
#define SOC_ETM_ADC_EVT_STOPPED0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_STOPPED0_ST_S  29
/** SOC_ETM_ADC_EVT_STARTED0_ST : R/WTC/SS; bitpos: [30]; default: 0;
 *  Represents ADC_EVT_STARTED0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_EVT_STARTED0_ST    (BIT(30))
#define SOC_ETM_ADC_EVT_STARTED0_ST_M  (SOC_ETM_ADC_EVT_STARTED0_ST_V << SOC_ETM_ADC_EVT_STARTED0_ST_S)
#define SOC_ETM_ADC_EVT_STARTED0_ST_V  0x00000001U
#define SOC_ETM_ADC_EVT_STARTED0_ST_S  30

/** SOC_ETM_EVT_ST1_CLR_REG register
 *  Event trigger status clear register
 */
#define SOC_ETM_EVT_ST1_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1b4)
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR    (BIT(0))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH4_ST_CLR_S  0
/** SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_DUTY_CHNG_END_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR    (BIT(1))
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR_M  (SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR_V << SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_DUTY_CHNG_END_CH5_ST_CLR_S  1
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR    (BIT(2))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH0_ST_CLR_S  2
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR    (BIT(3))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH1_ST_CLR_S  3
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR    (BIT(4))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH2_ST_CLR_S  4
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR    (BIT(5))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH3_ST_CLR_S  5
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR    (BIT(6))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH4_ST_CLR_S  6
/** SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_OVF_CNT_PLS_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR    (BIT(7))
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR_M  (SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR_V << SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_OVF_CNT_PLS_CH5_ST_CLR_S  7
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIME_OVF_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR    (BIT(8))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER0_ST_CLR_S  8
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIME_OVF_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR    (BIT(9))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER1_ST_CLR_S  9
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIME_OVF_TIMER2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR    (BIT(10))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER2_ST_CLR_S  10
/** SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIME_OVF_TIMER3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR    (BIT(11))
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR_V << SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIME_OVF_TIMER3_ST_CLR_S  11
/** SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIMER0_CMP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR    (BIT(12))
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR_V << SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER0_CMP_ST_CLR_S  12
/** SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIMER1_CMP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR    (BIT(13))
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR_V << SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER1_CMP_ST_CLR_S  13
/** SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIMER2_CMP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR    (BIT(14))
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR_V << SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER2_CMP_ST_CLR_S  14
/** SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear LEDC_EVT_TIMER3_CMP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR    (BIT(15))
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR_M  (SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR_V << SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR_S)
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_EVT_TIMER3_CMP_ST_CLR_S  15
/** SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear TG0_EVT_CNT_CMP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR    (BIT(16))
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR_M  (SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR_V << SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER0_ST_CLR_S  16
/** SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear TG0_EVT_CNT_CMP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR    (BIT(17))
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR_M  (SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR_V << SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_EVT_CNT_CMP_TIMER1_ST_CLR_S  17
/** SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to clear TG1_EVT_CNT_CMP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR    (BIT(18))
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR_M  (SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR_V << SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER0_ST_CLR_S  18
/** SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear TG1_EVT_CNT_CMP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR    (BIT(19))
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR_M  (SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR_V << SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_EVT_CNT_CMP_TIMER1_ST_CLR_S  19
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear SYSTIMER_EVT_CNT_CMP0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR    (BIT(20))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP0_ST_CLR_S  20
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear SYSTIMER_EVT_CNT_CMP1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR    (BIT(21))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP1_ST_CLR_S  21
/** SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear SYSTIMER_EVT_CNT_CMP2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR    (BIT(22))
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR_M  (SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR_V << SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR_S)
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR_V  0x00000001U
#define SOC_ETM_SYSTIMER_EVT_CNT_CMP2_ST_CLR_S  22
/** SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear ADC_EVT_CONV_CMPLT0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR    (BIT(23))
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR_M  (SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR_V << SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_CONV_CMPLT0_ST_CLR_S  23
/** SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to clear ADC_EVT_EQ_ABOVE_THRESH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR    (BIT(24))
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR_M  (SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR_V << SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH0_ST_CLR_S  24
/** SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear ADC_EVT_EQ_ABOVE_THRESH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR    (BIT(25))
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR_M  (SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR_V << SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR_S)
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_ABOVE_THRESH1_ST_CLR_S  25
/** SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to clear ADC_EVT_EQ_BELOW_THRESH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR    (BIT(26))
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR_M  (SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR_V << SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH0_ST_CLR_S  26
/** SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to clear ADC_EVT_EQ_BELOW_THRESH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR    (BIT(27))
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR_M  (SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR_V << SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR_S)
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_EQ_BELOW_THRESH1_ST_CLR_S  27
/** SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear ADC_EVT_RESULT_DONE0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR    (BIT(28))
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR_M  (SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR_V << SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_RESULT_DONE0_ST_CLR_S  28
/** SOC_ETM_ADC_EVT_STOPPED0_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear ADC_EVT_STOPPED0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_STOPPED0_ST_CLR    (BIT(29))
#define SOC_ETM_ADC_EVT_STOPPED0_ST_CLR_M  (SOC_ETM_ADC_EVT_STOPPED0_ST_CLR_V << SOC_ETM_ADC_EVT_STOPPED0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_STOPPED0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_STOPPED0_ST_CLR_S  29
/** SOC_ETM_ADC_EVT_STARTED0_ST_CLR : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to clear ADC_EVT_STARTED0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_EVT_STARTED0_ST_CLR    (BIT(30))
#define SOC_ETM_ADC_EVT_STARTED0_ST_CLR_M  (SOC_ETM_ADC_EVT_STARTED0_ST_CLR_V << SOC_ETM_ADC_EVT_STARTED0_ST_CLR_S)
#define SOC_ETM_ADC_EVT_STARTED0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_EVT_STARTED0_ST_CLR_S  30

/** SOC_ETM_EVT_ST2_REG register
 *  Event trigger status register
 */
#define SOC_ETM_EVT_ST2_REG (DR_REG_SOC_ETM_BASE + 0x1b8)
/** SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents TMPSNSR_EVT_OVER_LIMIT trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST    (BIT(7))
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_M  (SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_V << SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_S)
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_V  0x00000001U
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_S  7
/** SOC_ETM_I2S0_EVT_RX_DONE_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents I2S0_EVT_RX_DONE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_EVT_RX_DONE_ST    (BIT(8))
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_M  (SOC_ETM_I2S0_EVT_RX_DONE_ST_V << SOC_ETM_I2S0_EVT_RX_DONE_ST_S)
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_V  0x00000001U
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_S  8
/** SOC_ETM_I2S0_EVT_TX_DONE_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents I2S0_EVT_TX_DONE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_EVT_TX_DONE_ST    (BIT(9))
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_M  (SOC_ETM_I2S0_EVT_TX_DONE_ST_V << SOC_ETM_I2S0_EVT_TX_DONE_ST_S)
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_V  0x00000001U
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_S  9
/** SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents I2S0_EVT_X_WORDS_RECEIVED trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST    (BIT(10))
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_M  (SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_V << SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_S)
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_V  0x00000001U
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_S  10
/** SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents I2S0_EVT_X_WORDS_SENT trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST    (BIT(11))
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_M  (SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_V << SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_S)
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_V  0x00000001U
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_S  11
/** SOC_ETM_RTC_EVT_TICK_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents RTC_EVT_TICK trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_RTC_EVT_TICK_ST    (BIT(19))
#define SOC_ETM_RTC_EVT_TICK_ST_M  (SOC_ETM_RTC_EVT_TICK_ST_V << SOC_ETM_RTC_EVT_TICK_ST_S)
#define SOC_ETM_RTC_EVT_TICK_ST_V  0x00000001U
#define SOC_ETM_RTC_EVT_TICK_ST_S  19
/** SOC_ETM_RTC_EVT_OVF_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents RTC_EVT_OVF trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_RTC_EVT_OVF_ST    (BIT(20))
#define SOC_ETM_RTC_EVT_OVF_ST_M  (SOC_ETM_RTC_EVT_OVF_ST_V << SOC_ETM_RTC_EVT_OVF_ST_S)
#define SOC_ETM_RTC_EVT_OVF_ST_V  0x00000001U
#define SOC_ETM_RTC_EVT_OVF_ST_S  20
/** SOC_ETM_RTC_EVT_CMP_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents RTC_EVT_CMP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_RTC_EVT_CMP_ST    (BIT(21))
#define SOC_ETM_RTC_EVT_CMP_ST_M  (SOC_ETM_RTC_EVT_CMP_ST_V << SOC_ETM_RTC_EVT_CMP_ST_S)
#define SOC_ETM_RTC_EVT_CMP_ST_V  0x00000001U
#define SOC_ETM_RTC_EVT_CMP_ST_S  21
/** SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_DONE_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST    (BIT(22))
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_S  22
/** SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_DONE_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST    (BIT(23))
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_S  23
/** SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_SUC_EOF_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST    (BIT(25))
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_S  25
/** SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST : R/WTC/SS; bitpos: [26]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_SUC_EOF_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST    (BIT(26))
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_S  26
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST    (BIT(28))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_S  28
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST    (BIT(29))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_S  29
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_FIFO_FULL_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST    (BIT(31))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_S  31

/** SOC_ETM_EVT_ST2_CLR_REG register
 *  Event trigger status clear register
 */
#define SOC_ETM_EVT_ST2_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1bc)
/** SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear TMPSNSR_EVT_OVER_LIMIT trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR    (BIT(7))
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR_M  (SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR_V << SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR_S)
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR_V  0x00000001U
#define SOC_ETM_TMPSNSR_EVT_OVER_LIMIT_ST_CLR_S  7
/** SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear I2S0_EVT_RX_DONE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR    (BIT(8))
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR_M  (SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR_V << SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR_S)
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_EVT_RX_DONE_ST_CLR_S  8
/** SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear I2S0_EVT_TX_DONE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR    (BIT(9))
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR_M  (SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR_V << SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR_S)
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_EVT_TX_DONE_ST_CLR_S  9
/** SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear I2S0_EVT_X_WORDS_RECEIVED trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR    (BIT(10))
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR_M  (SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR_V << SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR_S)
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_EVT_X_WORDS_RECEIVED_ST_CLR_S  10
/** SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear I2S0_EVT_X_WORDS_SENT trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR    (BIT(11))
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR_M  (SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR_V << SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR_S)
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_EVT_X_WORDS_SENT_ST_CLR_S  11
/** SOC_ETM_RTC_EVT_TICK_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear RTC_EVT_TICK trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_RTC_EVT_TICK_ST_CLR    (BIT(19))
#define SOC_ETM_RTC_EVT_TICK_ST_CLR_M  (SOC_ETM_RTC_EVT_TICK_ST_CLR_V << SOC_ETM_RTC_EVT_TICK_ST_CLR_S)
#define SOC_ETM_RTC_EVT_TICK_ST_CLR_V  0x00000001U
#define SOC_ETM_RTC_EVT_TICK_ST_CLR_S  19
/** SOC_ETM_RTC_EVT_OVF_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear RTC_EVT_OVF trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_RTC_EVT_OVF_ST_CLR    (BIT(20))
#define SOC_ETM_RTC_EVT_OVF_ST_CLR_M  (SOC_ETM_RTC_EVT_OVF_ST_CLR_V << SOC_ETM_RTC_EVT_OVF_ST_CLR_S)
#define SOC_ETM_RTC_EVT_OVF_ST_CLR_V  0x00000001U
#define SOC_ETM_RTC_EVT_OVF_ST_CLR_S  20
/** SOC_ETM_RTC_EVT_CMP_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear RTC_EVT_CMP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_RTC_EVT_CMP_ST_CLR    (BIT(21))
#define SOC_ETM_RTC_EVT_CMP_ST_CLR_M  (SOC_ETM_RTC_EVT_CMP_ST_CLR_V << SOC_ETM_RTC_EVT_CMP_ST_CLR_S)
#define SOC_ETM_RTC_EVT_CMP_ST_CLR_V  0x00000001U
#define SOC_ETM_RTC_EVT_CMP_ST_CLR_S  21
/** SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_DONE_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR    (BIT(22))
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH0_ST_CLR_S  22
/** SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_DONE_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR    (BIT(23))
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_DONE_CH1_ST_CLR_S  23
/** SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_SUC_EOF_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR    (BIT(25))
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH0_ST_CLR_S  25
/** SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_SUC_EOF_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR    (BIT(26))
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_SUC_EOF_CH1_ST_CLR_S  26
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR    (BIT(28))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH0_ST_CLR_S  28
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR    (BIT(29))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_EMPTY_CH1_ST_CLR_S  29
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_FIFO_FULL_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR    (BIT(31))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH0_ST_CLR_S  31

/** SOC_ETM_EVT_ST3_REG register
 *  Event trigger status register
 */
#define SOC_ETM_EVT_ST3_REG (DR_REG_SOC_ETM_BASE + 0x1c0)
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents GDMA_AHB_EVT_IN_FIFO_FULL_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST    (BIT(0))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_S  0
/** SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_DONE_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST    (BIT(2))
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_S  2
/** SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_DONE_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST    (BIT(3))
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_S  3
/** SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_EOF_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST    (BIT(5))
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_S  5
/** SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_EOF_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST    (BIT(6))
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_S  6
/** SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST    (BIT(8))
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_S  8
/** SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST    (BIT(9))
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_S  9
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST    (BIT(11))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_S  11
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST    (BIT(12))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_S  12
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_FIFO_FULL_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST    (BIT(14))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_S  14
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents GDMA_AHB_EVT_OUT_FIFO_FULL_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST    (BIT(15))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_S  15
/** SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents PMU_EVT_SLEEP_WEEKUP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST    (BIT(17))
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_M  (SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_V << SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_S)
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_V  0x00000001U
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_S  17

/** SOC_ETM_EVT_ST3_CLR_REG register
 *  Event trigger status clear register
 */
#define SOC_ETM_EVT_ST3_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1c4)
/** SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_IN_FIFO_FULL_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR    (BIT(0))
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_IN_FIFO_FULL_CH1_ST_CLR_S  0
/** SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_DONE_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR    (BIT(2))
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH0_ST_CLR_S  2
/** SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_DONE_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR    (BIT(3))
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_DONE_CH1_ST_CLR_S  3
/** SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_EOF_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR    (BIT(5))
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH0_ST_CLR_S  5
/** SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_EOF_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR    (BIT(6))
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_EOF_CH1_ST_CLR_S  6
/** SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR    (BIT(8))
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH0_ST_CLR_S  8
/** SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR    (BIT(9))
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_TOTAL_EOF_CH1_ST_CLR_S  9
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR    (BIT(11))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0_ST_CLR_S  11
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR    (BIT(12))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1_ST_CLR_S  12
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_FIFO_FULL_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR    (BIT(14))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH0_ST_CLR_S  14
/** SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_EVT_OUT_FIFO_FULL_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR    (BIT(15))
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_EVT_OUT_FIFO_FULL_CH1_ST_CLR_S  15
/** SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear PMU_EVT_SLEEP_WEEKUP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR    (BIT(17))
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR_M  (SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR_V << SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR_S)
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR_V  0x00000001U
#define SOC_ETM_PMU_EVT_SLEEP_WEEKUP_ST_CLR_S  17

/** SOC_ETM_TASK_ST0_REG register
 *  Task trigger status register
 */
#define SOC_ETM_TASK_ST0_REG (DR_REG_SOC_ETM_BASE + 0x1c8)
/** SOC_ETM_GPIO_TASK_CH0_SET_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents GPIO_TASK_CH0_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH0_SET_ST    (BIT(0))
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_M  (SOC_ETM_GPIO_TASK_CH0_SET_ST_V << SOC_ETM_GPIO_TASK_CH0_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_S  0
/** SOC_ETM_GPIO_TASK_CH1_SET_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents GPIO_TASK_CH1_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH1_SET_ST    (BIT(1))
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_M  (SOC_ETM_GPIO_TASK_CH1_SET_ST_V << SOC_ETM_GPIO_TASK_CH1_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_S  1
/** SOC_ETM_GPIO_TASK_CH2_SET_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents GPIO_TASK_CH2_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH2_SET_ST    (BIT(2))
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_M  (SOC_ETM_GPIO_TASK_CH2_SET_ST_V << SOC_ETM_GPIO_TASK_CH2_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_S  2
/** SOC_ETM_GPIO_TASK_CH3_SET_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents GPIO_TASK_CH3_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH3_SET_ST    (BIT(3))
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_M  (SOC_ETM_GPIO_TASK_CH3_SET_ST_V << SOC_ETM_GPIO_TASK_CH3_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_S  3
/** SOC_ETM_GPIO_TASK_CH4_SET_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents GPIO_TASK_CH4_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH4_SET_ST    (BIT(4))
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_M  (SOC_ETM_GPIO_TASK_CH4_SET_ST_V << SOC_ETM_GPIO_TASK_CH4_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_S  4
/** SOC_ETM_GPIO_TASK_CH5_SET_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents GPIO_TASK_CH5_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH5_SET_ST    (BIT(5))
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_M  (SOC_ETM_GPIO_TASK_CH5_SET_ST_V << SOC_ETM_GPIO_TASK_CH5_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_S  5
/** SOC_ETM_GPIO_TASK_CH6_SET_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents GPIO_TASK_CH6_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH6_SET_ST    (BIT(6))
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_M  (SOC_ETM_GPIO_TASK_CH6_SET_ST_V << SOC_ETM_GPIO_TASK_CH6_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_S  6
/** SOC_ETM_GPIO_TASK_CH7_SET_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents GPIO_TASK_CH7_SET trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH7_SET_ST    (BIT(7))
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_M  (SOC_ETM_GPIO_TASK_CH7_SET_ST_V << SOC_ETM_GPIO_TASK_CH7_SET_ST_S)
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_S  7
/** SOC_ETM_GPIO_TASK_CH0_CLEAR_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents GPIO_TASK_CH0_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST    (BIT(8))
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_S  8
/** SOC_ETM_GPIO_TASK_CH1_CLEAR_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents GPIO_TASK_CH1_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST    (BIT(9))
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_S  9
/** SOC_ETM_GPIO_TASK_CH2_CLEAR_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents GPIO_TASK_CH2_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST    (BIT(10))
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_S  10
/** SOC_ETM_GPIO_TASK_CH3_CLEAR_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents GPIO_TASK_CH3_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST    (BIT(11))
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_S  11
/** SOC_ETM_GPIO_TASK_CH4_CLEAR_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents GPIO_TASK_CH4_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST    (BIT(12))
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_S  12
/** SOC_ETM_GPIO_TASK_CH5_CLEAR_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents GPIO_TASK_CH5_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST    (BIT(13))
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_S  13
/** SOC_ETM_GPIO_TASK_CH6_CLEAR_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents GPIO_TASK_CH6_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST    (BIT(14))
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_S  14
/** SOC_ETM_GPIO_TASK_CH7_CLEAR_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents GPIO_TASK_CH7_CLEAR trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST    (BIT(15))
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_M  (SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_V << SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_S)
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_S  15
/** SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents GPIO_TASK_CH0_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST    (BIT(16))
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_S  16
/** SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents GPIO_TASK_CH1_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST    (BIT(17))
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_S  17
/** SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST : R/WTC/SS; bitpos: [18]; default: 0;
 *  Represents GPIO_TASK_CH2_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST    (BIT(18))
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_S  18
/** SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents GPIO_TASK_CH3_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST    (BIT(19))
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_S  19
/** SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents GPIO_TASK_CH4_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST    (BIT(20))
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_S  20
/** SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents GPIO_TASK_CH5_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST    (BIT(21))
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_S  21
/** SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents GPIO_TASK_CH6_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST    (BIT(22))
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_S  22
/** SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents GPIO_TASK_CH7_TOGGLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST    (BIT(23))
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_M  (SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_V << SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_S)
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_S  23
/** SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST : R/WTC/SS; bitpos: [24]; default: 0;
 *  Represents LEDC_TASK_TIMER0_RES_UPDATE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST    (BIT(24))
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_M  (SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_V << SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_S  24
/** SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents LEDC_TASK_TIMER1_RES_UPDATE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST    (BIT(25))
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_M  (SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_V << SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_S  25
/** SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST : R/WTC/SS; bitpos: [26]; default: 0;
 *  Represents LEDC_TASK_TIMER2_RES_UPDATE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST    (BIT(26))
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_M  (SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_V << SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_S  26
/** SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST : R/WTC/SS; bitpos: [27]; default: 0;
 *  Represents LEDC_TASK_TIMER3_RES_UPDATE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST    (BIT(27))
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_M  (SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_V << SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_S  27
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST    (BIT(28))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_S  28
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST    (BIT(29))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_S  29
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST : R/WTC/SS; bitpos: [30]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST    (BIT(30))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_S  30
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST    (BIT(31))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_S  31

/** SOC_ETM_TASK_ST0_CLR_REG register
 *  Task trigger status clear register
 */
#define SOC_ETM_TASK_ST0_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1cc)
/** SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH0_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR    (BIT(0))
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_SET_ST_CLR_S  0
/** SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH1_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR    (BIT(1))
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_SET_ST_CLR_S  1
/** SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH2_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR    (BIT(2))
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_SET_ST_CLR_S  2
/** SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH3_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR    (BIT(3))
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_SET_ST_CLR_S  3
/** SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH4_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR    (BIT(4))
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_SET_ST_CLR_S  4
/** SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH5_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR    (BIT(5))
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_SET_ST_CLR_S  5
/** SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH6_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR    (BIT(6))
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_SET_ST_CLR_S  6
/** SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH7_SET trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR    (BIT(7))
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR_V << SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_SET_ST_CLR_S  7
/** SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH0_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR    (BIT(8))
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_CLEAR_ST_CLR_S  8
/** SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH1_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR    (BIT(9))
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_CLEAR_ST_CLR_S  9
/** SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH2_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR    (BIT(10))
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_CLEAR_ST_CLR_S  10
/** SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH3_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR    (BIT(11))
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_CLEAR_ST_CLR_S  11
/** SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH4_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR    (BIT(12))
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_CLEAR_ST_CLR_S  12
/** SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH5_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR    (BIT(13))
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_CLEAR_ST_CLR_S  13
/** SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH6_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR    (BIT(14))
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_CLEAR_ST_CLR_S  14
/** SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH7_CLEAR trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR    (BIT(15))
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR_V << SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_CLEAR_ST_CLR_S  15
/** SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH0_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR    (BIT(16))
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH0_TOGGLE_ST_CLR_S  16
/** SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH1_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR    (BIT(17))
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH1_TOGGLE_ST_CLR_S  17
/** SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH2_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR    (BIT(18))
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH2_TOGGLE_ST_CLR_S  18
/** SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH3_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR    (BIT(19))
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH3_TOGGLE_ST_CLR_S  19
/** SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH4_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR    (BIT(20))
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH4_TOGGLE_ST_CLR_S  20
/** SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH5_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR    (BIT(21))
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH5_TOGGLE_ST_CLR_S  21
/** SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH6_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR    (BIT(22))
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH6_TOGGLE_ST_CLR_S  22
/** SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear GPIO_TASK_CH7_TOGGLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR    (BIT(23))
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR_M  (SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR_V << SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR_S)
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR_V  0x00000001U
#define SOC_ETM_GPIO_TASK_CH7_TOGGLE_ST_CLR_S  23
/** SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER0_RES_UPDATE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR    (BIT(24))
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RES_UPDATE_ST_CLR_S  24
/** SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER1_RES_UPDATE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR    (BIT(25))
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RES_UPDATE_ST_CLR_S  25
/** SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER2_RES_UPDATE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR    (BIT(26))
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RES_UPDATE_ST_CLR_S  26
/** SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER3_RES_UPDATE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR    (BIT(27))
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RES_UPDATE_ST_CLR_S  27
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR    (BIT(28))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH0_ST_CLR_S  28
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR    (BIT(29))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH1_ST_CLR_S  29
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR    (BIT(30))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH2_ST_CLR_S  30
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR    (BIT(31))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH3_ST_CLR_S  31

/** SOC_ETM_TASK_ST1_REG register
 *  Task trigger status register
 */
#define SOC_ETM_TASK_ST1_REG (DR_REG_SOC_ETM_BASE + 0x1d0)
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST    (BIT(0))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_S  0
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents LEDC_TASK_DUTY_SCALE_UPDATE_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST    (BIT(1))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_S  1
/** SOC_ETM_LEDC_TASK_TIMER0_CAP_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents LEDC_TASK_TIMER0_CAP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST    (BIT(2))
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_M  (SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_V << SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_S  2
/** SOC_ETM_LEDC_TASK_TIMER1_CAP_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents LEDC_TASK_TIMER1_CAP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST    (BIT(3))
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_M  (SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_V << SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_S  3
/** SOC_ETM_LEDC_TASK_TIMER2_CAP_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents LEDC_TASK_TIMER2_CAP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST    (BIT(4))
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_M  (SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_V << SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_S  4
/** SOC_ETM_LEDC_TASK_TIMER3_CAP_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents LEDC_TASK_TIMER3_CAP trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST    (BIT(5))
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_M  (SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_V << SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_S  5
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST    (BIT(6))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_S  6
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST    (BIT(7))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_S  7
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST    (BIT(8))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_S  8
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST    (BIT(9))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_S  9
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST    (BIT(10))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_S  10
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents LEDC_TASK_SIG_OUT_DIS_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST    (BIT(11))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_S  11
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST    (BIT(12))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_S  12
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST    (BIT(13))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_S  13
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST    (BIT(14))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_S  14
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST    (BIT(15))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_S  15
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST    (BIT(16))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_S  16
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents LEDC_TASK_OVF_CNT_RST_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST    (BIT(17))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_S  17
/** SOC_ETM_LEDC_TASK_TIMER0_RST_ST : R/WTC/SS; bitpos: [18]; default: 0;
 *  Represents LEDC_TASK_TIMER0_RST trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST    (BIT(18))
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_M  (SOC_ETM_LEDC_TASK_TIMER0_RST_ST_V << SOC_ETM_LEDC_TASK_TIMER0_RST_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_S  18
/** SOC_ETM_LEDC_TASK_TIMER1_RST_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents LEDC_TASK_TIMER1_RST trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST    (BIT(19))
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_M  (SOC_ETM_LEDC_TASK_TIMER1_RST_ST_V << SOC_ETM_LEDC_TASK_TIMER1_RST_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_S  19
/** SOC_ETM_LEDC_TASK_TIMER2_RST_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents LEDC_TASK_TIMER2_RST trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST    (BIT(20))
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_M  (SOC_ETM_LEDC_TASK_TIMER2_RST_ST_V << SOC_ETM_LEDC_TASK_TIMER2_RST_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_S  20
/** SOC_ETM_LEDC_TASK_TIMER3_RST_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents LEDC_TASK_TIMER3_RST trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST    (BIT(21))
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_M  (SOC_ETM_LEDC_TASK_TIMER3_RST_ST_V << SOC_ETM_LEDC_TASK_TIMER3_RST_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_S  21
/** SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents LEDC_TASK_TIMER0_RESUME trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST    (BIT(22))
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_M  (SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_V << SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_S  22
/** SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents LEDC_TASK_TIMER1_RESUME trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST    (BIT(23))
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_M  (SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_V << SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_S  23
/** SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST : R/WTC/SS; bitpos: [24]; default: 0;
 *  Represents LEDC_TASK_TIMER2_RESUME trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST    (BIT(24))
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_M  (SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_V << SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_S  24
/** SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents LEDC_TASK_TIMER3_RESUME trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST    (BIT(25))
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_M  (SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_V << SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_S  25
/** SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST : R/WTC/SS; bitpos: [26]; default: 0;
 *  Represents LEDC_TASK_TIMER0_PAUSE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST    (BIT(26))
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_M  (SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_V << SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_S  26
/** SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST : R/WTC/SS; bitpos: [27]; default: 0;
 *  Represents LEDC_TASK_TIMER1_PAUSE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST    (BIT(27))
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_M  (SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_V << SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_S  27
/** SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents LEDC_TASK_TIMER2_PAUSE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST    (BIT(28))
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_M  (SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_V << SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_S  28
/** SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents LEDC_TASK_TIMER3_PAUSE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST    (BIT(29))
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_M  (SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_V << SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_S)
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_S  29
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST : R/WTC/SS; bitpos: [30]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST    (BIT(30))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_S  30
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST    (BIT(31))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_S  31

/** SOC_ETM_TASK_ST1_CLR_REG register
 *  Task trigger status clear register
 */
#define SOC_ETM_TASK_ST1_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1d4)
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR    (BIT(0))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH4_ST_CLR_S  0
/** SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_DUTY_SCALE_UPDATE_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR    (BIT(1))
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_DUTY_SCALE_UPDATE_CH5_ST_CLR_S  1
/** SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER0_CAP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR    (BIT(2))
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_CAP_ST_CLR_S  2
/** SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER1_CAP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR    (BIT(3))
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_CAP_ST_CLR_S  3
/** SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER2_CAP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR    (BIT(4))
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_CAP_ST_CLR_S  4
/** SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER3_CAP trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR    (BIT(5))
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_CAP_ST_CLR_S  5
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR    (BIT(6))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH0_ST_CLR_S  6
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR    (BIT(7))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH1_ST_CLR_S  7
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR    (BIT(8))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH2_ST_CLR_S  8
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR    (BIT(9))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH3_ST_CLR_S  9
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR    (BIT(10))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH4_ST_CLR_S  10
/** SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_SIG_OUT_DIS_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR    (BIT(11))
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_SIG_OUT_DIS_CH5_ST_CLR_S  11
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR    (BIT(12))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH0_ST_CLR_S  12
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR    (BIT(13))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH1_ST_CLR_S  13
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR    (BIT(14))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH2_ST_CLR_S  14
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR    (BIT(15))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH3_ST_CLR_S  15
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR    (BIT(16))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH4_ST_CLR_S  16
/** SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_OVF_CNT_RST_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR    (BIT(17))
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_OVF_CNT_RST_CH5_ST_CLR_S  17
/** SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER0_RST trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR    (BIT(18))
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RST_ST_CLR_S  18
/** SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER1_RST trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR    (BIT(19))
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RST_ST_CLR_S  19
/** SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER2_RST trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR    (BIT(20))
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RST_ST_CLR_S  20
/** SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER3_RST trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR    (BIT(21))
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RST_ST_CLR_S  21
/** SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER0_RESUME trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR    (BIT(22))
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_RESUME_ST_CLR_S  22
/** SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER1_RESUME trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR    (BIT(23))
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_RESUME_ST_CLR_S  23
/** SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER2_RESUME trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR    (BIT(24))
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_RESUME_ST_CLR_S  24
/** SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER3_RESUME trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR    (BIT(25))
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_RESUME_ST_CLR_S  25
/** SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER0_PAUSE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR    (BIT(26))
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER0_PAUSE_ST_CLR_S  26
/** SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER1_PAUSE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR    (BIT(27))
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER1_PAUSE_ST_CLR_S  27
/** SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER2_PAUSE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR    (BIT(28))
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER2_PAUSE_ST_CLR_S  28
/** SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_TIMER3_PAUSE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR    (BIT(29))
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR_M  (SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR_V << SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_TIMER3_PAUSE_ST_CLR_S  29
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR    (BIT(30))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH0_ST_CLR_S  30
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR    (BIT(31))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH1_ST_CLR_S  31

/** SOC_ETM_TASK_ST2_REG register
 *  Task trigger status register
 */
#define SOC_ETM_TASK_ST2_REG (DR_REG_SOC_ETM_BASE + 0x1d8)
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST    (BIT(0))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_S  0
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST    (BIT(1))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_S  1
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST    (BIT(2))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_S  2
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESTART_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST    (BIT(3))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_S  3
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST    (BIT(4))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_S  4
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST : R/WTC/SS; bitpos: [5]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST    (BIT(5))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_S  5
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST    (BIT(6))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_S  6
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST    (BIT(7))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_S  7
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST : R/WTC/SS; bitpos: [8]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST    (BIT(8))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_S  8
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST : R/WTC/SS; bitpos: [9]; default: 0;
 *  Represents LEDC_TASK_GAMMA_PAUSE_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST    (BIT(9))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_S  9
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST : R/WTC/SS; bitpos: [10]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST    (BIT(10))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_S  10
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST : R/WTC/SS; bitpos: [11]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST    (BIT(11))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_S  11
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH2 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST    (BIT(12))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_S  12
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH3 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST    (BIT(13))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_S  13
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH4 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST    (BIT(14))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_S  14
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents LEDC_TASK_GAMMA_RESUME_CH5 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST    (BIT(15))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_S  15
/** SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents TG0_TASK_CNT_START_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST    (BIT(16))
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_M  (SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_V << SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_S)
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_S  16
/** SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents TG0_TASK_ALARM_START_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST    (BIT(17))
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_M  (SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_V << SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_S)
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_S  17
/** SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST : R/WTC/SS; bitpos: [18]; default: 0;
 *  Represents TG0_TASK_CNT_STOP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST    (BIT(18))
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_M  (SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_V << SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_S)
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_S  18
/** SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST : R/WTC/SS; bitpos: [19]; default: 0;
 *  Represents TG0_TASK_CNT_RELOAD_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST    (BIT(19))
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_M  (SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_V << SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_S)
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_S  19
/** SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST : R/WTC/SS; bitpos: [20]; default: 0;
 *  Represents TG0_TASK_CNT_CAP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST    (BIT(20))
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_M  (SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_V << SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_S)
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_S  20
/** SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST : R/WTC/SS; bitpos: [21]; default: 0;
 *  Represents TG0_TASK_CNT_START_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST    (BIT(21))
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_M  (SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_V << SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_S)
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_S  21
/** SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST : R/WTC/SS; bitpos: [22]; default: 0;
 *  Represents TG0_TASK_ALARM_START_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST    (BIT(22))
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_M  (SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_V << SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_S)
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_S  22
/** SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST : R/WTC/SS; bitpos: [23]; default: 0;
 *  Represents TG0_TASK_CNT_STOP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST    (BIT(23))
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_M  (SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_V << SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_S)
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_S  23
/** SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST : R/WTC/SS; bitpos: [24]; default: 0;
 *  Represents TG0_TASK_CNT_RELOAD_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST    (BIT(24))
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_M  (SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_V << SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_S)
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_S  24
/** SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST : R/WTC/SS; bitpos: [25]; default: 0;
 *  Represents TG0_TASK_CNT_CAP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST    (BIT(25))
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_M  (SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_V << SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_S)
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_S  25
/** SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST : R/WTC/SS; bitpos: [26]; default: 0;
 *  Represents TG1_TASK_CNT_START_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST    (BIT(26))
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_M  (SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_V << SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_S)
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_S  26
/** SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST : R/WTC/SS; bitpos: [27]; default: 0;
 *  Represents TG1_TASK_ALARM_START_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST    (BIT(27))
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_M  (SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_V << SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_S)
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_S  27
/** SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents TG1_TASK_CNT_STOP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST    (BIT(28))
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_M  (SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_V << SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_S)
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_S  28
/** SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents TG1_TASK_CNT_RELOAD_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST    (BIT(29))
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_M  (SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_V << SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_S)
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_S  29
/** SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST : R/WTC/SS; bitpos: [30]; default: 0;
 *  Represents TG1_TASK_CNT_CAP_TIMER0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST    (BIT(30))
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_M  (SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_V << SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_S)
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_S  30
/** SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents TG1_TASK_CNT_START_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST    (BIT(31))
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_M  (SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_V << SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_S)
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_S  31

/** SOC_ETM_TASK_ST2_CLR_REG register
 *  Task trigger status clear register
 */
#define SOC_ETM_TASK_ST2_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1dc)
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR    (BIT(0))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH2_ST_CLR_S  0
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR    (BIT(1))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH3_ST_CLR_S  1
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR    (BIT(2))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH4_ST_CLR_S  2
/** SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESTART_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR    (BIT(3))
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESTART_CH5_ST_CLR_S  3
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR    (BIT(4))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH0_ST_CLR_S  4
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR : WT; bitpos: [5]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR    (BIT(5))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH1_ST_CLR_S  5
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR    (BIT(6))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH2_ST_CLR_S  6
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR    (BIT(7))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH3_ST_CLR_S  7
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR : WT; bitpos: [8]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR    (BIT(8))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH4_ST_CLR_S  8
/** SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR : WT; bitpos: [9]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_PAUSE_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR    (BIT(9))
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_PAUSE_CH5_ST_CLR_S  9
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR : WT; bitpos: [10]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR    (BIT(10))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH0_ST_CLR_S  10
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR : WT; bitpos: [11]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR    (BIT(11))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH1_ST_CLR_S  11
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH2 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR    (BIT(12))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH2_ST_CLR_S  12
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH3 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR    (BIT(13))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH3_ST_CLR_S  13
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH4 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR    (BIT(14))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH4_ST_CLR_S  14
/** SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear LEDC_TASK_GAMMA_RESUME_CH5 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR    (BIT(15))
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR_M  (SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR_V << SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR_S)
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR_V  0x00000001U
#define SOC_ETM_LEDC_TASK_GAMMA_RESUME_CH5_ST_CLR_S  15
/** SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_START_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR    (BIT(16))
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_START_TIMER0_ST_CLR_S  16
/** SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear TG0_TASK_ALARM_START_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR    (BIT(17))
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR_M  (SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR_V << SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER0_ST_CLR_S  17
/** SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR : WT; bitpos: [18]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_STOP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR    (BIT(18))
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER0_ST_CLR_S  18
/** SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR : WT; bitpos: [19]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_RELOAD_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR    (BIT(19))
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER0_ST_CLR_S  19
/** SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR : WT; bitpos: [20]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_CAP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR    (BIT(20))
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER0_ST_CLR_S  20
/** SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR : WT; bitpos: [21]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_START_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR    (BIT(21))
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_START_TIMER1_ST_CLR_S  21
/** SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR : WT; bitpos: [22]; default: 0;
 *  Configures whether or not to clear TG0_TASK_ALARM_START_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR    (BIT(22))
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR_M  (SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR_V << SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_ALARM_START_TIMER1_ST_CLR_S  22
/** SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR : WT; bitpos: [23]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_STOP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR    (BIT(23))
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_STOP_TIMER1_ST_CLR_S  23
/** SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR : WT; bitpos: [24]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_RELOAD_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR    (BIT(24))
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_RELOAD_TIMER1_ST_CLR_S  24
/** SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR : WT; bitpos: [25]; default: 0;
 *  Configures whether or not to clear TG0_TASK_CNT_CAP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR    (BIT(25))
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR_M  (SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR_V << SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG0_TASK_CNT_CAP_TIMER1_ST_CLR_S  25
/** SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR : WT; bitpos: [26]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_START_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR    (BIT(26))
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_START_TIMER0_ST_CLR_S  26
/** SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR : WT; bitpos: [27]; default: 0;
 *  Configures whether or not to clear TG1_TASK_ALARM_START_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR    (BIT(27))
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR_M  (SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR_V << SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER0_ST_CLR_S  27
/** SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_STOP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR    (BIT(28))
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER0_ST_CLR_S  28
/** SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_RELOAD_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR    (BIT(29))
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER0_ST_CLR_S  29
/** SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR : WT; bitpos: [30]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_CAP_TIMER0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR    (BIT(30))
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER0_ST_CLR_S  30
/** SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_START_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR    (BIT(31))
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_START_TIMER1_ST_CLR_S  31

/** SOC_ETM_TASK_ST3_REG register
 *  Task trigger status register
 */
#define SOC_ETM_TASK_ST3_REG (DR_REG_SOC_ETM_BASE + 0x1e0)
/** SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents TG1_TASK_ALARM_START_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST    (BIT(0))
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_M  (SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_V << SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_S)
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_S  0
/** SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST : R/WTC/SS; bitpos: [1]; default: 0;
 *  Represents TG1_TASK_CNT_STOP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST    (BIT(1))
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_M  (SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_V << SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_S)
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_S  1
/** SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents TG1_TASK_CNT_RELOAD_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST    (BIT(2))
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_M  (SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_V << SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_S)
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_S  2
/** SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST : R/WTC/SS; bitpos: [3]; default: 0;
 *  Represents TG1_TASK_CNT_CAP_TIMER1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST    (BIT(3))
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_M  (SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_V << SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_S)
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_S  3
/** SOC_ETM_ADC_TASK_SAMPLE0_ST : R/WTC/SS; bitpos: [4]; default: 0;
 *  Represents ADC_TASK_SAMPLE0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_TASK_SAMPLE0_ST    (BIT(4))
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_M  (SOC_ETM_ADC_TASK_SAMPLE0_ST_V << SOC_ETM_ADC_TASK_SAMPLE0_ST_S)
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_V  0x00000001U
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_S  4
/** SOC_ETM_ADC_TASK_START0_ST : R/WTC/SS; bitpos: [6]; default: 0;
 *  Represents ADC_TASK_START0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_TASK_START0_ST    (BIT(6))
#define SOC_ETM_ADC_TASK_START0_ST_M  (SOC_ETM_ADC_TASK_START0_ST_V << SOC_ETM_ADC_TASK_START0_ST_S)
#define SOC_ETM_ADC_TASK_START0_ST_V  0x00000001U
#define SOC_ETM_ADC_TASK_START0_ST_S  6
/** SOC_ETM_ADC_TASK_STOP0_ST : R/WTC/SS; bitpos: [7]; default: 0;
 *  Represents ADC_TASK_STOP0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_ADC_TASK_STOP0_ST    (BIT(7))
#define SOC_ETM_ADC_TASK_STOP0_ST_M  (SOC_ETM_ADC_TASK_STOP0_ST_V << SOC_ETM_ADC_TASK_STOP0_ST_S)
#define SOC_ETM_ADC_TASK_STOP0_ST_V  0x00000001U
#define SOC_ETM_ADC_TASK_STOP0_ST_S  7
/** SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST : R/WTC/SS; bitpos: [12]; default: 0;
 *  Represents TMPSNSR_TASK_START_SAMPLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST    (BIT(12))
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_M  (SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_V << SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_S)
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_V  0x00000001U
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_S  12
/** SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST : R/WTC/SS; bitpos: [13]; default: 0;
 *  Represents TMPSNSR_TASK_STOP_SAMPLE trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST    (BIT(13))
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_M  (SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_V << SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_S)
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_V  0x00000001U
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_S  13
/** SOC_ETM_I2S0_TASK_START_RX_ST : R/WTC/SS; bitpos: [14]; default: 0;
 *  Represents I2S0_TASK_START_RX trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_TASK_START_RX_ST    (BIT(14))
#define SOC_ETM_I2S0_TASK_START_RX_ST_M  (SOC_ETM_I2S0_TASK_START_RX_ST_V << SOC_ETM_I2S0_TASK_START_RX_ST_S)
#define SOC_ETM_I2S0_TASK_START_RX_ST_V  0x00000001U
#define SOC_ETM_I2S0_TASK_START_RX_ST_S  14
/** SOC_ETM_I2S0_TASK_START_TX_ST : R/WTC/SS; bitpos: [15]; default: 0;
 *  Represents I2S0_TASK_START_TX trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_TASK_START_TX_ST    (BIT(15))
#define SOC_ETM_I2S0_TASK_START_TX_ST_M  (SOC_ETM_I2S0_TASK_START_TX_ST_V << SOC_ETM_I2S0_TASK_START_TX_ST_S)
#define SOC_ETM_I2S0_TASK_START_TX_ST_V  0x00000001U
#define SOC_ETM_I2S0_TASK_START_TX_ST_S  15
/** SOC_ETM_I2S0_TASK_STOP_RX_ST : R/WTC/SS; bitpos: [16]; default: 0;
 *  Represents I2S0_TASK_STOP_RX trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_TASK_STOP_RX_ST    (BIT(16))
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_M  (SOC_ETM_I2S0_TASK_STOP_RX_ST_V << SOC_ETM_I2S0_TASK_STOP_RX_ST_S)
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_V  0x00000001U
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_S  16
/** SOC_ETM_I2S0_TASK_STOP_TX_ST : R/WTC/SS; bitpos: [17]; default: 0;
 *  Represents I2S0_TASK_STOP_TX trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_I2S0_TASK_STOP_TX_ST    (BIT(17))
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_M  (SOC_ETM_I2S0_TASK_STOP_TX_ST_V << SOC_ETM_I2S0_TASK_STOP_TX_ST_S)
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_V  0x00000001U
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_S  17
/** SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST : R/WTC/SS; bitpos: [28]; default: 0;
 *  Represents GDMA_AHB_TASK_IN_START_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST    (BIT(28))
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_M  (SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_V << SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_S  28
/** SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST : R/WTC/SS; bitpos: [29]; default: 0;
 *  Represents GDMA_AHB_TASK_IN_START_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST    (BIT(29))
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_M  (SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_V << SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_S  29
/** SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST : R/WTC/SS; bitpos: [31]; default: 0;
 *  Represents GDMA_AHB_TASK_OUT_START_CH0 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST    (BIT(31))
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_M  (SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_V << SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_S)
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_S  31

/** SOC_ETM_TASK_ST3_CLR_REG register
 *  Task trigger status clear register
 */
#define SOC_ETM_TASK_ST3_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1e4)
/** SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear TG1_TASK_ALARM_START_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR    (BIT(0))
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR_M  (SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR_V << SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_ALARM_START_TIMER1_ST_CLR_S  0
/** SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR : WT; bitpos: [1]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_STOP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR    (BIT(1))
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_STOP_TIMER1_ST_CLR_S  1
/** SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_RELOAD_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR    (BIT(2))
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_RELOAD_TIMER1_ST_CLR_S  2
/** SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR : WT; bitpos: [3]; default: 0;
 *  Configures whether or not to clear TG1_TASK_CNT_CAP_TIMER1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR    (BIT(3))
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR_M  (SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR_V << SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR_S)
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR_V  0x00000001U
#define SOC_ETM_TG1_TASK_CNT_CAP_TIMER1_ST_CLR_S  3
/** SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR : WT; bitpos: [4]; default: 0;
 *  Configures whether or not to clear ADC_TASK_SAMPLE0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR    (BIT(4))
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR_M  (SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR_V << SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR_S)
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_TASK_SAMPLE0_ST_CLR_S  4
/** SOC_ETM_ADC_TASK_START0_ST_CLR : WT; bitpos: [6]; default: 0;
 *  Configures whether or not to clear ADC_TASK_START0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_TASK_START0_ST_CLR    (BIT(6))
#define SOC_ETM_ADC_TASK_START0_ST_CLR_M  (SOC_ETM_ADC_TASK_START0_ST_CLR_V << SOC_ETM_ADC_TASK_START0_ST_CLR_S)
#define SOC_ETM_ADC_TASK_START0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_TASK_START0_ST_CLR_S  6
/** SOC_ETM_ADC_TASK_STOP0_ST_CLR : WT; bitpos: [7]; default: 0;
 *  Configures whether or not to clear ADC_TASK_STOP0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_ADC_TASK_STOP0_ST_CLR    (BIT(7))
#define SOC_ETM_ADC_TASK_STOP0_ST_CLR_M  (SOC_ETM_ADC_TASK_STOP0_ST_CLR_V << SOC_ETM_ADC_TASK_STOP0_ST_CLR_S)
#define SOC_ETM_ADC_TASK_STOP0_ST_CLR_V  0x00000001U
#define SOC_ETM_ADC_TASK_STOP0_ST_CLR_S  7
/** SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR : WT; bitpos: [12]; default: 0;
 *  Configures whether or not to clear TMPSNSR_TASK_START_SAMPLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR    (BIT(12))
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR_M  (SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR_V << SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR_S)
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR_V  0x00000001U
#define SOC_ETM_TMPSNSR_TASK_START_SAMPLE_ST_CLR_S  12
/** SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR : WT; bitpos: [13]; default: 0;
 *  Configures whether or not to clear TMPSNSR_TASK_STOP_SAMPLE trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR    (BIT(13))
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR_M  (SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR_V << SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR_S)
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR_V  0x00000001U
#define SOC_ETM_TMPSNSR_TASK_STOP_SAMPLE_ST_CLR_S  13
/** SOC_ETM_I2S0_TASK_START_RX_ST_CLR : WT; bitpos: [14]; default: 0;
 *  Configures whether or not to clear I2S0_TASK_START_RX trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_TASK_START_RX_ST_CLR    (BIT(14))
#define SOC_ETM_I2S0_TASK_START_RX_ST_CLR_M  (SOC_ETM_I2S0_TASK_START_RX_ST_CLR_V << SOC_ETM_I2S0_TASK_START_RX_ST_CLR_S)
#define SOC_ETM_I2S0_TASK_START_RX_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_TASK_START_RX_ST_CLR_S  14
/** SOC_ETM_I2S0_TASK_START_TX_ST_CLR : WT; bitpos: [15]; default: 0;
 *  Configures whether or not to clear I2S0_TASK_START_TX trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_TASK_START_TX_ST_CLR    (BIT(15))
#define SOC_ETM_I2S0_TASK_START_TX_ST_CLR_M  (SOC_ETM_I2S0_TASK_START_TX_ST_CLR_V << SOC_ETM_I2S0_TASK_START_TX_ST_CLR_S)
#define SOC_ETM_I2S0_TASK_START_TX_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_TASK_START_TX_ST_CLR_S  15
/** SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR : WT; bitpos: [16]; default: 0;
 *  Configures whether or not to clear I2S0_TASK_STOP_RX trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR    (BIT(16))
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR_M  (SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR_V << SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR_S)
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_TASK_STOP_RX_ST_CLR_S  16
/** SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR : WT; bitpos: [17]; default: 0;
 *  Configures whether or not to clear I2S0_TASK_STOP_TX trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR    (BIT(17))
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR_M  (SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR_V << SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR_S)
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR_V  0x00000001U
#define SOC_ETM_I2S0_TASK_STOP_TX_ST_CLR_S  17
/** SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR : WT; bitpos: [28]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_TASK_IN_START_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR    (BIT(28))
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH0_ST_CLR_S  28
/** SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR : WT; bitpos: [29]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_TASK_IN_START_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR    (BIT(29))
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_IN_START_CH1_ST_CLR_S  29
/** SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR : WT; bitpos: [31]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_TASK_OUT_START_CH0 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR    (BIT(31))
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR_M  (SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR_V << SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH0_ST_CLR_S  31

/** SOC_ETM_TASK_ST4_REG register
 *  Task trigger status register
 */
#define SOC_ETM_TASK_ST4_REG (DR_REG_SOC_ETM_BASE + 0x1e8)
/** SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST : R/WTC/SS; bitpos: [0]; default: 0;
 *  Represents GDMA_AHB_TASK_OUT_START_CH1 trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST    (BIT(0))
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_M  (SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_V << SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_S)
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_S  0
/** SOC_ETM_PMU_TASK_SLEEP_REQ_ST : R/WTC/SS; bitpos: [2]; default: 0;
 *  Represents PMU_TASK_SLEEP_REQ trigger status.
 *  0: Not triggered
 *  1: Triggered
 */
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST    (BIT(2))
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_M  (SOC_ETM_PMU_TASK_SLEEP_REQ_ST_V << SOC_ETM_PMU_TASK_SLEEP_REQ_ST_S)
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_V  0x00000001U
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_S  2

/** SOC_ETM_TASK_ST4_CLR_REG register
 *  Task trigger status clear register
 */
#define SOC_ETM_TASK_ST4_CLR_REG (DR_REG_SOC_ETM_BASE + 0x1ec)
/** SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR : WT; bitpos: [0]; default: 0;
 *  Configures whether or not to clear GDMA_AHB_TASK_OUT_START_CH1 trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR    (BIT(0))
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR_M  (SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR_V << SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR_S)
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR_V  0x00000001U
#define SOC_ETM_GDMA_AHB_TASK_OUT_START_CH1_ST_CLR_S  0
/** SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR : WT; bitpos: [2]; default: 0;
 *  Configures whether or not to clear PMU_TASK_SLEEP_REQ trigger status.
 *  0: Invalid. No effect
 *  1: Clear
 */
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR    (BIT(2))
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR_M  (SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR_V << SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR_S)
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR_V  0x00000001U
#define SOC_ETM_PMU_TASK_SLEEP_REQ_ST_CLR_S  2

/** SOC_ETM_CLK_EN_REG register
 *  ETM clock enable register
 */
#define SOC_ETM_CLK_EN_REG (DR_REG_SOC_ETM_BASE + 0x1f0)
/** SOC_ETM_CLK_EN : R/W; bitpos: [0]; default: 0;
 *  Configures whether or not to open register clock gate.
 *  0: Open the clock gate only when application writes registers
 *  1: Force open the clock gate for register
 */
#define SOC_ETM_CLK_EN    (BIT(0))
#define SOC_ETM_CLK_EN_M  (SOC_ETM_CLK_EN_V << SOC_ETM_CLK_EN_S)
#define SOC_ETM_CLK_EN_V  0x00000001U
#define SOC_ETM_CLK_EN_S  0

/** SOC_ETM_DATE_REG register
 *  Version control register
 */
#define SOC_ETM_DATE_REG (DR_REG_SOC_ETM_BASE + 0x1f4)
/** SOC_ETM_DATE : R/W; bitpos: [27:0]; default: 36737361;
 *  Version control register.
 */
#define SOC_ETM_DATE    0x0FFFFFFFU
#define SOC_ETM_DATE_M  (SOC_ETM_DATE_V << SOC_ETM_DATE_S)
#define SOC_ETM_DATE_V  0x0FFFFFFFU
#define SOC_ETM_DATE_S  0

#ifdef __cplusplus
}
#endif
