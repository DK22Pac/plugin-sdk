/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector.h"
#include "CPed.h"
#include "CTask.h"

class PLUGIN_API CCarEnterExit {
public:
    SUPPORTED_10US static float const &ms_fMaxSpeed_CanDragPedOut;
    SUPPORTED_10US static float const &ms_fMaxSpeed_PlayerCanDragPedOut;
    SUPPORTED_10US static bool &ms_bPedOffsetsCalculated;
    SUPPORTED_10US static CVector &ms_vecPedGetUpAnimOffset;
    SUPPORTED_10US static CVector &ms_vecPedQuickDraggedOutCarAnimOffset;
    SUPPORTED_10US static CVector &ms_vecPedBedLAnimOffset;
    SUPPORTED_10US static CVector &ms_vecPedBedRAnimOffset;
    SUPPORTED_10US static CVector &ms_vecPedDeskAnimOffset;
    SUPPORTED_10US static CVector &ms_vecPedChairAnimOffset;

    SUPPORTED_10US static void AddInCarAnim(CVehicle const *vehicle, CPed *ped, bool bAsDriver);
    SUPPORTED_10US static bool CarHasDoorToClose(CVehicle const *vehicle, int doorId);
    SUPPORTED_10US static bool CarHasDoorToOpen(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static bool CarHasOpenableDoor(CVehicle const *vehicle, int DoorID_UnusedArg, CPed const *ped);
    SUPPORTED_10US static bool CarHasPartiallyOpenDoor(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static int ComputeDoorFlag(CVehicle const *vehicle, int doorId, bool bCheckVehicleType);
    SUPPORTED_10US static int ComputeOppositeDoorFlag(CVehicle const *vehicle, int doorId, bool bCheckVehicleType);
    SUPPORTED_10US static signed int ComputePassengerIndexFromCarDoor(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static int ComputeSlowJackedPed(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static signed int ComputeTargetDoorToEnterAsPassenger(CVehicle const *pVehicle, int nPassengerNum);
    SUPPORTED_10US static int ComputeTargetDoorToExit(CVehicle const *pVehicle, CPed const *pPed);
    SUPPORTED_10US static bool GetNearestCarDoor(CPed const *pPed, CVehicle const *pVehicle, CVector *outPos, int doorID);
    SUPPORTED_10US static bool GetNearestCarPassengerDoor(CPed const *ped, CVehicle const *vehicle, CVector *outVec, int *doorId, bool flag1, bool flag2, bool flag3);
    SUPPORTED_10US static CVector *GetPositionToOpenCarDoor(CVector *out, CVehicle const *vehicle, int doorId);
    SUPPORTED_10US static bool IsCarDoorInUse(CVehicle const *vehicle, int door1Id, int door2Id);
    SUPPORTED_10US static bool IsCarDoorReady(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static bool IsCarQuickJackPossible(CVehicle const *vehicle, int doorID, CPed const *ped);
    SUPPORTED_10US static bool IsCarSlowJackRequired(CVehicle const *vehicle, int doorID);
    SUPPORTED_10US static bool IsClearToDriveAway(CVehicle const *outVehicle);
    SUPPORTED_10US static bool IsPathToDoorBlockedByVehicleCollisionModel(CPed const *ped, CVehicle *vehicle, CVector const *pos);
    SUPPORTED_10US static bool IsPedHealthy(CPed *vehicle);
    SUPPORTED_10US static bool IsPlayerToQuitCarEnter(CPed const *ped, CVehicle const *vehicle, int StartTime, CTask *task);
    SUPPORTED_10US static bool IsRoomForPedToLeaveCar(CVehicle const *veh, int doorID, CVector *pos);
    SUPPORTED_10US static bool IsVehicleHealthy(CVehicle const *vehicle);
    SUPPORTED_10US static bool IsVehicleStealable(CVehicle const *vehicle, CPed const *ped);
    SUPPORTED_10US static void MakeUndraggedDriverPedLeaveCar(CVehicle const *vehicle, CPed const *ped);
    SUPPORTED_10US static void MakeUndraggedPassengerPedsLeaveCar(CVehicle const *targetVehicle, CPed const *draggedPed, CPed const *ped);
    //! unused
    SUPPORTED_10US static void QuitEnteringCar(CPed *ped, CVehicle *vehicle, int doorID, bool bCarWasBeingJacked);
    SUPPORTED_10US static void RemoveCarSitAnim(CPed const *ped);
    SUPPORTED_10US static void RemoveGetInAnims(CPed const *ped);
    SUPPORTED_10US static void SetAnimOffsetForEnterOrExitVehicle();
    SUPPORTED_10US static void SetPedInCarDirect(CPed *ped, CVehicle *vehicle, int seatNumber, bool bAsDriver);
};

#include "meta/meta.CCarEnterExit.h"
