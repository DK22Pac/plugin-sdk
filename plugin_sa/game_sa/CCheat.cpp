#include "CCheat.h"

char *CCheat::m_CheatString = (char *)0x969110;

CVehicle *CCheat::VehicleCheat(int vehicleId) {
    return ((CVehicle *(__cdecl *)(int))0x43A0B0)(vehicleId);
}