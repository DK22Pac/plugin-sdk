/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Color32.h"

namespace rage {
    enum grcDrawMode : int32_t {
        drawPoints = 0x0,
        drawLines = 0x1,
        drawLineStrip = 0x2,
        drawTris = 0x3,
        drawTriStrip = 0x4,
        drawTriFan = 0x5,
        drawQuads = 0x6,
        drawRects = 0x7,
        drawTrisAdj = 0x8,
        drawModesTotal = 0x9,
    };
}
