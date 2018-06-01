/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CVehicle.h"

class PLUGIN_API CTrafficLights {
public:
    SUPPORTED_10EN_11EN_STEAM static void DisplayActualLight(CEntity *pEntity);
    SUPPORTED_10EN_11EN_STEAM static void LightForPeds();
    SUPPORTED_10EN_11EN_STEAM static void ScanForLightsOnMap();
    SUPPORTED_10EN_11EN_STEAM static void ShouldCarStopForBridge();
    SUPPORTED_10EN_11EN_STEAM static void ShouldCarStopForLight(CVehicle *arg1, bool arg2);
};

#include "meta/meta.CTrafficLights.h"
