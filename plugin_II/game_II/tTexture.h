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
VALIDATE_OFFSET(tHardwareTexture, id, 0x0);
VALIDATE_OFFSET(tHardwareTexture, flags, 0x4);
VALIDATE_OFFSET(tHardwareTexture, field_8, 0x8);
VALIDATE_OFFSET(tHardwareTexture, field_C, 0xC);
VALIDATE_OFFSET(tHardwareTexture, field_10, 0x10);
VALIDATE_OFFSET(tHardwareTexture, bitCount, 0x14);
VALIDATE_OFFSET(tHardwareTexture, bitIndex, 0x18);
VALIDATE_OFFSET(tHardwareTexture, field_1C, 0x1C);
VALIDATE_OFFSET(tHardwareTexture, field_20, 0x20);
VALIDATE_OFFSET(tHardwareTexture, field_24, 0x24);
VALIDATE_OFFSET(tHardwareTexture, field_28, 0x28);
VALIDATE_OFFSET(tHardwareTexture, field_2C, 0x2C);
VALIDATE_OFFSET(tHardwareTexture, field_30, 0x30);
VALIDATE_OFFSET(tHardwareTexture, field_34, 0x34);
VALIDATE_OFFSET(tHardwareTexture, field_38, 0x38);
VALIDATE_OFFSET(tHardwareTexture, lockedPixelData, 0x3C);
VALIDATE_OFFSET(tHardwareTexture, pitch, 0x40);
VALIDATE_OFFSET(tHardwareTexture, width, 0x44);
VALIDATE_OFFSET(tHardwareTexture, height, 0x46);
VALIDATE_OFFSET(tHardwareTexture, graphics, 0x48);
VALIDATE_OFFSET(tHardwareTexture, next, 0x4C);
VALIDATE_OFFSET(tHardwareTexture, prev, 0x50);
VALIDATE_OFFSET(tHardwareTexture, d3dTexture, 0x54);
VALIDATE_OFFSET(tHardwareTexture, surface, 0x58);
VALIDATE_OFFSET(tHardwareTexture, texSurface, 0x5C);
VALIDATE_SIZE(tHardwareTexture, 0x60);

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
VALIDATE_OFFSET(tCache, field_0, 0x0);
VALIDATE_OFFSET(tCache, field_1_flags, 0x1);
VALIDATE_OFFSET(tCache, field_2, 0x2);
VALIDATE_OFFSET(tCache, field_3, 0x3);
VALIDATE_OFFSET(tCache, field_4, 0x4);
VALIDATE_OFFSET(tCache, field_6_cache_idx, 0x6);
VALIDATE_OFFSET(tCache, field_8_used_Frame_num, 0x8);
VALIDATE_OFFSET(tCache, field_C, 0xC);
VALIDATE_OFFSET(tCache, field_10, 0x10);
VALIDATE_OFFSET(tCache, field_14, 0x14);
VALIDATE_OFFSET(tCache, texture, 0x18);
VALIDATE_OFFSET(tCache, next, 0x1C);
VALIDATE_OFFSET(tCache, cache, 0x20);
VALIDATE_OFFSET(tCache, hwTexture, 0x24);
VALIDATE_OFFSET(tCache, field_28, 0x28);
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
VALIDATE_OFFSET(tTexture, id, 0x0);
VALIDATE_OFFSET(tTexture, field_2, 0x2);
VALIDATE_OFFSET(tTexture, palIsTransparent, 0x4);
VALIDATE_OFFSET(tTexture, palSize, 0x6);
VALIDATE_OFFSET(tTexture, lockedPixels, 0x8);
VALIDATE_OFFSET(tTexture, field_C, 0xC);
VALIDATE_OFFSET(tTexture, field_D, 0xD);
VALIDATE_OFFSET(tTexture, width, 0xE);
VALIDATE_OFFSET(tTexture, height, 0x10);
VALIDATE_OFFSET(tTexture, palIsValid, 0x12);
VALIDATE_OFFSET(tTexture, flags, 0x13);
VALIDATE_OFFSET(tTexture, pixels, 0x14);
VALIDATE_OFFSET(tTexture, palData, 0x18);
VALIDATE_OFFSET(tTexture, cache, 0x1C);
VALIDATE_SIZE(tTexture, 0x20);
