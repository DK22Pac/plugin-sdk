/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeapon.h"

void CWeapon::FireFromCar(CVehicle* pFiringVehicle, bool bLookLeft, bool bLookRight) {
    plugin::CallMethod<0x5D44E0, CWeapon *, CVehicle*, bool, bool>(this, pFiringVehicle, bLookLeft, bLookRight);
}
