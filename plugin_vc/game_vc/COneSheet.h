/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API COneSheet {
public:
    CVector m_avPosn[2];
    float m_fGroundZ;
    bool m_bActive;
    bool m_bMovementActive;
private:
    char _pad1E[2];
public:
    unsigned int m_nTimer;
    unsigned int m_nDuration;
    CVector m_vOffset;
    float m_fAngle;
    bool m_abZoneVissible;
private:
    char _pad3A[2];
public:
    COneSheet *m_pNext;
    COneSheet *m_pPrev;
};

VALIDATE_SIZE(COneSheet, 0x44);
