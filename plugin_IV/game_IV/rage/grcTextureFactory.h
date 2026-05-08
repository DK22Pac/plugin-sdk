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
#include "grcDevice.h"

namespace rage {
    enum grcTextureFormat : int32_t {
        grctfNone = 0x0,
        grctfR5G6B5 = 0x1,
        grctfA8R8G8B8 = 0x2,
        grctfR16F = 0x3,
        grctfR32F = 0x4,
        grctfA2B10G10R10 = 0x5,
        grctfA2B10G10R10ATI = 0x6,
        grctfA16B16G16R16F = 0x7,
        grctfG16R16 = 0x8,
        grctfG16R16F = 0x9,
        grctfA32B32G32R32F = 0xA,
        grctfA16B16G16R16F_NoExpand = 0xB,
        grctfA16B16G16R16 = 0xC,
        grctfD24S8 = 0xD,
        grctf_X8R8G8B8 = 0xE,
   
    };

    class grcTextureFactory {
    public:
        struct CreateParams {
            bool UseFloat;
            grcDevice::MSAAMode Multisample;
            uint8_t MultisampleQuality;
            int32_t MipLevels;
            bool IsResolvable;
            bool IsRenderable;
            bool HasParent;
            const grcRenderTarget* Parent;
            uint8_t field_18;
            int32_t field_1C;
            int32_t field_20;
            bool field_24;
            uint8_t field_25;
            uint8_t field_26;
            uint8_t field_27;
            uint8_t field_28;
            uint8_t field_29;
            uint8_t field_2A;
            grcTextureFormat Format;

            CreateParams()
                : UseFloat(0)
                , Multisample(grcDevice::MSAA_None)
                , MultisampleQuality(1)
                , MipLevels(1)
                , IsResolvable(1)
                , IsRenderable(1)
                , field_1C(1)
                , field_24(1)
                , field_26(1)
                , field_28(1)
                , HasParent(0)
                , Parent(0)
                , field_18(0)
                , field_20(0)
                , field_25(0)
                , field_27(0)
                , field_29(0)
                , field_2A(0)
                , Format(grctfNone)
            {
            }
        };

    public:
        bool field_4;
        uint8_t field_5[3];

    public:
        virtual ~grcTextureFactory() {}
    };
    VALIDATE_OFFSET(grcTextureFactory, field_4, 0x4);
    VALIDATE_OFFSET(grcTextureFactory, field_5, 0x5);
    VALIDATE_SIZE(grcTextureFactory, 0x8);

    class grcTextureFactoryPC : public grcTextureFactory {
    private:
        static grcTextureFactoryPC*& sm_Instance;

    public:
        void* m_pRenderTargets[3];
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
        void* m_pDepthStencilSurface;
        void* field_4C;
        void* field_50;
        grcRenderTargetPC* field_54;
        int32_t field_58;
        int32_t field_5C;
        int32_t field_60;
        int32_t field_64;
        int32_t field_68;
        int32_t field_6C;
        int32_t field_70;

    public:
        grcTextureFactoryPC();
        ~grcTextureFactoryPC() {
            plugin::CallVirtualMethod<0>(this);
        }

        grcTexturePC* Create(uint16_t width, uint16_t height, uint32_t format, uint32_t arg4, uint32_t arg5) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 1>(this, width, height, format, arg4, arg5);
        }

        grcTexturePC* Create(grcImage* image, void* unk) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 2>(this, image, unk);
        }

        grcTexturePC* CreateFromFile(const char* name, grcImage* image) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 3>(this, name, image);
        }

        grcRenderTargetPC* GetBackBuffer() {
            return plugin::CallVirtualMethodAndReturn<grcRenderTargetPC*, 5>(this);
        }

        grcRenderTargetPC* CreateRenderTarget(const char* name, int32_t type, int32_t width, int32_t height, int32_t bitsPerPixel, CreateParams* params) {
            return plugin::CallVirtualMethodAndReturn<grcRenderTargetPC*, 14>(this, name, type, width, height, bitsPerPixel, params);
        }

        void LockRenderTarget(int32_t index, grcRenderTargetPC* target, grcRenderTargetPC* depth, uint32_t layer, bool lockDepth, uint32_t mipToLock) {
            plugin::CallVirtualMethod<15>(this, index, target, depth, layer, lockDepth, mipToLock);
        }
    
        void UnlockRenderTarget(int32_t index, grcDevice::grcResolveFlags* resolveFlags, int32_t unused) {
            plugin::CallVirtualMethod<16>(this, index, resolveFlags, unused);
        }

    public:
        static grcTextureFactoryPC* GetInstance() {
            return sm_Instance;
        }
    };
    VALIDATE_OFFSET(grcTextureFactoryPC, m_pRenderTargets, 0x8);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_14, 0x14);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_18, 0x18);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_1C, 0x1C);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_20, 0x20);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_24, 0x24);
    VALIDATE_OFFSET(grcTextureFactoryPC, renderTargets, 0x28);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_38, 0x38);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_3C, 0x3C);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_40, 0x40);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_44, 0x44);
    VALIDATE_OFFSET(grcTextureFactoryPC, m_pDepthStencilSurface, 0x48);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_4C, 0x4C);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_50, 0x50);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_54, 0x54);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_58, 0x58);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_5C, 0x5C);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_60, 0x60);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_64, 0x64);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_68, 0x68);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_6C, 0x6C);
    VALIDATE_OFFSET(grcTextureFactoryPC, field_70, 0x70);
    VALIDATE_SIZE(grcTextureFactoryPC, 0x74);
}
