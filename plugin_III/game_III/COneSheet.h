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

VALIDATE_SIZE(COneSheet, 0x44);

#include "meta/meta.COneSheet.h"
