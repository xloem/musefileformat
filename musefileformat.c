#include "musefileformat.h"
/*#include "Muse_v1.pb-c.h"*/
#include "Muse_v2.pb-c.h"

void musefile_init(MusefileDataCollection *mf)
{
    mf->size = 0;
    mf->version = 0;
    mf->count = 0;
    *(_muse2_DataCollection *)&mf->collection = DataCollection_init_zero;
}

size_t musefile_unpack_header(MusefileDataCollection *mf, uint8_t const buf[6])
{
    uint16_t version = (buf[5] << 8) | buf[4];
    if (version != 2) {
        return 0;
    }
    if (mf->collection[0] != NULL) {
        musefile_deinit(mf);
    }
    *(_muse2_DataCollection *)&mf->collection = DataCollection_init_zero;
    mf->size = (
        (buf[3] << 24) |
        (buf[2] << 16) |
        (buf[1] << 8) |
        buf[0]
    );
    mf->version = version;
    mf->collection = NULL;
    return 6;
}

size_t musefile_unpack_data(MusefileDataCollection *mf, uint8_t const *buf)
{
    if (mf->collection != NULL) {
        muse2__data_collection__free_unpacked((Muse2__DataCollection*)mf->collection, NULL);
        mf->collection = NULL;
    }

    if (mf->version != 2) {
        return 0;
    }

    pb_istream_t stream = pb_istream_from_buffer(

    mf->collection = (ProtobufCMessage*)muse2__data_collection__unpack(NULL, mf->size, buf);
    mf->count = ((Muse2__DataCollection*)mf->collection)->n_collection;
    return mf->size;
}

size_t musefile_unpack(MusefileDataCollection *mf, uint8_t const *buf, size_t size)
{
    size_t offset;

    if (size < 6) {
        mf->size = 0;
        return 0;
    }

    offset = musefile_unpack_header(mf, buf);
    if (size < mf->size + offset || offset == 0) {
        return 0;
    }

    offset += musefile_unpack_data(mf, buf + offset);
    return offset;
}

void musefile_pack(MusefileDataCollection *mf, uint8_t *buf)
{
    mf->version = 2;
    mf->size = muse2__data_collection__get_packed_size((Muse2__DataCollection*)mf->collection);
    buf[0] = mf->size & 0xff;
    buf[1] = (mf->size >> 8) & 0xff;
    buf[2] = (mf->size >> 16) & 0xff;
    buf[3] = (mf->size >> 24) & 0xff;
    buf[4] = mf->version;
    buf[5] = 0;
    muse2__data_collection__pack((Muse2__DataCollection*)mf->collection, buf + 6);
}

MusefileData musefile_data(MusefileDataCollection *mf, size_t index)
{
    Muse2__DataCollection *collection = (Muse2__DataCollection*)mf->collection;
    if (index >= collection->n_collection) {
        return (MusefileData){
            .timestamp = 0,
            .type = -1,
            .config = -1,
            .data = NULL
        };
    }
    Muse2__Data *data = collection->collection[index];
    MusefileData result = {
        .timestamp = data->timestamp,
        .type = data->datatype,
        .config = data->has_config_id ? data->config_id : -1,
        .data = (ProtobufCMessage*)data
    };
    return result;
}

void musefile_deinit(MusefileDataCollection *mf)
{
    if (mf->collection != NULL) {
        muse2__data_collection__free_unpacked((Muse2__DataCollection*)mf->collection, NULL);
        mf->collection = NULL;
    }
    mf->size = 0;
    mf->version = 0;
}

