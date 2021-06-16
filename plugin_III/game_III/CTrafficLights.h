/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CEntity.h"

enum PLUGIN_API eTrafficLightsFlags : unsigned char {
    PED_LIGHTS_WALK = 0,
    PED_LIGHTS_WALK_BLINK = 1,
    PED_LIGHTS_DONT_WALK = 2,

    CAR_LIGHTS_GREEN = 0,
    CAR_LIGHTS_YELLOW = 1,
    CAR_LIGHTS_RED = 2
};

class PLUGIN_API CTrafficLights {
public:
    SUPPORTED_10EN_11EN_STEAM static void DisplayActualLight(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static int FindTrafficLightType(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static unsigned char LightForCars1();
    SUPPORTED_10EN_11EN_STEAM static unsigned char LightForCars2();
    SUPPORTED_10EN_11EN_STEAM static unsigned char LightForPeds();
    SUPPORTED_10EN_11EN_STEAM static void ScanForLightsOnMap();
    SUPPORTED_10EN_11EN_STEAM static bool ShouldCarStopForBridge(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static bool ShouldCarStopForLight(CVehicle *vehicle, bool alwaysStop);
};

#include "meta/meta.CTrafficLights.h"
