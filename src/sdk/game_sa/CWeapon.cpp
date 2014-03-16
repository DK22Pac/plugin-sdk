#include "CWeapon.h"

bool CWeapon::HasWeaponAmmoToBeUsed()
{
	return ((bool (__thiscall *)(CWeapon *))0x73B2A0)(this);
}