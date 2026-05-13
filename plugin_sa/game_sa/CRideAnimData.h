/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CRideAnimData {
public:
    unsigned int m_nAnimGroup;
    float m_fSteerAngle;
    float        m_fAnimLean;
    int dwordC;
    float dword10;
    float        m_fHandlebarsAngle;
    float        m_fAnimPercentageState;
};
VALIDATE_OFFSET(CRideAnimData, m_nAnimGroup, 0x0);
VALIDATE_OFFSET(CRideAnimData, m_fSteerAngle, 0x4);
VALIDATE_OFFSET(CRideAnimData, m_fAnimLean, 0x8);
VALIDATE_OFFSET(CRideAnimData, dwordC, 0xC);
VALIDATE_OFFSET(CRideAnimData, dword10, 0x10);
VALIDATE_OFFSET(CRideAnimData, m_fHandlebarsAngle, 0x14);
VALIDATE_OFFSET(CRideAnimData, m_fAnimPercentageState, 0x18);
VALIDATE_SIZE(CRideAnimData, 0x1C);
