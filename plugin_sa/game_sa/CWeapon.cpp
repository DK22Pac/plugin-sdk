/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeapon.h"

bool CWeapon::HasWeaponAmmoToBeUsed()
{
	return ((bool (__thiscall *)(CWeapon *))0x73B2A0)(this);
}