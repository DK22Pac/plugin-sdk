/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarEnterExit.h"

// Converted from cdecl bool CCarEnterExit::CarHasDoorToClose(CVehicle const& vehicle,int DoorFrameId) 0x64EE10 
bool CCarEnterExit::CarHasDoorToClose(CVehicle const& vehicle, int DoorFrameId) {
	return plugin::CallAndReturn<bool, 0x64EE10, CVehicle const&, int>(vehicle, DoorFrameId);
}

// Converted from cdecl signed int CCarEnterExit::ComputePassengerIndexFromCarDoor(CVehicle const& vehicle,int DoorFrameId) 0x64F1E0 
signed int CCarEnterExit::ComputePassengerIndexFromCarDoor(CVehicle const& vehicle, int DoorFrameId) {
	signed result;
	plugin::CallAndReturn<signed, 0x64F1E0, signed*, CVehicle const&, int>(&result, vehicle, DoorFrameId);
	return result;
}

// Converted from cdecl signed int CCarEnterExit::ComputeTargetDoorToEnterAsPassenger(CVehicle const& vehicle ,int seatID) 0x64F190 
signed int CCarEnterExit::ComputeTargetDoorToEnterAsPassenger(CVehicle const& vehicle, int seatID) {
	signed result;
	plugin::CallAndReturn<signed, 0x64F190, signed*, CVehicle const&, int>(&result, vehicle, seatID);
	return result;
}

// Converted from cdecl CVector* CCarEnterExit::GetPositionToOpenCarDoor(int unused , CVehicle const& vehicle ,int DoorFrameId) 0x64E740 
CVector* CCarEnterExit::GetPositionToOpenCarDoor(int unused, CVehicle const& vehicle, int DoorFrameId) {
	return plugin::CallAndReturn<CVector*, 0x64E740, int, CVehicle const&, int>(unused, vehicle, DoorFrameId);
}

// Converted from cdecl bool CCarEnterExit::IsPedHealthy(CPed const& ped) 0x64EEE0 
bool CCarEnterExit::IsPedHealthy(CPed const& ped) {
	return plugin::CallAndReturn<bool, 0x64EEE0, CPed const&>(ped);
}

// Converted from cdecl bool CCarEnterExit::IsPlayerToQuitCarEnter(CPed const& ped,CVehicle const& vehicle ,int time ,CTask *) 0x64F240 
bool CCarEnterExit::IsPlayerToQuitCarEnter(CPed const& ped, CVehicle const& vehicle, int time, CTask* arg3) {
	return plugin::CallAndReturn<bool, 0x64F240, CPed const&, CVehicle const&, int, CTask*>(ped, vehicle, time, arg3);
}

// Converted from cdecl bool CCarEnterExit::IsVehicleHealthy(CVehicle const& vehicle) 0x64EEC0 
bool CCarEnterExit::IsVehicleHealthy(CVehicle const& vehicle) {
	return plugin::CallAndReturn<bool, 0x64EEC0, CVehicle const&>(vehicle);
}

// Converted from cdecl bool CCarEnterExit::SetPedInCarDirect(CPed *pPed,CVehicle *pVehicle,int DoorFrameId,bool arg4) 0x650280 
bool CCarEnterExit::SetPedInCarDirect(CPed* pPed, CVehicle* pVehicle, int DoorFrameId, bool arg4) {
	return plugin::CallAndReturn<bool, 0x650280, CPed*, CVehicle*, int, bool>(pPed, pVehicle, DoorFrameId, arg4);
}

// Converted from cdecl signed int CCarEnterExit::ComputeTargetDoorToExit(CVehicle const& vehicle,CPed const& ped) 0x64F110 
signed int CCarEnterExit::ComputeTargetDoorToExit(CVehicle const& vehicle, CPed const& ped) {
	signed result;
	plugin::CallAndReturn<signed, 0x64F110, signed*, CVehicle const&, CPed const&>(&result, vehicle, ped);
	return result;
}

// Converted from cdecl bool CCarEnterExit::IsVehicleStealable(CVehicle const& vehicle,CPed const& ped) 0x6510D0 
bool CCarEnterExit::IsVehicleStealable(CVehicle const& vehicle, CPed const& ped) {
	return plugin::CallAndReturn<bool, 0x6510D0, CVehicle const&, CPed const&>(vehicle, ped);
}

// Converted from cdecl void CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle(void) 0x64F860 
void CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle() {
	plugin::Call<0x64F860>();
}

// Converted from cdecl bool CCarEnterExit::GetNearestCarDoor(CPed const& ped,CVehicle const& vehicle, CVector &vector,int &arg4) 0x6528F0 
bool CCarEnterExit::GetNearestCarDoor(CPed const& ped, CVehicle const& vehicle, CVector& vector, int& arg4) {
	return plugin::CallAndReturn<bool, 0x6528F0, CPed const&, CVehicle const&, CVector&, int&>(ped, vehicle, vector, arg4);
}

// Converted from cdecl bool CCarEnterExit::GetNearestCarPassengerDoor(CPed const& ped,CVehicle const& vehicle,CVector & vector,int &DoorFrameId ,bool flag1,bool flag2,bool flag3) 0x650BB0
bool CCarEnterExit::GetNearestCarPassengerDoor(CPed const& ped, CVehicle const& vehicle, CVector& vector, int& DoorFrameId, bool flag1, bool flag2, bool flag3) {
	return plugin::CallAndReturn<bool, 0x650BB0, CPed const&, CVehicle const&, CVector&, int&, bool, bool, bool>(ped, vehicle, vector, DoorFrameId, flag1, flag2, flag3);
}

// Converted from cdecl bool CCarEnterExit::IsRoomForPedToLeaveCar(CVehicle const& vehicle,int DoorFrameId ,CVector *pVector) 00x6504C0 
bool CCarEnterExit::IsRoomForPedToLeaveCar(CVehicle const& vehicle, int DoorFrameId, CVector* pVector) {
	return plugin::CallAndReturn<bool, 0x6504C0, CVehicle const&, int, CVector*>(vehicle, DoorFrameId, pVector);
}

