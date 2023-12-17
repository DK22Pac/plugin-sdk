/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "grcTexture.h"
#include "grcImage.h"
#include "grcRenderTarget.h"

namespace rage {
    class grcTextureFactory {
    public:
        virtual ~grcTextureFactory() {}
    };

    class grcTextureFactoryPC : public grcTextureFactory {
    private:
        static grcTextureFactoryPC*& sm_Instance;

    public:
        uint8_t field_1;
        uint8_t field_3[3];
        int32_t field_8;
        int32_t field_C;
        int32_t field_10;
        int32_t field_14;
        int32_t field_18;
        int32_t field_1C;
        int32_t field_20;
        int32_t field_24;
        int32_t renderTargets[4];
        int32_t field_38;
        int32_t field_3C;
        int32_t field_40;
        int32_t field_44;
        int32_t depthStencilSurface;
        int32_t field_4C;
        int32_t field_50;
        int32_t field_54;
        int32_t field_58;
        int32_t field_5C;
        int32_t field_60;
        int32_t field_64;
        int32_t field_68;
        int32_t field_6C;

    public:
        grcTextureFactoryPC();

        grcTexturePC* Create(uint16_t width, uint16_t height, uint32_t format, uint32_t arg4, uint32_t arg5) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 1>(this, width, height, format, arg4, arg5);
        }

        grcTexturePC* Create(const char* name, grcImage* image) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 2>(this, name, image);
        }

        grcRenderTarget* GetBackBuffer() {
            return plugin::CallVirtualMethodAndReturn<grcRenderTarget*, 5>(this);
        }

    public:
        static grcTextureFactoryPC* GetInstance() {
            return sm_Instance;
        }
    };
}
