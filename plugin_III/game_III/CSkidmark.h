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
VALIDATE_OFFSET(CSkidmark, m_nState, 0x0);
VALIDATE_OFFSET(CSkidmark, m_bWasUpdated, 0x1);
VALIDATE_OFFSET(CSkidmark, m_bIsBloody, 0x2);
VALIDATE_OFFSET(CSkidmark, m_bIsMuddy, 0x3);
VALIDATE_OFFSET(CSkidmark, m_nId, 0x4);
VALIDATE_OFFSET(CSkidmark, m_nLast, 0x8);
VALIDATE_OFFSET(CSkidmark, m_nLastUpdate, 0xC);
VALIDATE_OFFSET(CSkidmark, m_nFadeStart, 0x10);
VALIDATE_OFFSET(CSkidmark, m_nFadeEnd, 0x14);
VALIDATE_OFFSET(CSkidmark, m_avecPos, 0x18);
VALIDATE_OFFSET(CSkidmark, m_avecSide, 0xD8);
VALIDATE_SIZE(CSkidmark, 0x198);

#include "meta/meta.CSkidmark.h"
