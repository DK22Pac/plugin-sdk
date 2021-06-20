/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarAI.h"

PLUGIN_SOURCE_FILE

int addrof(CCarAI::AddAmbulanceOccupants) = ADDRESS_BY_VERSION(0x415CE0, 0x415CE0, 0x415CE0);
int gaddrof(CCarAI::AddAmbulanceOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x415CE0, 0x415CE0, 0x415CE0);

void CCarAI::AddAmbulanceOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddAmbulanceOccupants), vehicle);
}

int addrof(CCarAI::AddFiretruckOccupants) = ADDRESS_BY_VERSION(0x415D00, 0x415D00, 0x415D00);
int gaddrof(CCarAI::AddFiretruckOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x415D00, 0x415D00, 0x415D00);

void CCarAI::AddFiretruckOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddFiretruckOccupants), vehicle);
}

int addrof(CCarAI::AddPoliceCarOccupants) = ADDRESS_BY_VERSION(0x415C60, 0x415C60, 0x415C60);
int gaddrof(CCarAI::AddPoliceCarOccupants) = GLOBAL_ADDRESS_BY_VERSION(0x415C60, 0x415C60, 0x415C60);

void CCarAI::AddPoliceCarOccupants(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::AddPoliceCarOccupants), vehicle);
}

int addrof(CCarAI::CarHasReasonToStop) = ADDRESS_BY_VERSION(0x415B00, 0x415B00, 0x415B00);
int gaddrof(CCarAI::CarHasReasonToStop) = GLOBAL_ADDRESS_BY_VERSION(0x415B00, 0x415B00, 0x415B00);

void CCarAI::CarHasReasonToStop(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::CarHasReasonToStop), vehicle);
}

int addrof(CCarAI::FindPoliceCarMissionForWantedLevel) = ADDRESS_BY_VERSION(0x415E30, 0x415E30, 0x415E30);
int gaddrof(CCarAI::FindPoliceCarMissionForWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x415E30, 0x415E30, 0x415E30);

eCarMission CCarAI::FindPoliceCarMissionForWantedLevel() {
    return plugin::CallAndReturnDynGlobal<eCarMission>(gaddrof(CCarAI::FindPoliceCarMissionForWantedLevel));
}

int addrof(CCarAI::FindPoliceCarSpeedForWantedLevel) = ADDRESS_BY_VERSION(0x415EB0, 0x415EB0, 0x415EB0);
int gaddrof(CCarAI::FindPoliceCarSpeedForWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x415EB0, 0x415EB0, 0x415EB0);

int CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle *>(gaddrof(CCarAI::FindPoliceCarSpeedForWantedLevel), vehicle);
}

int addrof(CCarAI::FindSwitchDistanceClose) = ADDRESS_BY_VERSION(0x413E20, 0x413E20, 0x413E20);
int gaddrof(CCarAI::FindSwitchDistanceClose) = GLOBAL_ADDRESS_BY_VERSION(0x413E20, 0x413E20, 0x413E20);

float CCarAI::FindSwitchDistanceClose() {
    return plugin::CallAndReturnDynGlobal<float>(gaddrof(CCarAI::FindSwitchDistanceClose));
}

int addrof(CCarAI::FindSwitchDistanceFar) = ADDRESS_BY_VERSION(0x413E30, 0x413E30, 0x413E30);
int gaddrof(CCarAI::FindSwitchDistanceFar) = GLOBAL_ADDRESS_BY_VERSION(0x413E30, 0x413E30, 0x413E30);

float CCarAI::FindSwitchDistanceFar(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *>(gaddrof(CCarAI::FindSwitchDistanceFar), vehicle);
}

int addrof(CCarAI::GetCarToGoToCoors) = ADDRESS_BY_VERSION(0x415B10, 0x415B10, 0x415B10);
int gaddrof(CCarAI::GetCarToGoToCoors) = GLOBAL_ADDRESS_BY_VERSION(0x415B10, 0x415B10, 0x415B10);

float CCarAI::GetCarToGoToCoors(CVehicle *vehicle, CVector *coors) {
    return plugin::CallAndReturnDynGlobal<float, CVehicle *, CVector *>(gaddrof(CCarAI::GetCarToGoToCoors), vehicle, coors);
}

int addrof(CCarAI::MakeWayForCarWithSiren) = ADDRESS_BY_VERSION(0x416280, 0x416280, 0x416280);
int gaddrof(CCarAI::MakeWayForCarWithSiren) = GLOBAL_ADDRESS_BY_VERSION(0x416280, 0x416280, 0x416280);

void CCarAI::MakeWayForCarWithSiren(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::MakeWayForCarWithSiren), vehicle);
}

int addrof(CCarAI::MellowOutChaseSpeed) = ADDRESS_BY_VERSION(0x416050, 0x416050, 0x416050);
int gaddrof(CCarAI::MellowOutChaseSpeed) = GLOBAL_ADDRESS_BY_VERSION(0x416050, 0x416050, 0x416050);

void CCarAI::MellowOutChaseSpeed(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::MellowOutChaseSpeed), vehicle);
}

int addrof(CCarAI::TellCarToBlockOtherCar) = ADDRESS_BY_VERSION(0x415DE0, 0x415DE0, 0x415DE0);
int gaddrof(CCarAI::TellCarToBlockOtherCar) = GLOBAL_ADDRESS_BY_VERSION(0x415DE0, 0x415DE0, 0x415DE0);

void CCarAI::TellCarToBlockOtherCar(CVehicle *vehicle, CVehicle *blockVehicle) {
    plugin::CallDynGlobal<CVehicle *, CVehicle *>(gaddrof(CCarAI::TellCarToBlockOtherCar), vehicle, blockVehicle);
}

int addrof(CCarAI::TellCarToRamOtherCar) = ADDRESS_BY_VERSION(0x415D90, 0x415D90, 0x415D90);
int gaddrof(CCarAI::TellCarToRamOtherCar) = GLOBAL_ADDRESS_BY_VERSION(0x415D90, 0x415D90, 0x415D90);

void CCarAI::TellCarToRamOtherCar(CVehicle *vehicle, CVehicle *ramVehicle) {
    plugin::CallDynGlobal<CVehicle *, CVehicle *>(gaddrof(CCarAI::TellCarToRamOtherCar), vehicle, ramVehicle);
}

int addrof(CCarAI::TellOccupantsToLeaveCar) = ADDRESS_BY_VERSION(0x415D20, 0x415D20, 0x415D20);
int gaddrof(CCarAI::TellOccupantsToLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x415D20, 0x415D20, 0x415D20);

void CCarAI::TellOccupantsToLeaveCar(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::TellOccupantsToLeaveCar), vehicle);
}

int addrof(CCarAI::UpdateCarAI) = ADDRESS_BY_VERSION(0x413E50, 0x413E50, 0x413E50);
int gaddrof(CCarAI::UpdateCarAI) = GLOBAL_ADDRESS_BY_VERSION(0x413E50, 0x413E50, 0x413E50);

void CCarAI::UpdateCarAI(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CCarAI::UpdateCarAI), vehicle);
}
