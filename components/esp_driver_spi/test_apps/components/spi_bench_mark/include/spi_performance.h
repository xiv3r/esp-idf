/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#if CONFIG_IDF_TARGET_ESP32
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 16*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          15
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          15
#if !CONFIG_FREERTOS_SMP // IDF-5223
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          34      // TODO: IDF-5180
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          30      // TODO: IDF-5180
#else
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          50
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          50
#endif

#elif CONFIG_IDF_TARGET_ESP32S2
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          15
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          15
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          32
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          30

#elif CONFIG_IDF_TARGET_ESP32S3
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          15
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          15
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          32
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          30

#elif CONFIG_IDF_TARGET_ESP32C2
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          23
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          18
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          47
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          42

#elif CONFIG_IDF_TARGET_ESP32C3
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#if !CONFIG_FREERTOS_SMP // IDF-5223
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          15
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          15
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          33
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          30
#else
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          17
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          17
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          60
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          60
#endif

#elif CONFIG_IDF_TARGET_ESP32C6
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 26666*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          35  //TODO: IDF-9551, check perform
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          17
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          32
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          15

#elif CONFIG_IDF_TARGET_ESP32H2
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 24*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          32
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          25
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          61
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          54

#elif CONFIG_IDF_TARGET_ESP32P4
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 20*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          44
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          28
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          26
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          12

#elif CONFIG_IDF_TARGET_ESP32C5
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          24
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          15
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          22
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          12

#elif CONFIG_IDF_TARGET_ESP32C61
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 40*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          32
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          19
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          29
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          14

#elif CONFIG_IDF_TARGET_ESP32H21
#if SOC_CLK_TREE_SUPPORTED
//TODO: [ESP32H21] IDF-11521 update perform data according to `TEST_CASE("spi_speed", "[spi]")`
//Also update this value in doc spi_master.rst:535
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 32*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          0   // need update to real_val + 3
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          0   // need update to real_val + 3
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          0   // need update to real_val + 3
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          0   // need update to real_val + 3
#else
// Remove after SOC_CLK_TREE_SUPPORTED
#define IDF_TARGET_MAX_SPI_CLK_FREQ                 32*1000*1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_DMA          1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_DMA          1000
#define IDF_TARGET_MAX_TRANS_TIME_INTR_CPU          1000
#define IDF_TARGET_MAX_TRANS_TIME_POLL_CPU          1000
#endif

#endif
