/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CObject.h"
#include "CompressedVector.h"
#include "ePickupType.h"

#pragma pack(push, 1)
class PLUGIN_API CPickups
{
public:
	float m_fRevenueValue;
	CObject *m_pObject;
	int m_dwAmmo;
	int m_dwRegenerationTime;
	CompressedVector m_vPos;
	__int16 m_wMoneyPerDay;
	__int16 m_wModelId;
	__int16 m_wReferenceIndex;
	ePickupType m_ePickupType;
	char m_nFlags;
	char _pad[2];

	// Returns pickup index
	static int GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, ePickupType pickupType, unsigned int ammo, bool a7, char *a8);
};
#pragma pack(pop)

