/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRegisteredShinyText.h"

class PLUGIN_API CShinyTexts {
public:
    SUPPORTED_10EN_11EN_STEAM static CRegisteredShinyText(&aShinyTexts)[32]; // static CRegisteredShinyText aShinyTexts[32]
    SUPPORTED_10EN_11EN_STEAM static int &NumShinyTexts;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterOne(CVector cornerAA, CVector cornerAB, CVector cornerBA, CVector cornerBB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, unsigned char type, unsigned char red, unsigned char green, unsigned char blue, float maxDistance);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RenderOutGeometryBuffer();
};

#include "meta/meta.CShinyTexts.h"
