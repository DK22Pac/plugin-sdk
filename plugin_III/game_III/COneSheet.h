/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API COneSheet {
public:
    CVector m_vecBasePos;
    CVector m_vecAnimatedPos;
    float m_fTargetZ;
    char m_nState;
    char m_nAnimationType;
    unsigned int m_nMoveStart;
    unsigned int m_nMoveDuration;
    float m_fAnimHeight;
    float m_nDistX;
    float m_nDistY;
    float m_fAngle;
    bool m_bIsVisible;
    bool m_bTargetIsVisible;
    COneSheet *m_pNext;
    COneSheet *m_pPrev;

    SUPPORTED_10EN_11EN_STEAM void AddToList(COneSheet *list);
    SUPPORTED_10EN_11EN_STEAM void RemoveFromList();
};
VALIDATE_OFFSET(COneSheet, m_vecBasePos, 0x0);
VALIDATE_OFFSET(COneSheet, m_vecAnimatedPos, 0xC);
VALIDATE_OFFSET(COneSheet, m_fTargetZ, 0x18);
VALIDATE_OFFSET(COneSheet, m_nState, 0x1C);
VALIDATE_OFFSET(COneSheet, m_nAnimationType, 0x1D);
VALIDATE_OFFSET(COneSheet, m_nMoveStart, 0x20);
VALIDATE_OFFSET(COneSheet, m_nMoveDuration, 0x24);
VALIDATE_OFFSET(COneSheet, m_fAnimHeight, 0x28);
VALIDATE_OFFSET(COneSheet, m_nDistX, 0x2C);
VALIDATE_OFFSET(COneSheet, m_nDistY, 0x30);
VALIDATE_OFFSET(COneSheet, m_fAngle, 0x34);
VALIDATE_OFFSET(COneSheet, m_bIsVisible, 0x38);
VALIDATE_OFFSET(COneSheet, m_bTargetIsVisible, 0x39);
VALIDATE_OFFSET(COneSheet, m_pNext, 0x3C);
VALIDATE_OFFSET(COneSheet, m_pPrev, 0x40);
VALIDATE_SIZE(COneSheet, 0x44);

#include "meta/meta.COneSheet.h"
