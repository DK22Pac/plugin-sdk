/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CRGBA.h"

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
    void Render();
    CRegisteredMotionBlurStreak();
};
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, m_nId, 0x0);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, m_color, 0x4);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, m_avecLeftPoints, 0x8);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, m_avecRightPoints, 0x2C);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, m_bExists, 0x50);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, field_51, 0x51);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, field_52, 0x52);
VALIDATE_OFFSET(CRegisteredMotionBlurStreak, field_53, 0x53);
VALIDATE_SIZE(CRegisteredMotionBlurStreak, 0x54);

extern RxObjSpace3DVertex *StreakVertices;
