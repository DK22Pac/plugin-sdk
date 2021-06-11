/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBrightLight.h"

class PLUGIN_API CBrightLights {
public:
    SUPPORTED_10EN_11EN_STEAM static CBrightLight(&aBrightLights)[32]; // static CBrightLight aBrightLights[32]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &NumBrightLights;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RenderOutGeometryBuffer();
};

SUPPORTED_10EN_11EN_STEAM extern float(&TrafficLightsSide)[6]; // float TrafficLightsSide[6]
SUPPORTED_10EN_11EN_STEAM extern float(&TrafficLightsUp)[6]; // float TrafficLightsUp[6]
SUPPORTED_10EN_11EN_STEAM extern unsigned short(&TrafficLightIndices)[12]; // unsigned short TrafficLightIndices[12]
SUPPORTED_10EN_11EN_STEAM extern float(&LongCarHeadLightsSide)[8]; // float LongCarHeadLightsSide[8]
SUPPORTED_10EN_11EN_STEAM extern float(&LongCarHeadLightsFront)[8]; // float LongCarHeadLightsFront[8]
SUPPORTED_10EN_11EN_STEAM extern float(&LongCarHeadLightsUp)[8]; // float LongCarHeadLightsUp[8]
SUPPORTED_10EN_11EN_STEAM extern float(&SmallCarHeadLightsSide)[8]; // float SmallCarHeadLightsSide[8]
SUPPORTED_10EN_11EN_STEAM extern float(&SmallCarHeadLightsFront)[8]; // float SmallCarHeadLightsFront[8]
SUPPORTED_10EN_11EN_STEAM extern float(&SmallCarHeadLightsUp)[8]; // float SmallCarHeadLightsUp[8]
SUPPORTED_10EN_11EN_STEAM extern float(&BigCarHeadLightsSide)[8]; // float BigCarHeadLightsSide[8]
SUPPORTED_10EN_11EN_STEAM extern float(&BigCarHeadLightsFront)[8]; // float BigCarHeadLightsFront[8]
SUPPORTED_10EN_11EN_STEAM extern float(&BigCarHeadLightsUp)[8]; // float BigCarHeadLightsUp[8]
SUPPORTED_10EN_11EN_STEAM extern float(&TallCarHeadLightsSide)[8]; // float TallCarHeadLightsSide[8]
SUPPORTED_10EN_11EN_STEAM extern float(&TallCarHeadLightsFront)[8]; // float TallCarHeadLightsFront[8]
SUPPORTED_10EN_11EN_STEAM extern float(&TallCarHeadLightsUp)[8]; // float TallCarHeadLightsUp[8]
SUPPORTED_10EN_11EN_STEAM extern unsigned short(&CubeIndices)[36]; // unsigned short CubeIndices[36]
SUPPORTED_10EN_11EN_STEAM extern float(&SirenLightsSide)[6]; // float SirenLightsSide[6]
SUPPORTED_10EN_11EN_STEAM extern float(&SirenLightsUp)[6]; // float SirenLightsUp[6]

#include "meta/meta.CBrightLights.h"
