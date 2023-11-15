/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Vector3.h"
#include "pgBase.h"

namespace rage {
    class grcTexture : pgBase {
    public:
        int8_t field_8;
        int8_t depth;
        int16_t field_A;
        int32_t field_C;
        int32_t field_10;
        char* textureName;
        class IDirect3DTexture9* texture;
        int16_t width;
        int16_t height;
        int32_t pixelFormat;
        int16_t stride;
        int8_t textureType;
        int8_t levels;

    public:
        grcTexture() = delete;
        virtual ~grcTexture() { plugin::CallVirtualMethod<0>(this, 1); }
    };

    VALIDATE_SIZE(grcTexture, 0x28);

    class grcTexturePC : public grcTexture {
    private:
        Vector3 field_28;
        Vector3 field_34;
        void* prevTexture;
        void* nextTexture;
        void* pixelData;
        char field_4C;
        char field_4D;
        char field_4E;
        char field_4F;

    public:
        grcTexturePC() = default;

        int32_t getWidth() { return this->width; }
        int32_t getHeight() { return this->height; }
        const char* getName() { return this->textureName; }
    };

    VALIDATE_SIZE(grcTexturePC, 0x50);
}
