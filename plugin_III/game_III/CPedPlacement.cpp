/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedPlacement.h"

PLUGIN_SOURCE_FILE

int addrof(CPedPlacement::FindZCoorForPed) = ADDRESS_BY_VERSION(0x4EE340, 0x4EE3F0, 0x4EE380);
int gaddrof(CPedPlacement::FindZCoorForPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EE340, 0x4EE3F0, 0x4EE380);

void CPedPlacement::FindZCoorForPed(CVector *position) {
    plugin::CallDynGlobal<CVector *>(gaddrof(CPedPlacement::FindZCoorForPed), position);
}

int addrof(CPedPlacement::IsPositionClearForPed) = ADDRESS_BY_VERSION(0x4EE2C0, 0x4EE370, 0x4EE300);
int gaddrof(CPedPlacement::IsPositionClearForPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EE2C0, 0x4EE370, 0x4EE300);

bool CPedPlacement::IsPositionClearForPed(CVector *position) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *>(gaddrof(CPedPlacement::IsPositionClearForPed), position);
}

int addrof(CPedPlacement::IsPositionClearOfCars) = ADDRESS_BY_VERSION(0x4EE310, 0x4EE3C0, 0x4EE350);
int gaddrof(CPedPlacement::IsPositionClearOfCars) = GLOBAL_ADDRESS_BY_VERSION(0x4EE310, 0x4EE3C0, 0x4EE350);

CEntity *CPedPlacement::IsPositionClearOfCars(CVector *position) {
    return plugin::CallAndReturnDynGlobal<CEntity *, CVector *>(gaddrof(CPedPlacement::IsPositionClearOfCars), position);
}
