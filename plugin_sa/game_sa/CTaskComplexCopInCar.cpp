/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskComplexCopInCar.h"

CTaskComplexCopInCar::CTaskComplexCopInCar(CVehicle* arg0,CPed* arg1,CPed* arg2,bool arg3) : CTaskComplex(plugin::dummy)
{
	((void(__thiscall *)(CTaskComplexCopInCar *, CVehicle*, CPed*, CPed*, bool))0x68C7F0)(this, arg0, arg1, arg2, arg3);
}