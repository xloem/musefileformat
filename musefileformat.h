#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

// see also https://sites.google.com/a/interaxon.ca/muse-developer-site/data-files
// on interaxon's site, it states the only known version is 1.  this is an error.  Muse_v2.proto uses version 2.
// in a .muse file, channel types are not interleaved in order.  so, all eeg data is in order, but it may be out-of-order relative to accelerometer dtaa.


// a solution to easy streaming could be a function
// that gets the next data element and a structure
// or output value that reports how much new data
// is needed, or whether to fill a buffer

typedef struct MusefileDataCollection
{
    // each message is prefixed by a 6 byte header giving the length
    uint32_t size;
    uint16_t version;

    // number of data items within this entry
    size_t count;

    // If version == 1, this is a muse1_DataCollection from Muse_v1.pb.h (unimplemented)
    // If versin == 2, this is a muse2_DataCollection from Muse_v2.pb.h
    void * collection;
} MusefileDataCollection;

typedef enum MusefileDatatype
{
  MUSE_EEG = 0,
  MUSE_QUANT = 1,
  MUSE_ACCEL = 2,
  MUSE_BATTERY = 3,
  MUSE_VERSION = 4,
  MUSE_CONFIG = 5,
  MUSE_ANNOTATION = 6,
  MUSE_HISTOGRAM = 7,
  MUSE_ALGVALUE = 8,
  MUSE_DSP = 9,
  MUSE_COMPUTING_DEVICE = 10,
  MUSE_EEG_DROPPED = 11,
  MUSE_ACC_DROPPED = 12,
  MUSE_CALM_APP = 13,
  MUSE_CALM_ALG = 14
} MusefileDatatype;

typedef struct MusefileData
{
    double timestamp;
    enum MusefileDatatype type;

    int64_t config; // unimplemented

    // If version == 1, this is an extended Muse1__Data from Muse_v1.pb-c.h (unimplemented)
    // If versoin == 2, this is an extended Muse2__Data from Muse_v2.pb-c.h
    struct ProtobufCMessage *data;
} MusefileData;

void musefile_init(MusefileDataCollection *mf);

size_t musefile_unpack_header(MusefileDataCollection *mf, uint8_t const buf[6]);
static size_t musefile_packed_size(MusefileDataCollection *mf) { return mf->size + 6; }
size_t musefile_unpack_data(MusefileDataCollection *mf, uint8_t const *buf);
size_t musefile_unpack(MusefileDataCollection *mf, uint8_t const *buf, size_t size);

MusefileData musefile_data(MusefileDataCollection *mf, size_t index);

//void musefile_pack(MusefileData *data, uint8_t *buf);
void musefile_deinit(MusefileDataCollection *data);

#if defined(__cplusplus)
} // extern "C"
#endif
