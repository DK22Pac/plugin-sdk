/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CSkidmark {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CSkidmark)

public:
    unsigned char m_nState;
    bool m_bWasUpdated;
    bool m_bIsBloody;
    bool m_bIsMuddy;
    unsigned int m_nId;
    short m_nLast;
    unsigned int m_nLastUpdate;
    unsigned int m_nFadeStart;
    unsigned int m_nFadeEnd;
    CVector m_avecPos[16];
    CVector m_avecSide[16];
};

VALIDATE_SIZE(CSkidmark, 0x198);

#include "meta/meta.CSkidmark.h"
