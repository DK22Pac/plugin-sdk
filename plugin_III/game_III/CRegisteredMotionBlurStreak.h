/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"
#include "CRGBA.h"

struct RxObjSpace3dVertex {
    RwV3d objVertex;
    RwV3d objNormal;
    RwRGBA color;
    float u;
    float v;
};

VALIDATE_SIZE(RxObjSpace3dVertex, 0x24);

class CRegisteredMotionBlurStreak {
public:
    int     m_nId;
    CRGBA   m_color;
    CVector m_avecLeftPoints[3];
    CVector m_avecRightPoints[3];
    bool    m_bExists;
    char field_51;
    char field_52;
    char field_53;

    //funcs
    void Update();
    void Render();
    CRegisteredMotionBlurStreak();

};

VALIDATE_SIZE(CRegisteredMotionBlurStreak, 0x54);

extern RxObjSpace3dVertex *StreakVertices;
