/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarAI.h"

// Converted from cdecl void CCarAI::AddAmbulanceOccupants(CVehicle *vehicle) 0x415CE0
void CCarAI::AddAmbulanceOccupants(CVehicle* vehicle) {
    plugin::Call<0x415CE0, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::AddFiretruckOccupants(CVehicle *vehicle) 0x415D00
void CCarAI::AddFiretruckOccupants(CVehicle* vehicle) {
    plugin::Call<0x415D00, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::AddPoliceCarOccupants(CVehicle *vehicle) 0x415C60
void CCarAI::AddPoliceCarOccupants(CVehicle* vehicle) {
    plugin::Call<0x415C60, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::CarHasReasonToStop(CVehicle *vehicle) 0x415B00
void CCarAI::CarHasReasonToStop(CVehicle* vehicle) {
    plugin::Call<0x415B00, CVehicle*>(vehicle);
}

// Converted from cdecl char CCarAI::FindPoliceCarMissionForWantedLevel(void) 0x415E30 
char CCarAI::FindPoliceCarMissionForWantedLevel() {
    return plugin::CallAndReturn<char, 0x415E30>();
}

// Converted from cdecl float CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle) 0x415EB0
float CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle* vehicle) {
    return plugin::CallAndReturn<float, 0x415EB0, CVehicle*>(vehicle);
}

// Converted from cdecl float CCarAI::FindSwitchDistanceClose(CVehicle *vehicle) 0x413E20
float CCarAI::FindSwitchDistanceClose(CVehicle* vehicle) {
    return plugin::CallAndReturn<float, 0x413E20, CVehicle*>(vehicle);
}

// Converted from cdecl float CCarAI::FindSwitchDistanceFar(CVehicle *vehicle) 0x413E30
float CCarAI::FindSwitchDistanceFar(CVehicle* vehicle) {
    return plugin::CallAndReturn<float, 0x413E30, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::GetCarToGoToCoors(CVehicle *vehicle,CVector *coors) 0x415B10 
void CCarAI::GetCarToGoToCoors(CVehicle* vehicle, CVector* coors) {
    plugin::Call<0x415B10, CVehicle*, CVector*>(vehicle, coors);
}

// Converted from cdecl void CCarAI::MakeWayForCarWithSiren(CVehicle *vehicle) 0x416280
void CCarAI::MakeWayForCarWithSiren(CVehicle* vehicle) {
    plugin::Call<0x416280, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::MellowOutChaseSpeed(CVehicle *vehicle) 0x416050
void CCarAI::MellowOutChaseSpeed(CVehicle* vehicle) {
    plugin::Call<0x416050, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::TellCarToBlockOtherCar(CVehicle *vehicle,CVehicle *blockVehicle) 0x415DE0
void CCarAI::TellCarToBlockOtherCar(CVehicle* vehicle, CVehicle* blockVehicle) {
    plugin::Call<0x415DE0, CVehicle*, CVehicle*>(vehicle, blockVehicle);
}

// Converted from cdecl void CCarAI::TellCarToRamOtherCar(CVehicle *vehicle,CVehicle *ramVehicle) 0x415D90
void CCarAI::TellCarToRamOtherCar(CVehicle* vehicle, CVehicle* ramVehicle) {
    plugin::Call<0x415D90, CVehicle*, CVehicle*>(vehicle, ramVehicle);
}

// Converted from cdecl void CCarAI::TellOccupantsToLeaveCar(CVehicle *vehicle) 0x415D20
void CCarAI::TellOccupantsToLeaveCar(CVehicle* vehicle) {
    plugin::Call<0x415D20, CVehicle*>(vehicle);
}

// Converted from cdecl void CCarAI::UpdateCarAI(CVehicle *vehicle) 0x413E50
void CCarAI::UpdateCarAI(CVehicle* vehicle) {
    plugin::Call<0x413E50, CVehicle*>(vehicle);
}
