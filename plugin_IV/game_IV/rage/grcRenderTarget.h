/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    enum grcRenderTargetType : int32_t {
        grcrtFrontBuffer = 0x0,
        grcrtBackBuffer = 0x1,
        grcrtDepthBuffer = 0x2,
        grcrtPermanent = 0x3,
        grcrtCubeMap = 0x4,
        grcrtArrayMap = 0x4,
        grcrtShadowMap = 0x5,
        grcrtDepthBufferCubeMap = 0x6,
        grcrtVolume = 0x7,
        grcrtCount = 0x8,
    };

    class grcRenderTarget {
    public:


    };
}
