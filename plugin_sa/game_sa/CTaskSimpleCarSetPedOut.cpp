/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleCarSetPedOut.h"

CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(CVehicle *pVehicle, int DoorId,bool arg1) : CTaskSimple(plugin::dummy) {
	((void(__thiscall *)(CTaskSimpleCarSetPedOut*, CVehicle*,int, bool))0x6478B0)(this, pVehicle, DoorId, arg1);
}