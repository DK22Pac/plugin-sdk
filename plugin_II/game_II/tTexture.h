/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

struct tHardwareTexture {
    unsigned int id;
    unsigned int flags;
    unsigned int field_8;
    unsigned int field_C;
    unsigned int field_10;
    unsigned int bitCount;
    unsigned int bitIndex;
    unsigned int field_1C;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2C;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int lockedPixelData;
    unsigned int pitch;
    unsigned short width;
    unsigned short height;
    struct tGraphics* graphics;
    struct tHardwareTexture* next;
    struct tHardwareTexture* prev;
    struct IDirect3DTexture2* d3dTexture;
    struct IDirectDrawSurface4* surface;
    struct IDirectDrawSurface4* texSurface;
};

struct tCache {
    unsigned char field_0;
    unsigned char field_1_flags;
    unsigned char field_2;
    unsigned char field_3;
    unsigned short field_4;
    unsigned short field_6_cache_idx;
    unsigned int field_8_used_Frame_num;
    float field_C;
    unsigned int field_10;
    unsigned int field_14;
    struct tTexture* texture;
    struct tCache* next;
    struct tCache* cache;
    tHardwareTexture* hwTexture;
    unsigned int field_28;
};

VALIDATE_SIZE(tCache, 0x2C);

struct tTexture {
    unsigned short id;
    unsigned short field_2;
    unsigned short palIsTransparent;
    unsigned short palSize;
    void* lockedPixels;
    unsigned char field_C;
    unsigned char field_D;
    unsigned short width;
    unsigned short height;
    bool palIsValid;
    unsigned char flags;
    unsigned char* pixels;
    unsigned short* palData;
    tCache* cache;
};

VALIDATE_SIZE(tTexture, 0x20);
