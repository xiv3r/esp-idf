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

/** BUS_MONITOR_CORE_0_MONTR_ENA_REG register
 *  Configures whether to enable HP CPU monitoring
 */
#define BUS_MONITOR_CORE_0_MONTR_ENA_REG (DR_REG_BUS_MONITOR_BASE + 0x0)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA : R/W; bitpos: [0]; default: 0;
 *  Configures whether to monitor read operations in region 0 by the Data bus.
 *  0: Not monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA    (BIT(0))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_ENA_S  0
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA : R/W; bitpos: [1]; default: 0;
 *  Configures whether to monitor write operations in region 0 by the Data bus.
 *  0: Not monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA    (BIT(1))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_ENA_S  1
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA : R/W; bitpos: [2]; default: 0;
 *  Configures whether to monitor read operations in region 1 by the Data bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA    (BIT(2))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_ENA_S  2
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA : R/W; bitpos: [3]; default: 0;
 *  Configures whether to monitor write operations in region 1 by the Data bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA    (BIT(3))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_ENA_S  3
/** BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA : R/W; bitpos: [4]; default: 0;
 *  Configures whether to monitor read operations in region 0 by the Peripheral bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA    (BIT(4))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_ENA_S  4
/** BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA : R/W; bitpos: [5]; default: 0;
 *  Configures whether to monitor write operations in region 0 by the Peripheral bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA    (BIT(5))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_ENA_S  5
/** BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA : R/W; bitpos: [6]; default: 0;
 *  Configures whether to monitor read operations in region 1 by the Peripheral bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA    (BIT(6))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_ENA_S  6
/** BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA : R/W; bitpos: [7]; default: 0;
 *  Configures whether to monitor write operations in region 1 by the Peripheral bus.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA    (BIT(7))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_ENA_S  7
/** BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA : R/W; bitpos: [8]; default: 0;
 *  Configures whether to monitor SP exceeding the lower bound address of SP monitored
 *  region.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA    (BIT(8))
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA_M  (BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA_V << BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_ENA_S  8
/** BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA : R/W; bitpos: [9]; default: 0;
 *  Configures whether to monitor SP exceeding the upper bound address of SP monitored
 *  region.
 *  0: Not Monitor
 *  1: Monitor
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA    (BIT(9))
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA_M  (BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA_V << BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_ENA_S  9

/** BUS_MONITOR_CORE_0_INTR_RAW_REG register
 *  HP CPU monitor raw interrupt status register
 */
#define BUS_MONITOR_CORE_0_INTR_RAW_REG (DR_REG_BUS_MONITOR_BASE + 0x4)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW : RO; bitpos: [0]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW    (BIT(0))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_RAW_S  0
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW : RO; bitpos: [1]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW    (BIT(1))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_RAW_S  1
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW : RO; bitpos: [2]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW    (BIT(2))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_RAW_S  2
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW : RO; bitpos: [3]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW    (BIT(3))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_RAW_S  3
/** BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW : RO; bitpos: [4]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW    (BIT(4))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW_V << BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_RAW_S  4
/** BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW : RO; bitpos: [5]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW    (BIT(5))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW_V << BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_RAW_S  5
/** BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW : RO; bitpos: [6]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW    (BIT(6))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW_V << BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_RAW_S  6
/** BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW : RO; bitpos: [7]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW    (BIT(7))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW_V << BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_RAW_S  7
/** BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW : RO; bitpos: [8]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_SP_SPILL_MIN_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW    (BIT(8))
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW_M  (BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW_V << BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_RAW_S  8
/** BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW : RO; bitpos: [9]; default: 0;
 *  The raw interrupt status of BUS_MONITOR_CORE_0_SP_SPILL_MAX_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW    (BIT(9))
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW_M  (BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW_V << BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_RAW_S  9

/** BUS_MONITOR_CORE_0_INTR_ENA_REG register
 *  HP CPU monitor interrupt enable register
 */
#define BUS_MONITOR_CORE_0_INTR_ENA_REG (DR_REG_BUS_MONITOR_BASE + 0x8)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA : R/W; bitpos: [0]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA    (BIT(0))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INTR_ENA_S  0
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA : R/W; bitpos: [1]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA    (BIT(1))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INTR_ENA_S  1
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA : R/W; bitpos: [2]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA    (BIT(2))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INTR_ENA_S  2
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA : R/W; bitpos: [3]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA    (BIT(3))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INTR_ENA_S  3
/** BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA : R/W; bitpos: [4]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA    (BIT(4))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INTR_ENA_S  4
/** BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA : R/W; bitpos: [5]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA    (BIT(5))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INTR_ENA_S  5
/** BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA : R/W; bitpos: [6]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA    (BIT(6))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INTR_ENA_S  6
/** BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA : R/W; bitpos: [7]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA    (BIT(7))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA_V << BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INTR_ENA_S  7
/** BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA : R/W; bitpos: [8]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_SP_SPILL_MIN_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA    (BIT(8))
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA_M  (BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA_V << BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_INTR_ENA_S  8
/** BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA : R/W; bitpos: [9]; default: 0;
 *  Write 1 to enable BUS_MONITOR_CORE_0_SP_SPILL_MAX_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA    (BIT(9))
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA_M  (BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA_V << BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_INTR_ENA_S  9

/** BUS_MONITOR_CORE_0_INTR_CLR_REG register
 *  HP CPU monitor interrupt clear register
 */
#define BUS_MONITOR_CORE_0_INTR_CLR_REG (DR_REG_BUS_MONITOR_BASE + 0xc)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR : WT; bitpos: [0]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR    (BIT(0))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_RD_CLR_S  0
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR : WT; bitpos: [1]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR    (BIT(1))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_WR_CLR_S  1
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR : WT; bitpos: [2]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR    (BIT(2))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_RD_CLR_S  2
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR : WT; bitpos: [3]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR    (BIT(3))
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_WR_CLR_S  3
/** BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR : WT; bitpos: [4]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_PIF_0_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR    (BIT(4))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR_V << BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_RD_CLR_S  4
/** BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR : WT; bitpos: [5]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_PIF_0_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR    (BIT(5))
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR_V << BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_0_WR_CLR_S  5
/** BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR : WT; bitpos: [6]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_PIF_1_RD_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR    (BIT(6))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR_V << BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_RD_CLR_S  6
/** BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR : WT; bitpos: [7]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_AREA_PIF_1_WR_INT.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR    (BIT(7))
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR_V << BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_AREA_PIF_1_WR_CLR_S  7
/** BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR : WT; bitpos: [8]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_SP_SPILL_MIN_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR    (BIT(8))
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR_M  (BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR_V << BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MIN_CLR_S  8
/** BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR : WT; bitpos: [9]; default: 0;
 *  Write 1 to clear BUS_MONITOR_CORE_0_SP_SPILL_MAX_INT.
 */
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR    (BIT(9))
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR_M  (BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR_V << BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR_S)
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR_V  0x00000001U
#define BUS_MONITOR_CORE_0_SP_SPILL_MAX_CLR_S  9

/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_REG register
 *  Configures lower boundary address of region 0 monitored on Data bus
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_REG (DR_REG_BUS_MONITOR_BASE + 0x10)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Configures the lower bound address of Data bus region 0.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MIN_S  0

/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_REG register
 *  Configures upper boundary address of region 0 monitored on Data bus
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_REG (DR_REG_BUS_MONITOR_BASE + 0x14)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Configures the upper bound address of Data bus region 0.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_V << BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_0_MAX_S  0

/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_REG register
 *  Configures lower boundary address of region 1 monitored on Data bus
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_REG (DR_REG_BUS_MONITOR_BASE + 0x18)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Configures the lower bound address of Data bus region 1.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MIN_S  0

/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_REG register
 *  Configures upper boundary address of region 1 monitored on Data bus
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_REG (DR_REG_BUS_MONITOR_BASE + 0x1c)
/** BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Configures the upper bound address of Data bus region 1.
 */
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_M  (BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_V << BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_S)
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_DRAM0_1_MAX_S  0

/** BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_REG register
 *  Configures lower boundary address of region 0 monitored on Peripheral bus
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_REG (DR_REG_BUS_MONITOR_BASE + 0x20)
/** BUS_MONITOR_CORE_0_AREA_PIF_0_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Configures the lower bound address of Peripheral bus region 0.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MIN    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_V << BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MIN_S  0

/** BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_REG register
 *  Configures upper boundary address of region 0 monitored on Peripheral bus
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_REG (DR_REG_BUS_MONITOR_BASE + 0x24)
/** BUS_MONITOR_CORE_0_AREA_PIF_0_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Configures the upper bound address of Peripheral bus region 0.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MAX    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_M  (BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_V << BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_0_MAX_S  0

/** BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_REG register
 *  Configures lower boundary address of region 1 monitored on Peripheral bus
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_REG (DR_REG_BUS_MONITOR_BASE + 0x28)
/** BUS_MONITOR_CORE_0_AREA_PIF_1_MIN : R/W; bitpos: [31:0]; default: 4294967295;
 *  Configures the lower bound address of Peripheral bus region 1.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MIN    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_V << BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MIN_S  0

/** BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_REG register
 *  Configures upper boundary address of region 1 monitored on Peripheral bus
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_REG (DR_REG_BUS_MONITOR_BASE + 0x2c)
/** BUS_MONITOR_CORE_0_AREA_PIF_1_MAX : R/W; bitpos: [31:0]; default: 0;
 *  Configures the upper bound address of Peripheral bus region 1.
 */
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MAX    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_M  (BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_V << BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_S)
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PIF_1_MAX_S  0

/** BUS_MONITOR_CORE_0_AREA_PC_REG register
 *  Represents the PC value when HP CPU region monitor is triggered
 */
#define BUS_MONITOR_CORE_0_AREA_PC_REG (DR_REG_BUS_MONITOR_BASE + 0x30)
/** BUS_MONITOR_CORE_0_AREA_PC : RO; bitpos: [31:0]; default: 0;
 *  Represents the PC value when an interrupt is triggered during region monitoring.
 */
#define BUS_MONITOR_CORE_0_AREA_PC    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PC_M  (BUS_MONITOR_CORE_0_AREA_PC_V << BUS_MONITOR_CORE_0_AREA_PC_S)
#define BUS_MONITOR_CORE_0_AREA_PC_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_PC_S  0

/** BUS_MONITOR_CORE_0_AREA_SP_REG register
 *  Represents the SP value when HP CPU region monitor is triggered
 */
#define BUS_MONITOR_CORE_0_AREA_SP_REG (DR_REG_BUS_MONITOR_BASE + 0x34)
/** BUS_MONITOR_CORE_0_AREA_SP : RO; bitpos: [31:0]; default: 0;
 *  Represents the SP value when an interrupt is triggered during region monitoring.
 */
#define BUS_MONITOR_CORE_0_AREA_SP    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_SP_M  (BUS_MONITOR_CORE_0_AREA_SP_V << BUS_MONITOR_CORE_0_AREA_SP_S)
#define BUS_MONITOR_CORE_0_AREA_SP_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_AREA_SP_S  0

/** BUS_MONITOR_CORE_0_SP_MIN_REG register
 *  Configures SP monitoring lower boundary address
 */
#define BUS_MONITOR_CORE_0_SP_MIN_REG (DR_REG_BUS_MONITOR_BASE + 0x38)
/** BUS_MONITOR_CORE_0_SP_MIN : R/W; bitpos: [31:0]; default: 0;
 *  Configures the lower bound address of SP monitored region.
 */
#define BUS_MONITOR_CORE_0_SP_MIN    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_MIN_M  (BUS_MONITOR_CORE_0_SP_MIN_V << BUS_MONITOR_CORE_0_SP_MIN_S)
#define BUS_MONITOR_CORE_0_SP_MIN_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_MIN_S  0

/** BUS_MONITOR_CORE_0_SP_MAX_REG register
 *  Configures SP monitoring upper boundary address
 */
#define BUS_MONITOR_CORE_0_SP_MAX_REG (DR_REG_BUS_MONITOR_BASE + 0x3c)
/** BUS_MONITOR_CORE_0_SP_MAX : R/W; bitpos: [31:0]; default: 4294967295;
 *  Configures the upper bound address of SP monitored region.
 */
#define BUS_MONITOR_CORE_0_SP_MAX    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_MAX_M  (BUS_MONITOR_CORE_0_SP_MAX_V << BUS_MONITOR_CORE_0_SP_MAX_S)
#define BUS_MONITOR_CORE_0_SP_MAX_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_MAX_S  0

/** BUS_MONITOR_CORE_0_SP_PC_REG register
 *  Represents the PC value when HP CPU SP monitor is triggered
 */
#define BUS_MONITOR_CORE_0_SP_PC_REG (DR_REG_BUS_MONITOR_BASE + 0x40)
/** BUS_MONITOR_CORE_0_SP_PC : RO; bitpos: [31:0]; default: 0;
 *  Represents the PC value when SP monitoring is triggered.
 */
#define BUS_MONITOR_CORE_0_SP_PC    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_PC_M  (BUS_MONITOR_CORE_0_SP_PC_V << BUS_MONITOR_CORE_0_SP_PC_S)
#define BUS_MONITOR_CORE_0_SP_PC_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_SP_PC_S  0

/** BUS_MONITOR_CORE_0_RCD_EN_REG register
 *  HP CPU PC logging enable register
 */
#define BUS_MONITOR_CORE_0_RCD_EN_REG (DR_REG_BUS_MONITOR_BASE + 0x44)
/** BUS_MONITOR_CORE_0_RCD_RECORDEN : R/W; bitpos: [0]; default: 0;
 *  Configures whether to enable PC and SP logging.
 *  0: Disable
 *  1: BUS_MONITOR_CORE_0_RCD_PDEBUGPC_REG starts to record PC in real time,
 *  BUS_MONITOR_CORE_0_RCD_PDEBUGSP_REG starts to record SP in real time
 */
#define BUS_MONITOR_CORE_0_RCD_RECORDEN    (BIT(0))
#define BUS_MONITOR_CORE_0_RCD_RECORDEN_M  (BUS_MONITOR_CORE_0_RCD_RECORDEN_V << BUS_MONITOR_CORE_0_RCD_RECORDEN_S)
#define BUS_MONITOR_CORE_0_RCD_RECORDEN_V  0x00000001U
#define BUS_MONITOR_CORE_0_RCD_RECORDEN_S  0
/** BUS_MONITOR_CORE_0_RCD_PDEBUGEN : R/W; bitpos: [1]; default: 0;
 *  Configures whether to enable HP CPU debugging.
 *  0: Disable
 *  1: HP CPU outputs PC
 */
#define BUS_MONITOR_CORE_0_RCD_PDEBUGEN    (BIT(1))
#define BUS_MONITOR_CORE_0_RCD_PDEBUGEN_M  (BUS_MONITOR_CORE_0_RCD_PDEBUGEN_V << BUS_MONITOR_CORE_0_RCD_PDEBUGEN_S)
#define BUS_MONITOR_CORE_0_RCD_PDEBUGEN_V  0x00000001U
#define BUS_MONITOR_CORE_0_RCD_PDEBUGEN_S  1

/** BUS_MONITOR_CORE_0_RCD_PDEBUGPC_REG register
 *  HP CPU PC logging register
 */
#define BUS_MONITOR_CORE_0_RCD_PDEBUGPC_REG (DR_REG_BUS_MONITOR_BASE + 0x48)
/** BUS_MONITOR_CORE_0_RCD_PDEBUGPC : RO; bitpos: [31:0]; default: 0;
 *  Represents the PC value at HP CPU reset.
 */
#define BUS_MONITOR_CORE_0_RCD_PDEBUGPC    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_RCD_PDEBUGPC_M  (BUS_MONITOR_CORE_0_RCD_PDEBUGPC_V << BUS_MONITOR_CORE_0_RCD_PDEBUGPC_S)
#define BUS_MONITOR_CORE_0_RCD_PDEBUGPC_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_RCD_PDEBUGPC_S  0

/** BUS_MONITOR_CORE_0_RCD_PDEBUGSP_REG register
 *  HP CPU SP logging register
 */
#define BUS_MONITOR_CORE_0_RCD_PDEBUGSP_REG (DR_REG_BUS_MONITOR_BASE + 0x4c)
/** BUS_MONITOR_CORE_0_RCD_PDEBUGSP : RO; bitpos: [31:0]; default: 0;
 *  Represents SP.
 */
#define BUS_MONITOR_CORE_0_RCD_PDEBUGSP    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_RCD_PDEBUGSP_M  (BUS_MONITOR_CORE_0_RCD_PDEBUGSP_V << BUS_MONITOR_CORE_0_RCD_PDEBUGSP_S)
#define BUS_MONITOR_CORE_0_RCD_PDEBUGSP_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_RCD_PDEBUGSP_S  0

/** BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXCEPTION_REG register
 *  PC of the last command before HP CPU enters exception
 */
#define BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXCEPTION_REG (DR_REG_BUS_MONITOR_BASE + 0x70)
/** BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC : RO; bitpos: [31:0]; default: 0;
 *  Represents the PC of the last command before the HP CPU enters exception.
 */
#define BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC    0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC_M  (BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC_V << BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC_S)
#define BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC_V  0xFFFFFFFFU
#define BUS_MONITOR_CORE_0_LASTPC_BEFORE_EXC_S  0

/** BUS_MONITOR_CORE_0_DEBUG_MODE_REG register
 *  HP CPU debug mode status register
 */
#define BUS_MONITOR_CORE_0_DEBUG_MODE_REG (DR_REG_BUS_MONITOR_BASE + 0x74)
/** BUS_MONITOR_CORE_0_DEBUG_MODE : RO; bitpos: [0]; default: 0;
 *  Represents whether RISC-V CPU (HP CPU) is in debugging mode.
 *  1: In debugging mode
 *  0: Not in debugging mode
 */
#define BUS_MONITOR_CORE_0_DEBUG_MODE    (BIT(0))
#define BUS_MONITOR_CORE_0_DEBUG_MODE_M  (BUS_MONITOR_CORE_0_DEBUG_MODE_V << BUS_MONITOR_CORE_0_DEBUG_MODE_S)
#define BUS_MONITOR_CORE_0_DEBUG_MODE_V  0x00000001U
#define BUS_MONITOR_CORE_0_DEBUG_MODE_S  0
/** BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE : RO; bitpos: [1]; default: 0;
 *  Represents the status of the RISC-V CPU (HP CPU) debug module.
 *  1: Active status
 *  Other: Inactive status
 */
#define BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE    (BIT(1))
#define BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE_M  (BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE_V << BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE_S)
#define BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE_V  0x00000001U
#define BUS_MONITOR_CORE_0_DEBUG_MODULE_ACTIVE_S  1

/** BUS_MONITOR_CLOCK_GATE_REG register
 *  Clock control register
 */
#define BUS_MONITOR_CLOCK_GATE_REG (DR_REG_BUS_MONITOR_BASE + 0x108)
/** BUS_MONITOR_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Configures whether to enable the register clock gating.
 *  0: Disable
 *  1: Enable
 */
#define BUS_MONITOR_CLK_EN    (BIT(0))
#define BUS_MONITOR_CLK_EN_M  (BUS_MONITOR_CLK_EN_V << BUS_MONITOR_CLK_EN_S)
#define BUS_MONITOR_CLK_EN_V  0x00000001U
#define BUS_MONITOR_CLK_EN_S  0

/** BUS_MONITOR_DATE_REG register
 *  Version control register
 */
#define BUS_MONITOR_DATE_REG (DR_REG_BUS_MONITOR_BASE + 0x3fc)
/** BUS_MONITOR_DATE : R/W; bitpos: [27:0]; default: 34640176;
 *  Version control register.
 */
#define BUS_MONITOR_DATE    0x0FFFFFFFU
#define BUS_MONITOR_DATE_M  (BUS_MONITOR_DATE_V << BUS_MONITOR_DATE_S)
#define BUS_MONITOR_DATE_V  0x0FFFFFFFU
#define BUS_MONITOR_DATE_S  0

#ifdef __cplusplus
}
#endif
