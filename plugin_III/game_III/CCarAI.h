/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVehicle.h"

class CCarAI {
public:
    // static functions
    static void AddAmbulanceOccupants(CVehicle* vehicle);
    static void AddFiretruckOccupants(CVehicle* vehicle);
    static void AddPoliceCarOccupants(CVehicle* vehicle);
    static void CarHasReasonToStop(CVehicle* vehicle);
    static char FindPoliceCarMissionForWantedLevel();
    static float FindPoliceCarSpeedForWantedLevel(CVehicle* vehicle);
    static float FindSwitchDistanceClose(CVehicle* vehicle);
    static float FindSwitchDistanceFar(CVehicle* vehicle);
    static void GetCarToGoToCoors(CVehicle* vehicle, CVector* coors);
    static void MakeWayForCarWithSiren(CVehicle* vehicle);
    static void MellowOutChaseSpeed(CVehicle* vehicle);
    static void TellCarToBlockOtherCar(CVehicle* vehicle, CVehicle* blockVehicle);
    static void TellCarToRamOtherCar(CVehicle* vehicle, CVehicle* ramVehicle);
    static void TellOccupantsToLeaveCar(CVehicle* vehicle);
    static void UpdateCarAI(CVehicle* vehicle);
};
