/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CProjectileInfo.h"

void CProjectileInfo::CreateExplosion(CEntity* creator, eWeaponType weaponType, CVector pos)
{
	((void (__cdecl *)(CEntity*, eWeaponType, CVector))0x737C00)(creator, weaponType, pos);
}

CProjectileInfo *ms_gaProjectileInfo = (CProjectileInfo *)0xC891A8;