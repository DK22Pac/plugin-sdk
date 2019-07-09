/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CLines {
public:
    SUPPORTED_10EN_11EN_STEAM static void RenderLineWithClipping(float x1, float y1, float z1, float x2, float y2, float z2, unsigned int color1, unsigned int color2);
};

#include "meta/meta.CLines.h"
