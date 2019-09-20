/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "eCarMission.h"
#include "CVector.h"

class PLUGIN_API CCarAI {
public:
    SUPPORTED_10EN static void AddAmbulanceOccupants(CVehicle *vehicle);
    SUPPORTED_10EN static void AddFiretruckOccupants(CVehicle *vehicle);
    SUPPORTED_10EN static void AddPoliceCarOccupants(CVehicle *vehicle);
    SUPPORTED_10EN static void CarHasReasonToStop(CVehicle *vehicle);
    SUPPORTED_10EN static eCarMission FindPoliceBoatMissionForWantedLevel();
    SUPPORTED_10EN static eCarMission FindPoliceCarMissionForWantedLevel();
    SUPPORTED_10EN static int FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle);
    SUPPORTED_10EN static float GetCarToGoToCoors(CVehicle *vehicle, CVector *coors);
    SUPPORTED_10EN static float GetCarToParkAtCoors(CVehicle *vehicle, CVector *coors);
    SUPPORTED_10EN static void MakeWayForCarWithSiren(CVehicle *vehicle);
    SUPPORTED_10EN static void MellowOutChaseSpeed(CVehicle *vehicle);
    SUPPORTED_10EN static void MellowOutChaseSpeedBoat(CVehicle *vehicle);
    SUPPORTED_10EN static void TellCarToRamOtherCar(CVehicle *vehicle, CVehicle *ramVehicle);
    SUPPORTED_10EN static void TellOccupantsToFleeCar(CVehicle *vehicle);
    SUPPORTED_10EN static void TellOccupantsToLeaveCar(CVehicle *vehicle);
    SUPPORTED_10EN static void UpdateCarAI(CVehicle *vehicle);
};

#include "meta/meta.CCarAI.h"
