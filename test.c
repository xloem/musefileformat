#include <stdio.h>

#include <musefileformat.h>

uint8_t const twogoodmessages[140] =
    "\x41\x00\x00\x00\x02\x00\x0a\x3f\x09\x70\xec\xe9"
    "\xca\xd9\xf4\xd7\x41\x10\x06\xa2\x06\x31\x0a\x2d"
    "/muse/gyro fff 5.2337646 -6.0188293 4.5533752\x10"
    "\x02\x3f\x00\x00\x00\x02\x00\x0a\x3d\x09\x5b\x7b"
    "\xea\xca\xd9\xf4\xd7\x41\x10\x06\xa2\x06\x2f\x0a"
    "\x2b/muse/gyro fff 5.188904 -5.532837 4.2318726"
    "\x10\x02";
uint8_t const * badmessage = twogoodmessages + 1;

int main(int argc, char **argv)
{
    uint8_t const * buf = twogoodmessages;
    uint8_t const * tail = twogoodmessages + sizeof(twogoodmessages);
    uint8_t const * offset = buf;
    MuseFileData muse;

    musefile_init(&muse);
    printf("Initialised unused: size=%d version=%d\n", muse.size, muse.version);
    if (muse.size != 0 || muse.version != 0) { return -1; }

    offset += musefile_unpack(&muse, offset, tail - offset);
    printf("First header: size=%d version=%d\n", muse.size, muse.version);
    if (muse.size != 0x41 || muse.version > 2) { return -1; }

    offset += musefile_unpack(&muse, offset, tail - offset);
    printf("Second header: size=%d version=%d\n", muse.size, muse.version);
    if (muse.size != 0x3f || muse.version > 2) { return -1; }

    printf("Bytes: read=%d original=%d\n", offset - buf, sizeof(twogoodmessages));
    if (offset - buf != sizeof(twogoodmessages)) { return -1; }

    return 0;
}
