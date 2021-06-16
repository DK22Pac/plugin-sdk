/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrafficLights.h"

PLUGIN_SOURCE_FILE

int addrof(CTrafficLights::DisplayActualLight) = ADDRESS_BY_VERSION(0x455800, 0x455800, 0x455800);
int gaddrof(CTrafficLights::DisplayActualLight) = GLOBAL_ADDRESS_BY_VERSION(0x455800, 0x455800, 0x455800);

void CTrafficLights::DisplayActualLight(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CTrafficLights::DisplayActualLight), entity);
}

int addrof(CTrafficLights::FindTrafficLightType) = ADDRESS_BY_VERSION(0x4564A0, 0x4564A0, 0x4564A0);
int gaddrof(CTrafficLights::FindTrafficLightType) = GLOBAL_ADDRESS_BY_VERSION(0x4564A0, 0x4564A0, 0x4564A0);

int CTrafficLights::FindTrafficLightType(CEntity *entity) {
    return plugin::CallAndReturnDynGlobal<int, CEntity *>(gaddrof(CTrafficLights::FindTrafficLightType), entity);
}

int addrof(CTrafficLights::LightForCars1) = ADDRESS_BY_VERSION(0x455760, 0x455760, 0x455760);
int gaddrof(CTrafficLights::LightForCars1) = GLOBAL_ADDRESS_BY_VERSION(0x455760, 0x455760, 0x455760);

unsigned char CTrafficLights::LightForCars1() {
    return plugin::CallAndReturnDynGlobal<unsigned char>(gaddrof(CTrafficLights::LightForCars1));
}

int addrof(CTrafficLights::LightForCars2) = ADDRESS_BY_VERSION(0x455790, 0x455790, 0x455790);
int gaddrof(CTrafficLights::LightForCars2) = GLOBAL_ADDRESS_BY_VERSION(0x455790, 0x455790, 0x455790);

unsigned char CTrafficLights::LightForCars2() {
    return plugin::CallAndReturnDynGlobal<unsigned char>(gaddrof(CTrafficLights::LightForCars2));
}

int addrof(CTrafficLights::LightForPeds) = ADDRESS_BY_VERSION(0x4557D0, 0x4557D0, 0x4557D0);
int gaddrof(CTrafficLights::LightForPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4557D0, 0x4557D0, 0x4557D0);

unsigned char CTrafficLights::LightForPeds() {
    return plugin::CallAndReturnDynGlobal<unsigned char>(gaddrof(CTrafficLights::LightForPeds));
}

int addrof(CTrafficLights::ScanForLightsOnMap) = ADDRESS_BY_VERSION(0x454F40, 0x454F40, 0x454F40);
int gaddrof(CTrafficLights::ScanForLightsOnMap) = GLOBAL_ADDRESS_BY_VERSION(0x454F40, 0x454F40, 0x454F40);

void CTrafficLights::ScanForLightsOnMap() {
    plugin::CallDynGlobal(gaddrof(CTrafficLights::ScanForLightsOnMap));
}

int addrof(CTrafficLights::ShouldCarStopForBridge) = ADDRESS_BY_VERSION(0x456460, 0x456460, 0x456460);
int gaddrof(CTrafficLights::ShouldCarStopForBridge) = GLOBAL_ADDRESS_BY_VERSION(0x456460, 0x456460, 0x456460);

bool CTrafficLights::ShouldCarStopForBridge(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CTrafficLights::ShouldCarStopForBridge), vehicle);
}

int addrof(CTrafficLights::ShouldCarStopForLight) = ADDRESS_BY_VERSION(0x455350, 0x455350, 0x455350);
int gaddrof(CTrafficLights::ShouldCarStopForLight) = GLOBAL_ADDRESS_BY_VERSION(0x455350, 0x455350, 0x455350);

bool CTrafficLights::ShouldCarStopForLight(CVehicle *vehicle, bool alwaysStop) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *, bool>(gaddrof(CTrafficLights::ShouldCarStopForLight), vehicle, alwaysStop);
}
