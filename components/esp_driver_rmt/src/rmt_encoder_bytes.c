/*
 * SPDX-FileCopyrightText: 2022-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "driver/rmt_encoder.h"
#include "rmt_private.h"

typedef struct rmt_bytes_encoder_t {
    rmt_encoder_t base;     // encoder base class
    size_t last_bit_index;  // index of the encoding bit position in the encoding byte
    size_t last_byte_index; // index of the encoding byte in the primary stream
    rmt_symbol_word_t bit0; // bit zero representing
    rmt_symbol_word_t bit1; // bit one representing
    struct {
        uint32_t msb_first: 1; // encode MSB firstly
    } flags;
} rmt_bytes_encoder_t;

static esp_err_t rmt_bytes_encoder_reset(rmt_encoder_t *encoder)
{
    rmt_bytes_encoder_t *bytes_encoder = __containerof(encoder, rmt_bytes_encoder_t, base);
    // reset index to zero
    bytes_encoder->last_bit_index = 0;
    bytes_encoder->last_byte_index = 0;
    return ESP_OK;
}

static size_t rmt_encode_bytes(rmt_encoder_t *encoder, rmt_channel_handle_t channel,
                               const void *primary_data, size_t data_size, rmt_encode_state_t *ret_state)
{
    rmt_bytes_encoder_t *bytes_encoder = __containerof(encoder, rmt_bytes_encoder_t, base);
    rmt_tx_channel_t *tx_chan = __containerof(channel, rmt_tx_channel_t, base);
    const uint8_t *raw_data = (const uint8_t *)primary_data;
    rmt_encode_state_t state = RMT_ENCODING_RESET;
    rmt_dma_descriptor_t *desc0 = NULL;
    rmt_dma_descriptor_t *desc1 = NULL;

    size_t byte_index = bytes_encoder->last_byte_index;
    size_t bit_index = bytes_encoder->last_bit_index;
    // how many symbols will be generated by the encoder
    size_t mem_want = (data_size - byte_index - 1) * 8 + (8 - bit_index);
    // how many symbols we can save for this round
    size_t mem_have = tx_chan->mem_end - tx_chan->mem_off;
    // where to put the encoded symbols? DMA buffer or RMT HW memory
    rmt_symbol_word_t *mem_to_nc = NULL;
    if (channel->dma_chan) {
        mem_to_nc = tx_chan->dma_mem_base_nc;
    } else {
        mem_to_nc = channel->hw_mem_base;
    }
    // how many symbols will be encoded in this round
    size_t encode_len = MIN(mem_want, mem_have);
    bool encoding_truncated = mem_have < mem_want;
    bool encoding_space_free = mem_have > mem_want;

    if (channel->dma_chan) {
        // mark the start descriptor
        if (tx_chan->mem_off < tx_chan->ping_pong_symbols) {
            desc0 = &tx_chan->dma_nodes_nc[0];
        } else {
            desc0 = &tx_chan->dma_nodes_nc[1];
        }
    }

    size_t len = encode_len;
    while (len > 0) {
        // start from last time truncated encoding
        uint8_t cur_byte = raw_data[byte_index];
        // bit-wise reverse
        if (bytes_encoder->flags.msb_first) {
            cur_byte = hal_utils_bitwise_reverse8(cur_byte);
        }
        while ((len > 0) && (bit_index < 8)) {
            if (cur_byte & (1 << bit_index)) {
                mem_to_nc[tx_chan->mem_off++] = bytes_encoder->bit1;
            } else {
                mem_to_nc[tx_chan->mem_off++] = bytes_encoder->bit0;
            }
            len--;
            bit_index++;
        }
        if (bit_index >= 8) {
            byte_index++;
            bit_index = 0;
        }
    }

    if (channel->dma_chan) {
        // mark the end descriptor
        if (tx_chan->mem_off < tx_chan->ping_pong_symbols) {
            desc1 = &tx_chan->dma_nodes_nc[0];
        } else {
            desc1 = &tx_chan->dma_nodes_nc[1];
        }

        // cross line, means desc0 has prepared with sufficient data buffer
        if (desc0 != desc1) {
            desc0->dw0.length = tx_chan->ping_pong_symbols * sizeof(rmt_symbol_word_t);
            desc0->dw0.owner = DMA_DESCRIPTOR_BUFFER_OWNER_DMA;
        }
    }

    if (encoding_truncated) {
        // this encoding has not finished yet, save the truncated position
        bytes_encoder->last_bit_index = bit_index;
        bytes_encoder->last_byte_index = byte_index;
    } else {
        // reset internal index if encoding session has finished
        bytes_encoder->last_bit_index = 0;
        bytes_encoder->last_byte_index = 0;
        state |= RMT_ENCODING_COMPLETE;
    }

    if (!encoding_space_free) {
        // no more free memory, the caller should yield
        state |= RMT_ENCODING_MEM_FULL;
    }

    // reset offset pointer when exceeds maximum range
    if (tx_chan->mem_off >= tx_chan->ping_pong_symbols * 2) {
        if (channel->dma_chan) {
            desc1->dw0.length = tx_chan->ping_pong_symbols * sizeof(rmt_symbol_word_t);
            desc1->dw0.owner = DMA_DESCRIPTOR_BUFFER_OWNER_DMA;
        }
        tx_chan->mem_off = 0;
    }

    *ret_state = state;
    return encode_len;
}

static esp_err_t rmt_del_bytes_encoder(rmt_encoder_t *encoder)
{
    rmt_bytes_encoder_t *bytes_encoder = __containerof(encoder, rmt_bytes_encoder_t, base);
    free(bytes_encoder);
    return ESP_OK;
}

esp_err_t rmt_new_bytes_encoder(const rmt_bytes_encoder_config_t *config, rmt_encoder_handle_t *ret_encoder)
{
    esp_err_t ret = ESP_OK;
    ESP_GOTO_ON_FALSE(config && ret_encoder, ESP_ERR_INVALID_ARG, err, TAG, "invalid argument");
    rmt_bytes_encoder_t *encoder = rmt_alloc_encoder_mem(sizeof(rmt_bytes_encoder_t));
    ESP_GOTO_ON_FALSE(encoder, ESP_ERR_NO_MEM, err, TAG, "no mem for bytes encoder");
    encoder->base.encode = rmt_encode_bytes;
    encoder->base.del = rmt_del_bytes_encoder;
    encoder->base.reset = rmt_bytes_encoder_reset;
    encoder->bit0 = config->bit0;
    encoder->bit1 = config->bit1;
    encoder->flags.msb_first = config->flags.msb_first;
    // return general encoder handle
    *ret_encoder = &encoder->base;
    ESP_LOGD(TAG, "new bytes encoder @%p", encoder);
err:
    return ret;
}

esp_err_t rmt_bytes_encoder_update_config(rmt_encoder_handle_t bytes_encoder, const rmt_bytes_encoder_config_t *config)
{
    ESP_RETURN_ON_FALSE(bytes_encoder && config, ESP_ERR_INVALID_ARG, TAG, "invalid argument");
    rmt_bytes_encoder_t *encoder = __containerof(bytes_encoder, rmt_bytes_encoder_t, base);
    encoder->bit0 = config->bit0;
    encoder->bit1 = config->bit1;
    encoder->flags.msb_first = config->flags.msb_first;
    return ESP_OK;
}
