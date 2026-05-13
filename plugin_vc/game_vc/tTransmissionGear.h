/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct PLUGIN_API tTransmissionGear
{
    float m_fMaxVelocity;
    float m_fChangeUpVelocity;
    float m_fChangeDownVelocity;
};
VALIDATE_OFFSET(tTransmissionGear, m_fMaxVelocity, 0x0);
VALIDATE_OFFSET(tTransmissionGear, m_fChangeUpVelocity, 0x4);
VALIDATE_OFFSET(tTransmissionGear, m_fChangeDownVelocity, 0x8);
VALIDATE_SIZE(tTransmissionGear, 0xC);