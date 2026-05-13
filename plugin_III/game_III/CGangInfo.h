/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CGangInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CGangInfo)

public:
    int m_nVehicleModel; //!< eVehicleModel
    char m_nPedModelOverride;
    int m_nWeaponOne; //!< eWeaponType
    int m_nWeaponTwo; //!< eWeaponType
};
VALIDATE_OFFSET(CGangInfo, m_nVehicleModel, 0x0);
VALIDATE_OFFSET(CGangInfo, m_nPedModelOverride, 0x4);
VALIDATE_OFFSET(CGangInfo, m_nWeaponOne, 0x8);
VALIDATE_OFFSET(CGangInfo, m_nWeaponTwo, 0xC);
VALIDATE_SIZE(CGangInfo, 0x10);

#include "meta/meta.CGangInfo.h"
