/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CSprite {
public:
    static bool CalcScreenCoors(RwV3d const& posn, RwV3d *out, float *w, float *h, bool checkMaxVisible);
};
