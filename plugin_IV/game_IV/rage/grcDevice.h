/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class grcDevice {
    public:
        enum MSAAModeEnum : int32_t {
            MSAA_None = 0x0,
            MSAA_NonMaskAble = 0x1,
            MSAA_2 = 0x2,
            MSAA_4 = 0x4,
            MSAA_8 = 0x8,
            MSAA_2xMS = 0x2,
            MSAA_Centered4xMS = 0x4,
            MSAA_Rotated4xMS = 0x8,
        };

        struct MSAAMode {
            MSAAModeEnum m_Mode;
        };

        enum Stereo_t {
            MONO = 0x0,
            STEREO = 0x1,
            AUTO = 0x2,
        };

        struct grcResolveFlags {
            grcResolveFlags()
                : Depth(1.0f)
                , BlurKernelSize(1.0f)
                , Color(0)
                , Stencil(0)
                , ColorExpBias(0)
                , ClearColor(false)
                , ClearDepthStencil(false)
                , BlurResult(false)
                , NeedResolve(true)
                , MipMap(true) {
            }

            float Depth;
            float BlurKernelSize;
            uint32_t Color;
            uint32_t Stencil;
            int ColorExpBias;
            bool ClearColor;
            bool ClearDepthStencil;
            bool BlurResult;
            bool NeedResolve;
            bool MipMap;
        };

    public:
        static int32_t& m_CurrentWidth;
        static int32_t& m_CurrentHeight;
    };
}
