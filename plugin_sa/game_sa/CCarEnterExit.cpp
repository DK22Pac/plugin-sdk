/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarEnterExit.h"

PLUGIN_SOURCE_FILE

float const &CCarEnterExit::ms_fMaxSpeed_CanDragPedOut = *reinterpret_cast<float const *>(GLOBAL_ADDRESS_BY_VERSION(0x86F104, 0, 0, 0, 0, 0));
float const &CCarEnterExit::ms_fMaxSpeed_PlayerCanDragPedOut = *reinterpret_cast<float const *>(GLOBAL_ADDRESS_BY_VERSION(0x86F108, 0, 0, 0, 0, 0));
bool &CCarEnterExit::ms_bPedOffsetsCalculated = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C20, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedGetUpAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C3C, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedQuickDraggedOutCarAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C48, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedBedLAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C54, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedBedRAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C60, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedDeskAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C6C, 0, 0, 0, 0, 0));
CVector &CCarEnterExit::ms_vecPedChairAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0xC18C78, 0, 0, 0, 0, 0));

int addrof(CCarEnterExit::AddInCarAnim) = ADDRESS_BY_VERSION(0x64F720, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::AddInCarAnim) = GLOBAL_ADDRESS_BY_VERSION(0x64F720, 0, 0, 0, 0, 0);

void CCarEnterExit::AddInCarAnim(CVehicle const *vehicle, CPed *ped, bool bAsDriver) {
    plugin::CallDynGlobal<CVehicle const *, CPed *, bool>(gaddrof(CCarEnterExit::AddInCarAnim), vehicle, ped, bAsDriver);
}

int addrof(CCarEnterExit::CarHasDoorToClose) = ADDRESS_BY_VERSION(0x64EE10, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::CarHasDoorToClose) = GLOBAL_ADDRESS_BY_VERSION(0x64EE10, 0, 0, 0, 0, 0);

bool CCarEnterExit::CarHasDoorToClose(CVehicle const *vehicle, int doorId) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int>(gaddrof(CCarEnterExit::CarHasDoorToClose), vehicle, doorId);
}

int addrof(CCarEnterExit::CarHasDoorToOpen) = ADDRESS_BY_VERSION(0x64EDD0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::CarHasDoorToOpen) = GLOBAL_ADDRESS_BY_VERSION(0x64EDD0, 0, 0, 0, 0, 0);

bool CCarEnterExit::CarHasDoorToOpen(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int>(gaddrof(CCarEnterExit::CarHasDoorToOpen), vehicle, doorID);
}

int addrof(CCarEnterExit::CarHasOpenableDoor) = ADDRESS_BY_VERSION(0x64EE50, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::CarHasOpenableDoor) = GLOBAL_ADDRESS_BY_VERSION(0x64EE50, 0, 0, 0, 0, 0);

bool CCarEnterExit::CarHasOpenableDoor(CVehicle const *vehicle, int DoorID_UnusedArg, CPed const *ped) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int, CPed const *>(gaddrof(CCarEnterExit::CarHasOpenableDoor), vehicle, DoorID_UnusedArg, ped);
}

int addrof(CCarEnterExit::CarHasPartiallyOpenDoor) = ADDRESS_BY_VERSION(0x64EE70, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::CarHasPartiallyOpenDoor) = GLOBAL_ADDRESS_BY_VERSION(0x64EE70, 0, 0, 0, 0, 0);

bool CCarEnterExit::CarHasPartiallyOpenDoor(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int>(gaddrof(CCarEnterExit::CarHasPartiallyOpenDoor), vehicle, doorID);
}

int addrof(CCarEnterExit::ComputeDoorFlag) = ADDRESS_BY_VERSION(0x64E550, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputeDoorFlag) = GLOBAL_ADDRESS_BY_VERSION(0x64E550, 0, 0, 0, 0, 0);

int CCarEnterExit::ComputeDoorFlag(CVehicle const *vehicle, int doorId, bool bCheckVehicleType) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle const *, int, bool>(gaddrof(CCarEnterExit::ComputeDoorFlag), vehicle, doorId, bCheckVehicleType);
}

int addrof(CCarEnterExit::ComputeOppositeDoorFlag) = ADDRESS_BY_VERSION(0x64E610, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputeOppositeDoorFlag) = GLOBAL_ADDRESS_BY_VERSION(0x64E610, 0, 0, 0, 0, 0);

int CCarEnterExit::ComputeOppositeDoorFlag(CVehicle const *vehicle, int doorId, bool bCheckVehicleType) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle const *, int, bool>(gaddrof(CCarEnterExit::ComputeOppositeDoorFlag), vehicle, doorId, bCheckVehicleType);
}

int addrof(CCarEnterExit::ComputePassengerIndexFromCarDoor) = ADDRESS_BY_VERSION(0x64F1E0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputePassengerIndexFromCarDoor) = GLOBAL_ADDRESS_BY_VERSION(0x64F1E0, 0, 0, 0, 0, 0);

signed int CCarEnterExit::ComputePassengerIndexFromCarDoor(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<signed int, CVehicle const *, int>(gaddrof(CCarEnterExit::ComputePassengerIndexFromCarDoor), vehicle, doorID);
}

int addrof(CCarEnterExit::ComputeSlowJackedPed) = ADDRESS_BY_VERSION(0x64F070, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputeSlowJackedPed) = GLOBAL_ADDRESS_BY_VERSION(0x64F070, 0, 0, 0, 0, 0);

int CCarEnterExit::ComputeSlowJackedPed(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle const *, int>(gaddrof(CCarEnterExit::ComputeSlowJackedPed), vehicle, doorID);
}

int addrof(CCarEnterExit::ComputeTargetDoorToEnterAsPassenger) = ADDRESS_BY_VERSION(0x64F190, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputeTargetDoorToEnterAsPassenger) = GLOBAL_ADDRESS_BY_VERSION(0x64F190, 0, 0, 0, 0, 0);

signed int CCarEnterExit::ComputeTargetDoorToEnterAsPassenger(CVehicle const *pVehicle, int nPassengerNum) {
    return plugin::CallAndReturnDynGlobal<signed int, CVehicle const *, int>(gaddrof(CCarEnterExit::ComputeTargetDoorToEnterAsPassenger), pVehicle, nPassengerNum);
}

int addrof(CCarEnterExit::ComputeTargetDoorToExit) = ADDRESS_BY_VERSION(0x64F110, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::ComputeTargetDoorToExit) = GLOBAL_ADDRESS_BY_VERSION(0x64F110, 0, 0, 0, 0, 0);

int CCarEnterExit::ComputeTargetDoorToExit(CVehicle const *pVehicle, CPed const *pPed) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle const *, CPed const *>(gaddrof(CCarEnterExit::ComputeTargetDoorToExit), pVehicle, pPed);
}

int addrof(CCarEnterExit::GetNearestCarDoor) = ADDRESS_BY_VERSION(0x6528F0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::GetNearestCarDoor) = GLOBAL_ADDRESS_BY_VERSION(0x6528F0, 0, 0, 0, 0, 0);

bool CCarEnterExit::GetNearestCarDoor(CPed const *pPed, CVehicle const *pVehicle, CVector *outPos, int doorID) {
    return plugin::CallAndReturnDynGlobal<bool, CPed const *, CVehicle const *, CVector *, int>(gaddrof(CCarEnterExit::GetNearestCarDoor), pPed, pVehicle, outPos, doorID);
}

int addrof(CCarEnterExit::GetNearestCarPassengerDoor) = ADDRESS_BY_VERSION(0x650BB0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::GetNearestCarPassengerDoor) = GLOBAL_ADDRESS_BY_VERSION(0x650BB0, 0, 0, 0, 0, 0);

bool CCarEnterExit::GetNearestCarPassengerDoor(CPed const *ped, CVehicle const *vehicle, CVector *outVec, int *doorId, bool flag1, bool flag2, bool flag3) {
    return plugin::CallAndReturnDynGlobal<bool, CPed const *, CVehicle const *, CVector *, int *, bool, bool, bool>(gaddrof(CCarEnterExit::GetNearestCarPassengerDoor), ped, vehicle, outVec, doorId, flag1, flag2, flag3);
}

int addrof(CCarEnterExit::GetPositionToOpenCarDoor) = ADDRESS_BY_VERSION(0x64E740, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::GetPositionToOpenCarDoor) = GLOBAL_ADDRESS_BY_VERSION(0x64E740, 0, 0, 0, 0, 0);

CVector *CCarEnterExit::GetPositionToOpenCarDoor(CVector *out, CVehicle const *vehicle, int doorId) {
    return plugin::CallAndReturnDynGlobal<CVector *, CVector *, CVehicle const *, int>(gaddrof(CCarEnterExit::GetPositionToOpenCarDoor), out, vehicle, doorId);
}

int addrof(CCarEnterExit::IsCarDoorInUse) = ADDRESS_BY_VERSION(0x64EC90, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsCarDoorInUse) = GLOBAL_ADDRESS_BY_VERSION(0x64EC90, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsCarDoorInUse(CVehicle const *vehicle, int door1Id, int door2Id) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int, int>(gaddrof(CCarEnterExit::IsCarDoorInUse), vehicle, door1Id, door2Id);
}

int addrof(CCarEnterExit::IsCarDoorReady) = ADDRESS_BY_VERSION(0x64ED90, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsCarDoorReady) = GLOBAL_ADDRESS_BY_VERSION(0x64ED90, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsCarDoorReady(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int>(gaddrof(CCarEnterExit::IsCarDoorReady), vehicle, doorID);
}

int addrof(CCarEnterExit::IsCarQuickJackPossible) = ADDRESS_BY_VERSION(0x64EF00, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsCarQuickJackPossible) = GLOBAL_ADDRESS_BY_VERSION(0x64EF00, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsCarQuickJackPossible(CVehicle const *vehicle, int doorID, CPed const *ped) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int, CPed const *>(gaddrof(CCarEnterExit::IsCarQuickJackPossible), vehicle, doorID, ped);
}

int addrof(CCarEnterExit::IsCarSlowJackRequired) = ADDRESS_BY_VERSION(0x64EF70, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsCarSlowJackRequired) = GLOBAL_ADDRESS_BY_VERSION(0x64EF70, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsCarSlowJackRequired(CVehicle const *vehicle, int doorID) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int>(gaddrof(CCarEnterExit::IsCarSlowJackRequired), vehicle, doorID);
}

int addrof(CCarEnterExit::IsClearToDriveAway) = ADDRESS_BY_VERSION(0x6509B0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsClearToDriveAway) = GLOBAL_ADDRESS_BY_VERSION(0x6509B0, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsClearToDriveAway(CVehicle const *outVehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *>(gaddrof(CCarEnterExit::IsClearToDriveAway), outVehicle);
}

int addrof(CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel) = ADDRESS_BY_VERSION(0x651210, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel) = GLOBAL_ADDRESS_BY_VERSION(0x651210, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel(CPed const *ped, CVehicle *vehicle, CVector const *pos) {
    return plugin::CallAndReturnDynGlobal<bool, CPed const *, CVehicle *, CVector const *>(gaddrof(CCarEnterExit::IsPathToDoorBlockedByVehicleCollisionModel), ped, vehicle, pos);
}

int addrof(CCarEnterExit::IsPedHealthy) = ADDRESS_BY_VERSION(0x64EEE0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsPedHealthy) = GLOBAL_ADDRESS_BY_VERSION(0x64EEE0, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsPedHealthy(CPed *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *>(gaddrof(CCarEnterExit::IsPedHealthy), vehicle);
}

int addrof(CCarEnterExit::IsPlayerToQuitCarEnter) = ADDRESS_BY_VERSION(0x64F240, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsPlayerToQuitCarEnter) = GLOBAL_ADDRESS_BY_VERSION(0x64F240, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsPlayerToQuitCarEnter(CPed const *ped, CVehicle const *vehicle, int StartTime, CTask *task) {
    return plugin::CallAndReturnDynGlobal<bool, CPed const *, CVehicle const *, int, CTask *>(gaddrof(CCarEnterExit::IsPlayerToQuitCarEnter), ped, vehicle, StartTime, task);
}

int addrof(CCarEnterExit::IsRoomForPedToLeaveCar) = ADDRESS_BY_VERSION(0x6504C0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsRoomForPedToLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x6504C0, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsRoomForPedToLeaveCar(CVehicle const *veh, int doorID, CVector *pos) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, int, CVector *>(gaddrof(CCarEnterExit::IsRoomForPedToLeaveCar), veh, doorID, pos);
}

int addrof(CCarEnterExit::IsVehicleHealthy) = ADDRESS_BY_VERSION(0x64EEC0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsVehicleHealthy) = GLOBAL_ADDRESS_BY_VERSION(0x64EEC0, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsVehicleHealthy(CVehicle const *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *>(gaddrof(CCarEnterExit::IsVehicleHealthy), vehicle);
}

int addrof(CCarEnterExit::IsVehicleStealable) = ADDRESS_BY_VERSION(0x6510D0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::IsVehicleStealable) = GLOBAL_ADDRESS_BY_VERSION(0x6510D0, 0, 0, 0, 0, 0);

bool CCarEnterExit::IsVehicleStealable(CVehicle const *vehicle, CPed const *ped) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle const *, CPed const *>(gaddrof(CCarEnterExit::IsVehicleStealable), vehicle, ped);
}

int addrof(CCarEnterExit::MakeUndraggedDriverPedLeaveCar) = ADDRESS_BY_VERSION(0x64F600, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::MakeUndraggedDriverPedLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x64F600, 0, 0, 0, 0, 0);

void CCarEnterExit::MakeUndraggedDriverPedLeaveCar(CVehicle const *vehicle, CPed const *ped) {
    plugin::CallDynGlobal<CVehicle const *, CPed const *>(gaddrof(CCarEnterExit::MakeUndraggedDriverPedLeaveCar), vehicle, ped);
}

int addrof(CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar) = ADDRESS_BY_VERSION(0x64F540, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x64F540, 0, 0, 0, 0, 0);

void CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar(CVehicle const *targetVehicle, CPed const *draggedPed, CPed const *ped) {
    plugin::CallDynGlobal<CVehicle const *, CPed const *, CPed const *>(gaddrof(CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar), targetVehicle, draggedPed, ped);
}

int addrof(CCarEnterExit::QuitEnteringCar) = ADDRESS_BY_VERSION(0x650130, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::QuitEnteringCar) = GLOBAL_ADDRESS_BY_VERSION(0x650130, 0, 0, 0, 0, 0);

void CCarEnterExit::QuitEnteringCar(CPed *ped, CVehicle *vehicle, int doorID, bool bCarWasBeingJacked) {
    plugin::CallDynGlobal<CPed *, CVehicle *, int, bool>(gaddrof(CCarEnterExit::QuitEnteringCar), ped, vehicle, doorID, bCarWasBeingJacked);
}

int addrof(CCarEnterExit::RemoveCarSitAnim) = ADDRESS_BY_VERSION(0x64F680, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::RemoveCarSitAnim) = GLOBAL_ADDRESS_BY_VERSION(0x64F680, 0, 0, 0, 0, 0);

void CCarEnterExit::RemoveCarSitAnim(CPed const *ped) {
    plugin::CallDynGlobal<CPed const *>(gaddrof(CCarEnterExit::RemoveCarSitAnim), ped);
}

int addrof(CCarEnterExit::RemoveGetInAnims) = ADDRESS_BY_VERSION(0x64F6E0, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::RemoveGetInAnims) = GLOBAL_ADDRESS_BY_VERSION(0x64F6E0, 0, 0, 0, 0, 0);

void CCarEnterExit::RemoveGetInAnims(CPed const *ped) {
    plugin::CallDynGlobal<CPed const *>(gaddrof(CCarEnterExit::RemoveGetInAnims), ped);
}

int addrof(CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle) = ADDRESS_BY_VERSION(0x64F860, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x64F860, 0, 0, 0, 0, 0);

void CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle() {
    plugin::CallDynGlobal(gaddrof(CCarEnterExit::SetAnimOffsetForEnterOrExitVehicle));
}

int addrof(CCarEnterExit::SetPedInCarDirect) = ADDRESS_BY_VERSION(0x650280, 0, 0, 0, 0, 0);
int gaddrof(CCarEnterExit::SetPedInCarDirect) = GLOBAL_ADDRESS_BY_VERSION(0x650280, 0, 0, 0, 0, 0);

void CCarEnterExit::SetPedInCarDirect(CPed *ped, CVehicle *vehicle, int seatNumber, bool bAsDriver) {
    plugin::CallDynGlobal<CPed *, CVehicle *, int, bool>(gaddrof(CCarEnterExit::SetPedInCarDirect), ped, vehicle, seatNumber, bAsDriver);
}
