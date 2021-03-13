#include "musefileformat.h"

void musefile_init(MuseFileData *data)
{
    data->size = 0;
    data->version = 0;
    data->collection = NULL;
}

void musefile_unpack_header(MuseFileData *data, uint8_t const buf[6])
{
    if (data->collection != NULL) {
        musefile_deinit(data);
    }
    data->size = (
        (buf[3] << 24) |
        (buf[2] << 16) |
        (buf[1] << 8) |
        buf[0]
    );
    data->version = (
        (buf[5] << 8) |
        buf[4]
    );
    data->collection = NULL;
}

void musefile_unpack_data(MuseFileData *data, uint8_t const *buf)
{
    if (data->collection != NULL) {
        muse_data_collection__free_unpacked(data->collection, NULL);
        data->collection = NULL;
    }

    data->collection = muse_data_collection__unpack(NULL, data->size, buf);
}

size_t musefile_unpack(MuseFileData *data, uint8_t const *buf, size_t size)
{
    if (size < 6) {
        data->size = 0;
        return 0;
    }
    musefile_unpack_header(data, buf);
    if (size < musefile_packed_size(data)) {
        return 0;
    }
    musefile_unpack_data(data, buf);
    return musefile_packed_size(data);
}

void musefile_pack(MuseFileData *data, uint8_t *buf)
{
    data->version = 1;
    data->size = muse_data_collection__get_packed_size(data->collection);
    buf[0] = data->size & 0xff;
    buf[1] = (data->size >> 8) & 0xff;
    buf[2] = (data->size >> 16) & 0xff;
    buf[3] = (data->size >> 24) & 0xff;
    buf[4] = data->version;
    buf[5] = 0;
    muse_data_collection__pack(data->collection, buf + 6);
}

void musefile_deinit(MuseFileData *data)
{
    if (data->collection != NULL) {
        muse_data_collection__free_unpacked(data->collection, NULL);
        data->collection = NULL;
    }
    data->size = 0;
    data->version = 0;
}

