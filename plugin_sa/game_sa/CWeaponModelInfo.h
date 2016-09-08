/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CClumpModelInfo.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class PLUGIN_API CWeaponModelInfo : public CClumpModelInfo {
public:
	eWeaponType m_weaponInfo;
};
#pragma pack(pop)

VALIDATE_SIZE(CWeaponModelInfo, 0x28);