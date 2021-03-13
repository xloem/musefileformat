#include <stdio.h>

#include <musefileformat.h>

uint8_t const twover2messages[140] =
    "\x41\x00\x00\x00\x02\x00\x0a\x3f\x09\x70\xec\xe9"
    "\xca\xd9\xf4\xd7\x41\x10\x06\xa2\x06\x31\x0a\x2d"
    "/muse/gyro fff 5.2337646 -6.0188293 4.5533752\x10"
    "\x02\x3f\x00\x00\x00\x02\x00\x0a\x3d\x09\x5b\x7b"
    "\xea\xca\xd9\xf4\xd7\x41\x10\x06\xa2\x06\x2f\x0a"
    "\x2b/muse/gyro fff 5.188904 -5.532837 4.2318726"
    "\x10\x02";
uint8_t const * badmessage = twover2messages + 1;

int main(int argc, char **argv)
{
    uint8_t const * buf = twover2messages;
    uint8_t const * tail = twover2messages + sizeof(twover2messages);
    uint8_t const * offset = buf;
    MusefileDataCollection muse;
    MusefileData data;

    musefile_init(&muse);
    printf("Initialised unused: size=%d version=%d count=%d\n", muse.size, muse.version, muse.count);
    if (muse.size != 0 || muse.version != 0 || muse.count != 0) { return -1; }

    offset += musefile_unpack(&muse, offset, tail - offset);
    printf("First header: size=%d version=%d count=%d\n", muse.size, muse.version, muse.count);
    if (muse.size != 0x41 || muse.version > 2 || muse.count != 1) { return -1; }

    data = musefile_data(&muse, 0);
    printf("Gyro entry: time=%f type=%d config=%d\n", data.timestamp, data.type, data.config);
    if (data.type != MUSE_ANNOTATION || (int)data.timestamp != 1607690027) { return -1; }

    offset += musefile_unpack(&muse, offset, tail - offset);
    printf("Second header: size=%d version=%d count=%d\n", muse.size, muse.version, muse.count);
    if (muse.size != 0x3f || muse.version > 2 || muse.count != 1) { return -1; }

    data = musefile_data(&muse, 0);
    printf("Gyro entry: time=%f type=%d config=%d\n", data.timestamp, data.type, data.config);
    if (data.type != MUSE_ANNOTATION || (int)data.timestamp != 1607690027) { return -1; }

    printf("Bytes: read=%d original=%d\n", offset - buf, sizeof(twover2messages));
    if (offset - buf != sizeof(twover2messages)) { return -1; }

    return 0;
}
