/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Color32.h"
#include "Vector3.h"
#include "CTextureDecodeRequestDesc.h"
#include "fiStream.h"

namespace rage {
    class grcImage {
    public:
        enum ImageType : int32_t {
            STANDARD = 0x0,
            CUBE = 0x1,
            DEPTH = 0x2,
            VOLUME = 0x3,
            FORCETYPE32 = 0x7FFFFFFF,
        };

        enum FormatFlags : uint32_t {
            FORMAT_FLAG_sRGB = 0x80000000,
            FORMAT_FLAG_LINEAR = 0x40000000,
            FORMAT_FLAG_SYSMEM = 0x20000000,
            FORMAT_MASK = 0x1FFFFFFF,
        };

        typedef CTextureDecodeRequestDesc::Type rage::grcImage::Format;

    private:
        uint16_t m_Width;
        uint16_t m_Height;
        rage::grcImage::Format m_Format;
        rage::grcImage::ImageType m_Type;
        uint16_t m_Stride;
        uint8_t m_Depth;
        uint8_t m_StrideHi;
        uint8_t *m_Bits;
        rage::Color32 *m_Lut;
        rage::grcImage *m_Next;
        rage::grcImage *m_NextLayer;
        int32_t m_RefCount;
        int32_t pad0;
        int32_t pad1;
        int32_t pad2;
        rage::Vector3 m_ColorExp;
        rage::Vector3 m_ColorOfs;

    public:
        ~grcImage();

        int32_t Release() {
            if (this->m_RefCount-- != 1)
                return this->m_RefCount;

            delete this;
        }

    public:
        static grcImage* Create(uint32_t width, uint32_t height, Format format, ImageType type, int32_t extraMipmaps, int32_t extraLayers, int32_t unused);
        static grcImage* LoadJPEG(const char* name, grcImage* image); // image can be nullptr
        static grcImage* LoadJPEG(rage::fiStream* S, grcImage* image); // image can be nullptr

    };
}
