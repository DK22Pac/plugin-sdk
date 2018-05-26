/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrafficLights.h"

PLUGIN_SOURCE_FILE

int addrof(CTrafficLights::DisplayActualLight) = ADDRESS_BY_VERSION(0x463F90, 0x463F90, 0x463E70);
int gaddrof(CTrafficLights::DisplayActualLight) = GLOBAL_ADDRESS_BY_VERSION(0x463F90, 0x463F90, 0x463E70);

void CTrafficLights::DisplayActualLight(CEntity *pEntity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CTrafficLights::DisplayActualLight), pEntity);
}

int addrof(CTrafficLights::LightForPeds) = ADDRESS_BY_VERSION(0x465BE0, 0x465BE0, 0x465AC0);
int gaddrof(CTrafficLights::LightForPeds) = GLOBAL_ADDRESS_BY_VERSION(0x465BE0, 0x465BE0, 0x465AC0);

void CTrafficLights::LightForPeds() {
    plugin::CallDynGlobal(gaddrof(CTrafficLights::LightForPeds));
}

int addrof(CTrafficLights::ScanForLightsOnMap) = ADDRESS_BY_VERSION(0x4661C0, 0x4661C0, 0x4660A0);
int gaddrof(CTrafficLights::ScanForLightsOnMap) = GLOBAL_ADDRESS_BY_VERSION(0x4661C0, 0x4661C0, 0x4660A0);

void CTrafficLights::ScanForLightsOnMap() {
    plugin::CallDynGlobal(gaddrof(CTrafficLights::ScanForLightsOnMap));
}

int addrof(CTrafficLights::ShouldCarStopForBridge) = ADDRESS_BY_VERSION(0x463F80, 0x463F80, 0x463E60);
int gaddrof(CTrafficLights::ShouldCarStopForBridge) = GLOBAL_ADDRESS_BY_VERSION(0x463F80, 0x463F80, 0x463E60);

void CTrafficLights::ShouldCarStopForBridge() {
    plugin::CallDynGlobal(gaddrof(CTrafficLights::ShouldCarStopForBridge));
}

int addrof(CTrafficLights::ShouldCarStopForLight) = ADDRESS_BY_VERSION(0x465C10, 0x465C10, 0x465AF0);
int gaddrof(CTrafficLights::ShouldCarStopForLight) = GLOBAL_ADDRESS_BY_VERSION(0x465C10, 0x465C10, 0x465AF0);

void CTrafficLights::ShouldCarStopForLight(CVehicle *arg1, bool arg2) {
    plugin::CallDynGlobal<CVehicle *, bool>(gaddrof(CTrafficLights::ShouldCarStopForLight), arg1, arg2);
}
