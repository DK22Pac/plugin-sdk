/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCarCtrl.h"

// Converted from cdecl int CCarCtrl::AddToLoadedVehicleArray(int, int, int) 0x4267D0
int CCarCtrl::AddToLoadedVehicleArray(int arg0, int arg1, int arg2) {
    return plugin::CallAndReturn<int, 0x4267D0, int, int, int>(arg0, arg1, arg2);
}

// Converted from cdecl int CCarCtrl::AddToVehicleArray(int, int) 0x426820
int CCarCtrl::AddToVehicleArray(int arg0, int arg1) {
    return plugin::CallAndReturn<int, 0x426820, int, int>(arg0, arg1);
}

// Converted from cdecl int CCarCtrl::ChooseCarModel(int) 0x426AA0
int CCarCtrl::ChooseCarModel(int arg0) {
    return plugin::CallAndReturn<int, 0x426AA0, int>(arg0);
}

// Converted from cdecl int CCarCtrl::ChooseCarModelToLoad(int) 0x426A30
int CCarCtrl::ChooseCarModelToLoad(int arg0) {
    return plugin::CallAndReturn<int, 0x426A30, int>(arg0);
}

// Converted from cdecl int CCarCtrl::ChooseCarRating(CZoneInfo *) 0x426D40
int CCarCtrl::ChooseCarRating(CZoneInfo* arg0) {
    return plugin::CallAndReturn<int, 0x426D40, CZoneInfo*>(arg0);
}

// Converted from cdecl int CCarCtrl::ChooseModel(CZoneInfo *, int *) 0x426B40
int CCarCtrl::ChooseModel(CZoneInfo* arg0, int* arg1) {
    return plugin::CallAndReturn<int, 0x426B40, CZoneInfo*, int*>(arg0, arg1);
}

// Converted from cdecl int CCarCtrl::ChoosePoliceCarModel(void) 0x426850
int CCarCtrl::ChoosePoliceCarModel() {
    return plugin::CallAndReturn<int, 0x426850>();
}

// Converted from cdecl void CCarCtrl::ClearInterestingVehicleList(void) 0x41D300
void CCarCtrl::ClearInterestingVehicleList() {
    plugin::Call<0x41D300>();
}

// Converted from cdecl void CCarCtrl::DragCarToPoint(CVehicle *vehicle, CVector *coords) 0x4208B0
void CCarCtrl::DragCarToPoint(CVehicle* vehicle, CVector* coords) {
    plugin::Call<0x4208B0, CVehicle*, CVector*>(vehicle, coords);
}

// Converted from cdecl float CCarCtrl::FindAngleToWeaveThroughTraffic(CVehicle *vehicle, CPhysical *physical, float, float) 0x423C00
float CCarCtrl::FindAngleToWeaveThroughTraffic(CVehicle* vehicle, CPhysical* physical, float arg2, float arg3) {
    return plugin::CallAndReturn<float, 0x423C00, CVehicle*, CPhysical*, float, float>(vehicle, physical, arg2, arg3);
}

// Converted from cdecl int CCarCtrl::FindLinksToGoWithTheseNodes(CVehicle *vehicle) 0x41CC20
int CCarCtrl::FindLinksToGoWithTheseNodes(CVehicle* vehicle) {
    return plugin::CallAndReturn<int, 0x41CC20, CVehicle*>(vehicle);
}

// Converted from cdecl float CCarCtrl::FindMaximumSpeedForThisCarInTraffic(CVehicle *vehicle) 0x425880
float CCarCtrl::FindMaximumSpeedForThisCarInTraffic(CVehicle* vehicle) {
    return plugin::CallAndReturn<float, 0x425880, CVehicle*>(vehicle);
}

// Converted from cdecl char CCarCtrl::FindPathDirection(int, int, int) 0x421DC0
char CCarCtrl::FindPathDirection(int arg0, int arg1, int arg2) {
    return plugin::CallAndReturn<char, 0x421DC0, int, int, int>(arg0, arg1, arg2);
}

// Converted from cdecl void CCarCtrl::GenerateEmergencyServicesCar(void) 0x41C940
void CCarCtrl::GenerateEmergencyServicesCar() {
    plugin::Call<0x41C940>();
}

// Converted from cdecl bool CCarCtrl::GenerateOneEmergencyServicesCar(uint model, CVector driveToCoord) 0x41C460
bool CCarCtrl::GenerateOneEmergencyServicesCar(unsigned int model, CVector driveToCoord) {
    return plugin::CallAndReturn<bool, 0x41C460, unsigned int, CVector>(model, driveToCoord);
}

// Converted from cdecl void CCarCtrl::GenerateOneRandomCar(void) 0x426DB0
void CCarCtrl::GenerateOneRandomCar() {
    plugin::Call<0x426DB0>();
}

// Converted from cdecl void CCarCtrl::GenerateRandomCars(void) 0x4292A0
void CCarCtrl::GenerateRandomCars() {
    plugin::Call<0x4292A0>();
}

// Converted from cdecl void CCarCtrl::Init(void) 0x4293D0
void CCarCtrl::Init() {
    plugin::Call<0x4293D0>();
}

// Converted from cdecl bool CCarCtrl::IsThisVehicleInteresting(CVehicle *vehicle) 0x41D350
bool CCarCtrl::IsThisVehicleInteresting(CVehicle* vehicle) {
    return plugin::CallAndReturn<bool, 0x41D350, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::JoinCarWithRoadSystem(CVehicle *vehicle) 0x41D000
void CCarCtrl::JoinCarWithRoadSystem(CVehicle* vehicle) {
    plugin::Call<0x41D000, CVehicle*>(vehicle);
}

// Converted from cdecl bool CCarCtrl::JoinCarWithRoadSystemGotoCoors(CVehicle *vehicle, CVector, bool) 0x41CEB0
bool CCarCtrl::JoinCarWithRoadSystemGotoCoors(CVehicle* vehicle, CVector arg1, bool arg2) {
    return plugin::CallAndReturn<bool, 0x41CEB0, CVehicle*, CVector, bool>(vehicle, arg1, arg2);
}

// Converted from cdecl bool CCarCtrl::MapCouldMoveInThisArea(float, float) 0x41C2F0
bool CCarCtrl::MapCouldMoveInThisArea(float arg0, float arg1) {
    return plugin::CallAndReturn<bool, 0x41C2F0, float, float>(arg0, arg1);
}

// Converted from cdecl char CCarCtrl::PickNextNodeAccordingStrategy(CVehicle *vehicle) 0x422A10
char CCarCtrl::PickNextNodeAccordingStrategy(CVehicle* vehicle) {
    return plugin::CallAndReturn<char, 0x422A10, CVehicle*>(vehicle);
}

// Converted from cdecl int CCarCtrl::PickNextNodeRandomly(CVehicle *vehicle) 0x421F70
int CCarCtrl::PickNextNodeRandomly(CVehicle* vehicle) {
    return plugin::CallAndReturn<int, 0x421F70, CVehicle*>(vehicle);
}

// Converted from cdecl int CCarCtrl::PickNextNodeToChaseCar(CVehicle *vehicle, float, float, CVehicle *) 0x4213A0
int CCarCtrl::PickNextNodeToChaseCar(CVehicle* vehicle, float arg1, float arg2, CVehicle* arg3) {
    return plugin::CallAndReturn<int, 0x4213A0, CVehicle*, float, float, CVehicle*>(vehicle, arg1, arg2, arg3);
}

// Converted from cdecl bool CCarCtrl::PickNextNodeToFollowPath(CVehicle *vehicle) 0x420D50
bool CCarCtrl::PickNextNodeToFollowPath(CVehicle* vehicle) {
    return plugin::CallAndReturn<bool, 0x420D50, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::PossiblyRemoveVehicle(CVehicle *vehicle) 0x426030
void CCarCtrl::PossiblyRemoveVehicle(CVehicle* vehicle) {
    plugin::Call<0x426030, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::ReInit(void) 0x429320
void CCarCtrl::ReInit() {
    plugin::Call<0x429320>();
}

// Converted from cdecl void CCarCtrl::RegisterVehicleOfInterest(CVehicle *vehicle) 0x41D370
void CCarCtrl::RegisterVehicleOfInterest(CVehicle* vehicle) {
    plugin::Call<0x41D370, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::RemoveCarsIfThePoolGetsFull(void) 0x4264C0
void CCarCtrl::RemoveCarsIfThePoolGetsFull() {
    plugin::Call<0x4264C0>();
}

// Converted from cdecl void CCarCtrl::RemoveDistantCars(void) 0x426640
void CCarCtrl::RemoveDistantCars() {
    plugin::Call<0x426640>();
}

// Converted from cdecl void CCarCtrl::RemoveFromInterestingVehicleList(CVehicle *vehicle) 0x41D320
void CCarCtrl::RemoveFromInterestingVehicleList(CVehicle* vehicle) {
    plugin::Call<0x41D320, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::RemoveFromLoadedVehicleArray(int, int) 0x426740
void CCarCtrl::RemoveFromLoadedVehicleArray(int arg0, int arg1) {
    plugin::Call<0x426740, int, int>(arg0, arg1);
}

// Converted from cdecl void CCarCtrl::ScanForPedDanger(CVehicle *vehicle) 0x4255E0
void CCarCtrl::ScanForPedDanger(CVehicle* vehicle) {
    plugin::Call<0x4255E0, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::SlowCarDownForCarsSectorList(CPtrList &ptrlist, CVehicle *vehicle, float, float, float, float, float *, float) 0x424B50
void CCarCtrl::SlowCarDownForCarsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float arg7) {
    plugin::Call<0x424B50, CPtrList&, CVehicle*, float, float, float, float, float*, float>(ptrlist, vehicle, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CCarCtrl::SlowCarDownForOtherCar(CEntity *entity, CVehicle *vehicle, float *, float) 0x424780
void CCarCtrl::SlowCarDownForOtherCar(CEntity* entity, CVehicle* vehicle, float* arg2, float arg3) {
    plugin::Call<0x424780, CEntity*, CVehicle*, float*, float>(entity, vehicle, arg2, arg3);
}

// Converted from cdecl void CCarCtrl::SlowCarDownForPedsSectorList(CPtrList &ptrlist, CVehicle *vehicle, float, float, float, float, float *, float) 0x424C70
void CCarCtrl::SlowCarDownForPedsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float arg7) {
    plugin::Call<0x424C70, CPtrList&, CVehicle*, float, float, float, float, float*, float>(ptrlist, vehicle, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CCarCtrl::SlowCarOnRailsDownForTrafficAndLights(CVehicle *vehicle) 0x4254C0
void CCarCtrl::SlowCarOnRailsDownForTrafficAndLights(CVehicle* vehicle) {
    plugin::Call<0x4254C0, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::SteerAIBoatWithPhysicsAttackingPlayer(CVehicle *vehicle, float *, float *, float *, bool *) 0x41DFA0
void CCarCtrl::SteerAIBoatWithPhysicsAttackingPlayer(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4) {
    plugin::Call<0x41DFA0, CVehicle*, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget(CVehicle *vehicle, float, float, float *, float *, float *) 0x41E2D0
void CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget(CVehicle* vehicle, float arg1, float arg2, float* arg3, float* arg4, float* arg5) {
    plugin::Call<0x41E2D0, CVehicle*, float, float, float*, float*, float*>(vehicle, arg1, arg2, arg3, arg4, arg5);
}

// Converted from cdecl void CCarCtrl::SteerAICarBlockingPlayerForwardAndBack(CVehicle *vehicle, float *, float *, float *, bool *) 0x41E520
void CCarCtrl::SteerAICarBlockingPlayerForwardAndBack(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4) {
    plugin::Call<0x41E520, CVehicle*, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CCarCtrl::SteerAICarWithPhysics(CVehicle *vehicle) 0x420580
void CCarCtrl::SteerAICarWithPhysics(CVehicle* vehicle) {
    plugin::Call<0x420580, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::SteerAICarWithPhysicsFollowPath(CVehicle *vehicle, float *, float *, float *, bool *) 0x41EEE0
void CCarCtrl::SteerAICarWithPhysicsFollowPath(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4) {
    plugin::Call<0x41EEE0, CVehicle*, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CCarCtrl::SteerAICarWithPhysicsHeadingForTarget(CVehicle *vehicle, CPhysical *, float, float, float *, float *, float *, bool *) 0x41EAB0
void CCarCtrl::SteerAICarWithPhysicsHeadingForTarget(CVehicle* vehicle, CPhysical* arg1, float arg2, float arg3, float* arg4, float* arg5, float* arg6, bool* arg7) {
    plugin::Call<0x41EAB0, CVehicle*, CPhysical*, float, float, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop(CVehicle *vehicle, float, float, float, float, float *, float *, float *, bool *) 0x41E830
void CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop(CVehicle* vehicle, float arg1, float arg2, float arg3, float arg4, float* arg5, float* arg6, float* arg7, bool* arg8) {
    plugin::Call<0x41E830, CVehicle*, float, float, float, float, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CCarCtrl::SteerAICarWithPhysics_OnlyMission(CVehicle *vehicle, float *, float *, float *, bool *) 0x41FD10
void CCarCtrl::SteerAICarWithPhysics_OnlyMission(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4) {
    plugin::Call<0x41FD10, CVehicle*, float*, float*, float*, bool*>(vehicle, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CCarCtrl::SteerAIHeliTowardsTargetCoors(CAutomobile *automobile) 0x41D900
void CCarCtrl::SteerAIHeliTowardsTargetCoors(CAutomobile* automobile) {
    plugin::Call<0x41D900, CAutomobile*>(automobile);
}

// Converted from cdecl void CCarCtrl::SteerAIPlaneTowardsTargetCoors(CAutomobile *automobile) 0x41D410
void CCarCtrl::SteerAIPlaneTowardsTargetCoors(CAutomobile* automobile) {
    plugin::Call<0x41D410, CAutomobile*>(automobile);
}

// Converted from cdecl void CCarCtrl::SwitchVehicleToRealPhysics(CVehicle *vehicle) 0x41D2D0
void CCarCtrl::SwitchVehicleToRealPhysics(CVehicle* vehicle) {
    plugin::Call<0x41D2D0, CVehicle*>(vehicle);
}

// Converted from cdecl float CCarCtrl::TestCollisionBetween2MovingRects(CVehicle *vehicle, CVehicle *, float, float, CVector *, CVector *, uchar) 0x424210
float CCarCtrl::TestCollisionBetween2MovingRects(CVehicle* vehicle, CVehicle* arg1, float arg2, float arg3, CVector* arg4, CVector* arg5, unsigned char arg6) {
    return plugin::CallAndReturn<float, 0x424210, CVehicle*, CVehicle*, float, float, CVector*, CVector*, unsigned char>(vehicle, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from cdecl void CCarCtrl::UpdateCarCount(CVehicle *vehicle, uchar) 0x41C350
void CCarCtrl::UpdateCarCount(CVehicle* vehicle, unsigned char arg1) {
    plugin::Call<0x41C350, CVehicle*, unsigned char>(vehicle, arg1);
}

// Converted from cdecl void CCarCtrl::UpdateCarOnRails(CVehicle *vehicle) 0x425BF0
void CCarCtrl::UpdateCarOnRails(CVehicle* vehicle) {
    plugin::Call<0x425BF0, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarCtrl::WeaveThroughCarsSectorList(CPtrList &ptrlist, CVehicle *vehicle, CPhysical *, float, float, float, float, float *, float *) 0x423490
void CCarCtrl::WeaveThroughCarsSectorList(CPtrList& ptrlist, CVehicle* vehicle, CPhysical* arg2, float arg3, float arg4, float arg5, float arg6, float* arg7, float* arg8) {
    plugin::Call<0x423490, CPtrList&, CVehicle*, CPhysical*, float, float, float, float, float*, float*>(ptrlist, vehicle, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CCarCtrl::WeaveThroughObjectsSectorList(CPtrList &ptrlist, CVehicle *vehicle, float, float, float, float, float *, float *) 0x422B00
void CCarCtrl::WeaveThroughObjectsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float* arg7) {
    plugin::Call<0x422B00, CPtrList&, CVehicle*, float, float, float, float, float*, float*>(ptrlist, vehicle, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CCarCtrl::WeaveThroughPedsSectorList(CPtrList &ptrlist, CVehicle *vehicle, CPhysical *, float, float, float, float, float *, float *) 0x4230F0
void CCarCtrl::WeaveThroughPedsSectorList(CPtrList& ptrlist, CVehicle* vehicle, CPhysical* arg2, float arg3, float arg4, float arg5, float arg6, float* arg7, float* arg8) {
    plugin::Call<0x4230F0, CPtrList&, CVehicle*, CPhysical*, float, float, float, float, float*, float*>(ptrlist, vehicle, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
