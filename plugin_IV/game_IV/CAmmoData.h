/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CAmmoData {
public:
    uint8_t field_1[24];
    uint32_t m_nType;
    uint32_t field_32;
    uint8_t field_68[60];
    uint32_t m_nAmmoInClip;
    uint32_t m_nAmmoTotal;
};

VALIDATE_SIZE(CAmmoData, 0x64);
