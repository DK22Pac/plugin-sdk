/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPointLight.h"

class PLUGIN_API CPointLights {
public:
    SUPPORTED_10EN_11EN_STEAM static CVector(&aCachedMapReads)[32]; // static CVector aCachedMapReads[32]
    SUPPORTED_10EN_11EN_STEAM static CPointLight(&aLights)[32]; // static CPointLight aLights[32]
    SUPPORTED_10EN_11EN_STEAM static float(&aCachedMapReadResults)[32]; // static float aCachedMapReadResults[32]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &NumLights;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &NextCachedValue;

    SUPPORTED_10EN_11EN_STEAM static void AddLight(unsigned char lightType, CVector point, CVector direction, float range, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows);
    SUPPORTED_10EN_11EN_STEAM static float GenerateLightsAffectingObject(CVector *point);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RenderFogEffect();
};

#include "meta/meta.CPointLights.h"
