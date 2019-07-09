/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "CVector.h"

class PLUGIN_API CRegisteredMotionBlurStreak {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CRegisteredMotionBlurStreak)

public:
    int m_nId;
    CRGBA m_color;
    CVector m_avecLeftPoints[3];
    CVector m_avecRightPoints[3];
    bool m_bExists;
    char field_51;
    char field_52;
    char field_53;

    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM void Update();
};

VALIDATE_SIZE(CRegisteredMotionBlurStreak, 0x54);

#include "meta/meta.CRegisteredMotionBlurStreak.h"
