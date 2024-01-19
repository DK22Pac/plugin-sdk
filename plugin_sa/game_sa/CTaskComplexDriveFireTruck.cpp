/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplex.h"
#include "CTaskComplexDriveFireTruck.h"

CTaskComplexDriveFireTruck::CTaskComplexDriveFireTruck(CVehicle* pFiretruck, CPed *pFireman, bool isPassenger) : CTaskComplex(plugin::dummy)
{
	plugin::CallMethod<0x659310, CTaskComplexDriveFireTruck*, CVehicle *, CPed *, bool>(this, pFiretruck, pFireman, isPassenger);
}