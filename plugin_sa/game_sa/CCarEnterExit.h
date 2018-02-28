/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CTask.h"

class PLUGIN_API CCarEnterExit
{
public:
	static bool CarHasDoorToClose(CVehicle const& vehicle, int DoorFrameId);
	static signed ComputePassengerIndexFromCarDoor(CVehicle const& vehicle, int DoorFrameId);
	static signed ComputeTargetDoorToEnterAsPassenger(CVehicle const& vehicle, int seatID);
	static CVector* GetPositionToOpenCarDoor(int unused, CVehicle const& vehicle, int DoorFrameId);
	static bool IsPedHealthy(CPed const& ped);
	static bool IsPlayerToQuitCarEnter(CPed const& ped, CVehicle const& vehicle, int time, CTask* arg3);
	static bool IsVehicleHealthy(CVehicle const& vehicle);
	static bool SetPedInCarDirect(CPed* pPed, CVehicle* pVehicle, int DoorFrameId, bool arg4);
	static signed ComputeTargetDoorToExit(CVehicle const& vehicle, CPed const& ped);
	static bool IsVehicleStealable(CVehicle const& vehicle, CPed const& ped);
	static void SetAnimOffsetForEnterOrExitVehicle();
	static bool GetNearestCarDoor(CPed const& ped, CVehicle const& vehicle, CVector& vector, int& arg4);
	static bool GetNearestCarPassengerDoor(CPed const& ped, CVehicle const& vehicle, CVector& vector, int& DoorFrameId, bool flag1, bool flag2, bool flag3);
	static bool IsRoomForPedToLeaveCar(CVehicle const& vehicle, int DoorFrameId, CVector* pVector);

};