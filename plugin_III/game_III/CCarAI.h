/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector.h"
#include "eCarMission.h"

class PLUGIN_API CCarAI {
public:
    SUPPORTED_10EN_11EN_STEAM static void AddAmbulanceOccupants(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void AddFiretruckOccupants(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void AddPoliceCarOccupants(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void CarHasReasonToStop(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static eCarMission FindPoliceCarMissionForWantedLevel();
    SUPPORTED_10EN_11EN_STEAM static int FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static float FindSwitchDistanceClose();
    SUPPORTED_10EN_11EN_STEAM static float FindSwitchDistanceFar(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void GetCarToGoToCoors(CVehicle *vehicle, CVector *coors);
    SUPPORTED_10EN_11EN_STEAM static void MakeWayForCarWithSiren(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void MellowOutChaseSpeed(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void TellCarToBlockOtherCar(CVehicle *vehicle, CVehicle *blockVehicle);
    SUPPORTED_10EN_11EN_STEAM static void TellCarToRamOtherCar(CVehicle *vehicle, CVehicle *ramVehicle);
    SUPPORTED_10EN_11EN_STEAM static void TellOccupantsToLeaveCar(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void UpdateCarAI(CVehicle *vehicle);
};

#include "meta/meta.CCarAI.h"
