/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBridge.h"

float &CBridge::DefaultZLiftPart = *(float *)0x941438;
float &CBridge::DefaultZLiftRoad = *(float *)0x941430;
float &CBridge::DefaultZLiftWeight = *(float *)0x8F1A44;
float &CBridge::OldLift = *(float *)0x8F6254;
eBridgeState &CBridge::OldState = *(eBridgeState *)0x8F2A20;
eBridgeState &CBridge::State = *(eBridgeState *)0x8F2A1C;
unsigned int &CBridge::TimeOfBridgeBecomingOperational = *(unsigned int *)0x8F2BC0;
CBuilding **CBridge::pLiftPart = (CBuilding **)0x8E2C94;
CBuilding **CBridge::pLiftRoad = (CBuilding **)0x8E2C8C;
CBuilding **CBridge::pWeight = (CBuilding **)0x8E28BC;

// Converted from cdecl void CBridge::Init(void) 0x413A30 
void CBridge::Init() {
    plugin::Call<0x413A30>();
}

// Converted from cdecl void CBridge::Update(void) 0x413AC0 
void CBridge::Update() {
    plugin::Call<0x413AC0>();
}

// Converted from cdecl bool CBridge::ShouldLightsBeFlashing(void) 0x413D10 
bool CBridge::ShouldLightsBeFlashing() {
    return plugin::CallAndReturn<bool, 0x413D10>();
}

// Converted from cdecl void CBridge::FindBridgeEntities(void) 0x413D20 
void CBridge::FindBridgeEntities() {
    plugin::Call<0x413D20>();
}

// Converted from cdecl bool CBridge::ThisIsABridgeObjectMovingUp(uint modelIndex) 0x413DE0
bool CBridge::ThisIsABridgeObjectMovingUp(unsigned int modelIndex) {
    return plugin::CallAndReturn<bool, 0x413DE0, unsigned int>(modelIndex);
}
