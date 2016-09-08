/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"

char *CCheat::m_CheatString = (char *)0x969110;

CVehicle *CCheat::VehicleCheat(int vehicleId) {
    return ((CVehicle *(__cdecl *)(int))0x43A0B0)(vehicleId);
}
CVehicle *CCheat::TankerTruck() {
	return ((CVehicle *(__cdecl *)())0x43A570)();
}