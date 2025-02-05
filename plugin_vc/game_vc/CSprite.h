/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CSprite {
public:
    static void RenderOneXLUSprite(float x, float y, float z, float halfWidth, float halfHeight,
        unsigned char red, unsigned char green, unsigned char blue, short intensity, float rhw, unsigned char alpha);
    static bool CalcScreenCoors(RwV3d const& posn, RwV3d *out, float *w, float *h, bool checkMaxVisible);
};
