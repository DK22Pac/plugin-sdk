/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarAI.h"

PLUGIN_SOURCE_FILE

int addrof(CCarAI::AddAmbulanceOccupants) = ADDRESS_BY_VERSION(0x419B90, 0x419B90, 0);
int gaddrof(CCarAI::AddAmbulanceOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x419B90, 0x419B90, 0);

void CCarAI::AddAmbulanceOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddAmbulanceOccupants), vehicle);
}

int addrof(CCarAI::AddFiretruckOccupants) = ADDRESS_BY_VERSION(0x419B70, 0x419B70, 0);
int gaddrof(CCarAI::AddFiretruckOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x419B70, 0x419B70, 0);

void CCarAI::AddFiretruckOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddFiretruckOccupants), vehicle);
}

int addrof(CCarAI::AddPoliceCarOccupants) = ADDRESS_BY_VERSION(0x419BB0, 0x419BB0, 0);
int gaddrof(CCarAI::AddPoliceCarOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x419BB0, 0x419BB0, 0);

void CCarAI::AddPoliceCarOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddPoliceCarOccupants), vehicle);
}

int addrof(CCarAI::CarHasReasonToStop) = ADDRESS_BY_VERSION(0x419E70, 0x419E70, 0);
int gaddrof(CCarAI::CarHasReasonToStop) = GLOBAL_ADDRESS_BY_VERSION(0x419E70, 0x419E70, 0);

void CCarAI::CarHasReasonToStop(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::CarHasReasonToStop), vehicle);
}

int addrof(CCarAI::FindPoliceBoatMissionForWantedLevel) = ADDRESS_BY_VERSION(0x419880, 0x419880, 0);
int gaddrof(CCarAI::FindPoliceBoatMissionForWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x419880, 0x419880, 0);

eCarMission CCarAI::FindPoliceBoatMissionForWantedLevel() {
    return plugin::CallAndReturnDynGlobal<eCarMission>(gaddrof(CCarAI::FindPoliceBoatMissionForWantedLevel));
}

int addrof(CCarAI::FindPoliceCarMissionForWantedLevel) = ADDRESS_BY_VERSION(0x4198C0, 0x4198C0, 0);
int gaddrof(CCarAI::FindPoliceCarMissionForWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4198C0, 0x4198C0, 0);

eCarMission CCarAI::FindPoliceCarMissionForWantedLevel() {
    return plugin::CallAndReturnDynGlobal<eCarMission>(gaddrof(CCarAI::FindPoliceCarMissionForWantedLevel));
}

int addrof(CCarAI::FindPoliceCarSpeedForWantedLevel) = ADDRESS_BY_VERSION(0x4196E0, 0x4196E0, 0);
int gaddrof(CCarAI::FindPoliceCarSpeedForWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4196E0, 0x4196E0, 0);

int CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle *>(gaddrof(CCarAI::FindPoliceCarSpeedForWantedLevel), vehicle);
}

int addrof(CCarAI::GetCarToGoToCoors) = ADDRESS_BY_VERSION(0x419D20, 0x419D20, 0);
int gaddrof(CCarAI::GetCarToGoToCoors) = GLOBAL_ADDRESS_BY_VERSION(0x419D20, 0x419D20, 0);

float CCarAI::GetCarToGoToCoors(CVehicle *vehicle, CVector *coors) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *, CVector *>(gaddrof(CCarAI::GetCarToGoToCoors), vehicle, coors);
}

int addrof(CCarAI::GetCarToParkAtCoors) = ADDRESS_BY_VERSION(0x419CC0, 0x419CC0, 0);
int gaddrof(CCarAI::GetCarToParkAtCoors) = GLOBAL_ADDRESS_BY_VERSION(0x419CC0, 0x419CC0, 0);

float CCarAI::GetCarToParkAtCoors(CVehicle *vehicle, CVector *coors) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *, CVector *>(gaddrof(CCarAI::GetCarToParkAtCoors), vehicle, coors);
}

int addrof(CCarAI::MakeWayForCarWithSiren) = ADDRESS_BY_VERSION(0x419040, 0x419040, 0);
int gaddrof(CCarAI::MakeWayForCarWithSiren) = GLOBAL_ADDRESS_BY_VERSION(0x419040, 0x419040, 0);

void CCarAI::MakeWayForCarWithSiren(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::MakeWayForCarWithSiren), vehicle);
}

int addrof(CCarAI::MellowOutChaseSpeed) = ADDRESS_BY_VERSION(0x4193C0, 0x4193C0, 0);
int gaddrof(CCarAI::MellowOutChaseSpeed) = GLOBAL_ADDRESS_BY_VERSION(0x4193C0, 0x4193C0, 0);

void CCarAI::MellowOutChaseSpeed(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::MellowOutChaseSpeed), vehicle);
}

int addrof(CCarAI::MellowOutChaseSpeedBoat) = ADDRESS_BY_VERSION(0x419350, 0x419350, 0);
int gaddrof(CCarAI::MellowOutChaseSpeedBoat) = GLOBAL_ADDRESS_BY_VERSION(0x419350, 0x419350, 0);

void CCarAI::MellowOutChaseSpeedBoat(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::MellowOutChaseSpeedBoat), vehicle);
}

int addrof(CCarAI::TellCarToRamOtherCar) = ADDRESS_BY_VERSION(0x419940, 0x419940, 0);
int gaddrof(CCarAI::TellCarToRamOtherCar) = GLOBAL_ADDRESS_BY_VERSION(0x419940, 0x419940, 0);

void CCarAI::TellCarToRamOtherCar(CVehicle *vehicle, CVehicle *ramVehicle) {
    plugin::CallDynGlobal<CVehicle *, CVehicle *>(gaddrof(CCarAI::TellCarToRamOtherCar), vehicle, ramVehicle);
}

int addrof(CCarAI::TellOccupantsToFleeCar) = ADDRESS_BY_VERSION(0x419990, 0x419990, 0);
int gaddrof(CCarAI::TellOccupantsToFleeCar) = GLOBAL_ADDRESS_BY_VERSION(0x419990, 0x419990, 0);

void CCarAI::TellOccupantsToFleeCar(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::TellOccupantsToFleeCar), vehicle);
}

int addrof(CCarAI::TellOccupantsToLeaveCar) = ADDRESS_BY_VERSION(0x419A80, 0x419A80, 0);
int gaddrof(CCarAI::TellOccupantsToLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x419A80, 0x419A80, 0);

void CCarAI::TellOccupantsToLeaveCar(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::TellOccupantsToLeaveCar), vehicle);
}

int addrof(CCarAI::UpdateCarAI) = ADDRESS_BY_VERSION(0x419E80, 0x419E80, 0);
int gaddrof(CCarAI::UpdateCarAI) = GLOBAL_ADDRESS_BY_VERSION(0x419E80, 0x419E80, 0);

void CCarAI::UpdateCarAI(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::UpdateCarAI), vehicle);
}
