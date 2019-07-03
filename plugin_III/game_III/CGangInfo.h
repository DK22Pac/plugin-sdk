/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponType.h"
#include "eVehicleModel.h"
#include "ePedModel.h"

class CGangInfo {
public:
    eVehicleModel m_nVehicleModel;
    ePedModel m_nPedModel;
    char byte5;
    short word6;
    eWeaponType m_nWeaponOne;
    eWeaponType m_nWeaponTwo;

    CGangInfo();
    ~CGangInfo();
};

VALIDATE_SIZE(CGangInfo, 0x10);
