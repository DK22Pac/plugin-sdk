/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
    static void RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    static void Render();
};

extern unsigned int MAX_NUM_BRIGHTLIGHTS; // default 32
