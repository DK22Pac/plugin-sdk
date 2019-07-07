/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBridge.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBuilding *&CBridge::pWeight = *reinterpret_cast<CBuilding **>(GLOBAL_ADDRESS_BY_VERSION(0x8E28BC, 0x8E286C, 0x8F29AC));
PLUGIN_VARIABLE CBuilding *&CBridge::pLiftRoad = *reinterpret_cast<CBuilding **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C8C, 0x8E2D40, 0x8F2E80));
PLUGIN_VARIABLE CBuilding *&CBridge::pLiftPart = *reinterpret_cast<CBuilding **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C94, 0x8E2D48, 0x8F2E88));
PLUGIN_VARIABLE float &CBridge::DefaultZLiftWeight = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A44, 0x8F1AF8, 0x901C38));
PLUGIN_VARIABLE eBridgeState &CBridge::State = *reinterpret_cast<eBridgeState *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2A1C, 0x8F2AD0, 0x902C10));
PLUGIN_VARIABLE eBridgeState &CBridge::OldState = *reinterpret_cast<eBridgeState *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2A20, 0x8F2AD4, 0x902C14));
PLUGIN_VARIABLE unsigned int &CBridge::TimeOfBridgeBecomingOperational = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BC0, 0x8F2C74, 0x902DB4));
PLUGIN_VARIABLE float &CBridge::OldLift = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6254, 0x8F640C, 0x90654C));
PLUGIN_VARIABLE float &CBridge::DefaultZLiftRoad = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x941430, 0x9415E8, 0x951728));
PLUGIN_VARIABLE float &CBridge::DefaultZLiftPart = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x941438, 0x9415F0, 0x951730));

int addrof(CBridge::FindBridgeEntities) = ADDRESS_BY_VERSION(0x413D20, 0x413D20, 0x413D20);
int gaddrof(CBridge::FindBridgeEntities) = GLOBAL_ADDRESS_BY_VERSION(0x413D20, 0x413D20, 0x413D20);

void CBridge::FindBridgeEntities() {
    plugin::CallDynGlobal(gaddrof(CBridge::FindBridgeEntities));
}

int addrof(CBridge::Init) = ADDRESS_BY_VERSION(0x413A30, 0x413A30, 0x413A30);
int gaddrof(CBridge::Init) = GLOBAL_ADDRESS_BY_VERSION(0x413A30, 0x413A30, 0x413A30);

void CBridge::Init() {
    plugin::CallDynGlobal(gaddrof(CBridge::Init));
}

int addrof(CBridge::ShouldLightsBeFlashing) = ADDRESS_BY_VERSION(0x413D10, 0x413D10, 0x413D10);
int gaddrof(CBridge::ShouldLightsBeFlashing) = GLOBAL_ADDRESS_BY_VERSION(0x413D10, 0x413D10, 0x413D10);

bool CBridge::ShouldLightsBeFlashing() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CBridge::ShouldLightsBeFlashing));
}

int addrof(CBridge::ThisIsABridgeObjectMovingUp) = ADDRESS_BY_VERSION(0x413DE0, 0x413DE0, 0x413DE0);
int gaddrof(CBridge::ThisIsABridgeObjectMovingUp) = GLOBAL_ADDRESS_BY_VERSION(0x413DE0, 0x413DE0, 0x413DE0);

bool CBridge::ThisIsABridgeObjectMovingUp(unsigned int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int>(gaddrof(CBridge::ThisIsABridgeObjectMovingUp), modelIndex);
}

int addrof(CBridge::Update) = ADDRESS_BY_VERSION(0x413AC0, 0x413AC0, 0x413AC0);
int gaddrof(CBridge::Update) = GLOBAL_ADDRESS_BY_VERSION(0x413AC0, 0x413AC0, 0x413AC0);

void CBridge::Update() {
    plugin::CallDynGlobal(gaddrof(CBridge::Update));
}
