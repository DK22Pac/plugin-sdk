/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CSphere {
public:
    CVector m_vecCenter;
    float   m_fRadius;
};
VALIDATE_OFFSET(CSphere, m_vecCenter, 0x0);
VALIDATE_OFFSET(CSphere, m_fRadius, 0xC);
VALIDATE_SIZE(CSphere, 0x10);