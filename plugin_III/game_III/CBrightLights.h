/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CBrightLight {
public:
    CVector       m_vecPosition;
    CVector       m_vecRight;
    CVector       m_vecUp;
    CVector       m_vecAt;
    float         m_fDistanceToCamera;
    RwRGBA        m_color;

    CBrightLight();
};

VALIDATE_SIZE(CBrightLight, 0x38);

class CBrightLights {
public:
    static CBrightLight *aBrightLights; // static tBrightLight aBrightLights[32]
    static unsigned int &NumBrightLights;

    //funcs
    static void Init();
    static void Render();
    static void RenderOutGeometryBuffer();
    static void RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
};

extern unsigned int MAX_NUM_BRIGHTLIGHTS; // default 32
extern float &TrafficLightsSide; // [6]
extern float &TrafficLightsUp;  // [6]
extern unsigned short &TrafficLightIndices; // [12]
extern float &LongCarHeadLightsSide; // [8]
extern float &LongCarHeadLightsFront; // [8]
extern float &LongCarHeadLightsUp; // [8]
extern float &SmallCarHeadLightsSide; // [8]
extern float &SmallCarHeadLightsFront; // [8]
extern float &SmallCarHeadLightsUp; // [8]
extern float &BigCarHeadLightsSide; // [8]
extern float &BigCarHeadLightsFront; // [8]
extern float &BigCarHeadLightsUp; // [8]
extern float &TallCarHeadLightsSide; // [8]
extern float &TallCarHeadLightsFront; // [8]
extern float &TallCarHeadLightsUp; // [8]
extern unsigned short &CubeIndices; // [36]
extern float &SirenLightsSide; // [6]
extern float &SirenLightsUp; // [6]