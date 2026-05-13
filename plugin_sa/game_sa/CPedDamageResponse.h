/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPedDamageResponse {
public:
    float m_fDamageHealth;
    float m_fDamageArmor;
    bool  m_bHealthZero;
    bool  m_bForceDeath;
    bool  m_bDamageCalculated;
    bool  m_bCheckIfAffectsPed;

    inline CPedDamageResponse() {
        m_fDamageHealth = 0.0f;
        m_fDamageArmor = 0.0f;
        m_bHealthZero = false;
        m_bForceDeath = false;
        m_bDamageCalculated = false;
        m_bCheckIfAffectsPed = false;
    }
};
VALIDATE_OFFSET(CPedDamageResponse, m_fDamageHealth, 0x0);
VALIDATE_OFFSET(CPedDamageResponse, m_fDamageArmor, 0x4);
VALIDATE_OFFSET(CPedDamageResponse, m_bHealthZero, 0x8);
VALIDATE_OFFSET(CPedDamageResponse, m_bForceDeath, 0x9);
VALIDATE_OFFSET(CPedDamageResponse, m_bDamageCalculated, 0xA);
VALIDATE_OFFSET(CPedDamageResponse, m_bCheckIfAffectsPed, 0xB);
VALIDATE_SIZE(CPedDamageResponse, 0xC);