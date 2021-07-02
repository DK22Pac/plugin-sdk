/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarCtrl.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CCarCtrl::CarDensityMultiplier = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5EC8B4, 0x5EC8B4, 0x5F98B4));
PLUGIN_VARIABLE int &CCarCtrl::MaxNumberOfCarsInUse = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5EC8B8, 0x5EC8B8, 0x5F98B8));
PLUGIN_VARIABLE int(&CCarCtrl::CarArrays)[7][256] = *reinterpret_cast<int(*)[7][256]>(GLOBAL_ADDRESS_BY_VERSION(0x6EB860, 0x6EB860, 0x6FB9A0));
PLUGIN_VARIABLE unsigned int &CCarCtrl::LastTimeFireTruckCreated = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x880F5C, 0x880F0C, 0x89104C));
PLUGIN_VARIABLE int &CCarCtrl::NumAmbulancesOnDuty = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885BB0, 0x885B60, 0x895CA0));
PLUGIN_VARIABLE int(&CCarCtrl::TotalNumOfCarsOfRating)[7] = *reinterpret_cast<int(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A60, 0x8F1B14, 0x901C54));
PLUGIN_VARIABLE int &CCarCtrl::NumLawEnforcerCars = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B38, 0x8F1BEC, 0x901D2C));
PLUGIN_VARIABLE int &CCarCtrl::NumMissionCars = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B54, 0x8F1C08, 0x901D48));
PLUGIN_VARIABLE int &CCarCtrl::NumParkedCars = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29E0, 0x8F2A94, 0x902BD4));
PLUGIN_VARIABLE int &CCarCtrl::NumPermanentVehicles = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29F0, 0x8F2AA4, 0x902BE4));
PLUGIN_VARIABLE unsigned int &CCarCtrl::LastTimeLawEnforcerCreated = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FF0, 0x8F60A4, 0x9061E4));
PLUGIN_VARIABLE int &CCarCtrl::NumFireTrucksOnDuty = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9411F0, 0x9413A8, 0x9514E8));
PLUGIN_VARIABLE int(&CCarCtrl::NextCarOfRating)[7] = *reinterpret_cast<int(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x9412AC, 0x941464, 0x9515A4));
PLUGIN_VARIABLE unsigned int &CCarCtrl::LastTimeAmbulanceCreated = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x941450, 0x941608, 0x951748));
PLUGIN_VARIABLE int &CCarCtrl::NumRandomCars = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x943118, 0x9432D0, 0x953410));
PLUGIN_VARIABLE char &CCarCtrl::CountDownToCarsAtStart = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD63, 0x95CF1B, 0x96D05B));
PLUGIN_VARIABLE bool &CCarCtrl::bCarsGeneratedAroundCamera = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD8A, 0x95CF42, 0x96D082));
PLUGIN_VARIABLE CVehicle *(&apCarsToKeep)[2] = *reinterpret_cast<CVehicle *(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x70D830, 0x70D830, 0x71D970));
PLUGIN_VARIABLE unsigned int(&aCarsToKeepTime)[2] = *reinterpret_cast<unsigned int(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x87F9A8, 0x87F958, 0x88FA98));

int addrof(CCarCtrl::AddToCarArray) = ADDRESS_BY_VERSION(0x4182F0, 0x4182F0, 0x4182F0);
int gaddrof(CCarCtrl::AddToCarArray) = GLOBAL_ADDRESS_BY_VERSION(0x4182F0, 0x4182F0, 0x4182F0);

void CCarCtrl::AddToCarArray(int id, int vehicleClass) {
    plugin::CallDynGlobal<int, int>(gaddrof(CCarCtrl::AddToCarArray), id, vehicleClass);
}

int addrof(CCarCtrl::ChooseCarModel) = ADDRESS_BY_VERSION(0x418110, 0x418110, 0x418110);
int gaddrof(CCarCtrl::ChooseCarModel) = GLOBAL_ADDRESS_BY_VERSION(0x418110, 0x418110, 0x418110);

int CCarCtrl::ChooseCarModel(int vehicleClass) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CCarCtrl::ChooseCarModel), vehicleClass);
}

int addrof(CCarCtrl::ChooseGangCarModel) = ADDRESS_BY_VERSION(0x4182C0, 0x4182C0, 0x4182C0);
int gaddrof(CCarCtrl::ChooseGangCarModel) = GLOBAL_ADDRESS_BY_VERSION(0x4182C0, 0x4182C0, 0x4182C0);

int CCarCtrl::ChooseGangCarModel(int gang) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CCarCtrl::ChooseGangCarModel), gang);
}

int addrof(CCarCtrl::ChooseModel) = ADDRESS_BY_VERSION(0x417EC0, 0x417EC0, 0x417EC0);
int gaddrof(CCarCtrl::ChooseModel) = GLOBAL_ADDRESS_BY_VERSION(0x417EC0, 0x417EC0, 0x417EC0);

int CCarCtrl::ChooseModel(CZoneInfo *info, CVector *pos, int *outVehicleClass) {
    return plugin::CallAndReturnDynGlobal<int, CZoneInfo *, CVector *, int *>(gaddrof(CCarCtrl::ChooseModel), info, pos, outVehicleClass);
}

int addrof(CCarCtrl::ChoosePoliceCarModel) = ADDRESS_BY_VERSION(0x4181F0, 0x4181F0, 0x4181F0);
int gaddrof(CCarCtrl::ChoosePoliceCarModel) = GLOBAL_ADDRESS_BY_VERSION(0x4181F0, 0x4181F0, 0x4181F0);

int CCarCtrl::ChoosePoliceCarModel() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CCarCtrl::ChoosePoliceCarModel));
}

int addrof(CCarCtrl::ClearInterestingVehicleList) = ADDRESS_BY_VERSION(0x41F7D0, 0x41F7D0, 0x41F7D0);
int gaddrof(CCarCtrl::ClearInterestingVehicleList) = GLOBAL_ADDRESS_BY_VERSION(0x41F7D0, 0x41F7D0, 0x41F7D0);

void CCarCtrl::ClearInterestingVehicleList() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::ClearInterestingVehicleList));
}

int addrof(CCarCtrl::CountCarsOfType) = ADDRESS_BY_VERSION(0x418820, 0x418820, 0x418820);
int gaddrof(CCarCtrl::CountCarsOfType) = GLOBAL_ADDRESS_BY_VERSION(0x418820, 0x418820, 0x418820);

int CCarCtrl::CountCarsOfType(int modelIndex) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CCarCtrl::CountCarsOfType), modelIndex);
}

int addrof(CCarCtrl::DragCarToPoint) = ADDRESS_BY_VERSION(0x41D450, 0x41D450, 0x41D450);
int gaddrof(CCarCtrl::DragCarToPoint) = GLOBAL_ADDRESS_BY_VERSION(0x41D450, 0x41D450, 0x41D450);

void CCarCtrl::DragCarToPoint(CVehicle *vehicle, CVector *point) {
    plugin::CallDynGlobal<CVehicle *, CVector *>(gaddrof(CCarCtrl::DragCarToPoint), vehicle, point);
}

int addrof(CCarCtrl::FindAngleToWeaveThroughTraffic) = ADDRESS_BY_VERSION(0x41A590, 0x41A590, 0x41A590);
int gaddrof(CCarCtrl::FindAngleToWeaveThroughTraffic) = GLOBAL_ADDRESS_BY_VERSION(0x41A590, 0x41A590, 0x41A590);

float CCarCtrl::FindAngleToWeaveThroughTraffic(CVehicle *vehicle, CPhysical *target, float angleToTarget, float angleForward) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *, CPhysical *, float, float>(gaddrof(CCarCtrl::FindAngleToWeaveThroughTraffic), vehicle, target, angleToTarget, angleForward);
}

int addrof(CCarCtrl::FindLinksToGoWithTheseNodes) = ADDRESS_BY_VERSION(0x41FB30, 0x41FB30, 0x41FB30);
int gaddrof(CCarCtrl::FindLinksToGoWithTheseNodes) = GLOBAL_ADDRESS_BY_VERSION(0x41FB30, 0x41FB30, 0x41FB30);

void CCarCtrl::FindLinksToGoWithTheseNodes(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::FindLinksToGoWithTheseNodes), vehicle);
}

int addrof(CCarCtrl::FindMaxSteerAngle) = ADDRESS_BY_VERSION(0x41E2F0, 0x41E2F0, 0x41E2F0);
int gaddrof(CCarCtrl::FindMaxSteerAngle) = GLOBAL_ADDRESS_BY_VERSION(0x41E2F0, 0x41E2F0, 0x41E2F0);

float CCarCtrl::FindMaxSteerAngle(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *>(gaddrof(CCarCtrl::FindMaxSteerAngle), vehicle);
}

int addrof(CCarCtrl::FindMaximumSpeedForThisCarInTraffic) = ADDRESS_BY_VERSION(0x418C10, 0x418C10, 0x418C10);
int gaddrof(CCarCtrl::FindMaximumSpeedForThisCarInTraffic) = GLOBAL_ADDRESS_BY_VERSION(0x418C10, 0x418C10, 0x418C10);

float CCarCtrl::FindMaximumSpeedForThisCarInTraffic(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *>(gaddrof(CCarCtrl::FindMaximumSpeedForThisCarInTraffic), vehicle);
}

int addrof(CCarCtrl::FindPathDirection) = ADDRESS_BY_VERSION(0x41C360, 0x41C360, 0x41C360);
int gaddrof(CCarCtrl::FindPathDirection) = GLOBAL_ADDRESS_BY_VERSION(0x41C360, 0x41C360, 0x41C360);

unsigned char CCarCtrl::FindPathDirection(int prevNode, int curNode, int nextNode) {
    return plugin::CallAndReturnDynGlobal<unsigned char, int, int, int>(gaddrof(CCarCtrl::FindPathDirection), prevNode, curNode, nextNode);
}

int addrof(CCarCtrl::FindSpeedMultiplier) = ADDRESS_BY_VERSION(0x41D980, 0x41D980, 0x41D980);
int gaddrof(CCarCtrl::FindSpeedMultiplier) = GLOBAL_ADDRESS_BY_VERSION(0x41D980, 0x41D980, 0x41D980);

float CCarCtrl::FindSpeedMultiplier(float angleChange, float minAngle, float maxAngle, float coef) {
    return plugin::CallAndReturnDynGlobal<float, float, float, float, float>(gaddrof(CCarCtrl::FindSpeedMultiplier), angleChange, minAngle, maxAngle, coef);
}

int addrof(CCarCtrl::GenerateEmergencyServicesCar) = ADDRESS_BY_VERSION(0x41FC50, 0x41FC50, 0x41FC50);
int gaddrof(CCarCtrl::GenerateEmergencyServicesCar) = GLOBAL_ADDRESS_BY_VERSION(0x41FC50, 0x41FC50, 0x41FC50);

void CCarCtrl::GenerateEmergencyServicesCar() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::GenerateEmergencyServicesCar));
}

int addrof(CCarCtrl::GenerateOneEmergencyServicesCar) = ADDRESS_BY_VERSION(0x41FE50, 0x41FE50, 0x41FE50);
int gaddrof(CCarCtrl::GenerateOneEmergencyServicesCar) = GLOBAL_ADDRESS_BY_VERSION(0x41FE50, 0x41FE50, 0x41FE50);

bool CCarCtrl::GenerateOneEmergencyServicesCar(unsigned int modelIndex, CVector point) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int, CVector>(gaddrof(CCarCtrl::GenerateOneEmergencyServicesCar), modelIndex, point);
}

int addrof(CCarCtrl::GenerateOneRandomCar) = ADDRESS_BY_VERSION(0x4165F0, 0x4165F0, 0x4165F0);
int gaddrof(CCarCtrl::GenerateOneRandomCar) = GLOBAL_ADDRESS_BY_VERSION(0x4165F0, 0x4165F0, 0x4165F0);

void CCarCtrl::GenerateOneRandomCar() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::GenerateOneRandomCar));
}

int addrof(CCarCtrl::GenerateRandomCars) = ADDRESS_BY_VERSION(0x416580, 0x416580, 0x416580);
int gaddrof(CCarCtrl::GenerateRandomCars) = GLOBAL_ADDRESS_BY_VERSION(0x416580, 0x416580, 0x416580);

void CCarCtrl::GenerateRandomCars() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::GenerateRandomCars));
}

int addrof(CCarCtrl::Init) = ADDRESS_BY_VERSION(0x41D280, 0x41D280, 0x41D280);
int gaddrof(CCarCtrl::Init) = GLOBAL_ADDRESS_BY_VERSION(0x41D280, 0x41D280, 0x41D280);

void CCarCtrl::Init() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::Init));
}

int addrof(CCarCtrl::IsThisVehicleInteresting) = ADDRESS_BY_VERSION(0x41F780, 0x41F780, 0x41F780);
int gaddrof(CCarCtrl::IsThisVehicleInteresting) = GLOBAL_ADDRESS_BY_VERSION(0x41F780, 0x41F780, 0x41F780);

bool CCarCtrl::IsThisVehicleInteresting(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCarCtrl::IsThisVehicleInteresting), vehicle);
}

int addrof(CCarCtrl::JoinCarWithRoadSystem) = ADDRESS_BY_VERSION(0x41F820, 0x41F820, 0x41F820);
int gaddrof(CCarCtrl::JoinCarWithRoadSystem) = GLOBAL_ADDRESS_BY_VERSION(0x41F820, 0x41F820, 0x41F820);

void CCarCtrl::JoinCarWithRoadSystem(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::JoinCarWithRoadSystem), vehicle);
}

int addrof(CCarCtrl::JoinCarWithRoadSystemGotoCoors) = ADDRESS_BY_VERSION(0x41FA00, 0x41FA00, 0x41FA00);
int gaddrof(CCarCtrl::JoinCarWithRoadSystemGotoCoors) = GLOBAL_ADDRESS_BY_VERSION(0x41FA00, 0x41FA00, 0x41FA00);

bool CCarCtrl::JoinCarWithRoadSystemGotoCoors(CVehicle *vehicle, CVector point, bool isProperNow) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *, CVector, bool>(gaddrof(CCarCtrl::JoinCarWithRoadSystemGotoCoors), vehicle, point, isProperNow);
}

int addrof(CCarCtrl::MapCouldMoveInThisArea) = ADDRESS_BY_VERSION(0x4203B0, 0x4203B0, 0x4203B0);
int gaddrof(CCarCtrl::MapCouldMoveInThisArea) = GLOBAL_ADDRESS_BY_VERSION(0x4203B0, 0x4203B0, 0x4203B0);

bool CCarCtrl::MapCouldMoveInThisArea(float x, float y) {
    return plugin::CallAndReturnDynGlobal<bool, float, float>(gaddrof(CCarCtrl::MapCouldMoveInThisArea), x, y);
}

int addrof(CCarCtrl::PickNextNodeAccordingStrategy) = ADDRESS_BY_VERSION(0x41BA50, 0x41BA50, 0x41BA50);
int gaddrof(CCarCtrl::PickNextNodeAccordingStrategy) = GLOBAL_ADDRESS_BY_VERSION(0x41BA50, 0x41BA50, 0x41BA50);

bool CCarCtrl::PickNextNodeAccordingStrategy(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCarCtrl::PickNextNodeAccordingStrategy), vehicle);
}

int addrof(CCarCtrl::PickNextNodeRandomly) = ADDRESS_BY_VERSION(0x41BAE0, 0x41BAE0, 0x41BAE0);
int gaddrof(CCarCtrl::PickNextNodeRandomly) = GLOBAL_ADDRESS_BY_VERSION(0x41BAE0, 0x41BAE0, 0x41BAE0);

void CCarCtrl::PickNextNodeRandomly(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::PickNextNodeRandomly), vehicle);
}

int addrof(CCarCtrl::PickNextNodeToChaseCar) = ADDRESS_BY_VERSION(0x41C480, 0x41C480, 0x41C480);
int gaddrof(CCarCtrl::PickNextNodeToChaseCar) = GLOBAL_ADDRESS_BY_VERSION(0x41C480, 0x41C480, 0x41C480);

void CCarCtrl::PickNextNodeToChaseCar(CVehicle *vehicle, float targetX, float targetY, CVehicle *target) {
    plugin::CallDynGlobal<CVehicle *, float, float, CVehicle *>(gaddrof(CCarCtrl::PickNextNodeToChaseCar), vehicle, targetX, targetY, target);
}

int addrof(CCarCtrl::PickNextNodeToFollowPath) = ADDRESS_BY_VERSION(0x41CD50, 0x41CD50, 0x41CD50);
int gaddrof(CCarCtrl::PickNextNodeToFollowPath) = GLOBAL_ADDRESS_BY_VERSION(0x41CD50, 0x41CD50, 0x41CD50);

bool CCarCtrl::PickNextNodeToFollowPath(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CCarCtrl::PickNextNodeToFollowPath), vehicle);
}

int addrof(CCarCtrl::PossiblyRemoveVehicle) = ADDRESS_BY_VERSION(0x418430, 0x418430, 0x418430);
int gaddrof(CCarCtrl::PossiblyRemoveVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x418430, 0x418430, 0x418430);

void CCarCtrl::PossiblyRemoveVehicle(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::PossiblyRemoveVehicle), vehicle);
}

int addrof(CCarCtrl::ReInit) = ADDRESS_BY_VERSION(0x41D3B0, 0x41D3B0, 0x41D3B0);
int gaddrof(CCarCtrl::ReInit) = GLOBAL_ADDRESS_BY_VERSION(0x41D3B0, 0x41D3B0, 0x41D3B0);

void CCarCtrl::ReInit() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::ReInit));
}

int addrof(CCarCtrl::RegisterVehicleOfInterest) = ADDRESS_BY_VERSION(0x41F6E0, 0x41F6E0, 0x41F6E0);
int gaddrof(CCarCtrl::RegisterVehicleOfInterest) = GLOBAL_ADDRESS_BY_VERSION(0x41F6E0, 0x41F6E0, 0x41F6E0);

void CCarCtrl::RegisterVehicleOfInterest(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::RegisterVehicleOfInterest), vehicle);
}

int addrof(CCarCtrl::RemoveDistantCars) = ADDRESS_BY_VERSION(0x418320, 0x418320, 0x418320);
int gaddrof(CCarCtrl::RemoveDistantCars) = GLOBAL_ADDRESS_BY_VERSION(0x418320, 0x418320, 0x418320);

void CCarCtrl::RemoveDistantCars() {
    plugin::CallDynGlobal(gaddrof(CCarCtrl::RemoveDistantCars));
}

int addrof(CCarCtrl::RemoveFromInterestingVehicleList) = ADDRESS_BY_VERSION(0x41F7A0, 0x41F7A0, 0x41F7A0);
int gaddrof(CCarCtrl::RemoveFromInterestingVehicleList) = GLOBAL_ADDRESS_BY_VERSION(0x41F7A0, 0x41F7A0, 0x41F7A0);

void CCarCtrl::RemoveFromInterestingVehicleList(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::RemoveFromInterestingVehicleList), vehicle);
}

int addrof(CCarCtrl::ScanForPedDanger) = ADDRESS_BY_VERSION(0x418F40, 0x418F40, 0x418F40);
int gaddrof(CCarCtrl::ScanForPedDanger) = GLOBAL_ADDRESS_BY_VERSION(0x418F40, 0x418F40, 0x418F40);

void CCarCtrl::ScanForPedDanger(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::ScanForPedDanger), vehicle);
}

int addrof(CCarCtrl::SlowCarDownForCarsSectorList) = ADDRESS_BY_VERSION(0x419B40, 0x419B40, 0x419B40);
int gaddrof(CCarCtrl::SlowCarDownForCarsSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x419B40, 0x419B40, 0x419B40);

void CCarCtrl::SlowCarDownForCarsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pSpeed, float curSpeed) {
    plugin::CallDynGlobal<CPtrList &, CVehicle *, float, float, float, float, float *, float>(gaddrof(CCarCtrl::SlowCarDownForCarsSectorList), list, vehicle, x_inf, y_inf, x_sup, y_sup, pSpeed, curSpeed);
}

int addrof(CCarCtrl::SlowCarDownForOtherCar) = ADDRESS_BY_VERSION(0x419C60, 0x419C60, 0x419C60);
int gaddrof(CCarCtrl::SlowCarDownForOtherCar) = GLOBAL_ADDRESS_BY_VERSION(0x419C60, 0x419C60, 0x419C60);

void CCarCtrl::SlowCarDownForOtherCar(CEntity *entity, CVehicle *vehicle, float *pSpeed, float curSpeed) {
    plugin::CallDynGlobal<CEntity *, CVehicle *, float *, float>(gaddrof(CCarCtrl::SlowCarDownForOtherCar), entity, vehicle, pSpeed, curSpeed);
}

int addrof(CCarCtrl::SlowCarDownForPedsSectorList) = ADDRESS_BY_VERSION(0x419300, 0x419300, 0x419300);
int gaddrof(CCarCtrl::SlowCarDownForPedsSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x419300, 0x419300, 0x419300);

void CCarCtrl::SlowCarDownForPedsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pSpeed, float curSpeed) {
    plugin::CallDynGlobal<CPtrList &, CVehicle *, float, float, float, float, float *, float>(gaddrof(CCarCtrl::SlowCarDownForPedsSectorList), list, vehicle, x_inf, y_inf, x_sup, y_sup, pSpeed, curSpeed);
}

int addrof(CCarCtrl::SlowCarOnRailsDownForTrafficAndLights) = ADDRESS_BY_VERSION(0x4191E0, 0x4191E0, 0x4191E0);
int gaddrof(CCarCtrl::SlowCarOnRailsDownForTrafficAndLights) = GLOBAL_ADDRESS_BY_VERSION(0x4191E0, 0x4191E0, 0x4191E0);

void CCarCtrl::SlowCarOnRailsDownForTrafficAndLights(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::SlowCarOnRailsDownForTrafficAndLights), vehicle);
}

int addrof(CCarCtrl::SteerAIBoatWithPhysics) = ADDRESS_BY_VERSION(0x41E250, 0x41E250, 0x41E250);
int gaddrof(CCarCtrl::SteerAIBoatWithPhysics) = GLOBAL_ADDRESS_BY_VERSION(0x41E250, 0x41E250, 0x41E250);

void CCarCtrl::SteerAIBoatWithPhysics(CBoat *boat) {
    plugin::CallDynGlobal<CBoat *>(gaddrof(CCarCtrl::SteerAIBoatWithPhysics), boat);
}

int addrof(CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget) = ADDRESS_BY_VERSION(0x41F4A0, 0x41F4A0, 0x41F4A0);
int gaddrof(CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget) = GLOBAL_ADDRESS_BY_VERSION(0x41F4A0, 0x41F4A0, 0x41F4A0);

void CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget(CBoat *boat, float targetX, float targetY, float *steerAngle, float *gasPedal, float *breakPedal) {
    plugin::CallDynGlobal<CBoat *, float, float, float *, float *, float *>(gaddrof(CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget), boat, targetX, targetY, steerAngle, gasPedal, breakPedal);
}

int addrof(CCarCtrl::SteerAICarWithPhysics) = ADDRESS_BY_VERSION(0x41DA60, 0x41DA60, 0x41DA60);
int gaddrof(CCarCtrl::SteerAICarWithPhysics) = GLOBAL_ADDRESS_BY_VERSION(0x41DA60, 0x41DA60, 0x41DA60);

void CCarCtrl::SteerAICarWithPhysics(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::SteerAICarWithPhysics), vehicle);
}

int addrof(CCarCtrl::SteerAICarWithPhysicsFollowPath) = ADDRESS_BY_VERSION(0x41E310, 0x41E310, 0x41E310);
int gaddrof(CCarCtrl::SteerAICarWithPhysicsFollowPath) = GLOBAL_ADDRESS_BY_VERSION(0x41E310, 0x41E310, 0x41E310);

void CCarCtrl::SteerAICarWithPhysicsFollowPath(CVehicle *vehicle, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake) {
    plugin::CallDynGlobal<CVehicle *, float *, float *, float *, bool *>(gaddrof(CCarCtrl::SteerAICarWithPhysicsFollowPath), vehicle, steerAngle, gasPedal, breakPedal, bHandBrake);
}

int addrof(CCarCtrl::SteerAICarWithPhysicsHeadingForTarget) = ADDRESS_BY_VERSION(0x41EDC0, 0x41EDC0, 0x41EDC0);
int gaddrof(CCarCtrl::SteerAICarWithPhysicsHeadingForTarget) = GLOBAL_ADDRESS_BY_VERSION(0x41EDC0, 0x41EDC0, 0x41EDC0);

void CCarCtrl::SteerAICarWithPhysicsHeadingForTarget(CVehicle *vehicle, CPhysical *target, float targetX, float targetY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake) {
    plugin::CallDynGlobal<CVehicle *, CPhysical *, float, float, float *, float *, float *, bool *>(gaddrof(CCarCtrl::SteerAICarWithPhysicsHeadingForTarget), vehicle, target, targetX, targetY, steerAngle, gasPedal, breakPedal, bHandBrake);
}

int addrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget) = ADDRESS_BY_VERSION(0x41F130, 0x41F130, 0x41F130);
int gaddrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget) = GLOBAL_ADDRESS_BY_VERSION(0x41F130, 0x41F130, 0x41F130);

void CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget(CVehicle *vehicle, float targetX, float targetY, float targetSpeedX, float targetSpeedY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake) {
    plugin::CallDynGlobal<CVehicle *, float, float, float, float, float *, float *, float *, bool *>(gaddrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget), vehicle, targetX, targetY, targetSpeedX, targetSpeedY, steerAngle, gasPedal, breakPedal, bHandBrake);
}

int addrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop) = ADDRESS_BY_VERSION(0x41F220, 0x41F220, 0x41F220);
int gaddrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop) = GLOBAL_ADDRESS_BY_VERSION(0x41F220, 0x41F220, 0x41F220);

void CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop(CVehicle *vehicle, float targetX, float targetY, float targetSpeedX, float targetSpeedY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake) {
    plugin::CallDynGlobal<CVehicle *, float, float, float, float, float *, float *, float *, bool *>(gaddrof(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop), vehicle, targetX, targetY, targetSpeedX, targetSpeedY, steerAngle, gasPedal, breakPedal, bHandBrake);
}

int addrof(CCarCtrl::SteerAICarWithPhysics_OnlyMission) = ADDRESS_BY_VERSION(0x41DD90, 0x41DD90, 0x41DD90);
int gaddrof(CCarCtrl::SteerAICarWithPhysics_OnlyMission) = GLOBAL_ADDRESS_BY_VERSION(0x41DD90, 0x41DD90, 0x41DD90);

void CCarCtrl::SteerAICarWithPhysics_OnlyMission(CVehicle *vehicle, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake) {
    plugin::CallDynGlobal<CVehicle *, float *, float *, float *, bool *>(gaddrof(CCarCtrl::SteerAICarWithPhysics_OnlyMission), vehicle, steerAngle, gasPedal, breakPedal, bHandBrake);
}

int addrof(CCarCtrl::SwitchVehicleToRealPhysics) = ADDRESS_BY_VERSION(0x41F7F0, 0x41F7F0, 0x41F7F0);
int gaddrof(CCarCtrl::SwitchVehicleToRealPhysics) = GLOBAL_ADDRESS_BY_VERSION(0x41F7F0, 0x41F7F0, 0x41F7F0);

void CCarCtrl::SwitchVehicleToRealPhysics(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::SwitchVehicleToRealPhysics), vehicle);
}

int addrof(CCarCtrl::TestCollisionBetween2MovingRects) = ADDRESS_BY_VERSION(0x41A020, 0x41A020, 0x41A020);
int gaddrof(CCarCtrl::TestCollisionBetween2MovingRects) = GLOBAL_ADDRESS_BY_VERSION(0x41A020, 0x41A020, 0x41A020);

float CCarCtrl::TestCollisionBetween2MovingRects(CVehicle *vehicleA, CVehicle *vehicleB, float projectionX, float projectionY, CVector *pForwardA, CVector *pForwardB, unsigned char id) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *, CVehicle *, float, float, CVector *, CVector *, unsigned char>(gaddrof(CCarCtrl::TestCollisionBetween2MovingRects), vehicleA, vehicleB, projectionX, projectionY, pForwardA, pForwardB, id);
}

int addrof(CCarCtrl::ThisRoadObjectCouldMove) = ADDRESS_BY_VERSION(0x420380, 0x420380, 0x420380);
int gaddrof(CCarCtrl::ThisRoadObjectCouldMove) = GLOBAL_ADDRESS_BY_VERSION(0x420380, 0x420380, 0x420380);

bool CCarCtrl::ThisRoadObjectCouldMove(unsigned int objectModelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int>(gaddrof(CCarCtrl::ThisRoadObjectCouldMove), objectModelIndex);
}

int addrof(CCarCtrl::UpdateCarCount) = ADDRESS_BY_VERSION(0x4202E0, 0x4202E0, 0x4202E0);
int gaddrof(CCarCtrl::UpdateCarCount) = GLOBAL_ADDRESS_BY_VERSION(0x4202E0, 0x4202E0, 0x4202E0);

void CCarCtrl::UpdateCarCount(CVehicle *vehicle, bool remove) {
    plugin::CallDynGlobal<CVehicle *, bool>(gaddrof(CCarCtrl::UpdateCarCount), vehicle, remove);
}

int addrof(CCarCtrl::UpdateCarOnRails) = ADDRESS_BY_VERSION(0x418880, 0x418880, 0x418880);
int gaddrof(CCarCtrl::UpdateCarOnRails) = GLOBAL_ADDRESS_BY_VERSION(0x418880, 0x418880, 0x418880);

void CCarCtrl::UpdateCarOnRails(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarCtrl::UpdateCarOnRails), vehicle);
}

int addrof(CCarCtrl::WeaveForObject) = ADDRESS_BY_VERSION(0x41B640, 0x41B640, 0x41B640);
int gaddrof(CCarCtrl::WeaveForObject) = GLOBAL_ADDRESS_BY_VERSION(0x41B640, 0x41B640, 0x41B640);

void CCarCtrl::WeaveForObject(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CEntity *, CVehicle *, float *, float *>(gaddrof(CCarCtrl::WeaveForObject), entity, vehicle, pAngleToWeaveLeft, pAngleToWeaveRight);
}

int addrof(CCarCtrl::WeaveForOtherCar) = ADDRESS_BY_VERSION(0x41ACF0, 0x41ACF0, 0x41ACF0);
int gaddrof(CCarCtrl::WeaveForOtherCar) = GLOBAL_ADDRESS_BY_VERSION(0x41ACF0, 0x41ACF0, 0x41ACF0);

void CCarCtrl::WeaveForOtherCar(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CEntity *, CVehicle *, float *, float *>(gaddrof(CCarCtrl::WeaveForOtherCar), entity, vehicle, pAngleToWeaveLeft, pAngleToWeaveRight);
}

int addrof(CCarCtrl::WeaveForPed) = ADDRESS_BY_VERSION(0x41B2D0, 0x41B2D0, 0x41B2D0);
int gaddrof(CCarCtrl::WeaveForPed) = GLOBAL_ADDRESS_BY_VERSION(0x41B2D0, 0x41B2D0, 0x41B2D0);

void CCarCtrl::WeaveForPed(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CEntity *, CVehicle *, float *, float *>(gaddrof(CCarCtrl::WeaveForPed), entity, vehicle, pAngleToWeaveLeft, pAngleToWeaveRight);
}

int addrof(CCarCtrl::WeaveThroughCarsSectorList) = ADDRESS_BY_VERSION(0x41ABB0, 0x41ABB0, 0x41ABB0);
int gaddrof(CCarCtrl::WeaveThroughCarsSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x41ABB0, 0x41ABB0, 0x41ABB0);

void CCarCtrl::WeaveThroughCarsSectorList(CPtrList &list, CVehicle *vehicle, CPhysical *target, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CPtrList &, CVehicle *, CPhysical *, float, float, float, float, float *, float *>(gaddrof(CCarCtrl::WeaveThroughCarsSectorList), list, vehicle, target, x_inf, y_inf, x_sup, y_sup, pAngleToWeaveLeft, pAngleToWeaveRight);
}

int addrof(CCarCtrl::WeaveThroughObjectsSectorList) = ADDRESS_BY_VERSION(0x41B520, 0x41B520, 0x41B520);
int gaddrof(CCarCtrl::WeaveThroughObjectsSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x41B520, 0x41B520, 0x41B520);

void CCarCtrl::WeaveThroughObjectsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CPtrList &, CVehicle *, float, float, float, float, float *, float *>(gaddrof(CCarCtrl::WeaveThroughObjectsSectorList), list, vehicle, x_inf, y_inf, x_sup, y_sup, pAngleToWeaveLeft, pAngleToWeaveRight);
}

int addrof(CCarCtrl::WeaveThroughPedsSectorList) = ADDRESS_BY_VERSION(0x41B1B0, 0x41B1B0, 0x41B1B0);
int gaddrof(CCarCtrl::WeaveThroughPedsSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x41B1B0, 0x41B1B0, 0x41B1B0);

void CCarCtrl::WeaveThroughPedsSectorList(CPtrList &list, CVehicle *vehicle, CPhysical *target, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight) {
    plugin::CallDynGlobal<CPtrList &, CVehicle *, CPhysical *, float, float, float, float, float *, float *>(gaddrof(CCarCtrl::WeaveThroughPedsSectorList), list, vehicle, target, x_inf, y_inf, x_sup, y_sup, pAngleToWeaveLeft, pAngleToWeaveRight);
}
