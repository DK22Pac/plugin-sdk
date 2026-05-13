/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

struct tVertex {
    float x;
    float y;
    float z;
    float w;
    unsigned long diff;
    unsigned long spec;
    float u;
    float v;
};
VALIDATE_OFFSET(tVertex, x, 0x0);
VALIDATE_OFFSET(tVertex, y, 0x4);
VALIDATE_OFFSET(tVertex, z, 0x8);
VALIDATE_OFFSET(tVertex, w, 0xC);
VALIDATE_OFFSET(tVertex, diff, 0x10);
VALIDATE_OFFSET(tVertex, spec, 0x14);
VALIDATE_OFFSET(tVertex, u, 0x18);
VALIDATE_OFFSET(tVertex, v, 0x1C);
VALIDATE_SIZE(tVertex, 0x20);

#define COLOR_RGBA(r, g, b, a) ((unsigned int)((((a)&0xff)<<24)|(((r)&0xff)<<16)|(((g)&0xff)<<8)|((b)&0xff)))
