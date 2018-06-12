/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedPlacement.h"

PLUGIN_SOURCE_FILE

int addrof(CPedPlacement::FindZCoorForPed) = ADDRESS_BY_VERSION(0x616920, 0, 0, 0, 0, 0);
int gaddrof(CPedPlacement::FindZCoorForPed) = GLOBAL_ADDRESS_BY_VERSION(0x616920, 0, 0, 0, 0, 0);

bool CPedPlacement::FindZCoorForPed(CVector *pos) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *>(gaddrof(CPedPlacement::FindZCoorForPed), pos);
}

int addrof(CPedPlacement::IsPositionClearForPed) = ADDRESS_BY_VERSION(0x616860, 0, 0, 0, 0, 0);
int gaddrof(CPedPlacement::IsPositionClearForPed) = GLOBAL_ADDRESS_BY_VERSION(0x616860, 0, 0, 0, 0, 0);

bool CPedPlacement::IsPositionClearForPed(CVector const *pos, float radius, int maxNumObjects, CEntity **pObjectList, unsigned char bCheckVehicles, unsigned char bCheckPeds, unsigned char bCheckObjects) {
    return plugin::CallAndReturnDynGlobal<bool, CVector const *, float, int, CEntity **, unsigned char, unsigned char, unsigned char>(gaddrof(CPedPlacement::IsPositionClearForPed), pos, radius, maxNumObjects, pObjectList, bCheckVehicles, bCheckPeds, bCheckObjects);
}

int addrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CVector const *)) = ADDRESS_BY_VERSION(0x6168E0, 0, 0, 0, 0, 0);
int gaddrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CVector const *)) = GLOBAL_ADDRESS_BY_VERSION(0x6168E0, 0, 0, 0, 0, 0);

CVehicle *CPedPlacement::IsPositionClearOfCars(CVector const *pos) {
    return plugin::CallAndReturnDynGlobal<CVehicle *, CVector const *>(gaddrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CVector const *)), pos);
}

int addrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CPed const *)) = ADDRESS_BY_VERSION(0x616A40, 0, 0, 0, 0, 0);
int gaddrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CPed const *)) = GLOBAL_ADDRESS_BY_VERSION(0x616A40, 0, 0, 0, 0, 0);

CVehicle *CPedPlacement::IsPositionClearOfCars(CPed const *ped) {
    return plugin::CallAndReturnDynGlobal<CVehicle *, CPed const *>(gaddrof_o(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CPed const *)), ped);
}
