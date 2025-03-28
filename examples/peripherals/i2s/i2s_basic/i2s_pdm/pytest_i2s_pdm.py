# SPDX-FileCopyrightText: 2021-2025 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0
import pytest
from pytest_embedded import Dut
from pytest_embedded_idf.utils import idf_parametrize


@pytest.mark.generic
@pytest.mark.parametrize('config', ['pdm_tx'], indirect=True)
@idf_parametrize(
    'target',
    ['esp32', 'esp32s3', 'esp32c3', 'esp32c5', 'esp32c6', 'esp32h2', 'esp32p4', 'esp32c61'],
    indirect=['target'],
)
def test_i2s_pdm_tx_example(dut: Dut) -> None:
    dut.expect(r'I2S PDM TX example start', timeout=5)
    dut.expect(r'---------------------------', timeout=5)
    dut.expect(r'i2s_common: tx channel is registered on I2S0 successfully', timeout=5)
    dut.expect(
        r'i2s_common: DMA malloc info: dma_desc_num = ([0-9]+), '
        r'dma_desc_buf_size = dma_frame_num \* slot_num \* data_bit_width = ([0-9]+)',
        timeout=5,
    )
    dut.expect(
        r'i2s_pdm: Clock division info: \[sclk\] ([0-9]+) Hz '
        r'\[mdiv\] ([0-9]+) ([0-9]+)/([0-9]+) \[mclk\] ([0-9]+) Hz \[bdiv\] ([0-9]+) \[bclk\] ([0-9]+) Hz',
        timeout=5,
    )
    dut.expect(r'i2s_pdm: The tx channel on I2S0 has been initialized to PDM TX mode successfully', timeout=5)
    dut.expect(r'i2s_common: i2s tx channel enabled', timeout=5)
    dut.expect(r'Playing bass `twinkle twinkle little star`', timeout=5)


@pytest.mark.generic
@pytest.mark.parametrize('config', ['pdm_rx'], indirect=True)
@idf_parametrize('target', ['esp32', 'esp32s3', 'esp32p4'], indirect=['target'])
def test_i2s_pdm_rx_example(dut: Dut) -> None:
    dut.expect(r'I2S PDM RX example start', timeout=5)
    dut.expect(r'---------------------------', timeout=5)
    dut.expect(r'i2s_common: rx channel is registered on I2S0 successfully', timeout=5)
    dut.expect(
        r'i2s_common: DMA malloc info: dma_desc_num = ([0-9]+), '
        r'dma_desc_buf_size = dma_frame_num \* slot_num \* data_bit_width = ([0-9]+)',
        timeout=5,
    )
    dut.expect(r'i2s_common: i2s rx channel enabled', timeout=5)
    dut.expect(r'Read Task: i2s read ([0-9]+) bytes', timeout=5)
    dut.expect(r'-----------------------------------', timeout=5)
    dut.expect(r'\[0\] ([-]?[0-9]+) \[1\] ([-]?[0-9]+) \[2\] ([-]?[0-9]+) \[3\] ([-]?[0-9]+)', timeout=5)
    dut.expect(r'\[4\] ([-]?[0-9]+) \[5\] ([-]?[0-9]+) \[6\] ([-]?[0-9]+) \[7\] ([-]?[0-9]+)', timeout=5)
