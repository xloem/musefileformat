#pragma once

#include "Muse_v2.pb-c.h"

// see also https://sites.google.com/a/interaxon.ca/muse-developer-site/data-files
// in a .muse file, channel types are not interleaved in order.  so, all eeg data is in order, but it may be out-of-order relative to accelerometer dtaa.

typedef struct MuseFileData
{
    // each message is prefixed by a 6 byte header giving the length
    uint32_t size;
    uint16_t version; // == 1
    MuseDataCollection *collection;
} MuseFileData;

void musefile_init(MuseFileData *data);
static size_t musefile_packed_size(MuseFileData *data) { return data->size + 6; }
void musefile_unpack_header(MuseFileData *data, uint8_t const buf[6]);
void musefile_unpack_data(MuseFileData *data, uint8_t const *buf);
size_t musefile_unpack(MuseFileData *data, uint8_t const *buf, size_t size);
//void musefile_pack(MuseFileData *data, uint8_t *buf);
void musefile_deinit(MuseFileData *data);
