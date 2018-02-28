/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

class CTrafficLights {
public:
    //funcs
    static void DisplayActualLight(CEntity* entity);
    static unsigned char FindTrafficLightType(CEntity* entity);
    static unsigned char LightForCars1();
    static unsigned char LightForCars2();
    static unsigned char LightForPeds();
    static unsigned int ScanForLightsOnMap();
    static bool ShouldCarStopForBridge(CVehicle* vehicle);
    static bool ShouldCarStopForLight(CVehicle* vehicle, bool enable);
};
