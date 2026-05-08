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
VALIDATE_OFFSET(CAmmoData, field_1, 0x0);
VALIDATE_OFFSET(CAmmoData, m_nType, 0x18);
VALIDATE_OFFSET(CAmmoData, field_32, 0x1C);
VALIDATE_OFFSET(CAmmoData, field_68, 0x20);
VALIDATE_OFFSET(CAmmoData, m_nAmmoInClip, 0x5C);
VALIDATE_OFFSET(CAmmoData, m_nAmmoTotal, 0x60);
VALIDATE_SIZE(CAmmoData, 0x64);
