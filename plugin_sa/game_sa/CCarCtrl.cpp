/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarCtrl.h"

void CCarCtrl::GetCarToParkAtCoords(CVehicle* veh, CVector* coords)
{
	((void(__cdecl *)(CVehicle*, CVector*))0x41D350)(veh, coords);
}
void CCarCtrl::GetCarToGoToCoordsRacing(CVehicle* veh, CVector* coords, int trafficbehavior, bool bLockSpeedAt20)
{
	((void(__cdecl *)(CVehicle*, CVector*, int, bool))0x41D210)(veh, coords, trafficbehavior, bLockSpeedAt20);
}

void CCarCtrl::GetCarToGoToCoords(CVehicle* veh, CVector* coord, int drivingStyle, bool bSetSpeed20)
{
	((void(__cdecl *)(CVehicle*, CVector*, int, bool))0x41CE30)(veh, coord, drivingStyle, bSetSpeed20);
}

void CCarCtrl::TellCarToRamOtherCar(CVehicle* veh, CVehicle* targetveh)
{
	((void(__cdecl *)(CVehicle*, CVehicle*))0x41C8A0)(veh, targetveh);
}
void CCarCtrl::TellCarToBlockOtherCar(CVehicle* veh, CVehicle* targetveh)
{
	((void(__cdecl *)(CVehicle*, CVehicle*))0x41C900)(veh, targetveh);
}
void CCarCtrl::TellOccupantsToLeaveCar(CVehicle* veh)
{
	((void(__cdecl *)(CVehicle*))0x41C760)(veh);
}

bool CCarCtrl::CreatePoliceChase(CVehicle* veh, int a1, CNodeAddress unused)
{
	// char __cdecl CCarCtrl__CreatePoliceChase(CVehicle *veh, signed int a3, __int16 arg8) arg8 = CNodeAddress, a3 from 14-23
	return ((bool(__cdecl *)(CVehicle*, int, CNodeAddress))0x42C2B0)(veh, a1, unused);
}

void CCarCtrl::JoinCarWithRoadSystem(CVehicle* veh)
{
	((void(__cdecl *)(CVehicle*))0x42F5A0)(veh);
}

void CCarCtrl::MakeWayForCarWithSiren(CVehicle* veh)
{
	((void(__cdecl *)(CVehicle*))0x41D660)(veh);
}

void CCarCtrl::PossiblyFireHSMissile(CVehicle* veh, CEntity* targetEntity)
{
	((void(__cdecl *)(CVehicle*, CEntity*))0x429600)(veh, targetEntity);
}

void CCarCtrl::SteerAIBoatWithPhysicsCirclingPlayer(CVehicle* veh, float* a1, float* a2, float* a3, bool* a4)
{
	((void(__cdecl *)(CVehicle*, float*, float*, float*, bool*))0x429090)(veh, a1, a2, a3, a4);
}

CVehicle* CCarCtrl::CreateOneEmergencyServicesVehicle(int model, CVector driveToCoord)
{
	return ((CVehicle*(__cdecl *)(int, CVector))0x42B7D0)(model, driveToCoord);
}

CVehicle *CCarCtrl::CreateCarForScript(int modelId, CVector posn, unsigned char bMissionVehicle) {
    return ((CVehicle*(__cdecl *)(int, CVector, unsigned char))0x431F80)(modelId, posn, bMissionVehicle);
}