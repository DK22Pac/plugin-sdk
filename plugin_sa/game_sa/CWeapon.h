/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "eWeaponType.h"
#include "FxSystem_c.h"

class CWeapon {
public:
	eWeaponType m_Type;
	unsigned __int32 m_dwState;
	unsigned __int32 m_dwAmmoInClip;
	unsigned __int32 m_dwTotalAmmo;
	unsigned __int32 m_dwTimeForNextShot;
	unsigned __int8 field_14;
	unsigned __int8 field_15;
	unsigned __int8 field_16;
	unsigned __int8 field_17;
    FxSystem_c *m_pFxSystem; // flamethrower, spraycan, extinguisher particle

	bool HasWeaponAmmoToBeUsed();
};

VALIDATE_SIZE(CWeapon, 0x1C);