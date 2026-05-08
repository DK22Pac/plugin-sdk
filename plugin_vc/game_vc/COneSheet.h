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
VALIDATE_OFFSET(COneSheet, m_avPosn, 0x0);
VALIDATE_OFFSET(COneSheet, m_fGroundZ, 0x18);
VALIDATE_OFFSET(COneSheet, m_bActive, 0x1C);
VALIDATE_OFFSET(COneSheet, m_bMovementActive, 0x1D);
VALIDATE_OFFSET(COneSheet, m_nTimer, 0x20);
VALIDATE_OFFSET(COneSheet, m_nDuration, 0x24);
VALIDATE_OFFSET(COneSheet, m_vOffset, 0x28);
VALIDATE_OFFSET(COneSheet, m_fAngle, 0x34);
VALIDATE_OFFSET(COneSheet, m_abZoneVissible, 0x38);
VALIDATE_OFFSET(COneSheet, m_pNext, 0x3C);
VALIDATE_OFFSET(COneSheet, m_pPrev, 0x40);
VALIDATE_SIZE(COneSheet, 0x44);
