/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CWeaponInfo.h"

class CWeapon {
public:
    uint32_t m_nType; // eWeaponType
    int32_t m_nAmountofAmmunition;
    uint8_t m_bHasModelLoaded;
    uint8_t pad[3];

public:

};

VALIDATE_SIZE(CWeapon, 0xC);
