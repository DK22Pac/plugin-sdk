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
#include "pgRef.h"

namespace rage {
    class grcTexture : pgBase {
    public:
        int8_t field_8;
        int8_t field_9;
        int16_t m_RefCount;
        int32_t field_C;
        int32_t field_10;
        char* m_Name;
        void* m_pDirect3DTexture9;
        int16_t m_Width;
        int16_t m_Height;
        int32_t m_Format;
        int16_t m_nMipStride;
        int8_t m_ImageType;
        int8_t m_nMipCount;

    public:
        grcTexture() = delete;
        virtual ~grcTexture() { plugin::CallVirtualMethod<0>(this, 0); }

    public:
        void Release() {
            int16_t count = m_RefCount;
            if (count) {
                int16_t result = count - 1;
                int8_t v5 = field_8;
                m_RefCount = result;
                bool flag = v5 == 2 || v5 == 4;
                if (!result && flag)
                    this->~grcTexture();
            }
        }
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



        int32_t GetWidth() { return plugin::CallVirtualMethodAndReturn<int32_t, 8>(this); }
        int32_t GetHeight() { return plugin::CallVirtualMethodAndReturn<int32_t, 9>(this); }
        int32_t GetMipMapCount() { return plugin::CallVirtualMethodAndReturn<int32_t, 11>(this); }
    };

    VALIDATE_SIZE(grcTexturePC, 0x50);
}
