#pragma once

#include "plbase/PluginBase.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class PLUGIN_API CWeapon
{
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
	void *m_pParticle; // CParticle *

	bool HasWeaponAmmoToBeUsed();
};
#pragma pack(pop)

VALIDATE_SIZE(CWeapon, 0x1C);