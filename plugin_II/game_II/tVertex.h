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

#define COLOR_RGBA(r, g, b, a) ((unsigned int)((((a)&0xff)<<24)|(((r)&0xff)<<16)|(((g)&0xff)<<8)|((b)&0xff)))
