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

/** SPI_MEM_CMD_REG register
 *  SPI0 FSM status register
 */
#define SPI_MEM_CMD_REG(i)              (REG_SPI_MEM_BASE(i) + 0x0)
/** SPI_MEM_MST_ST : RO; bitpos: [3:0]; default: 0;
 *  The current status of SPI0 master FSM: spi0_mst_st. 0: idle state, 1:SPI0_GRANT ,
 *  2: program/erase suspend state, 3: SPI0 read data state, 4: wait cache/EDMA sent
 *  data is stored in SPI0 TX FIFO, 5: SPI0 write data state.
 */
#define SPI_MEM_MST_ST    0x0000000FU
#define SPI_MEM_MST_ST_M  (SPI_MEM_MST_ST_V << SPI_MEM_MST_ST_S)
#define SPI_MEM_MST_ST_V  0x0000000FU
#define SPI_MEM_MST_ST_S  0
/** SPI_MEM_SLV_ST : RO; bitpos: [7:4]; default: 0;
 *  The current status of SPI0 slave FSM: mspi_st. 0: idle state, 1: preparation state,
 *  2: send command state, 3: send address state, 4: wait state, 5: read data state,
 *  6:write data state, 7: done state, 8: read data end state.
 */
#define SPI_MEM_SLV_ST    0x0000000FU
#define SPI_MEM_SLV_ST_M  (SPI_MEM_SLV_ST_V << SPI_MEM_SLV_ST_S)
#define SPI_MEM_SLV_ST_V  0x0000000FU
#define SPI_MEM_SLV_ST_S  4
/** SPI_MEM_USR : HRO; bitpos: [18]; default: 0;
 *  SPI0 USR_CMD start bit, only used when SPI_MEM_AXI_REQ_EN is cleared.  An operation
 *  will be triggered when the bit is set. The bit will be cleared once the operation
 *  done.1: enable 0: disable.
 */
#define SPI_MEM_USR    (BIT(18))
#define SPI_MEM_USR_M  (SPI_MEM_USR_V << SPI_MEM_USR_S)
#define SPI_MEM_USR_V  0x00000001U
#define SPI_MEM_USR_S  18

/** SPI_MEM_CTRL_REG register
 *  SPI0 control register.
 */
#define SPI_MEM_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x8)
/** SPI_MEM_WDUMMY_DQS_ALWAYS_OUT : R/W; bitpos: [0]; default: 0;
 *  In the dummy phase of an MSPI write data transfer when accesses to flash, the level
 *  of SPI_DQS is output by the MSPI controller.
 */
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT    (BIT(0))
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_M  (SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_V << SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_S)
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_V  0x00000001U
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_S  0
/** SPI_MEM_WDUMMY_ALWAYS_OUT : R/W; bitpos: [1]; default: 0;
 *  In the dummy phase of an MSPI write data transfer when accesses to flash, the level
 *  of SPI_IO[7:0] is output by the MSPI controller.
 */
#define SPI_MEM_WDUMMY_ALWAYS_OUT    (BIT(1))
#define SPI_MEM_WDUMMY_ALWAYS_OUT_M  (SPI_MEM_WDUMMY_ALWAYS_OUT_V << SPI_MEM_WDUMMY_ALWAYS_OUT_S)
#define SPI_MEM_WDUMMY_ALWAYS_OUT_V  0x00000001U
#define SPI_MEM_WDUMMY_ALWAYS_OUT_S  1
/** SPI_MEM_FDUMMY_RIN : R/W; bitpos: [2]; default: 1;
 *  In an MSPI read data transfer when accesses to flash, the level of SPI_IO[7:0] is
 *  output by the MSPI controller in the first half part of dummy phase. It is used to
 *  mask invalid SPI_DQS in the half part of dummy phase.
 */
#define SPI_MEM_FDUMMY_RIN    (BIT(2))
#define SPI_MEM_FDUMMY_RIN_M  (SPI_MEM_FDUMMY_RIN_V << SPI_MEM_FDUMMY_RIN_S)
#define SPI_MEM_FDUMMY_RIN_V  0x00000001U
#define SPI_MEM_FDUMMY_RIN_S  2
/** SPI_MEM_FDUMMY_WOUT : R/W; bitpos: [3]; default: 1;
 *  In an MSPI write data transfer when accesses to flash, the level of SPI_IO[7:0] is
 *  output by the MSPI controller in the second half part of dummy phase. It is used to
 *  pre-drive flash.
 */
#define SPI_MEM_FDUMMY_WOUT    (BIT(3))
#define SPI_MEM_FDUMMY_WOUT_M  (SPI_MEM_FDUMMY_WOUT_V << SPI_MEM_FDUMMY_WOUT_S)
#define SPI_MEM_FDUMMY_WOUT_V  0x00000001U
#define SPI_MEM_FDUMMY_WOUT_S  3
/** SPI_MEM_FDOUT_OCT : R/W; bitpos: [4]; default: 0;
 *  Apply 8 signals during write-data phase 1:enable 0: disable
 */
#define SPI_MEM_FDOUT_OCT    (BIT(4))
#define SPI_MEM_FDOUT_OCT_M  (SPI_MEM_FDOUT_OCT_V << SPI_MEM_FDOUT_OCT_S)
#define SPI_MEM_FDOUT_OCT_V  0x00000001U
#define SPI_MEM_FDOUT_OCT_S  4
/** SPI_MEM_FDIN_OCT : R/W; bitpos: [5]; default: 0;
 *  Apply 8 signals during read-data phase 1:enable 0: disable
 */
#define SPI_MEM_FDIN_OCT    (BIT(5))
#define SPI_MEM_FDIN_OCT_M  (SPI_MEM_FDIN_OCT_V << SPI_MEM_FDIN_OCT_S)
#define SPI_MEM_FDIN_OCT_V  0x00000001U
#define SPI_MEM_FDIN_OCT_S  5
/** SPI_MEM_FADDR_OCT : R/W; bitpos: [6]; default: 0;
 *  Apply 8 signals during address phase 1:enable 0: disable
 */
#define SPI_MEM_FADDR_OCT    (BIT(6))
#define SPI_MEM_FADDR_OCT_M  (SPI_MEM_FADDR_OCT_V << SPI_MEM_FADDR_OCT_S)
#define SPI_MEM_FADDR_OCT_V  0x00000001U
#define SPI_MEM_FADDR_OCT_S  6
/** SPI_MEM_FCMD_QUAD : R/W; bitpos: [8]; default: 0;
 *  Apply 4 signals during command phase 1:enable 0: disable
 */
#define SPI_MEM_FCMD_QUAD    (BIT(8))
#define SPI_MEM_FCMD_QUAD_M  (SPI_MEM_FCMD_QUAD_V << SPI_MEM_FCMD_QUAD_S)
#define SPI_MEM_FCMD_QUAD_V  0x00000001U
#define SPI_MEM_FCMD_QUAD_S  8
/** SPI_MEM_FCMD_OCT : R/W; bitpos: [9]; default: 0;
 *  Apply 8 signals during command phase 1:enable 0: disable
 */
#define SPI_MEM_FCMD_OCT    (BIT(9))
#define SPI_MEM_FCMD_OCT_M  (SPI_MEM_FCMD_OCT_V << SPI_MEM_FCMD_OCT_S)
#define SPI_MEM_FCMD_OCT_V  0x00000001U
#define SPI_MEM_FCMD_OCT_S  9
/** SPI_MEM_FASTRD_MODE : R/W; bitpos: [13]; default: 1;
 *  This bit enable the bits: SPI_MEM_FREAD_QIO, SPI_MEM_FREAD_DIO, SPI_MEM_FREAD_QOUT
 *  and SPI_MEM_FREAD_DOUT. 1: enable 0: disable.
 */
#define SPI_MEM_FASTRD_MODE    (BIT(13))
#define SPI_MEM_FASTRD_MODE_M  (SPI_MEM_FASTRD_MODE_V << SPI_MEM_FASTRD_MODE_S)
#define SPI_MEM_FASTRD_MODE_V  0x00000001U
#define SPI_MEM_FASTRD_MODE_S  13
/** SPI_MEM_FREAD_DUAL : R/W; bitpos: [14]; default: 0;
 *  In the read operations, read-data phase apply 2 signals. 1: enable 0: disable.
 */
#define SPI_MEM_FREAD_DUAL    (BIT(14))
#define SPI_MEM_FREAD_DUAL_M  (SPI_MEM_FREAD_DUAL_V << SPI_MEM_FREAD_DUAL_S)
#define SPI_MEM_FREAD_DUAL_V  0x00000001U
#define SPI_MEM_FREAD_DUAL_S  14
/** SPI_MEM_Q_POL : R/W; bitpos: [18]; default: 1;
 *  The bit is used to set MISO line polarity, 1: high 0, low
 */
#define SPI_MEM_Q_POL    (BIT(18))
#define SPI_MEM_Q_POL_M  (SPI_MEM_Q_POL_V << SPI_MEM_Q_POL_S)
#define SPI_MEM_Q_POL_V  0x00000001U
#define SPI_MEM_Q_POL_S  18
/** SPI_MEM_D_POL : R/W; bitpos: [19]; default: 1;
 *  The bit is used to set MOSI line polarity, 1: high 0, low
 */
#define SPI_MEM_D_POL    (BIT(19))
#define SPI_MEM_D_POL_M  (SPI_MEM_D_POL_V << SPI_MEM_D_POL_S)
#define SPI_MEM_D_POL_V  0x00000001U
#define SPI_MEM_D_POL_S  19
/** SPI_MEM_FREAD_QUAD : R/W; bitpos: [20]; default: 0;
 *  In the read operations read-data phase apply 4 signals. 1: enable 0: disable.
 */
#define SPI_MEM_FREAD_QUAD    (BIT(20))
#define SPI_MEM_FREAD_QUAD_M  (SPI_MEM_FREAD_QUAD_V << SPI_MEM_FREAD_QUAD_S)
#define SPI_MEM_FREAD_QUAD_V  0x00000001U
#define SPI_MEM_FREAD_QUAD_S  20
/** SPI_MEM_WP_REG : R/W; bitpos: [21]; default: 1;
 *  Write protect signal output when SPI is idle.  1: output high, 0: output low.
 */
#define SPI_MEM_WP_REG    (BIT(21))
#define SPI_MEM_WP_REG_M  (SPI_MEM_WP_REG_V << SPI_MEM_WP_REG_S)
#define SPI_MEM_WP_REG_V  0x00000001U
#define SPI_MEM_WP_REG_S  21
/** SPI_MEM_FREAD_DIO : R/W; bitpos: [23]; default: 0;
 *  In the read operations address phase and read-data phase apply 2 signals. 1: enable
 *  0: disable.
 */
#define SPI_MEM_FREAD_DIO    (BIT(23))
#define SPI_MEM_FREAD_DIO_M  (SPI_MEM_FREAD_DIO_V << SPI_MEM_FREAD_DIO_S)
#define SPI_MEM_FREAD_DIO_V  0x00000001U
#define SPI_MEM_FREAD_DIO_S  23
/** SPI_MEM_FREAD_QIO : R/W; bitpos: [24]; default: 0;
 *  In the read operations address phase and read-data phase apply 4 signals. 1: enable
 *  0: disable.
 */
#define SPI_MEM_FREAD_QIO    (BIT(24))
#define SPI_MEM_FREAD_QIO_M  (SPI_MEM_FREAD_QIO_V << SPI_MEM_FREAD_QIO_S)
#define SPI_MEM_FREAD_QIO_V  0x00000001U
#define SPI_MEM_FREAD_QIO_S  24
/** SPI_MEM_DQS_IE_ALWAYS_ON : R/W; bitpos: [30]; default: 0;
 *  When accesses to flash, 1: the IE signals of pads connected to SPI_DQS are always
 *  1. 0: Others.
 */
#define SPI_MEM_DQS_IE_ALWAYS_ON    (BIT(30))
#define SPI_MEM_DQS_IE_ALWAYS_ON_M  (SPI_MEM_DQS_IE_ALWAYS_ON_V << SPI_MEM_DQS_IE_ALWAYS_ON_S)
#define SPI_MEM_DQS_IE_ALWAYS_ON_V  0x00000001U
#define SPI_MEM_DQS_IE_ALWAYS_ON_S  30
/** SPI_MEM_DATA_IE_ALWAYS_ON : R/W; bitpos: [31]; default: 1;
 *  When accesses to flash, 1: the IE signals of pads connected to SPI_IO[7:0] are
 *  always 1. 0: Others.
 */
#define SPI_MEM_DATA_IE_ALWAYS_ON    (BIT(31))
#define SPI_MEM_DATA_IE_ALWAYS_ON_M  (SPI_MEM_DATA_IE_ALWAYS_ON_V << SPI_MEM_DATA_IE_ALWAYS_ON_S)
#define SPI_MEM_DATA_IE_ALWAYS_ON_V  0x00000001U
#define SPI_MEM_DATA_IE_ALWAYS_ON_S  31

/** SPI_MEM_CTRL1_REG register
 *  SPI0 control1 register.
 */
#define SPI_MEM_CTRL1_REG(i)              (REG_SPI_MEM_BASE(i) + 0xc)
/** SPI_MEM_CLK_MODE : R/W; bitpos: [1:0]; default: 0;
 *  SPI clock mode bits. 0: SPI clock is off when CS inactive 1: SPI clock is delayed
 *  one cycle after CS inactive 2: SPI clock is delayed two cycles after CS inactive 3:
 *  SPI clock is always on.
 */
#define SPI_MEM_CLK_MODE    0x00000003U
#define SPI_MEM_CLK_MODE_M  (SPI_MEM_CLK_MODE_V << SPI_MEM_CLK_MODE_S)
#define SPI_MEM_CLK_MODE_V  0x00000003U
#define SPI_MEM_CLK_MODE_S  0
/** SPI_AR_SIZE0_1_SUPPORT_EN : R/W; bitpos: [22]; default: 1;
 *  1: MSPI supports ARSIZE 0~3. When ARSIZE =0~2, MSPI read address is 4*n and reply
 *  the real AXI read data back. 0: When ARSIZE 0~1, MSPI reply SLV_ERR.
 */
#define SPI_AR_SIZE0_1_SUPPORT_EN    (BIT(22))
#define SPI_AR_SIZE0_1_SUPPORT_EN_M  (SPI_AR_SIZE0_1_SUPPORT_EN_V << SPI_AR_SIZE0_1_SUPPORT_EN_S)
#define SPI_AR_SIZE0_1_SUPPORT_EN_V  0x00000001U
#define SPI_AR_SIZE0_1_SUPPORT_EN_S  22
/** SPI_AW_SIZE0_1_SUPPORT_EN : R/W; bitpos: [23]; default: 1;
 *  1: MSPI supports AWSIZE 0~3. 0: When AWSIZE 0~1, MSPI reply SLV_ERR.
 */
#define SPI_AW_SIZE0_1_SUPPORT_EN    (BIT(23))
#define SPI_AW_SIZE0_1_SUPPORT_EN_M  (SPI_AW_SIZE0_1_SUPPORT_EN_V << SPI_AW_SIZE0_1_SUPPORT_EN_S)
#define SPI_AW_SIZE0_1_SUPPORT_EN_V  0x00000001U
#define SPI_AW_SIZE0_1_SUPPORT_EN_S  23
/** SPI_MEM_RRESP_ECC_ERR_EN : R/W; bitpos: [24]; default: 0;
 *  1: RRESP is SLV_ERR when there is a ECC error in AXI read data. 0: RRESP is OKAY
 *  when there is a ECC error in AXI read data. The ECC error information is recorded
 *  in SPI_MEM_ECC_ERR_ADDR_REG.
 */
#define SPI_MEM_RRESP_ECC_ERR_EN    (BIT(24))
#define SPI_MEM_RRESP_ECC_ERR_EN_M  (SPI_MEM_RRESP_ECC_ERR_EN_V << SPI_MEM_RRESP_ECC_ERR_EN_S)
#define SPI_MEM_RRESP_ECC_ERR_EN_V  0x00000001U
#define SPI_MEM_RRESP_ECC_ERR_EN_S  24
/** SPI_MEM_AR_SPLICE_EN : HRO; bitpos: [25]; default: 0;
 *  Set this bit to enable AXI Read Splice-transfer.
 */
#define SPI_MEM_AR_SPLICE_EN    (BIT(25))
#define SPI_MEM_AR_SPLICE_EN_M  (SPI_MEM_AR_SPLICE_EN_V << SPI_MEM_AR_SPLICE_EN_S)
#define SPI_MEM_AR_SPLICE_EN_V  0x00000001U
#define SPI_MEM_AR_SPLICE_EN_S  25
/** SPI_MEM_AW_SPLICE_EN : HRO; bitpos: [26]; default: 0;
 *  Set this bit to enable AXI Write Splice-transfer.
 */
#define SPI_MEM_AW_SPLICE_EN    (BIT(26))
#define SPI_MEM_AW_SPLICE_EN_M  (SPI_MEM_AW_SPLICE_EN_V << SPI_MEM_AW_SPLICE_EN_S)
#define SPI_MEM_AW_SPLICE_EN_V  0x00000001U
#define SPI_MEM_AW_SPLICE_EN_S  26
/** SPI_MEM_RAM0_EN : HRO; bitpos: [27]; default: 1;
 *  When SPI_MEM_DUAL_RAM_EN is 0 and SPI_MEM_RAM0_EN is 1, only EXT_RAM0 will be
 *  accessed. When SPI_MEM_DUAL_RAM_EN is 0 and SPI_MEM_RAM0_EN is 0, only EXT_RAM1
 *  will be accessed. When SPI_MEM_DUAL_RAM_EN is 1,  EXT_RAM0 and EXT_RAM1 will be
 *  accessed at the same time.
 */
#define SPI_MEM_RAM0_EN    (BIT(27))
#define SPI_MEM_RAM0_EN_M  (SPI_MEM_RAM0_EN_V << SPI_MEM_RAM0_EN_S)
#define SPI_MEM_RAM0_EN_V  0x00000001U
#define SPI_MEM_RAM0_EN_S  27
/** SPI_MEM_DUAL_RAM_EN : HRO; bitpos: [28]; default: 0;
 *  Set this bit to enable DUAL-RAM mode, EXT_RAM0 and EXT_RAM1 will be accessed at the
 *  same time.
 */
#define SPI_MEM_DUAL_RAM_EN    (BIT(28))
#define SPI_MEM_DUAL_RAM_EN_M  (SPI_MEM_DUAL_RAM_EN_V << SPI_MEM_DUAL_RAM_EN_S)
#define SPI_MEM_DUAL_RAM_EN_V  0x00000001U
#define SPI_MEM_DUAL_RAM_EN_S  28
/** SPI_MEM_FAST_WRITE_EN : R/W; bitpos: [29]; default: 1;
 *  Set this bit to write data faster, do not wait write data has been stored in
 *  tx_bus_fifo_l2. It will wait 4*T_clk_ctrl to insure the write data has been stored
 *  in  tx_bus_fifo_l2.
 */
#define SPI_MEM_FAST_WRITE_EN    (BIT(29))
#define SPI_MEM_FAST_WRITE_EN_M  (SPI_MEM_FAST_WRITE_EN_V << SPI_MEM_FAST_WRITE_EN_S)
#define SPI_MEM_FAST_WRITE_EN_V  0x00000001U
#define SPI_MEM_FAST_WRITE_EN_S  29
/** SPI_MEM_RXFIFO_RST : WT; bitpos: [30]; default: 0;
 *  The synchronous reset signal for SPI0 RX AFIFO and all the AES_MSPI SYNC FIFO to
 *  receive signals from AXI.  Set this bit to reset these FIFO.
 */
#define SPI_MEM_RXFIFO_RST    (BIT(30))
#define SPI_MEM_RXFIFO_RST_M  (SPI_MEM_RXFIFO_RST_V << SPI_MEM_RXFIFO_RST_S)
#define SPI_MEM_RXFIFO_RST_V  0x00000001U
#define SPI_MEM_RXFIFO_RST_S  30
/** SPI_MEM_TXFIFO_RST : WT; bitpos: [31]; default: 0;
 *  The synchronous reset signal for SPI0 TX AFIFO and all the AES_MSPI SYNC FIFO to
 *  send signals to AXI. Set this bit to reset these FIFO.
 */
#define SPI_MEM_TXFIFO_RST    (BIT(31))
#define SPI_MEM_TXFIFO_RST_M  (SPI_MEM_TXFIFO_RST_V << SPI_MEM_TXFIFO_RST_S)
#define SPI_MEM_TXFIFO_RST_V  0x00000001U
#define SPI_MEM_TXFIFO_RST_S  31

/** SPI_MEM_CTRL2_REG register
 *  SPI0 control2 register.
 */
#define SPI_MEM_CTRL2_REG(i)              (REG_SPI_MEM_BASE(i) + 0x10)
/** SPI_MEM_CS_SETUP_TIME : R/W; bitpos: [4:0]; default: 1;
 *  (cycles-1) of prepare phase by SPI Bus clock, this bits are combined with
 *  SPI_MEM_CS_SETUP bit.
 */
#define SPI_MEM_CS_SETUP_TIME    0x0000001FU
#define SPI_MEM_CS_SETUP_TIME_M  (SPI_MEM_CS_SETUP_TIME_V << SPI_MEM_CS_SETUP_TIME_S)
#define SPI_MEM_CS_SETUP_TIME_V  0x0000001FU
#define SPI_MEM_CS_SETUP_TIME_S  0
/** SPI_MEM_CS_HOLD_TIME : R/W; bitpos: [9:5]; default: 1;
 *  SPI CS signal is delayed to inactive by SPI bus clock, this bits are combined with
 *  SPI_MEM_CS_HOLD bit.
 */
#define SPI_MEM_CS_HOLD_TIME    0x0000001FU
#define SPI_MEM_CS_HOLD_TIME_M  (SPI_MEM_CS_HOLD_TIME_V << SPI_MEM_CS_HOLD_TIME_S)
#define SPI_MEM_CS_HOLD_TIME_V  0x0000001FU
#define SPI_MEM_CS_HOLD_TIME_S  5
/** SPI_MEM_ECC_CS_HOLD_TIME : R/W; bitpos: [12:10]; default: 3;
 *  SPI_MEM_CS_HOLD_TIME + SPI_MEM_ECC_CS_HOLD_TIME is the SPI0 CS hold cycle in ECC
 *  mode when accessed flash.
 */
#define SPI_MEM_ECC_CS_HOLD_TIME    0x00000007U
#define SPI_MEM_ECC_CS_HOLD_TIME_M  (SPI_MEM_ECC_CS_HOLD_TIME_V << SPI_MEM_ECC_CS_HOLD_TIME_S)
#define SPI_MEM_ECC_CS_HOLD_TIME_V  0x00000007U
#define SPI_MEM_ECC_CS_HOLD_TIME_S  10
/** SPI_MEM_ECC_SKIP_PAGE_CORNER : R/W; bitpos: [13]; default: 1;
 *  1: SPI0 and SPI1 skip page corner when accesses flash. 0: Not skip page corner when
 *  accesses flash.
 */
#define SPI_MEM_ECC_SKIP_PAGE_CORNER    (BIT(13))
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_M  (SPI_MEM_ECC_SKIP_PAGE_CORNER_V << SPI_MEM_ECC_SKIP_PAGE_CORNER_S)
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_V  0x00000001U
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_S  13
/** SPI_MEM_ECC_16TO18_BYTE_EN : R/W; bitpos: [14]; default: 0;
 *  Set this bit to enable SPI0 and SPI1 ECC 16 bytes data with 2 ECC bytes mode when
 *  accesses flash.
 */
#define SPI_MEM_ECC_16TO18_BYTE_EN    (BIT(14))
#define SPI_MEM_ECC_16TO18_BYTE_EN_M  (SPI_MEM_ECC_16TO18_BYTE_EN_V << SPI_MEM_ECC_16TO18_BYTE_EN_S)
#define SPI_MEM_ECC_16TO18_BYTE_EN_V  0x00000001U
#define SPI_MEM_ECC_16TO18_BYTE_EN_S  14
/** SPI_MEM_SPLIT_TRANS_EN : R/W; bitpos: [24]; default: 0;
 *  Set this bit to enable SPI0 split one AXI read flash transfer into two SPI
 *  transfers when one transfer will cross flash or EXT_RAM page corner, valid no
 *  matter whether there is an ECC region or not.
 */
#define SPI_MEM_SPLIT_TRANS_EN    (BIT(24))
#define SPI_MEM_SPLIT_TRANS_EN_M  (SPI_MEM_SPLIT_TRANS_EN_V << SPI_MEM_SPLIT_TRANS_EN_S)
#define SPI_MEM_SPLIT_TRANS_EN_V  0x00000001U
#define SPI_MEM_SPLIT_TRANS_EN_S  24
/** SPI_MEM_CS_HOLD_DELAY : R/W; bitpos: [30:25]; default: 0;
 *  These bits are used to set the minimum CS high time tSHSL between SPI burst
 *  transfer when accesses to flash. tSHSL is (SPI_MEM_CS_HOLD_DELAY[5:0] + 1) MSPI
 *  core clock cycles.
 */
#define SPI_MEM_CS_HOLD_DELAY    0x0000003FU
#define SPI_MEM_CS_HOLD_DELAY_M  (SPI_MEM_CS_HOLD_DELAY_V << SPI_MEM_CS_HOLD_DELAY_S)
#define SPI_MEM_CS_HOLD_DELAY_V  0x0000003FU
#define SPI_MEM_CS_HOLD_DELAY_S  25
/** SPI_MEM_SYNC_RESET : WT; bitpos: [31]; default: 0;
 *  The spi0_mst_st and spi0_slv_st will be reset.
 */
#define SPI_MEM_SYNC_RESET    (BIT(31))
#define SPI_MEM_SYNC_RESET_M  (SPI_MEM_SYNC_RESET_V << SPI_MEM_SYNC_RESET_S)
#define SPI_MEM_SYNC_RESET_V  0x00000001U
#define SPI_MEM_SYNC_RESET_S  31

/** SPI_MEM_CLOCK_REG register
 *  SPI clock division control register.
 */
#define SPI_MEM_CLOCK_REG(i)              (REG_SPI_MEM_BASE(i) + 0x14)
/** SPI_MEM_CLKCNT_L : R/W; bitpos: [7:0]; default: 3;
 *  In the master mode it must be equal to SPI_MEM_CLKCNT_N.
 */
#define SPI_MEM_CLKCNT_L    0x000000FFU
#define SPI_MEM_CLKCNT_L_M  (SPI_MEM_CLKCNT_L_V << SPI_MEM_CLKCNT_L_S)
#define SPI_MEM_CLKCNT_L_V  0x000000FFU
#define SPI_MEM_CLKCNT_L_S  0
/** SPI_MEM_CLKCNT_H : R/W; bitpos: [15:8]; default: 1;
 *  In the master mode it must be floor((SPI_MEM_CLKCNT_N+1)/2-1).
 */
#define SPI_MEM_CLKCNT_H    0x000000FFU
#define SPI_MEM_CLKCNT_H_M  (SPI_MEM_CLKCNT_H_V << SPI_MEM_CLKCNT_H_S)
#define SPI_MEM_CLKCNT_H_V  0x000000FFU
#define SPI_MEM_CLKCNT_H_S  8
/** SPI_MEM_CLKCNT_N : R/W; bitpos: [23:16]; default: 3;
 *  In the master mode it is the divider of spi_mem_clk. So spi_mem_clk frequency is
 *  system/(SPI_MEM_CLKCNT_N+1)
 */
#define SPI_MEM_CLKCNT_N    0x000000FFU
#define SPI_MEM_CLKCNT_N_M  (SPI_MEM_CLKCNT_N_V << SPI_MEM_CLKCNT_N_S)
#define SPI_MEM_CLKCNT_N_V  0x000000FFU
#define SPI_MEM_CLKCNT_N_S  16
/** SPI_MEM_CLK_EQU_SYSCLK : R/W; bitpos: [31]; default: 0;
 *  1: 1-division mode, the frequency of SPI bus clock equals to that of MSPI module
 *  clock.
 */
#define SPI_MEM_CLK_EQU_SYSCLK    (BIT(31))
#define SPI_MEM_CLK_EQU_SYSCLK_M  (SPI_MEM_CLK_EQU_SYSCLK_V << SPI_MEM_CLK_EQU_SYSCLK_S)
#define SPI_MEM_CLK_EQU_SYSCLK_V  0x00000001U
#define SPI_MEM_CLK_EQU_SYSCLK_S  31

/** SPI_MEM_USER_REG register
 *  SPI0 user register.
 */
#define SPI_MEM_USER_REG(i)              (REG_SPI_MEM_BASE(i) + 0x18)
/** SPI_MEM_CS_HOLD : R/W; bitpos: [6]; default: 0;
 *  spi cs keep low when spi is in  done  phase. 1: enable 0: disable.
 */
#define SPI_MEM_CS_HOLD    (BIT(6))
#define SPI_MEM_CS_HOLD_M  (SPI_MEM_CS_HOLD_V << SPI_MEM_CS_HOLD_S)
#define SPI_MEM_CS_HOLD_V  0x00000001U
#define SPI_MEM_CS_HOLD_S  6
/** SPI_MEM_CS_SETUP : R/W; bitpos: [7]; default: 0;
 *  spi cs is enable when spi is in  prepare  phase. 1: enable 0: disable.
 */
#define SPI_MEM_CS_SETUP    (BIT(7))
#define SPI_MEM_CS_SETUP_M  (SPI_MEM_CS_SETUP_V << SPI_MEM_CS_SETUP_S)
#define SPI_MEM_CS_SETUP_V  0x00000001U
#define SPI_MEM_CS_SETUP_S  7
/** SPI_MEM_CK_OUT_EDGE : R/W; bitpos: [9]; default: 0;
 *  The bit combined with SPI_MEM_CK_IDLE_EDGE bit to control SPI clock mode 0~3.
 */
#define SPI_MEM_CK_OUT_EDGE    (BIT(9))
#define SPI_MEM_CK_OUT_EDGE_M  (SPI_MEM_CK_OUT_EDGE_V << SPI_MEM_CK_OUT_EDGE_S)
#define SPI_MEM_CK_OUT_EDGE_V  0x00000001U
#define SPI_MEM_CK_OUT_EDGE_S  9
/** SPI_MEM_USR_DUMMY_IDLE : R/W; bitpos: [26]; default: 0;
 *  spi clock is disable in dummy phase when the bit is enable.
 */
#define SPI_MEM_USR_DUMMY_IDLE    (BIT(26))
#define SPI_MEM_USR_DUMMY_IDLE_M  (SPI_MEM_USR_DUMMY_IDLE_V << SPI_MEM_USR_DUMMY_IDLE_S)
#define SPI_MEM_USR_DUMMY_IDLE_V  0x00000001U
#define SPI_MEM_USR_DUMMY_IDLE_S  26
/** SPI_MEM_USR_DUMMY : R/W; bitpos: [29]; default: 0;
 *  This bit enable the dummy phase of an operation.
 */
#define SPI_MEM_USR_DUMMY    (BIT(29))
#define SPI_MEM_USR_DUMMY_M  (SPI_MEM_USR_DUMMY_V << SPI_MEM_USR_DUMMY_S)
#define SPI_MEM_USR_DUMMY_V  0x00000001U
#define SPI_MEM_USR_DUMMY_S  29

/** SPI_MEM_USER1_REG register
 *  SPI0 user1 register.
 */
#define SPI_MEM_USER1_REG(i)              (REG_SPI_MEM_BASE(i) + 0x1c)
/** SPI_MEM_USR_DUMMY_CYCLELEN : R/W; bitpos: [5:0]; default: 7;
 *  The length in spi_mem_clk cycles of dummy phase. The register value shall be
 *  (cycle_num-1).
 */
#define SPI_MEM_USR_DUMMY_CYCLELEN    0x0000003FU
#define SPI_MEM_USR_DUMMY_CYCLELEN_M  (SPI_MEM_USR_DUMMY_CYCLELEN_V << SPI_MEM_USR_DUMMY_CYCLELEN_S)
#define SPI_MEM_USR_DUMMY_CYCLELEN_V  0x0000003FU
#define SPI_MEM_USR_DUMMY_CYCLELEN_S  0
/** SPI_MEM_USR_DBYTELEN : HRO; bitpos: [11:6]; default: 1;
 *  SPI0 USR_CMD read or write data byte length -1
 */
#define SPI_MEM_USR_DBYTELEN    0x0000003FU
#define SPI_MEM_USR_DBYTELEN_M  (SPI_MEM_USR_DBYTELEN_V << SPI_MEM_USR_DBYTELEN_S)
#define SPI_MEM_USR_DBYTELEN_V  0x0000003FU
#define SPI_MEM_USR_DBYTELEN_S  6
/** SPI_MEM_USR_ADDR_BITLEN : R/W; bitpos: [31:26]; default: 23;
 *  The length in bits of address phase. The register value shall be (bit_num-1).
 */
#define SPI_MEM_USR_ADDR_BITLEN    0x0000003FU
#define SPI_MEM_USR_ADDR_BITLEN_M  (SPI_MEM_USR_ADDR_BITLEN_V << SPI_MEM_USR_ADDR_BITLEN_S)
#define SPI_MEM_USR_ADDR_BITLEN_V  0x0000003FU
#define SPI_MEM_USR_ADDR_BITLEN_S  26

/** SPI_MEM_USER2_REG register
 *  SPI0 user2 register.
 */
#define SPI_MEM_USER2_REG(i)              (REG_SPI_MEM_BASE(i) + 0x20)
/** SPI_MEM_USR_COMMAND_VALUE : R/W; bitpos: [15:0]; default: 0;
 *  The value of  command.
 */
#define SPI_MEM_USR_COMMAND_VALUE    0x0000FFFFU
#define SPI_MEM_USR_COMMAND_VALUE_M  (SPI_MEM_USR_COMMAND_VALUE_V << SPI_MEM_USR_COMMAND_VALUE_S)
#define SPI_MEM_USR_COMMAND_VALUE_V  0x0000FFFFU
#define SPI_MEM_USR_COMMAND_VALUE_S  0
/** SPI_MEM_USR_COMMAND_BITLEN : R/W; bitpos: [31:28]; default: 7;
 *  The length in bits of command phase. The register value shall be (bit_num-1)
 */
#define SPI_MEM_USR_COMMAND_BITLEN    0x0000000FU
#define SPI_MEM_USR_COMMAND_BITLEN_M  (SPI_MEM_USR_COMMAND_BITLEN_V << SPI_MEM_USR_COMMAND_BITLEN_S)
#define SPI_MEM_USR_COMMAND_BITLEN_V  0x0000000FU
#define SPI_MEM_USR_COMMAND_BITLEN_S  28

/** SPI_MEM_MISC_REG register
 *  SPI0 misc register
 */
#define SPI_MEM_MISC_REG(i)              (REG_SPI_MEM_BASE(i) + 0x34)
/** SPI_MEM_FSUB_PIN : HRO; bitpos: [7]; default: 0;
 *  For SPI0,  flash is connected to SUBPINs.
 */
#define SPI_MEM_FSUB_PIN    (BIT(7))
#define SPI_MEM_FSUB_PIN_M  (SPI_MEM_FSUB_PIN_V << SPI_MEM_FSUB_PIN_S)
#define SPI_MEM_FSUB_PIN_V  0x00000001U
#define SPI_MEM_FSUB_PIN_S  7
/** SPI_MEM_SSUB_PIN : HRO; bitpos: [8]; default: 0;
 *  For SPI0,  sram is connected to SUBPINs.
 */
#define SPI_MEM_SSUB_PIN    (BIT(8))
#define SPI_MEM_SSUB_PIN_M  (SPI_MEM_SSUB_PIN_V << SPI_MEM_SSUB_PIN_S)
#define SPI_MEM_SSUB_PIN_V  0x00000001U
#define SPI_MEM_SSUB_PIN_S  8
/** SPI_MEM_CK_IDLE_EDGE : R/W; bitpos: [9]; default: 0;
 *  1: SPI_CLK line is high when idle     0: spi clk line is low when idle
 */
#define SPI_MEM_CK_IDLE_EDGE    (BIT(9))
#define SPI_MEM_CK_IDLE_EDGE_M  (SPI_MEM_CK_IDLE_EDGE_V << SPI_MEM_CK_IDLE_EDGE_S)
#define SPI_MEM_CK_IDLE_EDGE_V  0x00000001U
#define SPI_MEM_CK_IDLE_EDGE_S  9
/** SPI_MEM_CS_KEEP_ACTIVE : R/W; bitpos: [10]; default: 0;
 *  SPI_CS line keep low when the bit is set.
 */
#define SPI_MEM_CS_KEEP_ACTIVE    (BIT(10))
#define SPI_MEM_CS_KEEP_ACTIVE_M  (SPI_MEM_CS_KEEP_ACTIVE_V << SPI_MEM_CS_KEEP_ACTIVE_S)
#define SPI_MEM_CS_KEEP_ACTIVE_V  0x00000001U
#define SPI_MEM_CS_KEEP_ACTIVE_S  10

/** SPI_MEM_CACHE_FCTRL_REG register
 *  SPI0 bit mode control register.
 */
#define SPI_MEM_CACHE_FCTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x3c)
/** SPI_SAME_AW_AR_ADDR_CHK_EN : HRO; bitpos: [30]; default: 1;
 *  Set this bit to check AXI read/write the same address region.
 */
#define SPI_SAME_AW_AR_ADDR_CHK_EN    (BIT(30))
#define SPI_SAME_AW_AR_ADDR_CHK_EN_M  (SPI_SAME_AW_AR_ADDR_CHK_EN_V << SPI_SAME_AW_AR_ADDR_CHK_EN_S)
#define SPI_SAME_AW_AR_ADDR_CHK_EN_V  0x00000001U
#define SPI_SAME_AW_AR_ADDR_CHK_EN_S  30
/** SPI_CLOSE_AXI_INF_EN : R/W; bitpos: [31]; default: 1;
 *  Set this bit to close AXI read/write transfer to MSPI, which means that only
 *  SLV_ERR will be replied to BRESP/RRESP.
 */
#define SPI_CLOSE_AXI_INF_EN    (BIT(31))
#define SPI_CLOSE_AXI_INF_EN_M  (SPI_CLOSE_AXI_INF_EN_V << SPI_CLOSE_AXI_INF_EN_S)
#define SPI_CLOSE_AXI_INF_EN_V  0x00000001U
#define SPI_CLOSE_AXI_INF_EN_S  31

/** SPI_MEM_CACHE_SCTRL_REG register
 *  SPI0 external RAM control register
 *  This register is only for internal debugging purposes. Do not use it in
 *  applications.
 */
#define SPI_MEM_CACHE_SCTRL_REG(i) (REG_SPI_MEM_BASE(i) + 0x40)
/** SPI_MEM_CACHE_USR_SADDR_4BYTE : HRO; bitpos: [0]; default: 0;
 *  For SPI0, In the external RAM mode, cache read flash with 4 bytes command, 1:
 *  enable, 0:disable.
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_CACHE_USR_SADDR_4BYTE    (BIT(0))
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_M  (SPI_MEM_CACHE_USR_SADDR_4BYTE_V << SPI_MEM_CACHE_USR_SADDR_4BYTE_S)
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_V  0x00000001U
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_S  0
/** SPI_MEM_USR_SRAM_DIO : HRO; bitpos: [1]; default: 0;
 *  For SPI0, In the external RAM mode, spi dual I/O mode enable, 1: enable, 0:disable
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_USR_SRAM_DIO    (BIT(1))
#define SPI_MEM_USR_SRAM_DIO_M  (SPI_MEM_USR_SRAM_DIO_V << SPI_MEM_USR_SRAM_DIO_S)
#define SPI_MEM_USR_SRAM_DIO_V  0x00000001U
#define SPI_MEM_USR_SRAM_DIO_S  1
/** SPI_MEM_USR_SRAM_QIO : HRO; bitpos: [2]; default: 0;
 *  For SPI0, In the external RAM mode, spi quad I/O mode enable, 1: enable, 0:disable
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_USR_SRAM_QIO    (BIT(2))
#define SPI_MEM_USR_SRAM_QIO_M  (SPI_MEM_USR_SRAM_QIO_V << SPI_MEM_USR_SRAM_QIO_S)
#define SPI_MEM_USR_SRAM_QIO_V  0x00000001U
#define SPI_MEM_USR_SRAM_QIO_S  2
/** SPI_MEM_USR_WR_SRAM_DUMMY : HRO; bitpos: [3]; default: 0;
 *  For SPI0, In the external RAM mode, it is the enable bit of dummy phase for write
 *  operations.
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_USR_WR_SRAM_DUMMY    (BIT(3))
#define SPI_MEM_USR_WR_SRAM_DUMMY_M  (SPI_MEM_USR_WR_SRAM_DUMMY_V << SPI_MEM_USR_WR_SRAM_DUMMY_S)
#define SPI_MEM_USR_WR_SRAM_DUMMY_V  0x00000001U
#define SPI_MEM_USR_WR_SRAM_DUMMY_S  3
/** SPI_MEM_USR_RD_SRAM_DUMMY : HRO; bitpos: [4]; default: 1;
 *  For SPI0, In the external RAM mode, it is the enable bit of dummy phase for read
 *  operations.
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_USR_RD_SRAM_DUMMY    (BIT(4))
#define SPI_MEM_USR_RD_SRAM_DUMMY_M  (SPI_MEM_USR_RD_SRAM_DUMMY_V << SPI_MEM_USR_RD_SRAM_DUMMY_S)
#define SPI_MEM_USR_RD_SRAM_DUMMY_V  0x00000001U
#define SPI_MEM_USR_RD_SRAM_DUMMY_S  4
/** SPI_MEM_CACHE_SRAM_USR_RCMD : HRO; bitpos: [5]; default: 1;
 *  For SPI0, In the external RAM mode cache read external RAM for user define command.
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_CACHE_SRAM_USR_RCMD    (BIT(5))
#define SPI_MEM_CACHE_SRAM_USR_RCMD_M  (SPI_MEM_CACHE_SRAM_USR_RCMD_V << SPI_MEM_CACHE_SRAM_USR_RCMD_S)
#define SPI_MEM_CACHE_SRAM_USR_RCMD_V  0x00000001U
#define SPI_MEM_CACHE_SRAM_USR_RCMD_S  5
/** SPI_MEM_SRAM_RDUMMY_CYCLELEN : HRO; bitpos: [11:6]; default: 1;
 *  For SPI0, In the external RAM mode, it is the length in bits of read dummy phase.
 *  The register value shall be (bit_num-1).
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN    0x0000003FU
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_M  (SPI_MEM_SRAM_RDUMMY_CYCLELEN_V << SPI_MEM_SRAM_RDUMMY_CYCLELEN_S)
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_V  0x0000003FU
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_S  6
/** SPI_MEM_SRAM_ADDR_BITLEN : HRO; bitpos: [19:14]; default: 23;
 *  For SPI0, In the external RAM mode, it is the length in bits of address phase. The
 *  register value shall be (bit_num-1).
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_SRAM_ADDR_BITLEN    0x0000003FU
#define SPI_MEM_SRAM_ADDR_BITLEN_M  (SPI_MEM_SRAM_ADDR_BITLEN_V << SPI_MEM_SRAM_ADDR_BITLEN_S)
#define SPI_MEM_SRAM_ADDR_BITLEN_V  0x0000003FU
#define SPI_MEM_SRAM_ADDR_BITLEN_S  14
/** SPI_MEM_CACHE_SRAM_USR_WCMD : HRO; bitpos: [20]; default: 1;
 *  For SPI0, In the external RAM mode cache write sram for user define command
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_CACHE_SRAM_USR_WCMD    (BIT(20))
#define SPI_MEM_CACHE_SRAM_USR_WCMD_M  (SPI_MEM_CACHE_SRAM_USR_WCMD_V << SPI_MEM_CACHE_SRAM_USR_WCMD_S)
#define SPI_MEM_CACHE_SRAM_USR_WCMD_V  0x00000001U
#define SPI_MEM_CACHE_SRAM_USR_WCMD_S  20
/** SPI_MEM_SRAM_OCT : HRO; bitpos: [21]; default: 0;
 *  reserved
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_SRAM_OCT    (BIT(21))
#define SPI_MEM_SRAM_OCT_M  (SPI_MEM_SRAM_OCT_V << SPI_MEM_SRAM_OCT_S)
#define SPI_MEM_SRAM_OCT_V  0x00000001U
#define SPI_MEM_SRAM_OCT_S  21
/** SPI_MEM_SRAM_WDUMMY_CYCLELEN : HRO; bitpos: [27:22]; default: 1;
 *  For SPI0, In the external RAM mode, it is the length in bits of write dummy phase.
 *  The register value shall be (bit_num-1).
 *  This field is only for internal debugging purposes. Do not use it in applications.
 */
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN    0x0000003FU
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_M  (SPI_MEM_SRAM_WDUMMY_CYCLELEN_V << SPI_MEM_SRAM_WDUMMY_CYCLELEN_S)
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_V  0x0000003FU
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_S  22

/** SPI_MEM_SRAM_CMD_REG register
 *  SPI0 external RAM mode control register
 */
#define SPI_MEM_SRAM_CMD_REG(i)              (REG_SPI_MEM_BASE(i) + 0x44)
/** SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT : R/W; bitpos: [24]; default: 0;
 *  In the dummy phase of an MSPI write data transfer when accesses to external RAM,
 *  the level of SPI_DQS is output by the MSPI controller.
 */
#define SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT    (BIT(24))
#define SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_M  (SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_V << SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_S)
#define SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_V  0x00000001U
#define SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_S  24
/** SPI_SMEM_WDUMMY_ALWAYS_OUT : R/W; bitpos: [25]; default: 0;
 *  In the dummy phase of an MSPI write data transfer when accesses to external RAM,
 *  the level of SPI_IO[7:0] is output by the MSPI controller.
 */
#define SPI_SMEM_WDUMMY_ALWAYS_OUT    (BIT(25))
#define SPI_SMEM_WDUMMY_ALWAYS_OUT_M  (SPI_SMEM_WDUMMY_ALWAYS_OUT_V << SPI_SMEM_WDUMMY_ALWAYS_OUT_S)
#define SPI_SMEM_WDUMMY_ALWAYS_OUT_V  0x00000001U
#define SPI_SMEM_WDUMMY_ALWAYS_OUT_S  25
/** SPI_SMEM_DQS_IE_ALWAYS_ON : R/W; bitpos: [30]; default: 0;
 *  When accesses to external RAM, 1: the IE signals of pads connected to SPI_DQS are
 *  always 1. 0: Others.
 */
#define SPI_SMEM_DQS_IE_ALWAYS_ON    (BIT(30))
#define SPI_SMEM_DQS_IE_ALWAYS_ON_M  (SPI_SMEM_DQS_IE_ALWAYS_ON_V << SPI_SMEM_DQS_IE_ALWAYS_ON_S)
#define SPI_SMEM_DQS_IE_ALWAYS_ON_V  0x00000001U
#define SPI_SMEM_DQS_IE_ALWAYS_ON_S  30
/** SPI_SMEM_DATA_IE_ALWAYS_ON : R/W; bitpos: [31]; default: 1;
 *  When accesses to external RAM, 1: the IE signals of pads connected to SPI_IO[7:0]
 *  are always 1. 0: Others.
 */
#define SPI_SMEM_DATA_IE_ALWAYS_ON    (BIT(31))
#define SPI_SMEM_DATA_IE_ALWAYS_ON_M  (SPI_SMEM_DATA_IE_ALWAYS_ON_V << SPI_SMEM_DATA_IE_ALWAYS_ON_S)
#define SPI_SMEM_DATA_IE_ALWAYS_ON_V  0x00000001U
#define SPI_SMEM_DATA_IE_ALWAYS_ON_S  31

/** SPI_MEM_FSM_REG register
 *  SPI0 FSM status register
 */
#define SPI_MEM_FSM_REG(i)              (REG_SPI_MEM_BASE(i) + 0x54)
/** SPI_MEM_LOCK_DELAY_TIME : R/W; bitpos: [18:7]; default: 4;
 *  The lock delay time of SPI0/1 arbiter by spi0_slv_st, after PER is sent by SPI1.
 */
#define SPI_MEM_LOCK_DELAY_TIME    0x00000FFFU
#define SPI_MEM_LOCK_DELAY_TIME_M  (SPI_MEM_LOCK_DELAY_TIME_V << SPI_MEM_LOCK_DELAY_TIME_S)
#define SPI_MEM_LOCK_DELAY_TIME_V  0x00000FFFU
#define SPI_MEM_LOCK_DELAY_TIME_S  7
/** SPI_MEM_FLASH_LOCK_EN : R/W; bitpos: [19]; default: 0;
 *  The lock enable for FLASH to lock spi0 trans req.1: Enable. 0: Disable.
 */
#define SPI_MEM_FLASH_LOCK_EN    (BIT(19))
#define SPI_MEM_FLASH_LOCK_EN_M  (SPI_MEM_FLASH_LOCK_EN_V << SPI_MEM_FLASH_LOCK_EN_S)
#define SPI_MEM_FLASH_LOCK_EN_V  0x00000001U
#define SPI_MEM_FLASH_LOCK_EN_S  19
/** SPI_MEM_SRAM_LOCK_EN : R/W; bitpos: [20]; default: 0;
 *  The lock enable for external RAM to lock spi0 trans req.1: Enable. 0: Disable.
 */
#define SPI_MEM_SRAM_LOCK_EN    (BIT(20))
#define SPI_MEM_SRAM_LOCK_EN_M  (SPI_MEM_SRAM_LOCK_EN_V << SPI_MEM_SRAM_LOCK_EN_S)
#define SPI_MEM_SRAM_LOCK_EN_V  0x00000001U
#define SPI_MEM_SRAM_LOCK_EN_S  20

/** SPI_MEM_INT_ENA_REG register
 *  SPI0 interrupt enable register
 */
#define SPI_MEM_INT_ENA_REG(i)              (REG_SPI_MEM_BASE(i) + 0xc0)
/** SPI_MEM_SLV_ST_END_INT_ENA : R/W; bitpos: [3]; default: 0;
 *  The enable bit for SPI_MEM_SLV_ST_END_INT interrupt.
 */
#define SPI_MEM_SLV_ST_END_INT_ENA    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ENA_M  (SPI_MEM_SLV_ST_END_INT_ENA_V << SPI_MEM_SLV_ST_END_INT_ENA_S)
#define SPI_MEM_SLV_ST_END_INT_ENA_V  0x00000001U
#define SPI_MEM_SLV_ST_END_INT_ENA_S  3
/** SPI_MEM_MST_ST_END_INT_ENA : R/W; bitpos: [4]; default: 0;
 *  The enable bit for SPI_MEM_MST_ST_END_INT interrupt.
 */
#define SPI_MEM_MST_ST_END_INT_ENA    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ENA_M  (SPI_MEM_MST_ST_END_INT_ENA_V << SPI_MEM_MST_ST_END_INT_ENA_S)
#define SPI_MEM_MST_ST_END_INT_ENA_V  0x00000001U
#define SPI_MEM_MST_ST_END_INT_ENA_S  4
/** SPI_MEM_ECC_ERR_INT_ENA : R/W; bitpos: [5]; default: 0;
 *  The enable bit for SPI_MEM_ECC_ERR_INT interrupt.
 */
#define SPI_MEM_ECC_ERR_INT_ENA    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ENA_M  (SPI_MEM_ECC_ERR_INT_ENA_V << SPI_MEM_ECC_ERR_INT_ENA_S)
#define SPI_MEM_ECC_ERR_INT_ENA_V  0x00000001U
#define SPI_MEM_ECC_ERR_INT_ENA_S  5
/** SPI_MEM_PMS_REJECT_INT_ENA : R/W; bitpos: [6]; default: 0;
 *  The enable bit for SPI_MEM_PMS_REJECT_INT interrupt.
 */
#define SPI_MEM_PMS_REJECT_INT_ENA    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ENA_M  (SPI_MEM_PMS_REJECT_INT_ENA_V << SPI_MEM_PMS_REJECT_INT_ENA_S)
#define SPI_MEM_PMS_REJECT_INT_ENA_V  0x00000001U
#define SPI_MEM_PMS_REJECT_INT_ENA_S  6
/** SPI_MEM_AXI_RADDR_ERR_INT_ENA : R/W; bitpos: [7]; default: 0;
 *  The enable bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_M  (SPI_MEM_AXI_RADDR_ERR_INT_ENA_V << SPI_MEM_AXI_RADDR_ERR_INT_ENA_S)
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_V  0x00000001U
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_S  7
/** SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA : R/W; bitpos: [8]; default: 0;
 *  The enable bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_M  (SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_V << SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_S)
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_V  0x00000001U
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_S  8
/** SPI_MEM_AXI_WADDR_ERR_INT__ENA : R/W; bitpos: [9]; default: 0;
 *  The enable bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WADDR_ERR_INT__ENA    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT__ENA_M  (SPI_MEM_AXI_WADDR_ERR_INT__ENA_V << SPI_MEM_AXI_WADDR_ERR_INT__ENA_S)
#define SPI_MEM_AXI_WADDR_ERR_INT__ENA_V  0x00000001U
#define SPI_MEM_AXI_WADDR_ERR_INT__ENA_S  9
/** SPI_MEM_DQS0_AFIFO_OVF_INT_ENA : R/W; bitpos: [28]; default: 0;
 *  The enable bit for SPI_MEM_DQS0_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ENA    (BIT(28))
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ENA_M  (SPI_MEM_DQS0_AFIFO_OVF_INT_ENA_V << SPI_MEM_DQS0_AFIFO_OVF_INT_ENA_S)
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ENA_V  0x00000001U
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ENA_S  28
/** SPI_MEM_DQS1_AFIFO_OVF_INT_ENA : R/W; bitpos: [29]; default: 0;
 *  The enable bit for SPI_MEM_DQS1_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ENA    (BIT(29))
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ENA_M  (SPI_MEM_DQS1_AFIFO_OVF_INT_ENA_V << SPI_MEM_DQS1_AFIFO_OVF_INT_ENA_S)
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ENA_V  0x00000001U
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ENA_S  29
/** SPI_MEM_BUS_FIFO1_UDF_INT_ENA : R/W; bitpos: [30]; default: 0;
 *  The enable bit for SPI_MEM_BUS_FIFO1_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO1_UDF_INT_ENA    (BIT(30))
#define SPI_MEM_BUS_FIFO1_UDF_INT_ENA_M  (SPI_MEM_BUS_FIFO1_UDF_INT_ENA_V << SPI_MEM_BUS_FIFO1_UDF_INT_ENA_S)
#define SPI_MEM_BUS_FIFO1_UDF_INT_ENA_V  0x00000001U
#define SPI_MEM_BUS_FIFO1_UDF_INT_ENA_S  30
/** SPI_MEM_BUS_FIFO0_UDF_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  The enable bit for SPI_MEM_BUS_FIFO0_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO0_UDF_INT_ENA    (BIT(31))
#define SPI_MEM_BUS_FIFO0_UDF_INT_ENA_M  (SPI_MEM_BUS_FIFO0_UDF_INT_ENA_V << SPI_MEM_BUS_FIFO0_UDF_INT_ENA_S)
#define SPI_MEM_BUS_FIFO0_UDF_INT_ENA_V  0x00000001U
#define SPI_MEM_BUS_FIFO0_UDF_INT_ENA_S  31

/** SPI_MEM_INT_CLR_REG register
 *  SPI0 interrupt clear register
 */
#define SPI_MEM_INT_CLR_REG(i)              (REG_SPI_MEM_BASE(i) + 0xc4)
/** SPI_MEM_SLV_ST_END_INT_CLR : WT; bitpos: [3]; default: 0;
 *  The clear bit for SPI_MEM_SLV_ST_END_INT interrupt.
 */
#define SPI_MEM_SLV_ST_END_INT_CLR    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_CLR_M  (SPI_MEM_SLV_ST_END_INT_CLR_V << SPI_MEM_SLV_ST_END_INT_CLR_S)
#define SPI_MEM_SLV_ST_END_INT_CLR_V  0x00000001U
#define SPI_MEM_SLV_ST_END_INT_CLR_S  3
/** SPI_MEM_MST_ST_END_INT_CLR : WT; bitpos: [4]; default: 0;
 *  The clear bit for SPI_MEM_MST_ST_END_INT interrupt.
 */
#define SPI_MEM_MST_ST_END_INT_CLR    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_CLR_M  (SPI_MEM_MST_ST_END_INT_CLR_V << SPI_MEM_MST_ST_END_INT_CLR_S)
#define SPI_MEM_MST_ST_END_INT_CLR_V  0x00000001U
#define SPI_MEM_MST_ST_END_INT_CLR_S  4
/** SPI_MEM_ECC_ERR_INT_CLR : WT; bitpos: [5]; default: 0;
 *  The clear bit for SPI_MEM_ECC_ERR_INT interrupt.
 */
#define SPI_MEM_ECC_ERR_INT_CLR    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_CLR_M  (SPI_MEM_ECC_ERR_INT_CLR_V << SPI_MEM_ECC_ERR_INT_CLR_S)
#define SPI_MEM_ECC_ERR_INT_CLR_V  0x00000001U
#define SPI_MEM_ECC_ERR_INT_CLR_S  5
/** SPI_MEM_PMS_REJECT_INT_CLR : WT; bitpos: [6]; default: 0;
 *  The clear bit for SPI_MEM_PMS_REJECT_INT interrupt.
 */
#define SPI_MEM_PMS_REJECT_INT_CLR    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_CLR_M  (SPI_MEM_PMS_REJECT_INT_CLR_V << SPI_MEM_PMS_REJECT_INT_CLR_S)
#define SPI_MEM_PMS_REJECT_INT_CLR_V  0x00000001U
#define SPI_MEM_PMS_REJECT_INT_CLR_S  6
/** SPI_MEM_AXI_RADDR_ERR_INT_CLR : WT; bitpos: [7]; default: 0;
 *  The clear bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_M  (SPI_MEM_AXI_RADDR_ERR_INT_CLR_V << SPI_MEM_AXI_RADDR_ERR_INT_CLR_S)
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_V  0x00000001U
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_S  7
/** SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR : WT; bitpos: [8]; default: 0;
 *  The clear bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_M  (SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_V << SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_S)
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_V  0x00000001U
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_S  8
/** SPI_MEM_AXI_WADDR_ERR_INT_CLR : WT; bitpos: [9]; default: 0;
 *  The clear bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_M  (SPI_MEM_AXI_WADDR_ERR_INT_CLR_V << SPI_MEM_AXI_WADDR_ERR_INT_CLR_S)
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_V  0x00000001U
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_S  9
/** SPI_MEM_DQS0_AFIFO_OVF_INT_CLR : WT; bitpos: [28]; default: 0;
 *  The clear bit for SPI_MEM_DQS0_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS0_AFIFO_OVF_INT_CLR    (BIT(28))
#define SPI_MEM_DQS0_AFIFO_OVF_INT_CLR_M  (SPI_MEM_DQS0_AFIFO_OVF_INT_CLR_V << SPI_MEM_DQS0_AFIFO_OVF_INT_CLR_S)
#define SPI_MEM_DQS0_AFIFO_OVF_INT_CLR_V  0x00000001U
#define SPI_MEM_DQS0_AFIFO_OVF_INT_CLR_S  28
/** SPI_MEM_DQS1_AFIFO_OVF_INT_CLR : WT; bitpos: [29]; default: 0;
 *  The clear bit for SPI_MEM_DQS1_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS1_AFIFO_OVF_INT_CLR    (BIT(29))
#define SPI_MEM_DQS1_AFIFO_OVF_INT_CLR_M  (SPI_MEM_DQS1_AFIFO_OVF_INT_CLR_V << SPI_MEM_DQS1_AFIFO_OVF_INT_CLR_S)
#define SPI_MEM_DQS1_AFIFO_OVF_INT_CLR_V  0x00000001U
#define SPI_MEM_DQS1_AFIFO_OVF_INT_CLR_S  29
/** SPI_MEM_BUS_FIFO1_UDF_INT_CLR : WT; bitpos: [30]; default: 0;
 *  The clear bit for SPI_MEM_BUS_FIFO1_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO1_UDF_INT_CLR    (BIT(30))
#define SPI_MEM_BUS_FIFO1_UDF_INT_CLR_M  (SPI_MEM_BUS_FIFO1_UDF_INT_CLR_V << SPI_MEM_BUS_FIFO1_UDF_INT_CLR_S)
#define SPI_MEM_BUS_FIFO1_UDF_INT_CLR_V  0x00000001U
#define SPI_MEM_BUS_FIFO1_UDF_INT_CLR_S  30
/** SPI_MEM_BUS_FIFO0_UDF_INT_CLR : WT; bitpos: [31]; default: 0;
 *  The clear bit for SPI_MEM_BUS_FIFO0_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO0_UDF_INT_CLR    (BIT(31))
#define SPI_MEM_BUS_FIFO0_UDF_INT_CLR_M  (SPI_MEM_BUS_FIFO0_UDF_INT_CLR_V << SPI_MEM_BUS_FIFO0_UDF_INT_CLR_S)
#define SPI_MEM_BUS_FIFO0_UDF_INT_CLR_V  0x00000001U
#define SPI_MEM_BUS_FIFO0_UDF_INT_CLR_S  31

/** SPI_MEM_INT_RAW_REG register
 *  SPI0 interrupt raw register
 */
#define SPI_MEM_INT_RAW_REG(i)              (REG_SPI_MEM_BASE(i) + 0xc8)
/** SPI_MEM_SLV_ST_END_INT_RAW : R/WTC/SS; bitpos: [3]; default: 0;
 *  The raw bit for SPI_MEM_SLV_ST_END_INT interrupt. 1: Triggered when spi0_slv_st is
 *  changed from non idle state to idle state. It means that SPI_CS raises high. 0:
 *  Others
 */
#define SPI_MEM_SLV_ST_END_INT_RAW    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_RAW_M  (SPI_MEM_SLV_ST_END_INT_RAW_V << SPI_MEM_SLV_ST_END_INT_RAW_S)
#define SPI_MEM_SLV_ST_END_INT_RAW_V  0x00000001U
#define SPI_MEM_SLV_ST_END_INT_RAW_S  3
/** SPI_MEM_MST_ST_END_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 *  The raw bit for SPI_MEM_MST_ST_END_INT interrupt. 1: Triggered when spi0_mst_st is
 *  changed from non idle state to idle state. 0: Others.
 */
#define SPI_MEM_MST_ST_END_INT_RAW    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_RAW_M  (SPI_MEM_MST_ST_END_INT_RAW_V << SPI_MEM_MST_ST_END_INT_RAW_S)
#define SPI_MEM_MST_ST_END_INT_RAW_V  0x00000001U
#define SPI_MEM_MST_ST_END_INT_RAW_S  4
/** SPI_MEM_ECC_ERR_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 *  The raw bit for SPI_MEM_ECC_ERR_INT interrupt. When SPI_FMEM_ECC_ERR_INT_EN is set
 *  and  SPI_SMEM_ECC_ERR_INT_EN is cleared, this bit is triggered when the error times
 *  of SPI0/1 ECC read flash are equal or bigger than SPI_MEM_ECC_ERR_INT_NUM. When
 *  SPI_FMEM_ECC_ERR_INT_EN is cleared and  SPI_SMEM_ECC_ERR_INT_EN is set, this bit is
 *  triggered when the error times of SPI0/1 ECC read external RAM are equal or bigger
 *  than SPI_MEM_ECC_ERR_INT_NUM. When SPI_FMEM_ECC_ERR_INT_EN and
 *  SPI_SMEM_ECC_ERR_INT_EN are set, this bit is triggered when the total error times
 *  of SPI0/1 ECC read external RAM and flash are equal or bigger than
 *  SPI_MEM_ECC_ERR_INT_NUM. When SPI_FMEM_ECC_ERR_INT_EN and  SPI_SMEM_ECC_ERR_INT_EN
 *  are cleared, this bit will not be triggered.
 */
#define SPI_MEM_ECC_ERR_INT_RAW    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_RAW_M  (SPI_MEM_ECC_ERR_INT_RAW_V << SPI_MEM_ECC_ERR_INT_RAW_S)
#define SPI_MEM_ECC_ERR_INT_RAW_V  0x00000001U
#define SPI_MEM_ECC_ERR_INT_RAW_S  5
/** SPI_MEM_PMS_REJECT_INT_RAW : R/WTC/SS; bitpos: [6]; default: 0;
 *  The raw bit for SPI_MEM_PMS_REJECT_INT interrupt. 1: Triggered when SPI1 access is
 *  rejected. 0: Others.
 */
#define SPI_MEM_PMS_REJECT_INT_RAW    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_RAW_M  (SPI_MEM_PMS_REJECT_INT_RAW_V << SPI_MEM_PMS_REJECT_INT_RAW_S)
#define SPI_MEM_PMS_REJECT_INT_RAW_V  0x00000001U
#define SPI_MEM_PMS_REJECT_INT_RAW_S  6
/** SPI_MEM_AXI_RADDR_ERR_INT_RAW : R/WTC/SS; bitpos: [7]; default: 0;
 *  The raw bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt. 1: Triggered when AXI read
 *  address is invalid by compared to MMU configuration. 0: Others.
 */
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_M  (SPI_MEM_AXI_RADDR_ERR_INT_RAW_V << SPI_MEM_AXI_RADDR_ERR_INT_RAW_S)
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_V  0x00000001U
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_S  7
/** SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW : R/WTC/SS; bitpos: [8]; default: 0;
 *  The raw bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt. 1: Triggered when AXI write
 *  flash request is received. 0: Others.
 */
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_M  (SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_V << SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_S)
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_V  0x00000001U
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_S  8
/** SPI_MEM_AXI_WADDR_ERR_INT_RAW : R/WTC/SS; bitpos: [9]; default: 0;
 *  The raw bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt. 1: Triggered when AXI write
 *  address is invalid by compared to MMU configuration. 0: Others.
 */
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_M  (SPI_MEM_AXI_WADDR_ERR_INT_RAW_V << SPI_MEM_AXI_WADDR_ERR_INT_RAW_S)
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_V  0x00000001U
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_S  9
/** SPI_MEM_DQS0_AFIFO_OVF_INT_RAW : R/WTC/SS; bitpos: [28]; default: 0;
 *  The raw bit for SPI_MEM_DQS0_AFIFO_OVF_INT interrupt. 1: Triggered when the AFIFO
 *  connected to SPI_DQS1 is overflow.
 */
#define SPI_MEM_DQS0_AFIFO_OVF_INT_RAW    (BIT(28))
#define SPI_MEM_DQS0_AFIFO_OVF_INT_RAW_M  (SPI_MEM_DQS0_AFIFO_OVF_INT_RAW_V << SPI_MEM_DQS0_AFIFO_OVF_INT_RAW_S)
#define SPI_MEM_DQS0_AFIFO_OVF_INT_RAW_V  0x00000001U
#define SPI_MEM_DQS0_AFIFO_OVF_INT_RAW_S  28
/** SPI_MEM_DQS1_AFIFO_OVF_INT_RAW : R/WTC/SS; bitpos: [29]; default: 0;
 *  The raw bit for SPI_MEM_DQS1_AFIFO_OVF_INT interrupt. 1: Triggered when the AFIFO
 *  connected to SPI_DQS is overflow.
 */
#define SPI_MEM_DQS1_AFIFO_OVF_INT_RAW    (BIT(29))
#define SPI_MEM_DQS1_AFIFO_OVF_INT_RAW_M  (SPI_MEM_DQS1_AFIFO_OVF_INT_RAW_V << SPI_MEM_DQS1_AFIFO_OVF_INT_RAW_S)
#define SPI_MEM_DQS1_AFIFO_OVF_INT_RAW_V  0x00000001U
#define SPI_MEM_DQS1_AFIFO_OVF_INT_RAW_S  29
/** SPI_MEM_BUS_FIFO1_UDF_INT_RAW : R/WTC/SS; bitpos: [30]; default: 0;
 *  The raw bit for SPI_MEM_BUS_FIFO1_UDF_INT interrupt. 1: Triggered when BUS1 FIFO is
 *  underflow.
 */
#define SPI_MEM_BUS_FIFO1_UDF_INT_RAW    (BIT(30))
#define SPI_MEM_BUS_FIFO1_UDF_INT_RAW_M  (SPI_MEM_BUS_FIFO1_UDF_INT_RAW_V << SPI_MEM_BUS_FIFO1_UDF_INT_RAW_S)
#define SPI_MEM_BUS_FIFO1_UDF_INT_RAW_V  0x00000001U
#define SPI_MEM_BUS_FIFO1_UDF_INT_RAW_S  30
/** SPI_MEM_BUS_FIFO0_UDF_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  The raw bit for SPI_MEM_BUS_FIFO0_UDF_INT interrupt. 1: Triggered when BUS0 FIFO is
 *  underflow.
 */
#define SPI_MEM_BUS_FIFO0_UDF_INT_RAW    (BIT(31))
#define SPI_MEM_BUS_FIFO0_UDF_INT_RAW_M  (SPI_MEM_BUS_FIFO0_UDF_INT_RAW_V << SPI_MEM_BUS_FIFO0_UDF_INT_RAW_S)
#define SPI_MEM_BUS_FIFO0_UDF_INT_RAW_V  0x00000001U
#define SPI_MEM_BUS_FIFO0_UDF_INT_RAW_S  31

/** SPI_MEM_INT_ST_REG register
 *  SPI0 interrupt status register
 */
#define SPI_MEM_INT_ST_REG(i)              (REG_SPI_MEM_BASE(i) + 0xcc)
/** SPI_MEM_SLV_ST_END_INT_ST : RO; bitpos: [3]; default: 0;
 *  The status bit for SPI_MEM_SLV_ST_END_INT interrupt.
 */
#define SPI_MEM_SLV_ST_END_INT_ST    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ST_M  (SPI_MEM_SLV_ST_END_INT_ST_V << SPI_MEM_SLV_ST_END_INT_ST_S)
#define SPI_MEM_SLV_ST_END_INT_ST_V  0x00000001U
#define SPI_MEM_SLV_ST_END_INT_ST_S  3
/** SPI_MEM_MST_ST_END_INT_ST : RO; bitpos: [4]; default: 0;
 *  The status bit for SPI_MEM_MST_ST_END_INT interrupt.
 */
#define SPI_MEM_MST_ST_END_INT_ST    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ST_M  (SPI_MEM_MST_ST_END_INT_ST_V << SPI_MEM_MST_ST_END_INT_ST_S)
#define SPI_MEM_MST_ST_END_INT_ST_V  0x00000001U
#define SPI_MEM_MST_ST_END_INT_ST_S  4
/** SPI_MEM_ECC_ERR_INT_ST : RO; bitpos: [5]; default: 0;
 *  The status bit for SPI_MEM_ECC_ERR_INT interrupt.
 */
#define SPI_MEM_ECC_ERR_INT_ST    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ST_M  (SPI_MEM_ECC_ERR_INT_ST_V << SPI_MEM_ECC_ERR_INT_ST_S)
#define SPI_MEM_ECC_ERR_INT_ST_V  0x00000001U
#define SPI_MEM_ECC_ERR_INT_ST_S  5
/** SPI_MEM_PMS_REJECT_INT_ST : RO; bitpos: [6]; default: 0;
 *  The status bit for SPI_MEM_PMS_REJECT_INT interrupt.
 */
#define SPI_MEM_PMS_REJECT_INT_ST    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ST_M  (SPI_MEM_PMS_REJECT_INT_ST_V << SPI_MEM_PMS_REJECT_INT_ST_S)
#define SPI_MEM_PMS_REJECT_INT_ST_V  0x00000001U
#define SPI_MEM_PMS_REJECT_INT_ST_S  6
/** SPI_MEM_AXI_RADDR_ERR_INT_ST : RO; bitpos: [7]; default: 0;
 *  The enable bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_RADDR_ERR_INT_ST    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_M  (SPI_MEM_AXI_RADDR_ERR_INT_ST_V << SPI_MEM_AXI_RADDR_ERR_INT_ST_S)
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_V  0x00000001U
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_S  7
/** SPI_MEM_AXI_WR_FLASH_ERR_INT_ST : RO; bitpos: [8]; default: 0;
 *  The enable bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_M  (SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_V << SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_S)
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_V  0x00000001U
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_S  8
/** SPI_MEM_AXI_WADDR_ERR_INT_ST : RO; bitpos: [9]; default: 0;
 *  The enable bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt.
 */
#define SPI_MEM_AXI_WADDR_ERR_INT_ST    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_M  (SPI_MEM_AXI_WADDR_ERR_INT_ST_V << SPI_MEM_AXI_WADDR_ERR_INT_ST_S)
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_V  0x00000001U
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_S  9
/** SPI_MEM_DQS0_AFIFO_OVF_INT_ST : RO; bitpos: [28]; default: 0;
 *  The status bit for SPI_MEM_DQS0_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ST    (BIT(28))
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ST_M  (SPI_MEM_DQS0_AFIFO_OVF_INT_ST_V << SPI_MEM_DQS0_AFIFO_OVF_INT_ST_S)
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ST_V  0x00000001U
#define SPI_MEM_DQS0_AFIFO_OVF_INT_ST_S  28
/** SPI_MEM_DQS1_AFIFO_OVF_INT_ST : RO; bitpos: [29]; default: 0;
 *  The status bit for SPI_MEM_DQS1_AFIFO_OVF_INT interrupt.
 */
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ST    (BIT(29))
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ST_M  (SPI_MEM_DQS1_AFIFO_OVF_INT_ST_V << SPI_MEM_DQS1_AFIFO_OVF_INT_ST_S)
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ST_V  0x00000001U
#define SPI_MEM_DQS1_AFIFO_OVF_INT_ST_S  29
/** SPI_MEM_BUS_FIFO1_UDF_INT_ST : RO; bitpos: [30]; default: 0;
 *  The status bit for SPI_MEM_BUS_FIFO1_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO1_UDF_INT_ST    (BIT(30))
#define SPI_MEM_BUS_FIFO1_UDF_INT_ST_M  (SPI_MEM_BUS_FIFO1_UDF_INT_ST_V << SPI_MEM_BUS_FIFO1_UDF_INT_ST_S)
#define SPI_MEM_BUS_FIFO1_UDF_INT_ST_V  0x00000001U
#define SPI_MEM_BUS_FIFO1_UDF_INT_ST_S  30
/** SPI_MEM_BUS_FIFO0_UDF_INT_ST : RO; bitpos: [31]; default: 0;
 *  The status bit for SPI_MEM_BUS_FIFO0_UDF_INT interrupt.
 */
#define SPI_MEM_BUS_FIFO0_UDF_INT_ST    (BIT(31))
#define SPI_MEM_BUS_FIFO0_UDF_INT_ST_M  (SPI_MEM_BUS_FIFO0_UDF_INT_ST_V << SPI_MEM_BUS_FIFO0_UDF_INT_ST_S)
#define SPI_MEM_BUS_FIFO0_UDF_INT_ST_V  0x00000001U
#define SPI_MEM_BUS_FIFO0_UDF_INT_ST_S  31

/** SPI_MEM_DDR_REG register
 *  SPI0 flash DDR mode control register
 */
#define SPI_MEM_DDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0xd4)
/** SPI_FMEM_DDR_EN : R/W; bitpos: [0]; default: 0;
 *  1: in DDR mode,  0 in SDR mode
 */
#define SPI_FMEM_DDR_EN    (BIT(0))
#define SPI_FMEM_DDR_EN_M  (SPI_FMEM_DDR_EN_V << SPI_FMEM_DDR_EN_S)
#define SPI_FMEM_DDR_EN_V  0x00000001U
#define SPI_FMEM_DDR_EN_S  0
/** SPI_FMEM_VAR_DUMMY : R/W; bitpos: [1]; default: 0;
 *  Set the bit to enable variable dummy cycle in spi DDR mode.
 */
#define SPI_FMEM_VAR_DUMMY    (BIT(1))
#define SPI_FMEM_VAR_DUMMY_M  (SPI_FMEM_VAR_DUMMY_V << SPI_FMEM_VAR_DUMMY_S)
#define SPI_FMEM_VAR_DUMMY_V  0x00000001U
#define SPI_FMEM_VAR_DUMMY_S  1
/** SPI_FMEM_DDR_RDAT_SWP : R/W; bitpos: [2]; default: 0;
 *  Set the bit to reorder rx data of the word in spi DDR mode.
 */
#define SPI_FMEM_DDR_RDAT_SWP    (BIT(2))
#define SPI_FMEM_DDR_RDAT_SWP_M  (SPI_FMEM_DDR_RDAT_SWP_V << SPI_FMEM_DDR_RDAT_SWP_S)
#define SPI_FMEM_DDR_RDAT_SWP_V  0x00000001U
#define SPI_FMEM_DDR_RDAT_SWP_S  2
/** SPI_FMEM_DDR_WDAT_SWP : R/W; bitpos: [3]; default: 0;
 *  Set the bit to reorder tx data of the word in spi DDR mode.
 */
#define SPI_FMEM_DDR_WDAT_SWP    (BIT(3))
#define SPI_FMEM_DDR_WDAT_SWP_M  (SPI_FMEM_DDR_WDAT_SWP_V << SPI_FMEM_DDR_WDAT_SWP_S)
#define SPI_FMEM_DDR_WDAT_SWP_V  0x00000001U
#define SPI_FMEM_DDR_WDAT_SWP_S  3
/** SPI_FMEM_DDR_CMD_DIS : R/W; bitpos: [4]; default: 0;
 *  the bit is used to disable dual edge in command phase when DDR mode.
 */
#define SPI_FMEM_DDR_CMD_DIS    (BIT(4))
#define SPI_FMEM_DDR_CMD_DIS_M  (SPI_FMEM_DDR_CMD_DIS_V << SPI_FMEM_DDR_CMD_DIS_S)
#define SPI_FMEM_DDR_CMD_DIS_V  0x00000001U
#define SPI_FMEM_DDR_CMD_DIS_S  4
/** SPI_FMEM_OUTMINBYTELEN : R/W; bitpos: [11:5]; default: 1;
 *  It is the minimum output data length in the panda device.
 */
#define SPI_FMEM_OUTMINBYTELEN    0x0000007FU
#define SPI_FMEM_OUTMINBYTELEN_M  (SPI_FMEM_OUTMINBYTELEN_V << SPI_FMEM_OUTMINBYTELEN_S)
#define SPI_FMEM_OUTMINBYTELEN_V  0x0000007FU
#define SPI_FMEM_OUTMINBYTELEN_S  5
/** SPI_FMEM_TX_DDR_MSK_EN : R/W; bitpos: [12]; default: 1;
 *  Set this bit to mask the first or the last byte in SPI0 ECC DDR write mode, when
 *  accesses to flash.
 */
#define SPI_FMEM_TX_DDR_MSK_EN    (BIT(12))
#define SPI_FMEM_TX_DDR_MSK_EN_M  (SPI_FMEM_TX_DDR_MSK_EN_V << SPI_FMEM_TX_DDR_MSK_EN_S)
#define SPI_FMEM_TX_DDR_MSK_EN_V  0x00000001U
#define SPI_FMEM_TX_DDR_MSK_EN_S  12
/** SPI_FMEM_RX_DDR_MSK_EN : R/W; bitpos: [13]; default: 1;
 *  Set this bit to mask the first or the last byte in SPI0 ECC DDR read mode, when
 *  accesses to flash.
 */
#define SPI_FMEM_RX_DDR_MSK_EN    (BIT(13))
#define SPI_FMEM_RX_DDR_MSK_EN_M  (SPI_FMEM_RX_DDR_MSK_EN_V << SPI_FMEM_RX_DDR_MSK_EN_S)
#define SPI_FMEM_RX_DDR_MSK_EN_V  0x00000001U
#define SPI_FMEM_RX_DDR_MSK_EN_S  13
/** SPI_FMEM_USR_DDR_DQS_THD : R/W; bitpos: [20:14]; default: 0;
 *  The delay number of data strobe which from memory based on SPI clock.
 */
#define SPI_FMEM_USR_DDR_DQS_THD    0x0000007FU
#define SPI_FMEM_USR_DDR_DQS_THD_M  (SPI_FMEM_USR_DDR_DQS_THD_V << SPI_FMEM_USR_DDR_DQS_THD_S)
#define SPI_FMEM_USR_DDR_DQS_THD_V  0x0000007FU
#define SPI_FMEM_USR_DDR_DQS_THD_S  14
/** SPI_FMEM_DDR_DQS_LOOP : R/W; bitpos: [21]; default: 0;
 *  1: Do not need the input of SPI_DQS signal, SPI0 starts to receive data when
 *  spi0_slv_st is in SPI_MEM_DIN state. It is used when there is no SPI_DQS signal or
 *  SPI_DQS signal is not stable. 0: SPI0 starts to store data at the positive and
 *  negative edge of SPI_DQS.
 */
#define SPI_FMEM_DDR_DQS_LOOP    (BIT(21))
#define SPI_FMEM_DDR_DQS_LOOP_M  (SPI_FMEM_DDR_DQS_LOOP_V << SPI_FMEM_DDR_DQS_LOOP_S)
#define SPI_FMEM_DDR_DQS_LOOP_V  0x00000001U
#define SPI_FMEM_DDR_DQS_LOOP_S  21
/** SPI_FMEM_CLK_DIFF_EN : R/W; bitpos: [24]; default: 0;
 *  Set this bit to enable the differential SPI_CLK#.
 */
#define SPI_FMEM_CLK_DIFF_EN    (BIT(24))
#define SPI_FMEM_CLK_DIFF_EN_M  (SPI_FMEM_CLK_DIFF_EN_V << SPI_FMEM_CLK_DIFF_EN_S)
#define SPI_FMEM_CLK_DIFF_EN_V  0x00000001U
#define SPI_FMEM_CLK_DIFF_EN_S  24
/** SPI_FMEM_DQS_CA_IN : R/W; bitpos: [26]; default: 0;
 *  Set this bit to enable the input of SPI_DQS signal in SPI phases of CMD and ADDR.
 */
#define SPI_FMEM_DQS_CA_IN    (BIT(26))
#define SPI_FMEM_DQS_CA_IN_M  (SPI_FMEM_DQS_CA_IN_V << SPI_FMEM_DQS_CA_IN_S)
#define SPI_FMEM_DQS_CA_IN_V  0x00000001U
#define SPI_FMEM_DQS_CA_IN_S  26
/** SPI_FMEM_HYPERBUS_DUMMY_2X : R/W; bitpos: [27]; default: 0;
 *  Set this bit to enable the vary dummy function in SPI HyperBus mode, when SPI0
 *  accesses flash or SPI1 accesses flash or sram.
 */
#define SPI_FMEM_HYPERBUS_DUMMY_2X    (BIT(27))
#define SPI_FMEM_HYPERBUS_DUMMY_2X_M  (SPI_FMEM_HYPERBUS_DUMMY_2X_V << SPI_FMEM_HYPERBUS_DUMMY_2X_S)
#define SPI_FMEM_HYPERBUS_DUMMY_2X_V  0x00000001U
#define SPI_FMEM_HYPERBUS_DUMMY_2X_S  27
/** SPI_FMEM_CLK_DIFF_INV : R/W; bitpos: [28]; default: 0;
 *  Set this bit to invert SPI_DIFF when accesses to flash. .
 */
#define SPI_FMEM_CLK_DIFF_INV    (BIT(28))
#define SPI_FMEM_CLK_DIFF_INV_M  (SPI_FMEM_CLK_DIFF_INV_V << SPI_FMEM_CLK_DIFF_INV_S)
#define SPI_FMEM_CLK_DIFF_INV_V  0x00000001U
#define SPI_FMEM_CLK_DIFF_INV_S  28
/** SPI_FMEM_OCTA_RAM_ADDR : R/W; bitpos: [29]; default: 0;
 *  Set this bit to enable octa_ram address out when accesses to flash, which means
 *  ADDR_OUT[31:0] = {spi_usr_addr_value[25:4], 6'd0, spi_usr_addr_value[3:1], 1'b0}.
 */
#define SPI_FMEM_OCTA_RAM_ADDR    (BIT(29))
#define SPI_FMEM_OCTA_RAM_ADDR_M  (SPI_FMEM_OCTA_RAM_ADDR_V << SPI_FMEM_OCTA_RAM_ADDR_S)
#define SPI_FMEM_OCTA_RAM_ADDR_V  0x00000001U
#define SPI_FMEM_OCTA_RAM_ADDR_S  29
/** SPI_FMEM_HYPERBUS_CA : R/W; bitpos: [30]; default: 0;
 *  Set this bit to enable HyperRAM address out when accesses to flash, which means
 *  ADDR_OUT[31:0] = {spi_usr_addr_value[19:4], 13'd0, spi_usr_addr_value[3:1]}.
 */
#define SPI_FMEM_HYPERBUS_CA    (BIT(30))
#define SPI_FMEM_HYPERBUS_CA_M  (SPI_FMEM_HYPERBUS_CA_V << SPI_FMEM_HYPERBUS_CA_S)
#define SPI_FMEM_HYPERBUS_CA_V  0x00000001U
#define SPI_FMEM_HYPERBUS_CA_S  30

/** SPI_SMEM_DDR_REG register
 *  SPI0 external RAM DDR mode control register
 */
#define SPI_SMEM_DDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0xd8)
/** SPI_SMEM_DDR_EN : R/W; bitpos: [0]; default: 0;
 *  1: in DDR mode,  0 in SDR mode
 */
#define SPI_SMEM_DDR_EN    (BIT(0))
#define SPI_SMEM_DDR_EN_M  (SPI_SMEM_DDR_EN_V << SPI_SMEM_DDR_EN_S)
#define SPI_SMEM_DDR_EN_V  0x00000001U
#define SPI_SMEM_DDR_EN_S  0
/** SPI_SMEM_VAR_DUMMY : R/W; bitpos: [1]; default: 0;
 *  Set the bit to enable variable dummy cycle in spi DDR mode.
 */
#define SPI_SMEM_VAR_DUMMY    (BIT(1))
#define SPI_SMEM_VAR_DUMMY_M  (SPI_SMEM_VAR_DUMMY_V << SPI_SMEM_VAR_DUMMY_S)
#define SPI_SMEM_VAR_DUMMY_V  0x00000001U
#define SPI_SMEM_VAR_DUMMY_S  1
/** SPI_SMEM_DDR_RDAT_SWP : R/W; bitpos: [2]; default: 0;
 *  Set the bit to reorder rx data of the word in spi DDR mode.
 */
#define SPI_SMEM_DDR_RDAT_SWP    (BIT(2))
#define SPI_SMEM_DDR_RDAT_SWP_M  (SPI_SMEM_DDR_RDAT_SWP_V << SPI_SMEM_DDR_RDAT_SWP_S)
#define SPI_SMEM_DDR_RDAT_SWP_V  0x00000001U
#define SPI_SMEM_DDR_RDAT_SWP_S  2
/** SPI_SMEM_DDR_WDAT_SWP : R/W; bitpos: [3]; default: 0;
 *  Set the bit to reorder tx data of the word in spi DDR mode.
 */
#define SPI_SMEM_DDR_WDAT_SWP    (BIT(3))
#define SPI_SMEM_DDR_WDAT_SWP_M  (SPI_SMEM_DDR_WDAT_SWP_V << SPI_SMEM_DDR_WDAT_SWP_S)
#define SPI_SMEM_DDR_WDAT_SWP_V  0x00000001U
#define SPI_SMEM_DDR_WDAT_SWP_S  3
/** SPI_SMEM_DDR_CMD_DIS : R/W; bitpos: [4]; default: 0;
 *  the bit is used to disable dual edge in command phase when DDR mode.
 */
#define SPI_SMEM_DDR_CMD_DIS    (BIT(4))
#define SPI_SMEM_DDR_CMD_DIS_M  (SPI_SMEM_DDR_CMD_DIS_V << SPI_SMEM_DDR_CMD_DIS_S)
#define SPI_SMEM_DDR_CMD_DIS_V  0x00000001U
#define SPI_SMEM_DDR_CMD_DIS_S  4
/** SPI_SMEM_OUTMINBYTELEN : R/W; bitpos: [11:5]; default: 1;
 *  It is the minimum output data length in the DDR psram.
 */
#define SPI_SMEM_OUTMINBYTELEN    0x0000007FU
#define SPI_SMEM_OUTMINBYTELEN_M  (SPI_SMEM_OUTMINBYTELEN_V << SPI_SMEM_OUTMINBYTELEN_S)
#define SPI_SMEM_OUTMINBYTELEN_V  0x0000007FU
#define SPI_SMEM_OUTMINBYTELEN_S  5
/** SPI_SMEM_TX_DDR_MSK_EN : R/W; bitpos: [12]; default: 1;
 *  Set this bit to mask the first or the last byte in SPI0 ECC DDR write mode, when
 *  accesses to external RAM.
 */
#define SPI_SMEM_TX_DDR_MSK_EN    (BIT(12))
#define SPI_SMEM_TX_DDR_MSK_EN_M  (SPI_SMEM_TX_DDR_MSK_EN_V << SPI_SMEM_TX_DDR_MSK_EN_S)
#define SPI_SMEM_TX_DDR_MSK_EN_V  0x00000001U
#define SPI_SMEM_TX_DDR_MSK_EN_S  12
/** SPI_SMEM_RX_DDR_MSK_EN : R/W; bitpos: [13]; default: 1;
 *  Set this bit to mask the first or the last byte in SPI0 ECC DDR read mode, when
 *  accesses to external RAM.
 */
#define SPI_SMEM_RX_DDR_MSK_EN    (BIT(13))
#define SPI_SMEM_RX_DDR_MSK_EN_M  (SPI_SMEM_RX_DDR_MSK_EN_V << SPI_SMEM_RX_DDR_MSK_EN_S)
#define SPI_SMEM_RX_DDR_MSK_EN_V  0x00000001U
#define SPI_SMEM_RX_DDR_MSK_EN_S  13
/** SPI_SMEM_USR_DDR_DQS_THD : R/W; bitpos: [20:14]; default: 0;
 *  The delay number of data strobe which from memory based on SPI clock.
 */
#define SPI_SMEM_USR_DDR_DQS_THD    0x0000007FU
#define SPI_SMEM_USR_DDR_DQS_THD_M  (SPI_SMEM_USR_DDR_DQS_THD_V << SPI_SMEM_USR_DDR_DQS_THD_S)
#define SPI_SMEM_USR_DDR_DQS_THD_V  0x0000007FU
#define SPI_SMEM_USR_DDR_DQS_THD_S  14
/** SPI_SMEM_DDR_DQS_LOOP : R/W; bitpos: [21]; default: 0;
 *  1: Do not need the input of SPI_DQS signal, SPI0 starts to receive data when
 *  spi0_slv_st is in SPI_MEM_DIN state. It is used when there is no SPI_DQS signal or
 *  SPI_DQS signal is not stable. 0: SPI0 starts to store data at the positive and
 *  negative edge of SPI_DQS.
 */
#define SPI_SMEM_DDR_DQS_LOOP    (BIT(21))
#define SPI_SMEM_DDR_DQS_LOOP_M  (SPI_SMEM_DDR_DQS_LOOP_V << SPI_SMEM_DDR_DQS_LOOP_S)
#define SPI_SMEM_DDR_DQS_LOOP_V  0x00000001U
#define SPI_SMEM_DDR_DQS_LOOP_S  21
/** SPI_SMEM_CLK_DIFF_EN : R/W; bitpos: [24]; default: 0;
 *  Set this bit to enable the differential SPI_CLK#.
 */
#define SPI_SMEM_CLK_DIFF_EN    (BIT(24))
#define SPI_SMEM_CLK_DIFF_EN_M  (SPI_SMEM_CLK_DIFF_EN_V << SPI_SMEM_CLK_DIFF_EN_S)
#define SPI_SMEM_CLK_DIFF_EN_V  0x00000001U
#define SPI_SMEM_CLK_DIFF_EN_S  24
/** SPI_SMEM_DQS_CA_IN : R/W; bitpos: [26]; default: 0;
 *  Set this bit to enable the input of SPI_DQS signal in SPI phases of CMD and ADDR.
 */
#define SPI_SMEM_DQS_CA_IN    (BIT(26))
#define SPI_SMEM_DQS_CA_IN_M  (SPI_SMEM_DQS_CA_IN_V << SPI_SMEM_DQS_CA_IN_S)
#define SPI_SMEM_DQS_CA_IN_V  0x00000001U
#define SPI_SMEM_DQS_CA_IN_S  26
/** SPI_SMEM_HYPERBUS_DUMMY_2X : R/W; bitpos: [27]; default: 0;
 *  Set this bit to enable the vary dummy function in SPI HyperBus mode, when SPI0
 *  accesses flash or SPI1 accesses flash or sram.
 */
#define SPI_SMEM_HYPERBUS_DUMMY_2X    (BIT(27))
#define SPI_SMEM_HYPERBUS_DUMMY_2X_M  (SPI_SMEM_HYPERBUS_DUMMY_2X_V << SPI_SMEM_HYPERBUS_DUMMY_2X_S)
#define SPI_SMEM_HYPERBUS_DUMMY_2X_V  0x00000001U
#define SPI_SMEM_HYPERBUS_DUMMY_2X_S  27
/** SPI_SMEM_CLK_DIFF_INV : R/W; bitpos: [28]; default: 0;
 *  Set this bit to invert SPI_DIFF when accesses to external RAM. .
 */
#define SPI_SMEM_CLK_DIFF_INV    (BIT(28))
#define SPI_SMEM_CLK_DIFF_INV_M  (SPI_SMEM_CLK_DIFF_INV_V << SPI_SMEM_CLK_DIFF_INV_S)
#define SPI_SMEM_CLK_DIFF_INV_V  0x00000001U
#define SPI_SMEM_CLK_DIFF_INV_S  28
/** SPI_SMEM_OCTA_RAM_ADDR : R/W; bitpos: [29]; default: 0;
 *  Set this bit to enable octa_ram address out when accesses to external RAM, which
 *  means ADDR_OUT[31:0] = {spi_usr_addr_value[25:4], 6'd0, spi_usr_addr_value[3:1],
 *  1'b0}.
 */
#define SPI_SMEM_OCTA_RAM_ADDR    (BIT(29))
#define SPI_SMEM_OCTA_RAM_ADDR_M  (SPI_SMEM_OCTA_RAM_ADDR_V << SPI_SMEM_OCTA_RAM_ADDR_S)
#define SPI_SMEM_OCTA_RAM_ADDR_V  0x00000001U
#define SPI_SMEM_OCTA_RAM_ADDR_S  29
/** SPI_SMEM_HYPERBUS_CA : R/W; bitpos: [30]; default: 0;
 *  Set this bit to enable HyperRAM address out when accesses to external RAM, which
 *  means ADDR_OUT[31:0] = {spi_usr_addr_value[19:4], 13'd0, spi_usr_addr_value[3:1]}.
 */
#define SPI_SMEM_HYPERBUS_CA    (BIT(30))
#define SPI_SMEM_HYPERBUS_CA_M  (SPI_SMEM_HYPERBUS_CA_V << SPI_SMEM_HYPERBUS_CA_S)
#define SPI_SMEM_HYPERBUS_CA_V  0x00000001U
#define SPI_SMEM_HYPERBUS_CA_S  30

/** SPI_FMEM_PMS0_ATTR_REG register
 *  SPI1 flash PMS section 0 attribute register
 */
#define SPI_FMEM_PMS0_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x100)
/** SPI_FMEM_PMS0_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 flash PMS section 0 read accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS0_RD_ATTR    (BIT(0))
#define SPI_FMEM_PMS0_RD_ATTR_M  (SPI_FMEM_PMS0_RD_ATTR_V << SPI_FMEM_PMS0_RD_ATTR_S)
#define SPI_FMEM_PMS0_RD_ATTR_V  0x00000001U
#define SPI_FMEM_PMS0_RD_ATTR_S  0
/** SPI_FMEM_PMS0_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 flash PMS section 0 write accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS0_WR_ATTR    (BIT(1))
#define SPI_FMEM_PMS0_WR_ATTR_M  (SPI_FMEM_PMS0_WR_ATTR_V << SPI_FMEM_PMS0_WR_ATTR_S)
#define SPI_FMEM_PMS0_WR_ATTR_V  0x00000001U
#define SPI_FMEM_PMS0_WR_ATTR_S  1
/** SPI_FMEM_PMS0_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 flash PMS section 0 ECC mode, 1: enable ECC mode. 0: Disable it. The flash PMS
 *  section 0 is configured by registers SPI_FMEM_PMS0_ADDR_REG and
 *  SPI_FMEM_PMS0_SIZE_REG.
 */
#define SPI_FMEM_PMS0_ECC    (BIT(2))
#define SPI_FMEM_PMS0_ECC_M  (SPI_FMEM_PMS0_ECC_V << SPI_FMEM_PMS0_ECC_S)
#define SPI_FMEM_PMS0_ECC_V  0x00000001U
#define SPI_FMEM_PMS0_ECC_S  2

/** SPI_FMEM_PMS1_ATTR_REG register
 *  SPI1 flash PMS section 1 attribute register
 */
#define SPI_FMEM_PMS1_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x104)
/** SPI_FMEM_PMS1_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 flash PMS section 1 read accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS1_RD_ATTR    (BIT(0))
#define SPI_FMEM_PMS1_RD_ATTR_M  (SPI_FMEM_PMS1_RD_ATTR_V << SPI_FMEM_PMS1_RD_ATTR_S)
#define SPI_FMEM_PMS1_RD_ATTR_V  0x00000001U
#define SPI_FMEM_PMS1_RD_ATTR_S  0
/** SPI_FMEM_PMS1_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 flash PMS section 1 write accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS1_WR_ATTR    (BIT(1))
#define SPI_FMEM_PMS1_WR_ATTR_M  (SPI_FMEM_PMS1_WR_ATTR_V << SPI_FMEM_PMS1_WR_ATTR_S)
#define SPI_FMEM_PMS1_WR_ATTR_V  0x00000001U
#define SPI_FMEM_PMS1_WR_ATTR_S  1
/** SPI_FMEM_PMS1_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 flash PMS section 1 ECC mode, 1: enable ECC mode. 0: Disable it. The flash PMS
 *  section 1 is configured by registers SPI_FMEM_PMS1_ADDR_REG and
 *  SPI_FMEM_PMS1_SIZE_REG.
 */
#define SPI_FMEM_PMS1_ECC    (BIT(2))
#define SPI_FMEM_PMS1_ECC_M  (SPI_FMEM_PMS1_ECC_V << SPI_FMEM_PMS1_ECC_S)
#define SPI_FMEM_PMS1_ECC_V  0x00000001U
#define SPI_FMEM_PMS1_ECC_S  2

/** SPI_FMEM_PMS2_ATTR_REG register
 *  SPI1 flash PMS section 2 attribute register
 */
#define SPI_FMEM_PMS2_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x108)
/** SPI_FMEM_PMS2_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 flash PMS section 2 read accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS2_RD_ATTR    (BIT(0))
#define SPI_FMEM_PMS2_RD_ATTR_M  (SPI_FMEM_PMS2_RD_ATTR_V << SPI_FMEM_PMS2_RD_ATTR_S)
#define SPI_FMEM_PMS2_RD_ATTR_V  0x00000001U
#define SPI_FMEM_PMS2_RD_ATTR_S  0
/** SPI_FMEM_PMS2_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 flash PMS section 2 write accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS2_WR_ATTR    (BIT(1))
#define SPI_FMEM_PMS2_WR_ATTR_M  (SPI_FMEM_PMS2_WR_ATTR_V << SPI_FMEM_PMS2_WR_ATTR_S)
#define SPI_FMEM_PMS2_WR_ATTR_V  0x00000001U
#define SPI_FMEM_PMS2_WR_ATTR_S  1
/** SPI_FMEM_PMS2_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 flash PMS section 2 ECC mode, 1: enable ECC mode. 0: Disable it. The flash PMS
 *  section 2 is configured by registers SPI_FMEM_PMS2_ADDR_REG and
 *  SPI_FMEM_PMS2_SIZE_REG.
 */
#define SPI_FMEM_PMS2_ECC    (BIT(2))
#define SPI_FMEM_PMS2_ECC_M  (SPI_FMEM_PMS2_ECC_V << SPI_FMEM_PMS2_ECC_S)
#define SPI_FMEM_PMS2_ECC_V  0x00000001U
#define SPI_FMEM_PMS2_ECC_S  2

/** SPI_FMEM_PMS3_ATTR_REG register
 *  SPI1 flash PMS section 3 attribute register
 */
#define SPI_FMEM_PMS3_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x10c)
/** SPI_FMEM_PMS3_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 flash PMS section 3 read accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS3_RD_ATTR    (BIT(0))
#define SPI_FMEM_PMS3_RD_ATTR_M  (SPI_FMEM_PMS3_RD_ATTR_V << SPI_FMEM_PMS3_RD_ATTR_S)
#define SPI_FMEM_PMS3_RD_ATTR_V  0x00000001U
#define SPI_FMEM_PMS3_RD_ATTR_S  0
/** SPI_FMEM_PMS3_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 flash PMS section 3 write accessible. 0: Not allowed.
 */
#define SPI_FMEM_PMS3_WR_ATTR    (BIT(1))
#define SPI_FMEM_PMS3_WR_ATTR_M  (SPI_FMEM_PMS3_WR_ATTR_V << SPI_FMEM_PMS3_WR_ATTR_S)
#define SPI_FMEM_PMS3_WR_ATTR_V  0x00000001U
#define SPI_FMEM_PMS3_WR_ATTR_S  1
/** SPI_FMEM_PMS3_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 flash PMS section 3 ECC mode, 1: enable ECC mode. 0: Disable it. The flash PMS
 *  section 3 is configured by registers SPI_FMEM_PMS3_ADDR_REG and
 *  SPI_FMEM_PMS3_SIZE_REG.
 */
#define SPI_FMEM_PMS3_ECC    (BIT(2))
#define SPI_FMEM_PMS3_ECC_M  (SPI_FMEM_PMS3_ECC_V << SPI_FMEM_PMS3_ECC_S)
#define SPI_FMEM_PMS3_ECC_V  0x00000001U
#define SPI_FMEM_PMS3_ECC_S  2

/** SPI_FMEM_PMS0_ADDR_REG register
 *  SPI1 flash PMS section 0 start address register
 */
#define SPI_FMEM_PMS0_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x110)
/** SPI_FMEM_PMS0_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 flash PMS section 0 start address value
 */
#define SPI_FMEM_PMS0_ADDR_S    0x1FFFFFFFU
#define SPI_FMEM_PMS0_ADDR_S_M  (SPI_FMEM_PMS0_ADDR_S_V << SPI_FMEM_PMS0_ADDR_S_S)
#define SPI_FMEM_PMS0_ADDR_S_V  0x1FFFFFFFU
#define SPI_FMEM_PMS0_ADDR_S_S  0

/** SPI_FMEM_PMS1_ADDR_REG register
 *  SPI1 flash PMS section 1 start address register
 */
#define SPI_FMEM_PMS1_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x114)
/** SPI_FMEM_PMS1_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 flash PMS section 1 start address value
 */
#define SPI_FMEM_PMS1_ADDR_S    0x1FFFFFFFU
#define SPI_FMEM_PMS1_ADDR_S_M  (SPI_FMEM_PMS1_ADDR_S_V << SPI_FMEM_PMS1_ADDR_S_S)
#define SPI_FMEM_PMS1_ADDR_S_V  0x1FFFFFFFU
#define SPI_FMEM_PMS1_ADDR_S_S  0

/** SPI_FMEM_PMS2_ADDR_REG register
 *  SPI1 flash PMS section 2 start address register
 */
#define SPI_FMEM_PMS2_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x118)
/** SPI_FMEM_PMS2_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 flash PMS section 2 start address value
 */
#define SPI_FMEM_PMS2_ADDR_S    0x1FFFFFFFU
#define SPI_FMEM_PMS2_ADDR_S_M  (SPI_FMEM_PMS2_ADDR_S_V << SPI_FMEM_PMS2_ADDR_S_S)
#define SPI_FMEM_PMS2_ADDR_S_V  0x1FFFFFFFU
#define SPI_FMEM_PMS2_ADDR_S_S  0

/** SPI_FMEM_PMS3_ADDR_REG register
 *  SPI1 flash PMS section 3 start address register
 */
#define SPI_FMEM_PMS3_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x11c)
/** SPI_FMEM_PMS3_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 flash PMS section 3 start address value
 */
#define SPI_FMEM_PMS3_ADDR_S    0x1FFFFFFFU
#define SPI_FMEM_PMS3_ADDR_S_M  (SPI_FMEM_PMS3_ADDR_S_V << SPI_FMEM_PMS3_ADDR_S_S)
#define SPI_FMEM_PMS3_ADDR_S_V  0x1FFFFFFFU
#define SPI_FMEM_PMS3_ADDR_S_S  0

/** SPI_FMEM_PMS0_SIZE_REG register
 *  SPI1 flash PMS section 0 start address register
 */
#define SPI_FMEM_PMS0_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x120)
/** SPI_FMEM_PMS0_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 flash PMS section 0 address region is (SPI_FMEM_PMS0_ADDR_S,
 *  SPI_FMEM_PMS0_ADDR_S + SPI_FMEM_PMS0_SIZE)
 */
#define SPI_FMEM_PMS0_SIZE    0x0001FFFFU
#define SPI_FMEM_PMS0_SIZE_M  (SPI_FMEM_PMS0_SIZE_V << SPI_FMEM_PMS0_SIZE_S)
#define SPI_FMEM_PMS0_SIZE_V  0x0001FFFFU
#define SPI_FMEM_PMS0_SIZE_S  0

/** SPI_FMEM_PMS1_SIZE_REG register
 *  SPI1 flash PMS section 1 start address register
 */
#define SPI_FMEM_PMS1_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x124)
/** SPI_FMEM_PMS1_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 flash PMS section 1 address region is (SPI_FMEM_PMS1_ADDR_S,
 *  SPI_FMEM_PMS1_ADDR_S + SPI_FMEM_PMS1_SIZE)
 */
#define SPI_FMEM_PMS1_SIZE    0x0001FFFFU
#define SPI_FMEM_PMS1_SIZE_M  (SPI_FMEM_PMS1_SIZE_V << SPI_FMEM_PMS1_SIZE_S)
#define SPI_FMEM_PMS1_SIZE_V  0x0001FFFFU
#define SPI_FMEM_PMS1_SIZE_S  0

/** SPI_FMEM_PMS2_SIZE_REG register
 *  SPI1 flash PMS section 2 start address register
 */
#define SPI_FMEM_PMS2_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x128)
/** SPI_FMEM_PMS2_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 flash PMS section 2 address region is (SPI_FMEM_PMS2_ADDR_S,
 *  SPI_FMEM_PMS2_ADDR_S + SPI_FMEM_PMS2_SIZE)
 */
#define SPI_FMEM_PMS2_SIZE    0x0001FFFFU
#define SPI_FMEM_PMS2_SIZE_M  (SPI_FMEM_PMS2_SIZE_V << SPI_FMEM_PMS2_SIZE_S)
#define SPI_FMEM_PMS2_SIZE_V  0x0001FFFFU
#define SPI_FMEM_PMS2_SIZE_S  0

/** SPI_FMEM_PMS3_SIZE_REG register
 *  SPI1 flash PMS section 3 start address register
 */
#define SPI_FMEM_PMS3_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x12c)
/** SPI_FMEM_PMS3_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 flash PMS section 3 address region is (SPI_FMEM_PMS3_ADDR_S,
 *  SPI_FMEM_PMS3_ADDR_S + SPI_FMEM_PMS3_SIZE)
 */
#define SPI_FMEM_PMS3_SIZE    0x0001FFFFU
#define SPI_FMEM_PMS3_SIZE_M  (SPI_FMEM_PMS3_SIZE_V << SPI_FMEM_PMS3_SIZE_S)
#define SPI_FMEM_PMS3_SIZE_V  0x0001FFFFU
#define SPI_FMEM_PMS3_SIZE_S  0

/** SPI_SMEM_PMS0_ATTR_REG register
 *  SPI1 external RAM PMS section 0 attribute register
 */
#define SPI_SMEM_PMS0_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x130)
/** SPI_SMEM_PMS0_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 external RAM PMS section 0 read accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS0_RD_ATTR    (BIT(0))
#define SPI_SMEM_PMS0_RD_ATTR_M  (SPI_SMEM_PMS0_RD_ATTR_V << SPI_SMEM_PMS0_RD_ATTR_S)
#define SPI_SMEM_PMS0_RD_ATTR_V  0x00000001U
#define SPI_SMEM_PMS0_RD_ATTR_S  0
/** SPI_SMEM_PMS0_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 external RAM PMS section 0 write accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS0_WR_ATTR    (BIT(1))
#define SPI_SMEM_PMS0_WR_ATTR_M  (SPI_SMEM_PMS0_WR_ATTR_V << SPI_SMEM_PMS0_WR_ATTR_S)
#define SPI_SMEM_PMS0_WR_ATTR_V  0x00000001U
#define SPI_SMEM_PMS0_WR_ATTR_S  1
/** SPI_SMEM_PMS0_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 external RAM PMS section 0 ECC mode, 1: enable ECC mode. 0: Disable it. The
 *  external RAM PMS section 0 is configured by registers SPI_SMEM_PMS0_ADDR_REG and
 *  SPI_SMEM_PMS0_SIZE_REG.
 */
#define SPI_SMEM_PMS0_ECC    (BIT(2))
#define SPI_SMEM_PMS0_ECC_M  (SPI_SMEM_PMS0_ECC_V << SPI_SMEM_PMS0_ECC_S)
#define SPI_SMEM_PMS0_ECC_V  0x00000001U
#define SPI_SMEM_PMS0_ECC_S  2

/** SPI_SMEM_PMS1_ATTR_REG register
 *  SPI1 external RAM PMS section 1 attribute register
 */
#define SPI_SMEM_PMS1_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x134)
/** SPI_SMEM_PMS1_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 external RAM PMS section 1 read accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS1_RD_ATTR    (BIT(0))
#define SPI_SMEM_PMS1_RD_ATTR_M  (SPI_SMEM_PMS1_RD_ATTR_V << SPI_SMEM_PMS1_RD_ATTR_S)
#define SPI_SMEM_PMS1_RD_ATTR_V  0x00000001U
#define SPI_SMEM_PMS1_RD_ATTR_S  0
/** SPI_SMEM_PMS1_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 external RAM PMS section 1 write accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS1_WR_ATTR    (BIT(1))
#define SPI_SMEM_PMS1_WR_ATTR_M  (SPI_SMEM_PMS1_WR_ATTR_V << SPI_SMEM_PMS1_WR_ATTR_S)
#define SPI_SMEM_PMS1_WR_ATTR_V  0x00000001U
#define SPI_SMEM_PMS1_WR_ATTR_S  1
/** SPI_SMEM_PMS1_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 external RAM PMS section 1 ECC mode, 1: enable ECC mode. 0: Disable it. The
 *  external RAM PMS section 1 is configured by registers SPI_SMEM_PMS1_ADDR_REG and
 *  SPI_SMEM_PMS1_SIZE_REG.
 */
#define SPI_SMEM_PMS1_ECC    (BIT(2))
#define SPI_SMEM_PMS1_ECC_M  (SPI_SMEM_PMS1_ECC_V << SPI_SMEM_PMS1_ECC_S)
#define SPI_SMEM_PMS1_ECC_V  0x00000001U
#define SPI_SMEM_PMS1_ECC_S  2

/** SPI_SMEM_PMS2_ATTR_REG register
 *  SPI1 external RAM PMS section 2 attribute register
 */
#define SPI_SMEM_PMS2_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x138)
/** SPI_SMEM_PMS2_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 external RAM PMS section 2 read accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS2_RD_ATTR    (BIT(0))
#define SPI_SMEM_PMS2_RD_ATTR_M  (SPI_SMEM_PMS2_RD_ATTR_V << SPI_SMEM_PMS2_RD_ATTR_S)
#define SPI_SMEM_PMS2_RD_ATTR_V  0x00000001U
#define SPI_SMEM_PMS2_RD_ATTR_S  0
/** SPI_SMEM_PMS2_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 external RAM PMS section 2 write accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS2_WR_ATTR    (BIT(1))
#define SPI_SMEM_PMS2_WR_ATTR_M  (SPI_SMEM_PMS2_WR_ATTR_V << SPI_SMEM_PMS2_WR_ATTR_S)
#define SPI_SMEM_PMS2_WR_ATTR_V  0x00000001U
#define SPI_SMEM_PMS2_WR_ATTR_S  1
/** SPI_SMEM_PMS2_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 external RAM PMS section 2 ECC mode, 1: enable ECC mode. 0: Disable it. The
 *  external RAM PMS section 2 is configured by registers SPI_SMEM_PMS2_ADDR_REG and
 *  SPI_SMEM_PMS2_SIZE_REG.
 */
#define SPI_SMEM_PMS2_ECC    (BIT(2))
#define SPI_SMEM_PMS2_ECC_M  (SPI_SMEM_PMS2_ECC_V << SPI_SMEM_PMS2_ECC_S)
#define SPI_SMEM_PMS2_ECC_V  0x00000001U
#define SPI_SMEM_PMS2_ECC_S  2

/** SPI_SMEM_PMS3_ATTR_REG register
 *  SPI1 external RAM PMS section 3 attribute register
 */
#define SPI_SMEM_PMS3_ATTR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x13c)
/** SPI_SMEM_PMS3_RD_ATTR : R/W; bitpos: [0]; default: 1;
 *  1: SPI1 external RAM PMS section 3 read accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS3_RD_ATTR    (BIT(0))
#define SPI_SMEM_PMS3_RD_ATTR_M  (SPI_SMEM_PMS3_RD_ATTR_V << SPI_SMEM_PMS3_RD_ATTR_S)
#define SPI_SMEM_PMS3_RD_ATTR_V  0x00000001U
#define SPI_SMEM_PMS3_RD_ATTR_S  0
/** SPI_SMEM_PMS3_WR_ATTR : R/W; bitpos: [1]; default: 1;
 *  1: SPI1 external RAM PMS section 3 write accessible. 0: Not allowed.
 */
#define SPI_SMEM_PMS3_WR_ATTR    (BIT(1))
#define SPI_SMEM_PMS3_WR_ATTR_M  (SPI_SMEM_PMS3_WR_ATTR_V << SPI_SMEM_PMS3_WR_ATTR_S)
#define SPI_SMEM_PMS3_WR_ATTR_V  0x00000001U
#define SPI_SMEM_PMS3_WR_ATTR_S  1
/** SPI_SMEM_PMS3_ECC : R/W; bitpos: [2]; default: 0;
 *  SPI1 external RAM PMS section 3 ECC mode, 1: enable ECC mode. 0: Disable it. The
 *  external RAM PMS section 3 is configured by registers SPI_SMEM_PMS3_ADDR_REG and
 *  SPI_SMEM_PMS3_SIZE_REG.
 */
#define SPI_SMEM_PMS3_ECC    (BIT(2))
#define SPI_SMEM_PMS3_ECC_M  (SPI_SMEM_PMS3_ECC_V << SPI_SMEM_PMS3_ECC_S)
#define SPI_SMEM_PMS3_ECC_V  0x00000001U
#define SPI_SMEM_PMS3_ECC_S  2

/** SPI_SMEM_PMS0_ADDR_REG register
 *  SPI1 external RAM PMS section 0 start address register
 */
#define SPI_SMEM_PMS0_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x140)
/** SPI_SMEM_PMS0_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 external RAM PMS section 0 start address value
 */
#define SPI_SMEM_PMS0_ADDR_S    0x1FFFFFFFU
#define SPI_SMEM_PMS0_ADDR_S_M  (SPI_SMEM_PMS0_ADDR_S_V << SPI_SMEM_PMS0_ADDR_S_S)
#define SPI_SMEM_PMS0_ADDR_S_V  0x1FFFFFFFU
#define SPI_SMEM_PMS0_ADDR_S_S  0

/** SPI_SMEM_PMS1_ADDR_REG register
 *  SPI1 external RAM PMS section 1 start address register
 */
#define SPI_SMEM_PMS1_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x144)
/** SPI_SMEM_PMS1_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 external RAM PMS section 1 start address value
 */
#define SPI_SMEM_PMS1_ADDR_S    0x1FFFFFFFU
#define SPI_SMEM_PMS1_ADDR_S_M  (SPI_SMEM_PMS1_ADDR_S_V << SPI_SMEM_PMS1_ADDR_S_S)
#define SPI_SMEM_PMS1_ADDR_S_V  0x1FFFFFFFU
#define SPI_SMEM_PMS1_ADDR_S_S  0

/** SPI_SMEM_PMS2_ADDR_REG register
 *  SPI1 external RAM PMS section 2 start address register
 */
#define SPI_SMEM_PMS2_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x148)
/** SPI_SMEM_PMS2_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 external RAM PMS section 2 start address value
 */
#define SPI_SMEM_PMS2_ADDR_S    0x1FFFFFFFU
#define SPI_SMEM_PMS2_ADDR_S_M  (SPI_SMEM_PMS2_ADDR_S_V << SPI_SMEM_PMS2_ADDR_S_S)
#define SPI_SMEM_PMS2_ADDR_S_V  0x1FFFFFFFU
#define SPI_SMEM_PMS2_ADDR_S_S  0

/** SPI_SMEM_PMS3_ADDR_REG register
 *  SPI1 external RAM PMS section 3 start address register
 */
#define SPI_SMEM_PMS3_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x14c)
/** SPI_SMEM_PMS3_ADDR_S : R/W; bitpos: [28:0]; default: 0;
 *  SPI1 external RAM PMS section 3 start address value
 */
#define SPI_SMEM_PMS3_ADDR_S    0x1FFFFFFFU
#define SPI_SMEM_PMS3_ADDR_S_M  (SPI_SMEM_PMS3_ADDR_S_V << SPI_SMEM_PMS3_ADDR_S_S)
#define SPI_SMEM_PMS3_ADDR_S_V  0x1FFFFFFFU
#define SPI_SMEM_PMS3_ADDR_S_S  0

/** SPI_SMEM_PMS0_SIZE_REG register
 *  SPI1 external RAM PMS section 0 start address register
 */
#define SPI_SMEM_PMS0_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x150)
/** SPI_SMEM_PMS0_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 external RAM PMS section 0 address region is (SPI_SMEM_PMS0_ADDR_S,
 *  SPI_SMEM_PMS0_ADDR_S + SPI_SMEM_PMS0_SIZE)
 */
#define SPI_SMEM_PMS0_SIZE    0x0001FFFFU
#define SPI_SMEM_PMS0_SIZE_M  (SPI_SMEM_PMS0_SIZE_V << SPI_SMEM_PMS0_SIZE_S)
#define SPI_SMEM_PMS0_SIZE_V  0x0001FFFFU
#define SPI_SMEM_PMS0_SIZE_S  0

/** SPI_SMEM_PMS1_SIZE_REG register
 *  SPI1 external RAM PMS section 1 start address register
 */
#define SPI_SMEM_PMS1_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x154)
/** SPI_SMEM_PMS1_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 external RAM PMS section 1 address region is (SPI_SMEM_PMS1_ADDR_S,
 *  SPI_SMEM_PMS1_ADDR_S + SPI_SMEM_PMS1_SIZE)
 */
#define SPI_SMEM_PMS1_SIZE    0x0001FFFFU
#define SPI_SMEM_PMS1_SIZE_M  (SPI_SMEM_PMS1_SIZE_V << SPI_SMEM_PMS1_SIZE_S)
#define SPI_SMEM_PMS1_SIZE_V  0x0001FFFFU
#define SPI_SMEM_PMS1_SIZE_S  0

/** SPI_SMEM_PMS2_SIZE_REG register
 *  SPI1 external RAM PMS section 2 start address register
 */
#define SPI_SMEM_PMS2_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x158)
/** SPI_SMEM_PMS2_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 external RAM PMS section 2 address region is (SPI_SMEM_PMS2_ADDR_S,
 *  SPI_SMEM_PMS2_ADDR_S + SPI_SMEM_PMS2_SIZE)
 */
#define SPI_SMEM_PMS2_SIZE    0x0001FFFFU
#define SPI_SMEM_PMS2_SIZE_M  (SPI_SMEM_PMS2_SIZE_V << SPI_SMEM_PMS2_SIZE_S)
#define SPI_SMEM_PMS2_SIZE_V  0x0001FFFFU
#define SPI_SMEM_PMS2_SIZE_S  0

/** SPI_SMEM_PMS3_SIZE_REG register
 *  SPI1 external RAM PMS section 3 start address register
 */
#define SPI_SMEM_PMS3_SIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x15c)
/** SPI_SMEM_PMS3_SIZE : R/W; bitpos: [16:0]; default: 4096;
 *  SPI1 external RAM PMS section 3 address region is (SPI_SMEM_PMS3_ADDR_S,
 *  SPI_SMEM_PMS3_ADDR_S + SPI_SMEM_PMS3_SIZE)
 */
#define SPI_SMEM_PMS3_SIZE    0x0001FFFFU
#define SPI_SMEM_PMS3_SIZE_M  (SPI_SMEM_PMS3_SIZE_V << SPI_SMEM_PMS3_SIZE_S)
#define SPI_SMEM_PMS3_SIZE_V  0x0001FFFFU
#define SPI_SMEM_PMS3_SIZE_S  0

/** SPI_MEM_PMS_REJECT_REG register
 *  SPI1 access reject register
 */
#define SPI_MEM_PMS_REJECT_REG(i)              (REG_SPI_MEM_BASE(i) + 0x160)
/** SPI_MEM_PM_EN : R/W; bitpos: [27]; default: 0;
 *  Set this bit to enable SPI0/1 transfer permission control function.
 */
#define SPI_MEM_PM_EN    (BIT(27))
#define SPI_MEM_PM_EN_M  (SPI_MEM_PM_EN_V << SPI_MEM_PM_EN_S)
#define SPI_MEM_PM_EN_V  0x00000001U
#define SPI_MEM_PM_EN_S  27
/** SPI_MEM_PMS_LD : R/SS/WTC; bitpos: [28]; default: 0;
 *  1: SPI1 write access error. 0: No write access error. It is cleared by when
 *  SPI_MEM_PMS_REJECT_INT_CLR bit is set.
 */
#define SPI_MEM_PMS_LD    (BIT(28))
#define SPI_MEM_PMS_LD_M  (SPI_MEM_PMS_LD_V << SPI_MEM_PMS_LD_S)
#define SPI_MEM_PMS_LD_V  0x00000001U
#define SPI_MEM_PMS_LD_S  28
/** SPI_MEM_PMS_ST : R/SS/WTC; bitpos: [29]; default: 0;
 *  1: SPI1 read access error. 0: No read access error. It is cleared by when
 *  SPI_MEM_PMS_REJECT_INT_CLR bit is set.
 */
#define SPI_MEM_PMS_ST    (BIT(29))
#define SPI_MEM_PMS_ST_M  (SPI_MEM_PMS_ST_V << SPI_MEM_PMS_ST_S)
#define SPI_MEM_PMS_ST_V  0x00000001U
#define SPI_MEM_PMS_ST_S  29
/** SPI_MEM_PMS_MULTI_HIT : R/SS/WTC; bitpos: [30]; default: 0;
 *  1: SPI1 access is rejected because of address miss. 0: No address miss error. It is
 *  cleared by when  SPI_MEM_PMS_REJECT_INT_CLR bit is set.
 */
#define SPI_MEM_PMS_MULTI_HIT    (BIT(30))
#define SPI_MEM_PMS_MULTI_HIT_M  (SPI_MEM_PMS_MULTI_HIT_V << SPI_MEM_PMS_MULTI_HIT_S)
#define SPI_MEM_PMS_MULTI_HIT_V  0x00000001U
#define SPI_MEM_PMS_MULTI_HIT_S  30
/** SPI_MEM_PMS_IVD : R/SS/WTC; bitpos: [31]; default: 0;
 *  1: SPI1 access is rejected because of address multi-hit. 0: No address multi-hit
 *  error. It is cleared by when  SPI_MEM_PMS_REJECT_INT_CLR bit is set.
 */
#define SPI_MEM_PMS_IVD    (BIT(31))
#define SPI_MEM_PMS_IVD_M  (SPI_MEM_PMS_IVD_V << SPI_MEM_PMS_IVD_S)
#define SPI_MEM_PMS_IVD_V  0x00000001U
#define SPI_MEM_PMS_IVD_S  31

/** SPI_MEM_PMS_REJECT_ADDR_REG register
 *  SPI1 access reject addr register
 */
#define SPI_MEM_PMS_REJECT_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x164)
/** SPI_MEM_REJECT_ADDR : R/SS/WTC; bitpos: [28:0]; default: 0;
 *  This bits show the first SPI1 access error address. It is cleared by when
 *  SPI_MEM_PMS_REJECT_INT_CLR bit is set.
 */
#define SPI_MEM_REJECT_ADDR    0x1FFFFFFFU
#define SPI_MEM_REJECT_ADDR_M  (SPI_MEM_REJECT_ADDR_V << SPI_MEM_REJECT_ADDR_S)
#define SPI_MEM_REJECT_ADDR_V  0x1FFFFFFFU
#define SPI_MEM_REJECT_ADDR_S  0

/** SPI_MEM_ECC_CTRL_REG register
 *  MSPI ECC control register
 */
#define SPI_MEM_ECC_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x168)
/** SPI_MEM_ECC_ERR_CNT : R/SS/WTC; bitpos: [10:5]; default: 0;
 *  This bits show the error times of MSPI ECC read. It is cleared by when
 *  SPI_MEM_ECC_ERR_INT_CLR bit is set.
 */
#define SPI_MEM_ECC_ERR_CNT    0x0000003FU
#define SPI_MEM_ECC_ERR_CNT_M  (SPI_MEM_ECC_ERR_CNT_V << SPI_MEM_ECC_ERR_CNT_S)
#define SPI_MEM_ECC_ERR_CNT_V  0x0000003FU
#define SPI_MEM_ECC_ERR_CNT_S  5
/** SPI_FMEM_ECC_ERR_INT_NUM : R/W; bitpos: [16:11]; default: 10;
 *  Set the error times of MSPI ECC read to generate MSPI SPI_MEM_ECC_ERR_INT interrupt.
 */
#define SPI_FMEM_ECC_ERR_INT_NUM    0x0000003FU
#define SPI_FMEM_ECC_ERR_INT_NUM_M  (SPI_FMEM_ECC_ERR_INT_NUM_V << SPI_FMEM_ECC_ERR_INT_NUM_S)
#define SPI_FMEM_ECC_ERR_INT_NUM_V  0x0000003FU
#define SPI_FMEM_ECC_ERR_INT_NUM_S  11
/** SPI_FMEM_ECC_ERR_INT_EN : R/W; bitpos: [17]; default: 0;
 *  Set this bit to calculate the error times of MSPI ECC read when accesses to flash.
 */
#define SPI_FMEM_ECC_ERR_INT_EN    (BIT(17))
#define SPI_FMEM_ECC_ERR_INT_EN_M  (SPI_FMEM_ECC_ERR_INT_EN_V << SPI_FMEM_ECC_ERR_INT_EN_S)
#define SPI_FMEM_ECC_ERR_INT_EN_V  0x00000001U
#define SPI_FMEM_ECC_ERR_INT_EN_S  17
/** SPI_FMEM_PAGE_SIZE : R/W; bitpos: [19:18]; default: 0;
 *  Set the page size of the flash accessed by MSPI. 0: 256 bytes. 1: 512 bytes. 2:
 *  1024 bytes. 3: 2048 bytes.
 */
#define SPI_FMEM_PAGE_SIZE    0x00000003U
#define SPI_FMEM_PAGE_SIZE_M  (SPI_FMEM_PAGE_SIZE_V << SPI_FMEM_PAGE_SIZE_S)
#define SPI_FMEM_PAGE_SIZE_V  0x00000003U
#define SPI_FMEM_PAGE_SIZE_S  18
/** SPI_FMEM_ECC_ADDR_EN : R/W; bitpos: [21]; default: 0;
 *  Set this bit to enable MSPI ECC address conversion, no matter MSPI accesses to the
 *  ECC region or non-ECC region of flash. If there is no ECC region in flash, this bit
 *  should be 0. Otherwise, this bit should be 1.
 */
#define SPI_FMEM_ECC_ADDR_EN    (BIT(21))
#define SPI_FMEM_ECC_ADDR_EN_M  (SPI_FMEM_ECC_ADDR_EN_V << SPI_FMEM_ECC_ADDR_EN_S)
#define SPI_FMEM_ECC_ADDR_EN_V  0x00000001U
#define SPI_FMEM_ECC_ADDR_EN_S  21
/** SPI_MEM_USR_ECC_ADDR_EN : R/W; bitpos: [22]; default: 0;
 *  Set this bit to enable ECC address convert in SPI0/1 USR_CMD transfer.
 */
#define SPI_MEM_USR_ECC_ADDR_EN    (BIT(22))
#define SPI_MEM_USR_ECC_ADDR_EN_M  (SPI_MEM_USR_ECC_ADDR_EN_V << SPI_MEM_USR_ECC_ADDR_EN_S)
#define SPI_MEM_USR_ECC_ADDR_EN_V  0x00000001U
#define SPI_MEM_USR_ECC_ADDR_EN_S  22
/** SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN : R/W; bitpos: [24]; default: 1;
 *  1: The error information in SPI_MEM_ECC_ERR_BITS and SPI_MEM_ECC_ERR_ADDR is
 *  updated when there is an ECC error. 0: SPI_MEM_ECC_ERR_BITS and
 *  SPI_MEM_ECC_ERR_ADDR record the first ECC error information.
 */
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN    (BIT(24))
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_M  (SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_V << SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_S)
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_V  0x00000001U
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_S  24
/** SPI_MEM_ECC_ERR_BITS : R/SS/WTC; bitpos: [31:25]; default: 0;
 *  Records the first ECC error bit number in the 16 bytes(From 0~127, corresponding to
 *  byte 0 bit 0 to byte 15 bit 7)
 */
#define SPI_MEM_ECC_ERR_BITS    0x0000007FU
#define SPI_MEM_ECC_ERR_BITS_M  (SPI_MEM_ECC_ERR_BITS_V << SPI_MEM_ECC_ERR_BITS_S)
#define SPI_MEM_ECC_ERR_BITS_V  0x0000007FU
#define SPI_MEM_ECC_ERR_BITS_S  25

/** SPI_MEM_ECC_ERR_ADDR_REG register
 *  MSPI ECC error address register
 */
#define SPI_MEM_ECC_ERR_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x16c)
/** SPI_MEM_ECC_ERR_ADDR : R/SS/WTC; bitpos: [28:0]; default: 0;
 *  This bits show the first MSPI ECC error address. It is cleared by when
 *  SPI_MEM_ECC_ERR_INT_CLR bit is set.
 */
#define SPI_MEM_ECC_ERR_ADDR    0x1FFFFFFFU
#define SPI_MEM_ECC_ERR_ADDR_M  (SPI_MEM_ECC_ERR_ADDR_V << SPI_MEM_ECC_ERR_ADDR_S)
#define SPI_MEM_ECC_ERR_ADDR_V  0x1FFFFFFFU
#define SPI_MEM_ECC_ERR_ADDR_S  0

/** SPI_MEM_AXI_ERR_ADDR_REG register
 *  SPI0 AXI request error address.
 */
#define SPI_MEM_AXI_ERR_ADDR_REG(i)              (REG_SPI_MEM_BASE(i) + 0x170)
/** SPI_MEM_AXI_ERR_ADDR : R/SS/WTC; bitpos: [28:0]; default: 0;
 *  This bits show the first AXI write/read invalid error or AXI write flash error
 *  address. It is cleared by when SPI_MEM_AXI_WADDR_ERR_INT_CLR,
 *  SPI_MEM_AXI_WR_FLASH_ERR_IN_CLR or SPI_MEM_AXI_RADDR_ERR_IN_CLR bit is set.
 */
#define SPI_MEM_AXI_ERR_ADDR    0x1FFFFFFFU
#define SPI_MEM_AXI_ERR_ADDR_M  (SPI_MEM_AXI_ERR_ADDR_V << SPI_MEM_AXI_ERR_ADDR_S)
#define SPI_MEM_AXI_ERR_ADDR_V  0x1FFFFFFFU
#define SPI_MEM_AXI_ERR_ADDR_S  0

/** SPI_SMEM_ECC_CTRL_REG register
 *  MSPI ECC control register
 */
#define SPI_SMEM_ECC_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x174)
/** SPI_SMEM_ECC_ERR_INT_EN : R/W; bitpos: [17]; default: 0;
 *  Set this bit to calculate the error times of MSPI ECC read when accesses to
 *  external RAM.
 */
#define SPI_SMEM_ECC_ERR_INT_EN    (BIT(17))
#define SPI_SMEM_ECC_ERR_INT_EN_M  (SPI_SMEM_ECC_ERR_INT_EN_V << SPI_SMEM_ECC_ERR_INT_EN_S)
#define SPI_SMEM_ECC_ERR_INT_EN_V  0x00000001U
#define SPI_SMEM_ECC_ERR_INT_EN_S  17
/** SPI_SMEM_PAGE_SIZE : R/W; bitpos: [19:18]; default: 2;
 *  Set the page size of the external RAM accessed by MSPI. 0: 256 bytes. 1: 512 bytes.
 *  2: 1024 bytes. 3: 2048 bytes.
 */
#define SPI_SMEM_PAGE_SIZE    0x00000003U
#define SPI_SMEM_PAGE_SIZE_M  (SPI_SMEM_PAGE_SIZE_V << SPI_SMEM_PAGE_SIZE_S)
#define SPI_SMEM_PAGE_SIZE_V  0x00000003U
#define SPI_SMEM_PAGE_SIZE_S  18
/** SPI_SMEM_ECC_ADDR_EN : R/W; bitpos: [20]; default: 0;
 *  Set this bit to enable MSPI ECC address conversion, no matter MSPI accesses to the
 *  ECC region or non-ECC region of external RAM. If there is no ECC region in external
 *  RAM, this bit should be 0. Otherwise, this bit should be 1.
 */
#define SPI_SMEM_ECC_ADDR_EN    (BIT(20))
#define SPI_SMEM_ECC_ADDR_EN_M  (SPI_SMEM_ECC_ADDR_EN_V << SPI_SMEM_ECC_ADDR_EN_S)
#define SPI_SMEM_ECC_ADDR_EN_V  0x00000001U
#define SPI_SMEM_ECC_ADDR_EN_S  20

/** SPI_SMEM_AXI_ADDR_CTRL_REG register
 *  SPI0 AXI address control register
 */
#define SPI_SMEM_AXI_ADDR_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x178)
/** SPI_MEM_ALL_FIFO_EMPTY : RO; bitpos: [26]; default: 1;
 *  The empty status of all AFIFO and SYNC_FIFO in MSPI module. 1: All AXI transfers
 *  and SPI0 transfers are done. 0: Others.
 */
#define SPI_MEM_ALL_FIFO_EMPTY    (BIT(26))
#define SPI_MEM_ALL_FIFO_EMPTY_M  (SPI_MEM_ALL_FIFO_EMPTY_V << SPI_MEM_ALL_FIFO_EMPTY_S)
#define SPI_MEM_ALL_FIFO_EMPTY_V  0x00000001U
#define SPI_MEM_ALL_FIFO_EMPTY_S  26
/** SPI_RDATA_AFIFO_REMPTY : RO; bitpos: [27]; default: 1;
 *  1: RDATA_AFIFO is empty. 0: At least one AXI read transfer is pending.
 */
#define SPI_RDATA_AFIFO_REMPTY    (BIT(27))
#define SPI_RDATA_AFIFO_REMPTY_M  (SPI_RDATA_AFIFO_REMPTY_V << SPI_RDATA_AFIFO_REMPTY_S)
#define SPI_RDATA_AFIFO_REMPTY_V  0x00000001U
#define SPI_RDATA_AFIFO_REMPTY_S  27
/** SPI_RADDR_AFIFO_REMPTY : RO; bitpos: [28]; default: 1;
 *  1: AXI_RADDR_CTL_AFIFO is empty. 0: At least one AXI read transfer is pending.
 */
#define SPI_RADDR_AFIFO_REMPTY    (BIT(28))
#define SPI_RADDR_AFIFO_REMPTY_M  (SPI_RADDR_AFIFO_REMPTY_V << SPI_RADDR_AFIFO_REMPTY_S)
#define SPI_RADDR_AFIFO_REMPTY_V  0x00000001U
#define SPI_RADDR_AFIFO_REMPTY_S  28
/** SPI_WDATA_AFIFO_REMPTY : RO; bitpos: [29]; default: 1;
 *  1: WDATA_AFIFO is empty. 0: At least one AXI write transfer is pending.
 */
#define SPI_WDATA_AFIFO_REMPTY    (BIT(29))
#define SPI_WDATA_AFIFO_REMPTY_M  (SPI_WDATA_AFIFO_REMPTY_V << SPI_WDATA_AFIFO_REMPTY_S)
#define SPI_WDATA_AFIFO_REMPTY_V  0x00000001U
#define SPI_WDATA_AFIFO_REMPTY_S  29
/** SPI_WBLEN_AFIFO_REMPTY : RO; bitpos: [30]; default: 1;
 *  1: WBLEN_AFIFO is empty. 0: At least one AXI write transfer is pending.
 */
#define SPI_WBLEN_AFIFO_REMPTY    (BIT(30))
#define SPI_WBLEN_AFIFO_REMPTY_M  (SPI_WBLEN_AFIFO_REMPTY_V << SPI_WBLEN_AFIFO_REMPTY_S)
#define SPI_WBLEN_AFIFO_REMPTY_V  0x00000001U
#define SPI_WBLEN_AFIFO_REMPTY_S  30
/** SPI_ALL_AXI_TRANS_AFIFO_EMPTY : RO; bitpos: [31]; default: 1;
 *  This bit is set when WADDR_AFIFO, WBLEN_AFIFO, WDATA_AFIFO, AXI_RADDR_CTL_AFIFO and
 *  RDATA_AFIFO are empty and spi0_mst_st is IDLE.
 */
#define SPI_ALL_AXI_TRANS_AFIFO_EMPTY    (BIT(31))
#define SPI_ALL_AXI_TRANS_AFIFO_EMPTY_M  (SPI_ALL_AXI_TRANS_AFIFO_EMPTY_V << SPI_ALL_AXI_TRANS_AFIFO_EMPTY_S)
#define SPI_ALL_AXI_TRANS_AFIFO_EMPTY_V  0x00000001U
#define SPI_ALL_AXI_TRANS_AFIFO_EMPTY_S  31

/** SPI_MEM_AXI_ERR_RESP_EN_REG register
 *  SPI0 AXI error response enable register
 */
#define SPI_MEM_AXI_ERR_RESP_EN_REG(i)              (REG_SPI_MEM_BASE(i) + 0x17c)
/** SPI_MEM_AW_RESP_EN_MMU_VLD : R/W; bitpos: [0]; default: 0;
 *  Set this bit  to enable AXI response function for mmu valid err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_MMU_VLD    (BIT(0))
#define SPI_MEM_AW_RESP_EN_MMU_VLD_M  (SPI_MEM_AW_RESP_EN_MMU_VLD_V << SPI_MEM_AW_RESP_EN_MMU_VLD_S)
#define SPI_MEM_AW_RESP_EN_MMU_VLD_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_MMU_VLD_S  0
/** SPI_MEM_AW_RESP_EN_MMU_GID : R/W; bitpos: [1]; default: 0;
 *  Set this bit  to enable AXI response function for mmu gid err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_MMU_GID    (BIT(1))
#define SPI_MEM_AW_RESP_EN_MMU_GID_M  (SPI_MEM_AW_RESP_EN_MMU_GID_V << SPI_MEM_AW_RESP_EN_MMU_GID_S)
#define SPI_MEM_AW_RESP_EN_MMU_GID_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_MMU_GID_S  1
/** SPI_MEM_AW_RESP_EN_AXI_SIZE : R/W; bitpos: [2]; default: 0;
 *  Set this bit  to enable AXI response function for axi size err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_AXI_SIZE    (BIT(2))
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_M  (SPI_MEM_AW_RESP_EN_AXI_SIZE_V << SPI_MEM_AW_RESP_EN_AXI_SIZE_S)
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_S  2
/** SPI_MEM_AW_RESP_EN_AXI_FLASH : R/W; bitpos: [3]; default: 0;
 *  Set this bit  to enable AXI response function for axi flash err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_AXI_FLASH    (BIT(3))
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_M  (SPI_MEM_AW_RESP_EN_AXI_FLASH_V << SPI_MEM_AW_RESP_EN_AXI_FLASH_S)
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_S  3
/** SPI_MEM_AW_RESP_EN_MMU_ECC : R/W; bitpos: [4]; default: 0;
 *  Set this bit  to enable AXI response function for mmu ecc err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_MMU_ECC    (BIT(4))
#define SPI_MEM_AW_RESP_EN_MMU_ECC_M  (SPI_MEM_AW_RESP_EN_MMU_ECC_V << SPI_MEM_AW_RESP_EN_MMU_ECC_S)
#define SPI_MEM_AW_RESP_EN_MMU_ECC_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_MMU_ECC_S  4
/** SPI_MEM_AW_RESP_EN_MMU_SENS : R/W; bitpos: [5]; default: 0;
 *  Set this bit  to enable AXI response function for mmu sens in err axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_MMU_SENS    (BIT(5))
#define SPI_MEM_AW_RESP_EN_MMU_SENS_M  (SPI_MEM_AW_RESP_EN_MMU_SENS_V << SPI_MEM_AW_RESP_EN_MMU_SENS_S)
#define SPI_MEM_AW_RESP_EN_MMU_SENS_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_MMU_SENS_S  5
/** SPI_MEM_AW_RESP_EN_AXI_WSTRB : R/W; bitpos: [6]; default: 0;
 *  Set this bit  to enable AXI response function for axi wstrb err in axi write trans.
 */
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB    (BIT(6))
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_M  (SPI_MEM_AW_RESP_EN_AXI_WSTRB_V << SPI_MEM_AW_RESP_EN_AXI_WSTRB_S)
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_V  0x00000001U
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_S  6
/** SPI_MEM_AR_RESP_EN_MMU_VLD : R/W; bitpos: [7]; default: 0;
 *  Set this bit  to enable AXI response function for mmu valid err in axi read trans.
 */
#define SPI_MEM_AR_RESP_EN_MMU_VLD    (BIT(7))
#define SPI_MEM_AR_RESP_EN_MMU_VLD_M  (SPI_MEM_AR_RESP_EN_MMU_VLD_V << SPI_MEM_AR_RESP_EN_MMU_VLD_S)
#define SPI_MEM_AR_RESP_EN_MMU_VLD_V  0x00000001U
#define SPI_MEM_AR_RESP_EN_MMU_VLD_S  7
/** SPI_MEM_AR_RESP_EN_MMU_GID : R/W; bitpos: [8]; default: 0;
 *  Set this bit  to enable AXI response function for mmu gid err in axi read trans.
 */
#define SPI_MEM_AR_RESP_EN_MMU_GID    (BIT(8))
#define SPI_MEM_AR_RESP_EN_MMU_GID_M  (SPI_MEM_AR_RESP_EN_MMU_GID_V << SPI_MEM_AR_RESP_EN_MMU_GID_S)
#define SPI_MEM_AR_RESP_EN_MMU_GID_V  0x00000001U
#define SPI_MEM_AR_RESP_EN_MMU_GID_S  8
/** SPI_MEM_AR_RESP_EN_MMU_ECC : R/W; bitpos: [9]; default: 0;
 *  Set this bit  to enable AXI response function for mmu ecc err in axi read trans.
 */
#define SPI_MEM_AR_RESP_EN_MMU_ECC    (BIT(9))
#define SPI_MEM_AR_RESP_EN_MMU_ECC_M  (SPI_MEM_AR_RESP_EN_MMU_ECC_V << SPI_MEM_AR_RESP_EN_MMU_ECC_S)
#define SPI_MEM_AR_RESP_EN_MMU_ECC_V  0x00000001U
#define SPI_MEM_AR_RESP_EN_MMU_ECC_S  9
/** SPI_MEM_AR_RESP_EN_MMU_SENS : R/W; bitpos: [10]; default: 0;
 *  Set this bit  to enable AXI response function for mmu sensitive err in axi read
 *  trans.
 */
#define SPI_MEM_AR_RESP_EN_MMU_SENS    (BIT(10))
#define SPI_MEM_AR_RESP_EN_MMU_SENS_M  (SPI_MEM_AR_RESP_EN_MMU_SENS_V << SPI_MEM_AR_RESP_EN_MMU_SENS_S)
#define SPI_MEM_AR_RESP_EN_MMU_SENS_V  0x00000001U
#define SPI_MEM_AR_RESP_EN_MMU_SENS_S  10
/** SPI_MEM_AR_RESP_EN_AXI_SIZE : R/W; bitpos: [11]; default: 0;
 *  Set this bit  to enable AXI response function for axi size err in axi read trans.
 */
#define SPI_MEM_AR_RESP_EN_AXI_SIZE    (BIT(11))
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_M  (SPI_MEM_AR_RESP_EN_AXI_SIZE_V << SPI_MEM_AR_RESP_EN_AXI_SIZE_S)
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_V  0x00000001U
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_S  11

/** SPI_MEM_TIMING_CALI_REG register
 *  SPI0 flash timing calibration register
 */
#define SPI_MEM_TIMING_CALI_REG(i)              (REG_SPI_MEM_BASE(i) + 0x180)
/** SPI_MEM_TIMING_CLK_ENA : R/W; bitpos: [0]; default: 1;
 *  The bit is used to enable timing adjust clock for all reading operations.
 */
#define SPI_MEM_TIMING_CLK_ENA    (BIT(0))
#define SPI_MEM_TIMING_CLK_ENA_M  (SPI_MEM_TIMING_CLK_ENA_V << SPI_MEM_TIMING_CLK_ENA_S)
#define SPI_MEM_TIMING_CLK_ENA_V  0x00000001U
#define SPI_MEM_TIMING_CLK_ENA_S  0
/** SPI_MEM_TIMING_CALI : R/W; bitpos: [1]; default: 0;
 *  The bit is used to enable timing auto-calibration for all reading operations.
 */
#define SPI_MEM_TIMING_CALI    (BIT(1))
#define SPI_MEM_TIMING_CALI_M  (SPI_MEM_TIMING_CALI_V << SPI_MEM_TIMING_CALI_S)
#define SPI_MEM_TIMING_CALI_V  0x00000001U
#define SPI_MEM_TIMING_CALI_S  1
/** SPI_MEM_EXTRA_DUMMY_CYCLELEN : R/W; bitpos: [4:2]; default: 0;
 *  add extra dummy spi clock cycle length for spi clock calibration.
 */
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN    0x00000007U
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_M  (SPI_MEM_EXTRA_DUMMY_CYCLELEN_V << SPI_MEM_EXTRA_DUMMY_CYCLELEN_S)
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_V  0x00000007U
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_S  2
/** SPI_MEM_DLL_TIMING_CALI : R/W; bitpos: [5]; default: 0;
 *  Set this bit to enable DLL for timing calibration in DDR mode when accessed to
 *  flash.
 */
#define SPI_MEM_DLL_TIMING_CALI    (BIT(5))
#define SPI_MEM_DLL_TIMING_CALI_M  (SPI_MEM_DLL_TIMING_CALI_V << SPI_MEM_DLL_TIMING_CALI_S)
#define SPI_MEM_DLL_TIMING_CALI_V  0x00000001U
#define SPI_MEM_DLL_TIMING_CALI_S  5
/** SPI_MEM_TIMING_CALI_UPDATE : WT; bitpos: [6]; default: 0;
 *  Set this bit to update delay mode, delay num and extra dummy in MSPI.
 */
#define SPI_MEM_TIMING_CALI_UPDATE    (BIT(6))
#define SPI_MEM_TIMING_CALI_UPDATE_M  (SPI_MEM_TIMING_CALI_UPDATE_V << SPI_MEM_TIMING_CALI_UPDATE_S)
#define SPI_MEM_TIMING_CALI_UPDATE_V  0x00000001U
#define SPI_MEM_TIMING_CALI_UPDATE_S  6

/** SPI_MEM_DIN_MODE_REG register
 *  MSPI flash input timing delay mode control register
 */
#define SPI_MEM_DIN_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x184)
/** SPI_MEM_DIN0_MODE : R/W; bitpos: [2:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_MEM_DIN0_MODE    0x00000007U
#define SPI_MEM_DIN0_MODE_M  (SPI_MEM_DIN0_MODE_V << SPI_MEM_DIN0_MODE_S)
#define SPI_MEM_DIN0_MODE_V  0x00000007U
#define SPI_MEM_DIN0_MODE_S  0
/** SPI_MEM_DIN1_MODE : R/W; bitpos: [5:3]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_MEM_DIN1_MODE    0x00000007U
#define SPI_MEM_DIN1_MODE_M  (SPI_MEM_DIN1_MODE_V << SPI_MEM_DIN1_MODE_S)
#define SPI_MEM_DIN1_MODE_V  0x00000007U
#define SPI_MEM_DIN1_MODE_S  3
/** SPI_MEM_DIN2_MODE : R/W; bitpos: [8:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_MEM_DIN2_MODE    0x00000007U
#define SPI_MEM_DIN2_MODE_M  (SPI_MEM_DIN2_MODE_V << SPI_MEM_DIN2_MODE_S)
#define SPI_MEM_DIN2_MODE_V  0x00000007U
#define SPI_MEM_DIN2_MODE_S  6
/** SPI_MEM_DIN3_MODE : R/W; bitpos: [11:9]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_MEM_DIN3_MODE    0x00000007U
#define SPI_MEM_DIN3_MODE_M  (SPI_MEM_DIN3_MODE_V << SPI_MEM_DIN3_MODE_S)
#define SPI_MEM_DIN3_MODE_V  0x00000007U
#define SPI_MEM_DIN3_MODE_S  9
/** SPI_MEM_DIN4_MODE : R/W; bitpos: [14:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: input
 *  with the spi_clk
 */
#define SPI_MEM_DIN4_MODE    0x00000007U
#define SPI_MEM_DIN4_MODE_M  (SPI_MEM_DIN4_MODE_V << SPI_MEM_DIN4_MODE_S)
#define SPI_MEM_DIN4_MODE_V  0x00000007U
#define SPI_MEM_DIN4_MODE_S  12
/** SPI_MEM_DIN5_MODE : R/W; bitpos: [17:15]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: input
 *  with the spi_clk
 */
#define SPI_MEM_DIN5_MODE    0x00000007U
#define SPI_MEM_DIN5_MODE_M  (SPI_MEM_DIN5_MODE_V << SPI_MEM_DIN5_MODE_S)
#define SPI_MEM_DIN5_MODE_V  0x00000007U
#define SPI_MEM_DIN5_MODE_S  15
/** SPI_MEM_DIN6_MODE : R/W; bitpos: [20:18]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: input
 *  with the spi_clk
 */
#define SPI_MEM_DIN6_MODE    0x00000007U
#define SPI_MEM_DIN6_MODE_M  (SPI_MEM_DIN6_MODE_V << SPI_MEM_DIN6_MODE_S)
#define SPI_MEM_DIN6_MODE_V  0x00000007U
#define SPI_MEM_DIN6_MODE_S  18
/** SPI_MEM_DIN7_MODE : R/W; bitpos: [23:21]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: input
 *  with the spi_clk
 */
#define SPI_MEM_DIN7_MODE    0x00000007U
#define SPI_MEM_DIN7_MODE_M  (SPI_MEM_DIN7_MODE_V << SPI_MEM_DIN7_MODE_S)
#define SPI_MEM_DIN7_MODE_V  0x00000007U
#define SPI_MEM_DIN7_MODE_S  21
/** SPI_MEM_DINS_MODE : R/W; bitpos: [26:24]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: input
 *  with the spi_clk
 */
#define SPI_MEM_DINS_MODE    0x00000007U
#define SPI_MEM_DINS_MODE_M  (SPI_MEM_DINS_MODE_V << SPI_MEM_DINS_MODE_S)
#define SPI_MEM_DINS_MODE_V  0x00000007U
#define SPI_MEM_DINS_MODE_S  24

/** SPI_MEM_DIN_NUM_REG register
 *  MSPI flash input timing delay number control register
 */
#define SPI_MEM_DIN_NUM_REG(i)              (REG_SPI_MEM_BASE(i) + 0x188)
/** SPI_MEM_DIN0_NUM : R/W; bitpos: [1:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN0_NUM    0x00000003U
#define SPI_MEM_DIN0_NUM_M  (SPI_MEM_DIN0_NUM_V << SPI_MEM_DIN0_NUM_S)
#define SPI_MEM_DIN0_NUM_V  0x00000003U
#define SPI_MEM_DIN0_NUM_S  0
/** SPI_MEM_DIN1_NUM : R/W; bitpos: [3:2]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN1_NUM    0x00000003U
#define SPI_MEM_DIN1_NUM_M  (SPI_MEM_DIN1_NUM_V << SPI_MEM_DIN1_NUM_S)
#define SPI_MEM_DIN1_NUM_V  0x00000003U
#define SPI_MEM_DIN1_NUM_S  2
/** SPI_MEM_DIN2_NUM : R/W; bitpos: [5:4]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN2_NUM    0x00000003U
#define SPI_MEM_DIN2_NUM_M  (SPI_MEM_DIN2_NUM_V << SPI_MEM_DIN2_NUM_S)
#define SPI_MEM_DIN2_NUM_V  0x00000003U
#define SPI_MEM_DIN2_NUM_S  4
/** SPI_MEM_DIN3_NUM : R/W; bitpos: [7:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN3_NUM    0x00000003U
#define SPI_MEM_DIN3_NUM_M  (SPI_MEM_DIN3_NUM_V << SPI_MEM_DIN3_NUM_S)
#define SPI_MEM_DIN3_NUM_V  0x00000003U
#define SPI_MEM_DIN3_NUM_S  6
/** SPI_MEM_DIN4_NUM : R/W; bitpos: [9:8]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN4_NUM    0x00000003U
#define SPI_MEM_DIN4_NUM_M  (SPI_MEM_DIN4_NUM_V << SPI_MEM_DIN4_NUM_S)
#define SPI_MEM_DIN4_NUM_V  0x00000003U
#define SPI_MEM_DIN4_NUM_S  8
/** SPI_MEM_DIN5_NUM : R/W; bitpos: [11:10]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN5_NUM    0x00000003U
#define SPI_MEM_DIN5_NUM_M  (SPI_MEM_DIN5_NUM_V << SPI_MEM_DIN5_NUM_S)
#define SPI_MEM_DIN5_NUM_V  0x00000003U
#define SPI_MEM_DIN5_NUM_S  10
/** SPI_MEM_DIN6_NUM : R/W; bitpos: [13:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN6_NUM    0x00000003U
#define SPI_MEM_DIN6_NUM_M  (SPI_MEM_DIN6_NUM_V << SPI_MEM_DIN6_NUM_S)
#define SPI_MEM_DIN6_NUM_V  0x00000003U
#define SPI_MEM_DIN6_NUM_S  12
/** SPI_MEM_DIN7_NUM : R/W; bitpos: [15:14]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DIN7_NUM    0x00000003U
#define SPI_MEM_DIN7_NUM_M  (SPI_MEM_DIN7_NUM_V << SPI_MEM_DIN7_NUM_S)
#define SPI_MEM_DIN7_NUM_V  0x00000003U
#define SPI_MEM_DIN7_NUM_S  14
/** SPI_MEM_DINS_NUM : R/W; bitpos: [17:16]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_MEM_DINS_NUM    0x00000003U
#define SPI_MEM_DINS_NUM_M  (SPI_MEM_DINS_NUM_V << SPI_MEM_DINS_NUM_S)
#define SPI_MEM_DINS_NUM_V  0x00000003U
#define SPI_MEM_DINS_NUM_S  16

/** SPI_MEM_DOUT_MODE_REG register
 *  MSPI flash output timing adjustment control register
 */
#define SPI_MEM_DOUT_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x18c)
/** SPI_MEM_DOUT0_MODE : R/W; bitpos: [0]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_MEM_DOUT0_MODE    (BIT(0))
#define SPI_MEM_DOUT0_MODE_M  (SPI_MEM_DOUT0_MODE_V << SPI_MEM_DOUT0_MODE_S)
#define SPI_MEM_DOUT0_MODE_V  0x00000001U
#define SPI_MEM_DOUT0_MODE_S  0
/** SPI_MEM_DOUT1_MODE : R/W; bitpos: [1]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_MEM_DOUT1_MODE    (BIT(1))
#define SPI_MEM_DOUT1_MODE_M  (SPI_MEM_DOUT1_MODE_V << SPI_MEM_DOUT1_MODE_S)
#define SPI_MEM_DOUT1_MODE_V  0x00000001U
#define SPI_MEM_DOUT1_MODE_S  1
/** SPI_MEM_DOUT2_MODE : R/W; bitpos: [2]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_MEM_DOUT2_MODE    (BIT(2))
#define SPI_MEM_DOUT2_MODE_M  (SPI_MEM_DOUT2_MODE_V << SPI_MEM_DOUT2_MODE_S)
#define SPI_MEM_DOUT2_MODE_V  0x00000001U
#define SPI_MEM_DOUT2_MODE_S  2
/** SPI_MEM_DOUT3_MODE : R/W; bitpos: [3]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_MEM_DOUT3_MODE    (BIT(3))
#define SPI_MEM_DOUT3_MODE_M  (SPI_MEM_DOUT3_MODE_V << SPI_MEM_DOUT3_MODE_S)
#define SPI_MEM_DOUT3_MODE_V  0x00000001U
#define SPI_MEM_DOUT3_MODE_S  3
/** SPI_MEM_DOUT4_MODE : R/W; bitpos: [4]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the spi_clk
 */
#define SPI_MEM_DOUT4_MODE    (BIT(4))
#define SPI_MEM_DOUT4_MODE_M  (SPI_MEM_DOUT4_MODE_V << SPI_MEM_DOUT4_MODE_S)
#define SPI_MEM_DOUT4_MODE_V  0x00000001U
#define SPI_MEM_DOUT4_MODE_S  4
/** SPI_MEM_DOUT5_MODE : R/W; bitpos: [5]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the spi_clk
 */
#define SPI_MEM_DOUT5_MODE    (BIT(5))
#define SPI_MEM_DOUT5_MODE_M  (SPI_MEM_DOUT5_MODE_V << SPI_MEM_DOUT5_MODE_S)
#define SPI_MEM_DOUT5_MODE_V  0x00000001U
#define SPI_MEM_DOUT5_MODE_S  5
/** SPI_MEM_DOUT6_MODE : R/W; bitpos: [6]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the spi_clk
 */
#define SPI_MEM_DOUT6_MODE    (BIT(6))
#define SPI_MEM_DOUT6_MODE_M  (SPI_MEM_DOUT6_MODE_V << SPI_MEM_DOUT6_MODE_S)
#define SPI_MEM_DOUT6_MODE_V  0x00000001U
#define SPI_MEM_DOUT6_MODE_S  6
/** SPI_MEM_DOUT7_MODE : R/W; bitpos: [7]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the spi_clk
 */
#define SPI_MEM_DOUT7_MODE    (BIT(7))
#define SPI_MEM_DOUT7_MODE_M  (SPI_MEM_DOUT7_MODE_V << SPI_MEM_DOUT7_MODE_S)
#define SPI_MEM_DOUT7_MODE_V  0x00000001U
#define SPI_MEM_DOUT7_MODE_S  7
/** SPI_MEM_DOUTS_MODE : R/W; bitpos: [8]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the spi_clk
 */
#define SPI_MEM_DOUTS_MODE    (BIT(8))
#define SPI_MEM_DOUTS_MODE_M  (SPI_MEM_DOUTS_MODE_V << SPI_MEM_DOUTS_MODE_S)
#define SPI_MEM_DOUTS_MODE_V  0x00000001U
#define SPI_MEM_DOUTS_MODE_S  8

/** SPI_SMEM_TIMING_CALI_REG register
 *  MSPI external RAM timing calibration register
 */
#define SPI_SMEM_TIMING_CALI_REG(i)              (REG_SPI_MEM_BASE(i) + 0x190)
/** SPI_SMEM_TIMING_CLK_ENA : R/W; bitpos: [0]; default: 1;
 *  For sram, the bit is used to enable timing adjust clock for all reading operations.
 */
#define SPI_SMEM_TIMING_CLK_ENA    (BIT(0))
#define SPI_SMEM_TIMING_CLK_ENA_M  (SPI_SMEM_TIMING_CLK_ENA_V << SPI_SMEM_TIMING_CLK_ENA_S)
#define SPI_SMEM_TIMING_CLK_ENA_V  0x00000001U
#define SPI_SMEM_TIMING_CLK_ENA_S  0
/** SPI_SMEM_TIMING_CALI : R/W; bitpos: [1]; default: 0;
 *  For sram, the bit is used to enable timing auto-calibration for all reading
 *  operations.
 */
#define SPI_SMEM_TIMING_CALI    (BIT(1))
#define SPI_SMEM_TIMING_CALI_M  (SPI_SMEM_TIMING_CALI_V << SPI_SMEM_TIMING_CALI_S)
#define SPI_SMEM_TIMING_CALI_V  0x00000001U
#define SPI_SMEM_TIMING_CALI_S  1
/** SPI_SMEM_EXTRA_DUMMY_CYCLELEN : R/W; bitpos: [4:2]; default: 0;
 *  For sram, add extra dummy spi clock cycle length for spi clock calibration.
 */
#define SPI_SMEM_EXTRA_DUMMY_CYCLELEN    0x00000007U
#define SPI_SMEM_EXTRA_DUMMY_CYCLELEN_M  (SPI_SMEM_EXTRA_DUMMY_CYCLELEN_V << SPI_SMEM_EXTRA_DUMMY_CYCLELEN_S)
#define SPI_SMEM_EXTRA_DUMMY_CYCLELEN_V  0x00000007U
#define SPI_SMEM_EXTRA_DUMMY_CYCLELEN_S  2
/** SPI_SMEM_DLL_TIMING_CALI : R/W; bitpos: [5]; default: 0;
 *  Set this bit to enable DLL for timing calibration in DDR mode when accessed to
 *  EXT_RAM.
 */
#define SPI_SMEM_DLL_TIMING_CALI    (BIT(5))
#define SPI_SMEM_DLL_TIMING_CALI_M  (SPI_SMEM_DLL_TIMING_CALI_V << SPI_SMEM_DLL_TIMING_CALI_S)
#define SPI_SMEM_DLL_TIMING_CALI_V  0x00000001U
#define SPI_SMEM_DLL_TIMING_CALI_S  5
/** SPI_SMEM_DQS0_270_SEL : HRO; bitpos: [8:7]; default: 1;
 *  Set these bits to delay dqs signal & invert delayed signal for DLL timing adjust.
 *  2'd0: 0.5ns, 2'd1: 1.0ns, 2'd2: 1.5ns 2'd3: 2.0ns.
 */
#define SPI_SMEM_DQS0_270_SEL    0x00000003U
#define SPI_SMEM_DQS0_270_SEL_M  (SPI_SMEM_DQS0_270_SEL_V << SPI_SMEM_DQS0_270_SEL_S)
#define SPI_SMEM_DQS0_270_SEL_V  0x00000003U
#define SPI_SMEM_DQS0_270_SEL_S  7
/** SPI_SMEM_DQS0_90_SEL : HRO; bitpos: [10:9]; default: 1;
 *  Set these bits to delay dqs signal for DLL timing adjust. 2'd0: 0.5ns, 2'd1: 1.0ns,
 *  2'd2: 1.5ns 2'd3: 2.0ns.
 */
#define SPI_SMEM_DQS0_90_SEL    0x00000003U
#define SPI_SMEM_DQS0_90_SEL_M  (SPI_SMEM_DQS0_90_SEL_V << SPI_SMEM_DQS0_90_SEL_S)
#define SPI_SMEM_DQS0_90_SEL_V  0x00000003U
#define SPI_SMEM_DQS0_90_SEL_S  9
/** SPI_SMEM_DQS1_270_SEL : HRO; bitpos: [12:11]; default: 1;
 *  Set these bits to delay dqs signal & invert delayed signal for DLL timing adjust.
 *  2'd0: 0.5ns, 2'd1: 1.0ns, 2'd2: 1.5ns 2'd3: 2.0ns.
 */
#define SPI_SMEM_DQS1_270_SEL    0x00000003U
#define SPI_SMEM_DQS1_270_SEL_M  (SPI_SMEM_DQS1_270_SEL_V << SPI_SMEM_DQS1_270_SEL_S)
#define SPI_SMEM_DQS1_270_SEL_V  0x00000003U
#define SPI_SMEM_DQS1_270_SEL_S  11
/** SPI_SMEM_DQS1_90_SEL : HRO; bitpos: [14:13]; default: 1;
 *  Set these bits to delay dqs signal for DLL timing adjust. 2'd0: 0.5ns, 2'd1: 1.0ns,
 *  2'd2: 1.5ns 2'd3: 2.0ns.
 */
#define SPI_SMEM_DQS1_90_SEL    0x00000003U
#define SPI_SMEM_DQS1_90_SEL_M  (SPI_SMEM_DQS1_90_SEL_V << SPI_SMEM_DQS1_90_SEL_S)
#define SPI_SMEM_DQS1_90_SEL_V  0x00000003U
#define SPI_SMEM_DQS1_90_SEL_S  13

/** SPI_SMEM_DIN_MODE_REG register
 *  MSPI external RAM input timing delay mode control register
 */
#define SPI_SMEM_DIN_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x194)
/** SPI_SMEM_DIN0_MODE : R/W; bitpos: [2:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN0_MODE    0x00000007U
#define SPI_SMEM_DIN0_MODE_M  (SPI_SMEM_DIN0_MODE_V << SPI_SMEM_DIN0_MODE_S)
#define SPI_SMEM_DIN0_MODE_V  0x00000007U
#define SPI_SMEM_DIN0_MODE_S  0
/** SPI_SMEM_DIN1_MODE : R/W; bitpos: [5:3]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN1_MODE    0x00000007U
#define SPI_SMEM_DIN1_MODE_M  (SPI_SMEM_DIN1_MODE_V << SPI_SMEM_DIN1_MODE_S)
#define SPI_SMEM_DIN1_MODE_V  0x00000007U
#define SPI_SMEM_DIN1_MODE_S  3
/** SPI_SMEM_DIN2_MODE : R/W; bitpos: [8:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN2_MODE    0x00000007U
#define SPI_SMEM_DIN2_MODE_M  (SPI_SMEM_DIN2_MODE_V << SPI_SMEM_DIN2_MODE_S)
#define SPI_SMEM_DIN2_MODE_V  0x00000007U
#define SPI_SMEM_DIN2_MODE_S  6
/** SPI_SMEM_DIN3_MODE : R/W; bitpos: [11:9]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN3_MODE    0x00000007U
#define SPI_SMEM_DIN3_MODE_M  (SPI_SMEM_DIN3_MODE_V << SPI_SMEM_DIN3_MODE_S)
#define SPI_SMEM_DIN3_MODE_V  0x00000007U
#define SPI_SMEM_DIN3_MODE_S  9
/** SPI_SMEM_DIN4_MODE : R/W; bitpos: [14:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN4_MODE    0x00000007U
#define SPI_SMEM_DIN4_MODE_M  (SPI_SMEM_DIN4_MODE_V << SPI_SMEM_DIN4_MODE_S)
#define SPI_SMEM_DIN4_MODE_V  0x00000007U
#define SPI_SMEM_DIN4_MODE_S  12
/** SPI_SMEM_DIN5_MODE : R/W; bitpos: [17:15]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN5_MODE    0x00000007U
#define SPI_SMEM_DIN5_MODE_M  (SPI_SMEM_DIN5_MODE_V << SPI_SMEM_DIN5_MODE_S)
#define SPI_SMEM_DIN5_MODE_V  0x00000007U
#define SPI_SMEM_DIN5_MODE_S  15
/** SPI_SMEM_DIN6_MODE : R/W; bitpos: [20:18]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN6_MODE    0x00000007U
#define SPI_SMEM_DIN6_MODE_M  (SPI_SMEM_DIN6_MODE_V << SPI_SMEM_DIN6_MODE_S)
#define SPI_SMEM_DIN6_MODE_V  0x00000007U
#define SPI_SMEM_DIN6_MODE_S  18
/** SPI_SMEM_DIN7_MODE : R/W; bitpos: [23:21]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN7_MODE    0x00000007U
#define SPI_SMEM_DIN7_MODE_M  (SPI_SMEM_DIN7_MODE_V << SPI_SMEM_DIN7_MODE_S)
#define SPI_SMEM_DIN7_MODE_V  0x00000007U
#define SPI_SMEM_DIN7_MODE_S  21
/** SPI_SMEM_DINS_MODE : R/W; bitpos: [26:24]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DINS_MODE    0x00000007U
#define SPI_SMEM_DINS_MODE_M  (SPI_SMEM_DINS_MODE_V << SPI_SMEM_DINS_MODE_S)
#define SPI_SMEM_DINS_MODE_V  0x00000007U
#define SPI_SMEM_DINS_MODE_S  24

/** SPI_SMEM_DIN_NUM_REG register
 *  MSPI external RAM input timing delay number control register
 */
#define SPI_SMEM_DIN_NUM_REG(i)              (REG_SPI_MEM_BASE(i) + 0x198)
/** SPI_SMEM_DIN0_NUM : R/W; bitpos: [1:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN0_NUM    0x00000003U
#define SPI_SMEM_DIN0_NUM_M  (SPI_SMEM_DIN0_NUM_V << SPI_SMEM_DIN0_NUM_S)
#define SPI_SMEM_DIN0_NUM_V  0x00000003U
#define SPI_SMEM_DIN0_NUM_S  0
/** SPI_SMEM_DIN1_NUM : R/W; bitpos: [3:2]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN1_NUM    0x00000003U
#define SPI_SMEM_DIN1_NUM_M  (SPI_SMEM_DIN1_NUM_V << SPI_SMEM_DIN1_NUM_S)
#define SPI_SMEM_DIN1_NUM_V  0x00000003U
#define SPI_SMEM_DIN1_NUM_S  2
/** SPI_SMEM_DIN2_NUM : R/W; bitpos: [5:4]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN2_NUM    0x00000003U
#define SPI_SMEM_DIN2_NUM_M  (SPI_SMEM_DIN2_NUM_V << SPI_SMEM_DIN2_NUM_S)
#define SPI_SMEM_DIN2_NUM_V  0x00000003U
#define SPI_SMEM_DIN2_NUM_S  4
/** SPI_SMEM_DIN3_NUM : R/W; bitpos: [7:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN3_NUM    0x00000003U
#define SPI_SMEM_DIN3_NUM_M  (SPI_SMEM_DIN3_NUM_V << SPI_SMEM_DIN3_NUM_S)
#define SPI_SMEM_DIN3_NUM_V  0x00000003U
#define SPI_SMEM_DIN3_NUM_S  6
/** SPI_SMEM_DIN4_NUM : R/W; bitpos: [9:8]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN4_NUM    0x00000003U
#define SPI_SMEM_DIN4_NUM_M  (SPI_SMEM_DIN4_NUM_V << SPI_SMEM_DIN4_NUM_S)
#define SPI_SMEM_DIN4_NUM_V  0x00000003U
#define SPI_SMEM_DIN4_NUM_S  8
/** SPI_SMEM_DIN5_NUM : R/W; bitpos: [11:10]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN5_NUM    0x00000003U
#define SPI_SMEM_DIN5_NUM_M  (SPI_SMEM_DIN5_NUM_V << SPI_SMEM_DIN5_NUM_S)
#define SPI_SMEM_DIN5_NUM_V  0x00000003U
#define SPI_SMEM_DIN5_NUM_S  10
/** SPI_SMEM_DIN6_NUM : R/W; bitpos: [13:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN6_NUM    0x00000003U
#define SPI_SMEM_DIN6_NUM_M  (SPI_SMEM_DIN6_NUM_V << SPI_SMEM_DIN6_NUM_S)
#define SPI_SMEM_DIN6_NUM_V  0x00000003U
#define SPI_SMEM_DIN6_NUM_S  12
/** SPI_SMEM_DIN7_NUM : R/W; bitpos: [15:14]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN7_NUM    0x00000003U
#define SPI_SMEM_DIN7_NUM_M  (SPI_SMEM_DIN7_NUM_V << SPI_SMEM_DIN7_NUM_S)
#define SPI_SMEM_DIN7_NUM_V  0x00000003U
#define SPI_SMEM_DIN7_NUM_S  14
/** SPI_SMEM_DINS_NUM : R/W; bitpos: [17:16]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DINS_NUM    0x00000003U
#define SPI_SMEM_DINS_NUM_M  (SPI_SMEM_DINS_NUM_V << SPI_SMEM_DINS_NUM_S)
#define SPI_SMEM_DINS_NUM_V  0x00000003U
#define SPI_SMEM_DINS_NUM_S  16

/** SPI_SMEM_DOUT_MODE_REG register
 *  MSPI external RAM output timing adjustment control register
 */
#define SPI_SMEM_DOUT_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x19c)
/** SPI_SMEM_DOUT0_MODE : R/W; bitpos: [0]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT0_MODE    (BIT(0))
#define SPI_SMEM_DOUT0_MODE_M  (SPI_SMEM_DOUT0_MODE_V << SPI_SMEM_DOUT0_MODE_S)
#define SPI_SMEM_DOUT0_MODE_V  0x00000001U
#define SPI_SMEM_DOUT0_MODE_S  0
/** SPI_SMEM_DOUT1_MODE : R/W; bitpos: [1]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT1_MODE    (BIT(1))
#define SPI_SMEM_DOUT1_MODE_M  (SPI_SMEM_DOUT1_MODE_V << SPI_SMEM_DOUT1_MODE_S)
#define SPI_SMEM_DOUT1_MODE_V  0x00000001U
#define SPI_SMEM_DOUT1_MODE_S  1
/** SPI_SMEM_DOUT2_MODE : R/W; bitpos: [2]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT2_MODE    (BIT(2))
#define SPI_SMEM_DOUT2_MODE_M  (SPI_SMEM_DOUT2_MODE_V << SPI_SMEM_DOUT2_MODE_S)
#define SPI_SMEM_DOUT2_MODE_V  0x00000001U
#define SPI_SMEM_DOUT2_MODE_S  2
/** SPI_SMEM_DOUT3_MODE : R/W; bitpos: [3]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT3_MODE    (BIT(3))
#define SPI_SMEM_DOUT3_MODE_M  (SPI_SMEM_DOUT3_MODE_V << SPI_SMEM_DOUT3_MODE_S)
#define SPI_SMEM_DOUT3_MODE_V  0x00000001U
#define SPI_SMEM_DOUT3_MODE_S  3
/** SPI_SMEM_DOUT4_MODE : R/W; bitpos: [4]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT4_MODE    (BIT(4))
#define SPI_SMEM_DOUT4_MODE_M  (SPI_SMEM_DOUT4_MODE_V << SPI_SMEM_DOUT4_MODE_S)
#define SPI_SMEM_DOUT4_MODE_V  0x00000001U
#define SPI_SMEM_DOUT4_MODE_S  4
/** SPI_SMEM_DOUT5_MODE : R/W; bitpos: [5]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT5_MODE    (BIT(5))
#define SPI_SMEM_DOUT5_MODE_M  (SPI_SMEM_DOUT5_MODE_V << SPI_SMEM_DOUT5_MODE_S)
#define SPI_SMEM_DOUT5_MODE_V  0x00000001U
#define SPI_SMEM_DOUT5_MODE_S  5
/** SPI_SMEM_DOUT6_MODE : R/W; bitpos: [6]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT6_MODE    (BIT(6))
#define SPI_SMEM_DOUT6_MODE_M  (SPI_SMEM_DOUT6_MODE_V << SPI_SMEM_DOUT6_MODE_S)
#define SPI_SMEM_DOUT6_MODE_V  0x00000001U
#define SPI_SMEM_DOUT6_MODE_S  6
/** SPI_SMEM_DOUT7_MODE : R/W; bitpos: [7]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT7_MODE    (BIT(7))
#define SPI_SMEM_DOUT7_MODE_M  (SPI_SMEM_DOUT7_MODE_V << SPI_SMEM_DOUT7_MODE_S)
#define SPI_SMEM_DOUT7_MODE_V  0x00000001U
#define SPI_SMEM_DOUT7_MODE_S  7
/** SPI_SMEM_DOUTS_MODE : R/W; bitpos: [8]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUTS_MODE    (BIT(8))
#define SPI_SMEM_DOUTS_MODE_M  (SPI_SMEM_DOUTS_MODE_V << SPI_SMEM_DOUTS_MODE_S)
#define SPI_SMEM_DOUTS_MODE_V  0x00000001U
#define SPI_SMEM_DOUTS_MODE_S  8

/** SPI_SMEM_AC_REG register
 *  MSPI external RAM ECC and SPI CS timing control register
 */
#define SPI_SMEM_AC_REG(i)              (REG_SPI_MEM_BASE(i) + 0x1a0)
/** SPI_SMEM_CS_SETUP : R/W; bitpos: [0]; default: 0;
 *  For SPI0 and SPI1, spi cs is enable when spi is in prepare phase. 1: enable 0:
 *  disable.
 */
#define SPI_SMEM_CS_SETUP    (BIT(0))
#define SPI_SMEM_CS_SETUP_M  (SPI_SMEM_CS_SETUP_V << SPI_SMEM_CS_SETUP_S)
#define SPI_SMEM_CS_SETUP_V  0x00000001U
#define SPI_SMEM_CS_SETUP_S  0
/** SPI_SMEM_CS_HOLD : R/W; bitpos: [1]; default: 0;
 *  For SPI0 and SPI1, spi cs keep low when spi is in done phase. 1: enable 0: disable.
 */
#define SPI_SMEM_CS_HOLD    (BIT(1))
#define SPI_SMEM_CS_HOLD_M  (SPI_SMEM_CS_HOLD_V << SPI_SMEM_CS_HOLD_S)
#define SPI_SMEM_CS_HOLD_V  0x00000001U
#define SPI_SMEM_CS_HOLD_S  1
/** SPI_SMEM_CS_SETUP_TIME : R/W; bitpos: [6:2]; default: 1;
 *  For spi0, (cycles-1) of prepare phase by spi clock this bits are combined with
 *  spi_mem_cs_setup bit.
 */
#define SPI_SMEM_CS_SETUP_TIME    0x0000001FU
#define SPI_SMEM_CS_SETUP_TIME_M  (SPI_SMEM_CS_SETUP_TIME_V << SPI_SMEM_CS_SETUP_TIME_S)
#define SPI_SMEM_CS_SETUP_TIME_V  0x0000001FU
#define SPI_SMEM_CS_SETUP_TIME_S  2
/** SPI_SMEM_CS_HOLD_TIME : R/W; bitpos: [11:7]; default: 1;
 *  For SPI0 and SPI1, spi cs signal is delayed to inactive by spi clock this bits are
 *  combined with spi_mem_cs_hold bit.
 */
#define SPI_SMEM_CS_HOLD_TIME    0x0000001FU
#define SPI_SMEM_CS_HOLD_TIME_M  (SPI_SMEM_CS_HOLD_TIME_V << SPI_SMEM_CS_HOLD_TIME_S)
#define SPI_SMEM_CS_HOLD_TIME_V  0x0000001FU
#define SPI_SMEM_CS_HOLD_TIME_S  7
/** SPI_SMEM_ECC_CS_HOLD_TIME : R/W; bitpos: [14:12]; default: 3;
 *  SPI_SMEM_CS_HOLD_TIME + SPI_SMEM_ECC_CS_HOLD_TIME is the SPI0 and SPI1 CS hold
 *  cycles in ECC mode when accessed external RAM.
 */
#define SPI_SMEM_ECC_CS_HOLD_TIME    0x00000007U
#define SPI_SMEM_ECC_CS_HOLD_TIME_M  (SPI_SMEM_ECC_CS_HOLD_TIME_V << SPI_SMEM_ECC_CS_HOLD_TIME_S)
#define SPI_SMEM_ECC_CS_HOLD_TIME_V  0x00000007U
#define SPI_SMEM_ECC_CS_HOLD_TIME_S  12
/** SPI_SMEM_ECC_SKIP_PAGE_CORNER : R/W; bitpos: [15]; default: 1;
 *  1: SPI0 skips page corner when accesses external RAM. 0: Not skip page corner when
 *  accesses external RAM.
 */
#define SPI_SMEM_ECC_SKIP_PAGE_CORNER    (BIT(15))
#define SPI_SMEM_ECC_SKIP_PAGE_CORNER_M  (SPI_SMEM_ECC_SKIP_PAGE_CORNER_V << SPI_SMEM_ECC_SKIP_PAGE_CORNER_S)
#define SPI_SMEM_ECC_SKIP_PAGE_CORNER_V  0x00000001U
#define SPI_SMEM_ECC_SKIP_PAGE_CORNER_S  15
/** SPI_SMEM_ECC_16TO18_BYTE_EN : R/W; bitpos: [16]; default: 0;
 *  Set this bit to enable SPI0 and SPI1 ECC 16 bytes data with 2 ECC bytes mode when
 *  accesses external RAM.
 */
#define SPI_SMEM_ECC_16TO18_BYTE_EN    (BIT(16))
#define SPI_SMEM_ECC_16TO18_BYTE_EN_M  (SPI_SMEM_ECC_16TO18_BYTE_EN_V << SPI_SMEM_ECC_16TO18_BYTE_EN_S)
#define SPI_SMEM_ECC_16TO18_BYTE_EN_V  0x00000001U
#define SPI_SMEM_ECC_16TO18_BYTE_EN_S  16
/** SPI_SMEM_CS_HOLD_DELAY : R/W; bitpos: [30:25]; default: 0;
 *  These bits are used to set the minimum CS high time tSHSL between SPI burst
 *  transfer when accesses to external RAM. tSHSL is (SPI_SMEM_CS_HOLD_DELAY[5:0] + 1)
 *  MSPI core clock cycles.
 */
#define SPI_SMEM_CS_HOLD_DELAY    0x0000003FU
#define SPI_SMEM_CS_HOLD_DELAY_M  (SPI_SMEM_CS_HOLD_DELAY_V << SPI_SMEM_CS_HOLD_DELAY_S)
#define SPI_SMEM_CS_HOLD_DELAY_V  0x0000003FU
#define SPI_SMEM_CS_HOLD_DELAY_S  25
/** SPI_SMEM_SPLIT_TRANS_EN : R/W; bitpos: [31]; default: 0;
 *  Set this bit to enable SPI0 split one AXI accesses EXT_RAM transfer into two SPI
 *  transfers when one transfer will cross flash/EXT_RAM page corner, valid no matter
 *  whether there is an ECC region or not.
 */
#define SPI_SMEM_SPLIT_TRANS_EN    (BIT(31))
#define SPI_SMEM_SPLIT_TRANS_EN_M  (SPI_SMEM_SPLIT_TRANS_EN_V << SPI_SMEM_SPLIT_TRANS_EN_S)
#define SPI_SMEM_SPLIT_TRANS_EN_V  0x00000001U
#define SPI_SMEM_SPLIT_TRANS_EN_S  31

/** SPI_SMEM_DIN_HEX_MODE_REG register
 *  MSPI 16x external RAM input timing delay mode control register
 */
#define SPI_SMEM_DIN_HEX_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x1a4)
/** SPI_SMEM_DIN08_MODE : HRO; bitpos: [2:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN08_MODE    0x00000007U
#define SPI_SMEM_DIN08_MODE_M  (SPI_SMEM_DIN08_MODE_V << SPI_SMEM_DIN08_MODE_S)
#define SPI_SMEM_DIN08_MODE_V  0x00000007U
#define SPI_SMEM_DIN08_MODE_S  0
/** SPI_SMEM_DIN09_MODE : HRO; bitpos: [5:3]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN09_MODE    0x00000007U
#define SPI_SMEM_DIN09_MODE_M  (SPI_SMEM_DIN09_MODE_V << SPI_SMEM_DIN09_MODE_S)
#define SPI_SMEM_DIN09_MODE_V  0x00000007U
#define SPI_SMEM_DIN09_MODE_S  3
/** SPI_SMEM_DIN10_MODE : HRO; bitpos: [8:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN10_MODE    0x00000007U
#define SPI_SMEM_DIN10_MODE_M  (SPI_SMEM_DIN10_MODE_V << SPI_SMEM_DIN10_MODE_S)
#define SPI_SMEM_DIN10_MODE_V  0x00000007U
#define SPI_SMEM_DIN10_MODE_S  6
/** SPI_SMEM_DIN11_MODE : HRO; bitpos: [11:9]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN11_MODE    0x00000007U
#define SPI_SMEM_DIN11_MODE_M  (SPI_SMEM_DIN11_MODE_V << SPI_SMEM_DIN11_MODE_S)
#define SPI_SMEM_DIN11_MODE_V  0x00000007U
#define SPI_SMEM_DIN11_MODE_S  9
/** SPI_SMEM_DIN12_MODE : HRO; bitpos: [14:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN12_MODE    0x00000007U
#define SPI_SMEM_DIN12_MODE_M  (SPI_SMEM_DIN12_MODE_V << SPI_SMEM_DIN12_MODE_S)
#define SPI_SMEM_DIN12_MODE_V  0x00000007U
#define SPI_SMEM_DIN12_MODE_S  12
/** SPI_SMEM_DIN13_MODE : HRO; bitpos: [17:15]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN13_MODE    0x00000007U
#define SPI_SMEM_DIN13_MODE_M  (SPI_SMEM_DIN13_MODE_V << SPI_SMEM_DIN13_MODE_S)
#define SPI_SMEM_DIN13_MODE_V  0x00000007U
#define SPI_SMEM_DIN13_MODE_S  15
/** SPI_SMEM_DIN14_MODE : HRO; bitpos: [20:18]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN14_MODE    0x00000007U
#define SPI_SMEM_DIN14_MODE_M  (SPI_SMEM_DIN14_MODE_V << SPI_SMEM_DIN14_MODE_S)
#define SPI_SMEM_DIN14_MODE_V  0x00000007U
#define SPI_SMEM_DIN14_MODE_S  18
/** SPI_SMEM_DIN15_MODE : HRO; bitpos: [23:21]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DIN15_MODE    0x00000007U
#define SPI_SMEM_DIN15_MODE_M  (SPI_SMEM_DIN15_MODE_V << SPI_SMEM_DIN15_MODE_S)
#define SPI_SMEM_DIN15_MODE_V  0x00000007U
#define SPI_SMEM_DIN15_MODE_S  21
/** SPI_SMEM_DINS_HEX_MODE : HRO; bitpos: [26:24]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: input without delayed, 1:
 *  input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: input
 *  with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input with the
 *  spi_clk high edge,  6: input with the spi_clk low edge
 */
#define SPI_SMEM_DINS_HEX_MODE    0x00000007U
#define SPI_SMEM_DINS_HEX_MODE_M  (SPI_SMEM_DINS_HEX_MODE_V << SPI_SMEM_DINS_HEX_MODE_S)
#define SPI_SMEM_DINS_HEX_MODE_V  0x00000007U
#define SPI_SMEM_DINS_HEX_MODE_S  24

/** SPI_SMEM_DIN_HEX_NUM_REG register
 *  MSPI 16x external RAM input timing delay number control register
 */
#define SPI_SMEM_DIN_HEX_NUM_REG(i)              (REG_SPI_MEM_BASE(i) + 0x1a8)
/** SPI_SMEM_DIN08_NUM : HRO; bitpos: [1:0]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN08_NUM    0x00000003U
#define SPI_SMEM_DIN08_NUM_M  (SPI_SMEM_DIN08_NUM_V << SPI_SMEM_DIN08_NUM_S)
#define SPI_SMEM_DIN08_NUM_V  0x00000003U
#define SPI_SMEM_DIN08_NUM_S  0
/** SPI_SMEM_DIN09_NUM : HRO; bitpos: [3:2]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN09_NUM    0x00000003U
#define SPI_SMEM_DIN09_NUM_M  (SPI_SMEM_DIN09_NUM_V << SPI_SMEM_DIN09_NUM_S)
#define SPI_SMEM_DIN09_NUM_V  0x00000003U
#define SPI_SMEM_DIN09_NUM_S  2
/** SPI_SMEM_DIN10_NUM : HRO; bitpos: [5:4]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN10_NUM    0x00000003U
#define SPI_SMEM_DIN10_NUM_M  (SPI_SMEM_DIN10_NUM_V << SPI_SMEM_DIN10_NUM_S)
#define SPI_SMEM_DIN10_NUM_V  0x00000003U
#define SPI_SMEM_DIN10_NUM_S  4
/** SPI_SMEM_DIN11_NUM : HRO; bitpos: [7:6]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN11_NUM    0x00000003U
#define SPI_SMEM_DIN11_NUM_M  (SPI_SMEM_DIN11_NUM_V << SPI_SMEM_DIN11_NUM_S)
#define SPI_SMEM_DIN11_NUM_V  0x00000003U
#define SPI_SMEM_DIN11_NUM_S  6
/** SPI_SMEM_DIN12_NUM : HRO; bitpos: [9:8]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN12_NUM    0x00000003U
#define SPI_SMEM_DIN12_NUM_M  (SPI_SMEM_DIN12_NUM_V << SPI_SMEM_DIN12_NUM_S)
#define SPI_SMEM_DIN12_NUM_V  0x00000003U
#define SPI_SMEM_DIN12_NUM_S  8
/** SPI_SMEM_DIN13_NUM : HRO; bitpos: [11:10]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN13_NUM    0x00000003U
#define SPI_SMEM_DIN13_NUM_M  (SPI_SMEM_DIN13_NUM_V << SPI_SMEM_DIN13_NUM_S)
#define SPI_SMEM_DIN13_NUM_V  0x00000003U
#define SPI_SMEM_DIN13_NUM_S  10
/** SPI_SMEM_DIN14_NUM : HRO; bitpos: [13:12]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN14_NUM    0x00000003U
#define SPI_SMEM_DIN14_NUM_M  (SPI_SMEM_DIN14_NUM_V << SPI_SMEM_DIN14_NUM_S)
#define SPI_SMEM_DIN14_NUM_V  0x00000003U
#define SPI_SMEM_DIN14_NUM_S  12
/** SPI_SMEM_DIN15_NUM : HRO; bitpos: [15:14]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DIN15_NUM    0x00000003U
#define SPI_SMEM_DIN15_NUM_M  (SPI_SMEM_DIN15_NUM_V << SPI_SMEM_DIN15_NUM_S)
#define SPI_SMEM_DIN15_NUM_V  0x00000003U
#define SPI_SMEM_DIN15_NUM_S  14
/** SPI_SMEM_DINS_HEX_NUM : HRO; bitpos: [17:16]; default: 0;
 *  the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
 *  delayed by 2 cycles,...
 */
#define SPI_SMEM_DINS_HEX_NUM    0x00000003U
#define SPI_SMEM_DINS_HEX_NUM_M  (SPI_SMEM_DINS_HEX_NUM_V << SPI_SMEM_DINS_HEX_NUM_S)
#define SPI_SMEM_DINS_HEX_NUM_V  0x00000003U
#define SPI_SMEM_DINS_HEX_NUM_S  16

/** SPI_SMEM_DOUT_HEX_MODE_REG register
 *  MSPI 16x external RAM output timing adjustment control register
 */
#define SPI_SMEM_DOUT_HEX_MODE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x1ac)
/** SPI_SMEM_DOUT08_MODE : HRO; bitpos: [0]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT08_MODE    (BIT(0))
#define SPI_SMEM_DOUT08_MODE_M  (SPI_SMEM_DOUT08_MODE_V << SPI_SMEM_DOUT08_MODE_S)
#define SPI_SMEM_DOUT08_MODE_V  0x00000001U
#define SPI_SMEM_DOUT08_MODE_S  0
/** SPI_SMEM_DOUT09_MODE : HRO; bitpos: [1]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT09_MODE    (BIT(1))
#define SPI_SMEM_DOUT09_MODE_M  (SPI_SMEM_DOUT09_MODE_V << SPI_SMEM_DOUT09_MODE_S)
#define SPI_SMEM_DOUT09_MODE_V  0x00000001U
#define SPI_SMEM_DOUT09_MODE_S  1
/** SPI_SMEM_DOUT10_MODE : HRO; bitpos: [2]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT10_MODE    (BIT(2))
#define SPI_SMEM_DOUT10_MODE_M  (SPI_SMEM_DOUT10_MODE_V << SPI_SMEM_DOUT10_MODE_S)
#define SPI_SMEM_DOUT10_MODE_V  0x00000001U
#define SPI_SMEM_DOUT10_MODE_S  2
/** SPI_SMEM_DOUT11_MODE : HRO; bitpos: [3]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT11_MODE    (BIT(3))
#define SPI_SMEM_DOUT11_MODE_M  (SPI_SMEM_DOUT11_MODE_V << SPI_SMEM_DOUT11_MODE_S)
#define SPI_SMEM_DOUT11_MODE_V  0x00000001U
#define SPI_SMEM_DOUT11_MODE_S  3
/** SPI_SMEM_DOUT12_MODE : HRO; bitpos: [4]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT12_MODE    (BIT(4))
#define SPI_SMEM_DOUT12_MODE_M  (SPI_SMEM_DOUT12_MODE_V << SPI_SMEM_DOUT12_MODE_S)
#define SPI_SMEM_DOUT12_MODE_V  0x00000001U
#define SPI_SMEM_DOUT12_MODE_S  4
/** SPI_SMEM_DOUT13_MODE : HRO; bitpos: [5]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT13_MODE    (BIT(5))
#define SPI_SMEM_DOUT13_MODE_M  (SPI_SMEM_DOUT13_MODE_V << SPI_SMEM_DOUT13_MODE_S)
#define SPI_SMEM_DOUT13_MODE_V  0x00000001U
#define SPI_SMEM_DOUT13_MODE_S  5
/** SPI_SMEM_DOUT14_MODE : HRO; bitpos: [6]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT14_MODE    (BIT(6))
#define SPI_SMEM_DOUT14_MODE_M  (SPI_SMEM_DOUT14_MODE_V << SPI_SMEM_DOUT14_MODE_S)
#define SPI_SMEM_DOUT14_MODE_V  0x00000001U
#define SPI_SMEM_DOUT14_MODE_S  6
/** SPI_SMEM_DOUT15_MODE : HRO; bitpos: [7]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUT15_MODE    (BIT(7))
#define SPI_SMEM_DOUT15_MODE_M  (SPI_SMEM_DOUT15_MODE_V << SPI_SMEM_DOUT15_MODE_S)
#define SPI_SMEM_DOUT15_MODE_V  0x00000001U
#define SPI_SMEM_DOUT15_MODE_S  7
/** SPI_SMEM_DOUTS_HEX_MODE : HRO; bitpos: [8]; default: 0;
 *  the output signals are delayed by system clock cycles, 0: output without delayed,
 *  1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 *  output with the posedge of clk_160,4 output with the negedge of clk_160,5: output
 *  with the spi_clk high edge ,6: output with the spi_clk low edge
 */
#define SPI_SMEM_DOUTS_HEX_MODE    (BIT(8))
#define SPI_SMEM_DOUTS_HEX_MODE_M  (SPI_SMEM_DOUTS_HEX_MODE_V << SPI_SMEM_DOUTS_HEX_MODE_S)
#define SPI_SMEM_DOUTS_HEX_MODE_V  0x00000001U
#define SPI_SMEM_DOUTS_HEX_MODE_S  8

/** SPI_MEM_CLOCK_GATE_REG register
 *  SPI0 clock gate register
 */
#define SPI_MEM_CLOCK_GATE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x200)
/** SPI_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Register clock gate enable signal. 1: Enable. 0: Disable.
 */
#define SPI_CLK_EN    (BIT(0))
#define SPI_CLK_EN_M  (SPI_CLK_EN_V << SPI_CLK_EN_S)
#define SPI_CLK_EN_V  0x00000001U
#define SPI_CLK_EN_S  0
/** SPI_MSPI_CLK_FORCE_ON : R/W; bitpos: [1]; default: 1;
 *  MSPI lowpower function clock gate force on signal. 1: Enable. 0: Disable.
 */
#define SPI_MSPI_CLK_FORCE_ON    (BIT(1))
#define SPI_MSPI_CLK_FORCE_ON_M  (SPI_MSPI_CLK_FORCE_ON_V << SPI_MSPI_CLK_FORCE_ON_S)
#define SPI_MSPI_CLK_FORCE_ON_V  0x00000001U
#define SPI_MSPI_CLK_FORCE_ON_S  1

/** SPI_MEM_NAND_FLASH_EN_REG register
 *  NAND FLASH control register
 */
#define SPI_MEM_NAND_FLASH_EN_REG(i)              (REG_SPI_MEM_BASE(i) + 0x204)
/** SPI_MEM_NAND_FLASH_EN : HRO; bitpos: [0]; default: 0;
 *  NAND FLASH function enable signal. 1: Enable NAND FLASH, Disable NOR FLASH. 0:
 *  Disable NAND FLASH, Enable NOR FLASH.
 */
#define SPI_MEM_NAND_FLASH_EN    (BIT(0))
#define SPI_MEM_NAND_FLASH_EN_M  (SPI_MEM_NAND_FLASH_EN_V << SPI_MEM_NAND_FLASH_EN_S)
#define SPI_MEM_NAND_FLASH_EN_V  0x00000001U
#define SPI_MEM_NAND_FLASH_EN_S  0
/** SPI_MEM_NAND_FLASH_SEQ_HD_INDEX : HRO; bitpos: [15:1]; default: 32767;
 *  NAND FLASH spi seq head index configure register. Every 5 bits represent  the 1st
 *  index of a SPI CMD sequence.[14:10]:usr; [9:5]:axi_rd; [4:0]:axi_wr.
 */
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX    0x00007FFFU
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_M  (SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_V << SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_S)
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_V  0x00007FFFU
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_S  1
/** SPI_MEM_NAND_FLASH_SEQ_USR_TRIG : HRO; bitpos: [16]; default: 0;
 *  NAND FLASH spi seq user trigger configure register. SPI_MEM_NAND_FLASH_SEQ_USR_TRIG
 *  is corresponds to SPI_MEM_NAND_FLASH_SEQ_HD_INDEX[14:10].1: enable 0: disable.
 */
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG    (BIT(16))
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_M  (SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_V << SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_S)
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_V  0x00000001U
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_S  16
/** SPI_MEM_NAND_FLASH_LUT_EN : HRO; bitpos: [17]; default: 0;
 *  NAND FLASH spi seq & cmd lut cfg en. 1: enable 0: disable.
 */
#define SPI_MEM_NAND_FLASH_LUT_EN    (BIT(17))
#define SPI_MEM_NAND_FLASH_LUT_EN_M  (SPI_MEM_NAND_FLASH_LUT_EN_V << SPI_MEM_NAND_FLASH_LUT_EN_S)
#define SPI_MEM_NAND_FLASH_LUT_EN_V  0x00000001U
#define SPI_MEM_NAND_FLASH_LUT_EN_S  17
/** SPI_MEM_NAND_FLASH_SEQ_USR_WEND : HRO; bitpos: [18]; default: 0;
 *  Used with SPI_MEM_NAND_FLASH_SEQ_USR_TRIG to indicate the last page program ,and to
 *  execute page execute. 1: write end 0: write in a page size.
 */
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND    (BIT(18))
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_M  (SPI_MEM_NAND_FLASH_SEQ_USR_WEND_V << SPI_MEM_NAND_FLASH_SEQ_USR_WEND_S)
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_V  0x00000001U
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_S  18

/** SPI_MEM_NAND_FLASH_SR_ADDR0_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_SR_ADDR0_REG(i)              (REG_SPI_MEM_BASE(i) + 0x208)
/** SPI_MEM_NAND_FLASH_SR_ADDR0 : HRO; bitpos: [7:0]; default: 0;
 *  configure state register address for SPI SEQ need. If OIP is in address C0H , user
 *  could configure C0H into this register
 */
#define SPI_MEM_NAND_FLASH_SR_ADDR0    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR0_M  (SPI_MEM_NAND_FLASH_SR_ADDR0_V << SPI_MEM_NAND_FLASH_SR_ADDR0_S)
#define SPI_MEM_NAND_FLASH_SR_ADDR0_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR0_S  0
/** SPI_MEM_NAND_FLASH_SR_ADDR1 : HRO; bitpos: [15:8]; default: 0;
 *  configure state register address for SPI SEQ need. If OIP is in address C0H , user
 *  could configure C0H into this register
 */
#define SPI_MEM_NAND_FLASH_SR_ADDR1    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR1_M  (SPI_MEM_NAND_FLASH_SR_ADDR1_V << SPI_MEM_NAND_FLASH_SR_ADDR1_S)
#define SPI_MEM_NAND_FLASH_SR_ADDR1_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR1_S  8
/** SPI_MEM_NAND_FLASH_SR_ADDR2 : HRO; bitpos: [23:16]; default: 0;
 *  configure state register address for SPI SEQ need. If OIP is in address C0H , user
 *  could configure C0H into this register
 */
#define SPI_MEM_NAND_FLASH_SR_ADDR2    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR2_M  (SPI_MEM_NAND_FLASH_SR_ADDR2_V << SPI_MEM_NAND_FLASH_SR_ADDR2_S)
#define SPI_MEM_NAND_FLASH_SR_ADDR2_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR2_S  16
/** SPI_MEM_NAND_FLASH_SR_ADDR3 : HRO; bitpos: [31:24]; default: 0;
 *  configure state register address for SPI SEQ need. If OIP is in address C0H , user
 *  could configure C0H into this register
 */
#define SPI_MEM_NAND_FLASH_SR_ADDR3    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR3_M  (SPI_MEM_NAND_FLASH_SR_ADDR3_V << SPI_MEM_NAND_FLASH_SR_ADDR3_S)
#define SPI_MEM_NAND_FLASH_SR_ADDR3_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_ADDR3_S  24

/** SPI_MEM_NAND_FLASH_SR_DIN0_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_SR_DIN0_REG(i)              (REG_SPI_MEM_BASE(i) + 0x20c)
/** SPI_MEM_NAND_FLASH_SR_DIN0 : RO; bitpos: [7:0]; default: 0;
 *  spi read state register data to this register for SPI SEQ need.
 *  SPI_MEM_NAND_FLASH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG.
 */
#define SPI_MEM_NAND_FLASH_SR_DIN0    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN0_M  (SPI_MEM_NAND_FLASH_SR_DIN0_V << SPI_MEM_NAND_FLASH_SR_DIN0_S)
#define SPI_MEM_NAND_FLASH_SR_DIN0_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN0_S  0
/** SPI_MEM_NAND_FLASH_SR_DIN1 : RO; bitpos: [15:8]; default: 0;
 *  spi read state register data to this register for SPI SEQ need.
 *  SPI_MEM_NAND_FLASH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG.
 */
#define SPI_MEM_NAND_FLASH_SR_DIN1    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN1_M  (SPI_MEM_NAND_FLASH_SR_DIN1_V << SPI_MEM_NAND_FLASH_SR_DIN1_S)
#define SPI_MEM_NAND_FLASH_SR_DIN1_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN1_S  8
/** SPI_MEM_NAND_FLASH_SR_DIN2 : RO; bitpos: [23:16]; default: 0;
 *  spi read state register data to this register for SPI SEQ need.
 *  SPI_MEM_NAND_FLASH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG.
 */
#define SPI_MEM_NAND_FLASH_SR_DIN2    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN2_M  (SPI_MEM_NAND_FLASH_SR_DIN2_V << SPI_MEM_NAND_FLASH_SR_DIN2_S)
#define SPI_MEM_NAND_FLASH_SR_DIN2_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN2_S  16
/** SPI_MEM_NAND_FLASH_SR_DIN3 : RO; bitpos: [31:24]; default: 0;
 *  spi read state register data to this register for SPI SEQ need.
 *  SPI_MEM_NAND_FLASH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG.
 */
#define SPI_MEM_NAND_FLASH_SR_DIN3    0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN3_M  (SPI_MEM_NAND_FLASH_SR_DIN3_V << SPI_MEM_NAND_FLASH_SR_DIN3_S)
#define SPI_MEM_NAND_FLASH_SR_DIN3_V  0x000000FFU
#define SPI_MEM_NAND_FLASH_SR_DIN3_S  24

/** SPI_MEM_NAND_FLASH_CFG_DATA0_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA0_REG(i)              (REG_SPI_MEM_BASE(i) + 0x210)
/** SPI_MEM_NAND_FLASH_CFG_DATA0 : HRO; bitpos: [15:0]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA0    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA0_M  (SPI_MEM_NAND_FLASH_CFG_DATA0_V << SPI_MEM_NAND_FLASH_CFG_DATA0_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA0_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA0_S  0
/** SPI_MEM_NAND_FLASH_CFG_DATA1 : HRO; bitpos: [31:16]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA1    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA1_M  (SPI_MEM_NAND_FLASH_CFG_DATA1_V << SPI_MEM_NAND_FLASH_CFG_DATA1_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA1_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA1_S  16

/** SPI_MEM_NAND_FLASH_CFG_DATA1_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA1_REG(i)              (REG_SPI_MEM_BASE(i) + 0x214)
/** SPI_MEM_NAND_FLASH_CFG_DATA2 : HRO; bitpos: [15:0]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA2    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA2_M  (SPI_MEM_NAND_FLASH_CFG_DATA2_V << SPI_MEM_NAND_FLASH_CFG_DATA2_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA2_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA2_S  0
/** SPI_MEM_NAND_FLASH_CFG_DATA3 : HRO; bitpos: [31:16]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA3    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA3_M  (SPI_MEM_NAND_FLASH_CFG_DATA3_V << SPI_MEM_NAND_FLASH_CFG_DATA3_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA3_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA3_S  16

/** SPI_MEM_NAND_FLASH_CFG_DATA2_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA2_REG(i)              (REG_SPI_MEM_BASE(i) + 0x218)
/** SPI_MEM_NAND_FLASH_CFG_DATA4 : HRO; bitpos: [15:0]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA4    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA4_M  (SPI_MEM_NAND_FLASH_CFG_DATA4_V << SPI_MEM_NAND_FLASH_CFG_DATA4_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA4_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA4_S  0
/** SPI_MEM_NAND_FLASH_CFG_DATA5 : HRO; bitpos: [31:16]; default: 0;
 *  configure data for SPI SEQ din/dout need. The data could be use to configure NAND
 *  FLASH or compare read data
 */
#define SPI_MEM_NAND_FLASH_CFG_DATA5    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA5_M  (SPI_MEM_NAND_FLASH_CFG_DATA5_V << SPI_MEM_NAND_FLASH_CFG_DATA5_S)
#define SPI_MEM_NAND_FLASH_CFG_DATA5_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_CFG_DATA5_S  16

/** SPI_MEM_NAND_FLASH_CMD_LUT0_REG register
 *  MSPI NAND FLASH CMD LUT control register
 */
#define SPI_MEM_NAND_FLASH_CMD_LUT0_REG(i)              (REG_SPI_MEM_BASE(i) + 0x240)
/** SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0 : HRO; bitpos: [15:0]; default: 0;
 *  MSPI NAND FLASH config cmd value at cmd lut address 0.
 */
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0    0x0000FFFFU
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_M  (SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_V << SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_S)
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_V  0x0000FFFFU
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_S  0
/** SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0 : HRO; bitpos: [19:16]; default: 0;
 *  MSPI NAND FLASH config sfsm_st_en at cmd lut address 0.[3]-ADDR period enable;
 *  [2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period.
 */
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0    0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_M  (SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_V << SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_S)
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_S  16
/** SPI_MEM_NAND_FLASH_LUT_CMD_LEN0 : HRO; bitpos: [23:20]; default: 0;
 *  MSPI NAND FLASH config cmd length at cmd lut address 0.
 */
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0    0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_M  (SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_V << SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_S)
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_S  20
/** SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0 : HRO; bitpos: [27:24]; default: 0;
 *  MSPI NAND FLASH config address length at cmd lut address 0.
 */
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0    0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_M  (SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_V << SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_S)
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_S  24
/** SPI_MEM_NAND_FLASH_LUT_DATA_LEN0 : HRO; bitpos: [29:28]; default: 0;
 *  MSPI NAND FLASH config data length at cmd lut address 0.
 */
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0    0x00000003U
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_M  (SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_V << SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_S)
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_V  0x00000003U
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_S  28
/** SPI_MEM_NAND_FLASH_LUT_BUS_EN0 : HRO; bitpos: [30]; default: 0;
 *  MSPI NAND FLASH config spi_bus_en at cmd lut address 0,SPI could use DUAL/QUAD mode
 *  while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(Note
 *  these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT0_REG's
 *  field. The number of CMD LUT entries can be defined by the user, but cannot exceed
 *  16 )
 */
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_M  (SPI_MEM_NAND_FLASH_LUT_BUS_EN0_V << SPI_MEM_NAND_FLASH_LUT_BUS_EN0_S)
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_V  0x00000001U
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_S  30

/** SPI_MEM_NAND_FLASH_SPI_SEQ0_REG register
 *  NAND FLASH SPI SEQ control register
 */
#define SPI_MEM_NAND_FLASH_SPI_SEQ0_REG(i)              (REG_SPI_MEM_BASE(i) + 0x280)
/** SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0 : HRO; bitpos: [0]; default: 0;
 *  MSPI NAND FLASH config seq_tail_flg at spi seq index 0.1: The last index for
 *  sequence. 0: Not the last index.
 */
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_M  (SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_V << SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_S)
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_V  0x00000001U
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_S  0
/** SPI_MEM_NAND_FLASH_SR_CHK_EN0 : HRO; bitpos: [1]; default: 0;
 *  MSPI NAND FLASH config sr_chk_en at spi seq index 0. 1: enable 0: disable.
 */
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_M  (SPI_MEM_NAND_FLASH_SR_CHK_EN0_V << SPI_MEM_NAND_FLASH_SR_CHK_EN0_S)
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_V  0x00000001U
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_S  1
/** SPI_MEM_NAND_FLASH_DIN_INDEX0 : HRO; bitpos: [5:2]; default: 0;
 *  MSPI NAND FLASH config din_index at spi seq index 0.  Use with
 *  SPI_MEM_NAND_FLASH_CFG_DATA
 */
#define SPI_MEM_NAND_FLASH_DIN_INDEX0    0x0000000FU
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_M  (SPI_MEM_NAND_FLASH_DIN_INDEX0_V << SPI_MEM_NAND_FLASH_DIN_INDEX0_S)
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_S  2
/** SPI_MEM_NAND_FLASH_ADDR_INDEX0 : HRO; bitpos: [9:6]; default: 0;
 *  MSPI NAND FLASH config addr_index at spi seq index 0.  Use with
 *  SPI_MEM_NAND_FLASH_SR_ADDR
 */
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0    0x0000000FU
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_M  (SPI_MEM_NAND_FLASH_ADDR_INDEX0_V << SPI_MEM_NAND_FLASH_ADDR_INDEX0_S)
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_S  6
/** SPI_MEM_NAND_FLASH_REQ_OR_CFG0 : HRO; bitpos: [10]; default: 0;
 *  MSPI NAND FLASH config reg_or_cfg at spi seq index 0. 1: AXI/APB request  0: SPI
 *  SEQ configuration.
 */
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_M  (SPI_MEM_NAND_FLASH_REQ_OR_CFG0_V << SPI_MEM_NAND_FLASH_REQ_OR_CFG0_S)
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_V  0x00000001U
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_S  10
/** SPI_MEM_NAND_FLASH_CMD_INDEX0 : HRO; bitpos: [14:11]; default: 0;
 *  MSPI NAND FLASH config spi_cmd_index at spi seq index 0. Use to find SPI command in
 *  CMD LUT.(Note these registers are described to indicate the
 *  SPI_MEM_NAND_FLASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined
 *  by the user, but cannot exceed 16 )
 */
#define SPI_MEM_NAND_FLASH_CMD_INDEX0    0x0000000FU
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_M  (SPI_MEM_NAND_FLASH_CMD_INDEX0_V << SPI_MEM_NAND_FLASH_CMD_INDEX0_S)
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_V  0x0000000FU
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_S  11

/** SPI_MEM_XTS_PLAIN_BASE_REG register
 *  The base address of the memory that stores plaintext in Manual Encryption
 */
#define SPI_MEM_XTS_PLAIN_BASE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x300)
/** SPI_XTS_PLAIN : R/W; bitpos: [31:0]; default: 0;
 *  This field is only used to generate include file in c case. This field is useless.
 *  Please do not use this field.
 */
#define SPI_XTS_PLAIN    0xFFFFFFFFU
#define SPI_XTS_PLAIN_M  (SPI_XTS_PLAIN_V << SPI_XTS_PLAIN_S)
#define SPI_XTS_PLAIN_V  0xFFFFFFFFU
#define SPI_XTS_PLAIN_S  0

/** SPI_MEM_XTS_LINESIZE_REG register
 *  Manual Encryption Line-Size register
 */
#define SPI_MEM_XTS_LINESIZE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x340)
/** SPI_XTS_LINESIZE : R/W; bitpos: [1:0]; default: 0;
 *  This bits stores the line-size parameter which will be used in manual encryption
 *  calculation. It decides how many bytes will be encrypted one time. 0: 16-bytes, 1:
 *  32-bytes, 2: 64-bytes, 3:reserved.
 */
#define SPI_XTS_LINESIZE    0x00000003U
#define SPI_XTS_LINESIZE_M  (SPI_XTS_LINESIZE_V << SPI_XTS_LINESIZE_S)
#define SPI_XTS_LINESIZE_V  0x00000003U
#define SPI_XTS_LINESIZE_S  0

/** SPI_MEM_XTS_DESTINATION_REG register
 *  Manual Encryption destination register
 */
#define SPI_MEM_XTS_DESTINATION_REG(i)              (REG_SPI_MEM_BASE(i) + 0x344)
/** SPI_XTS_DESTINATION : R/W; bitpos: [0]; default: 0;
 *  This bit stores the destination parameter which will be used in manual encryption
 *  calculation. 0: flash(default), 1: psram(reserved). Only default value can be used.
 */
#define SPI_XTS_DESTINATION    (BIT(0))
#define SPI_XTS_DESTINATION_M  (SPI_XTS_DESTINATION_V << SPI_XTS_DESTINATION_S)
#define SPI_XTS_DESTINATION_V  0x00000001U
#define SPI_XTS_DESTINATION_S  0

/** SPI_MEM_XTS_PHYSICAL_ADDRESS_REG register
 *  Manual Encryption physical address register
 */
#define SPI_MEM_XTS_PHYSICAL_ADDRESS_REG(i)              (REG_SPI_MEM_BASE(i) + 0x348)
/** SPI_XTS_PHYSICAL_ADDRESS : R/W; bitpos: [29:0]; default: 0;
 *  This bits stores the physical-address parameter which will be used in manual
 *  encryption calculation. This value should aligned with byte number decided by
 *  line-size parameter.
 */
#define SPI_XTS_PHYSICAL_ADDRESS    0x3FFFFFFFU
#define SPI_XTS_PHYSICAL_ADDRESS_M  (SPI_XTS_PHYSICAL_ADDRESS_V << SPI_XTS_PHYSICAL_ADDRESS_S)
#define SPI_XTS_PHYSICAL_ADDRESS_V  0x3FFFFFFFU
#define SPI_XTS_PHYSICAL_ADDRESS_S  0

/** SPI_MEM_XTS_TRIGGER_REG register
 *  Manual Encryption physical address register
 */
#define SPI_MEM_XTS_TRIGGER_REG(i)              (REG_SPI_MEM_BASE(i) + 0x34c)
/** SPI_XTS_TRIGGER : WT; bitpos: [0]; default: 0;
 *  Set this bit to trigger the process of manual encryption calculation. This action
 *  should only be asserted when manual encryption status is 0. After this action,
 *  manual encryption status becomes 1. After calculation is done, manual encryption
 *  status becomes 2.
 */
#define SPI_XTS_TRIGGER    (BIT(0))
#define SPI_XTS_TRIGGER_M  (SPI_XTS_TRIGGER_V << SPI_XTS_TRIGGER_S)
#define SPI_XTS_TRIGGER_V  0x00000001U
#define SPI_XTS_TRIGGER_S  0

/** SPI_MEM_XTS_RELEASE_REG register
 *  Manual Encryption physical address register
 */
#define SPI_MEM_XTS_RELEASE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x350)
/** SPI_XTS_RELEASE : WT; bitpos: [0]; default: 0;
 *  Set this bit to release encrypted result to mspi. This action should only be
 *  asserted when manual encryption status is 2. After this action, manual encryption
 *  status will become 3.
 */
#define SPI_XTS_RELEASE    (BIT(0))
#define SPI_XTS_RELEASE_M  (SPI_XTS_RELEASE_V << SPI_XTS_RELEASE_S)
#define SPI_XTS_RELEASE_V  0x00000001U
#define SPI_XTS_RELEASE_S  0

/** SPI_MEM_XTS_DESTROY_REG register
 *  Manual Encryption physical address register
 */
#define SPI_MEM_XTS_DESTROY_REG(i)              (REG_SPI_MEM_BASE(i) + 0x354)
/** SPI_XTS_DESTROY : WT; bitpos: [0]; default: 0;
 *  Set this bit to destroy encrypted result. This action should be asserted only when
 *  manual encryption status is 3. After this action, manual encryption status will
 *  become 0.
 */
#define SPI_XTS_DESTROY    (BIT(0))
#define SPI_XTS_DESTROY_M  (SPI_XTS_DESTROY_V << SPI_XTS_DESTROY_S)
#define SPI_XTS_DESTROY_V  0x00000001U
#define SPI_XTS_DESTROY_S  0

/** SPI_MEM_XTS_STATE_REG register
 *  Manual Encryption physical address register
 */
#define SPI_MEM_XTS_STATE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x358)
/** SPI_XTS_STATE : RO; bitpos: [1:0]; default: 0;
 *  This bits stores the status of manual encryption. 0: idle, 1: busy of encryption
 *  calculation, 2: encryption calculation is done but the encrypted result is
 *  invisible to mspi, 3: the encrypted result is visible to mspi.
 */
#define SPI_XTS_STATE    0x00000003U
#define SPI_XTS_STATE_M  (SPI_XTS_STATE_V << SPI_XTS_STATE_S)
#define SPI_XTS_STATE_V  0x00000003U
#define SPI_XTS_STATE_S  0

/** SPI_MEM_XTS_DATE_REG register
 *  Manual Encryption version register
 */
#define SPI_MEM_XTS_DATE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x35c)
/** SPI_XTS_DATE : R/W; bitpos: [29:0]; default: 539035911;
 *  This bits stores the last modified-time of manual encryption feature.
 */
#define SPI_XTS_DATE    0x3FFFFFFFU
#define SPI_XTS_DATE_M  (SPI_XTS_DATE_V << SPI_XTS_DATE_S)
#define SPI_XTS_DATE_V  0x3FFFFFFFU
#define SPI_XTS_DATE_S  0

/** SPI_MEM_MMU_ITEM_CONTENT_REG register
 *  MSPI-MMU item content register
 */
#define SPI_MEM_MMU_ITEM_CONTENT_REG(i)              (REG_SPI_MEM_BASE(i) + 0x37c)
/** SPI_MMU_ITEM_CONTENT : R/W; bitpos: [31:0]; default: 892;
 *  MSPI-MMU item content
 */
#define SPI_MMU_ITEM_CONTENT    0xFFFFFFFFU
#define SPI_MMU_ITEM_CONTENT_M  (SPI_MMU_ITEM_CONTENT_V << SPI_MMU_ITEM_CONTENT_S)
#define SPI_MMU_ITEM_CONTENT_V  0xFFFFFFFFU
#define SPI_MMU_ITEM_CONTENT_S  0

/** SPI_MEM_MMU_ITEM_INDEX_REG register
 *  MSPI-MMU item index register
 */
#define SPI_MEM_MMU_ITEM_INDEX_REG(i)              (REG_SPI_MEM_BASE(i) + 0x380)
/** SPI_MMU_ITEM_INDEX : R/W; bitpos: [31:0]; default: 0;
 *  MSPI-MMU item index
 */
#define SPI_MMU_ITEM_INDEX    0xFFFFFFFFU
#define SPI_MMU_ITEM_INDEX_M  (SPI_MMU_ITEM_INDEX_V << SPI_MMU_ITEM_INDEX_S)
#define SPI_MMU_ITEM_INDEX_V  0xFFFFFFFFU
#define SPI_MMU_ITEM_INDEX_S  0

/** SPI_MEM_MMU_POWER_CTRL_REG register
 *  MSPI MMU power control register
 */
#define SPI_MEM_MMU_POWER_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x384)
/** SPI_MMU_MEM_FORCE_ON : R/W; bitpos: [0]; default: 0;
 *  Set this bit to enable mmu-memory clock force on
 */
#define SPI_MMU_MEM_FORCE_ON    (BIT(0))
#define SPI_MMU_MEM_FORCE_ON_M  (SPI_MMU_MEM_FORCE_ON_V << SPI_MMU_MEM_FORCE_ON_S)
#define SPI_MMU_MEM_FORCE_ON_V  0x00000001U
#define SPI_MMU_MEM_FORCE_ON_S  0
/** SPI_MMU_PAGE_SIZE : R/W; bitpos: [4:3]; default: 0;
 *  0: Max page size , 1: Max page size/2 , 2: Max page size/4, 3: Max page size/8
 */
#define SPI_MMU_PAGE_SIZE    0x00000003U
#define SPI_MMU_PAGE_SIZE_M  (SPI_MMU_PAGE_SIZE_V << SPI_MMU_PAGE_SIZE_S)
#define SPI_MMU_PAGE_SIZE_V  0x00000003U
#define SPI_MMU_PAGE_SIZE_S  3
/** SPI_MEM_AUX_CTRL : R/W; bitpos: [29:16]; default: 4896;
 *  MMU PSRAM aux control register
 */
#define SPI_MEM_AUX_CTRL    0x00003FFFU
#define SPI_MEM_AUX_CTRL_M  (SPI_MEM_AUX_CTRL_V << SPI_MEM_AUX_CTRL_S)
#define SPI_MEM_AUX_CTRL_V  0x00003FFFU
#define SPI_MEM_AUX_CTRL_S  16

/** SPI_MEM_DPA_CTRL_REG register
 *  SPI memory cryption DPA register
 */
#define SPI_MEM_DPA_CTRL_REG(i)              (REG_SPI_MEM_BASE(i) + 0x388)
/** SPI_CRYPT_SECURITY_LEVEL : R/W; bitpos: [2:0]; default: 7;
 *  Set the security level of spi mem cryption. 0: Shut off cryption DPA function. 1-7:
 *  The bigger the number is, the more secure the cryption is. (Note that the
 *  performance of cryption will decrease together with this number increasing)
 */
#define SPI_CRYPT_SECURITY_LEVEL    0x00000007U
#define SPI_CRYPT_SECURITY_LEVEL_M  (SPI_CRYPT_SECURITY_LEVEL_V << SPI_CRYPT_SECURITY_LEVEL_S)
#define SPI_CRYPT_SECURITY_LEVEL_V  0x00000007U
#define SPI_CRYPT_SECURITY_LEVEL_S  0
/** SPI_CRYPT_CALC_D_DPA_EN : R/W; bitpos: [3]; default: 1;
 *  Only available when SPI_CRYPT_SECURITY_LEVEL is not 0. 1: Enable DPA in the
 *  calculation that using key 1 or key 2. 0: Enable DPA only in the calculation that
 *  using key 1.
 */
#define SPI_CRYPT_CALC_D_DPA_EN    (BIT(3))
#define SPI_CRYPT_CALC_D_DPA_EN_M  (SPI_CRYPT_CALC_D_DPA_EN_V << SPI_CRYPT_CALC_D_DPA_EN_S)
#define SPI_CRYPT_CALC_D_DPA_EN_V  0x00000001U
#define SPI_CRYPT_CALC_D_DPA_EN_S  3
/** SPI_CRYPT_DPA_SELECT_REGISTER : R/W; bitpos: [4]; default: 0;
 *  1: MSPI XTS DPA clock gate is controlled by SPI_CRYPT_CALC_D_DPA_EN and
 *  SPI_CRYPT_SECURITY_LEVEL. 0: Controlled by efuse bits.
 */
#define SPI_CRYPT_DPA_SELECT_REGISTER    (BIT(4))
#define SPI_CRYPT_DPA_SELECT_REGISTER_M  (SPI_CRYPT_DPA_SELECT_REGISTER_V << SPI_CRYPT_DPA_SELECT_REGISTER_S)
#define SPI_CRYPT_DPA_SELECT_REGISTER_V  0x00000001U
#define SPI_CRYPT_DPA_SELECT_REGISTER_S  4

/** SPI_MEM_XTS_PSEUDO_ROUND_CONF_REG register
 *  SPI memory cryption PSEUDO register
 */
#define SPI_MEM_XTS_PSEUDO_ROUND_CONF_REG(i)              (REG_SPI_MEM_BASE(i) + 0x38c)
/** SPI_MEM_MODE_PSEUDO : R/W; bitpos: [1:0]; default: 0;
 *  Set the mode of pseudo. 2'b00: crypto without pseudo. 2'b01: state T with pseudo
 *  and state D without pseudo. 2'b10: state T with pseudo and state D with few pseudo.
 *  2'b11: crypto with pseudo.
 */
#define SPI_MEM_MODE_PSEUDO    0x00000003U
#define SPI_MEM_MODE_PSEUDO_M  (SPI_MEM_MODE_PSEUDO_V << SPI_MEM_MODE_PSEUDO_S)
#define SPI_MEM_MODE_PSEUDO_V  0x00000003U
#define SPI_MEM_MODE_PSEUDO_S  0
/** SPI_MEM_PSEUDO_RNG_CNT : R/W; bitpos: [4:2]; default: 7;
 *  xts aes peseudo function base round that must be performed.
 */
#define SPI_MEM_PSEUDO_RNG_CNT    0x00000007U
#define SPI_MEM_PSEUDO_RNG_CNT_M  (SPI_MEM_PSEUDO_RNG_CNT_V << SPI_MEM_PSEUDO_RNG_CNT_S)
#define SPI_MEM_PSEUDO_RNG_CNT_V  0x00000007U
#define SPI_MEM_PSEUDO_RNG_CNT_S  2
/** SPI_MEM_PSEUDO_BASE : R/W; bitpos: [8:5]; default: 2;
 *  xts aes peseudo function base round that must be performed.
 */
#define SPI_MEM_PSEUDO_BASE    0x0000000FU
#define SPI_MEM_PSEUDO_BASE_M  (SPI_MEM_PSEUDO_BASE_V << SPI_MEM_PSEUDO_BASE_S)
#define SPI_MEM_PSEUDO_BASE_V  0x0000000FU
#define SPI_MEM_PSEUDO_BASE_S  5
/** SPI_MEM_PSEUDO_INC : R/W; bitpos: [10:9]; default: 2;
 *  xts aes peseudo function increment round that will be performed randomly between 0 &
 *  2**(inc+1).
 */
#define SPI_MEM_PSEUDO_INC    0x00000003U
#define SPI_MEM_PSEUDO_INC_M  (SPI_MEM_PSEUDO_INC_V << SPI_MEM_PSEUDO_INC_S)
#define SPI_MEM_PSEUDO_INC_V  0x00000003U
#define SPI_MEM_PSEUDO_INC_S  9

/** SPI_MEM_DATE_REG register
 *  SPI0 version control register
 */
#define SPI_MEM_DATE_REG(i)              (REG_SPI_MEM_BASE(i) + 0x3fc)
/** SPI_MEM_DATE : R/W; bitpos: [27:0]; default: 37822512;
 *  SPI0 register version.
 */
#define SPI_MEM_DATE    0x0FFFFFFFU
#define SPI_MEM_DATE_M  (SPI_MEM_DATE_V << SPI_MEM_DATE_S)
#define SPI_MEM_DATE_V  0x0FFFFFFFU
#define SPI_MEM_DATE_S  0

#ifdef __cplusplus
}
#endif
