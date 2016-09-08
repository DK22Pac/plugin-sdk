/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPed.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class PLUGIN_API CPlayerPed : public CPed
{
public:
	CPed *m_pPlayerTargettedPed;
	__int32 field_7A0;

    CPlayerPed(int playerId, bool arg1);

	void MakeChangesForNewWeapon(eWeaponType weaponType);
};
#pragma pack(pop)

VALIDATE_SIZE(CPlayerPed, 0x7A4);