/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CTrafficLights.h"

// Converted from cdecl void CTrafficLights::DisplayActualLight(CEntity *entity) 0x455800
void CTrafficLights::DisplayActualLight(CEntity* entity) {
    plugin::Call<0x455800, CEntity*>(entity);
}

// Converted from cdecl uchar CTrafficLights::FindTrafficLightType(CEntity *entity) 0x4564A0
unsigned char CTrafficLights::FindTrafficLightType(CEntity* entity) {
    return plugin::CallAndReturn<unsigned char, 0x4564A0, CEntity*>(entity);
}

// Converted from cdecl uchar CTrafficLights::LightForCars1(void) 0x455760
unsigned char CTrafficLights::LightForCars1() {
    return plugin::CallAndReturn<unsigned char, 0x455760>();
}

// Converted from cdecl uchar CTrafficLights::LightForCars2(void) 0x455790
unsigned char CTrafficLights::LightForCars2() {
    return plugin::CallAndReturn<unsigned char, 0x455790>();
}

// Converted from cdecl uchar CTrafficLights::LightForPeds(void) 0x4557D0
unsigned char CTrafficLights::LightForPeds() {
    return plugin::CallAndReturn<unsigned char, 0x4557D0>();
}

// Converted from cdecl uint CTrafficLights::ScanForLightsOnMap(void) 0x454F40
unsigned int CTrafficLights::ScanForLightsOnMap() {
    return plugin::CallAndReturn<unsigned int, 0x454F40>();
}

// Converted from cdecl bool CTrafficLights::ShouldCarStopForBridge(CVehicle *vehicle) 0x456460
bool CTrafficLights::ShouldCarStopForBridge(CVehicle* vehicle) {
    return plugin::CallAndReturn<bool, 0x456460, CVehicle*>(vehicle);
}

// Converted from cdecl bool CTrafficLights::ShouldCarStopForLight(CVehicle *vehicle, bool enable) 0x455350
bool CTrafficLights::ShouldCarStopForLight(CVehicle* vehicle, bool enable) {
    return plugin::CallAndReturn<bool, 0x455350, CVehicle*, bool>(vehicle, enable);
}
