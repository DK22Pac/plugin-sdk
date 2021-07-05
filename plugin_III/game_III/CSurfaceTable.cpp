/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSurfaceTable.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&CSurfaceTable::ms_aAdhesiveLimitTable)[5][5] = *reinterpret_cast<float(*)[5][5]>(GLOBAL_ADDRESS_BY_VERSION(0x8E29D4, 0x8E2984, 0x8F2AC4));

int addrof(CSurfaceTable::GetAdhesionGroup) = ADDRESS_BY_VERSION(0x4ABA60, 0x4ABB50, 0x4ABAE0);
int gaddrof(CSurfaceTable::GetAdhesionGroup) = GLOBAL_ADDRESS_BY_VERSION(0x4ABA60, 0x4ABB50, 0x4ABAE0);

int CSurfaceTable::GetAdhesionGroup(unsigned char surfaceType) {
    return plugin::CallAndReturnDynGlobal<int, unsigned char>(gaddrof(CSurfaceTable::GetAdhesionGroup), surfaceType);
}

int addrof(CSurfaceTable::GetAdhesiveLimit) = ADDRESS_BY_VERSION(0x4ABA30, 0x4ABB20, 0x4ABAB0);
int gaddrof(CSurfaceTable::GetAdhesiveLimit) = GLOBAL_ADDRESS_BY_VERSION(0x4ABA30, 0x4ABB20, 0x4ABAB0);

float CSurfaceTable::GetAdhesiveLimit(CColPoint &colPoint) {
    return plugin::CallAndReturnDynGlobal<float, CColPoint &>(gaddrof(CSurfaceTable::GetAdhesiveLimit), colPoint);
}

int addrof(CSurfaceTable::GetWetMultiplier) = ADDRESS_BY_VERSION(0x4ABAA0, 0x4ABB90, 0x4ABB20);
int gaddrof(CSurfaceTable::GetWetMultiplier) = GLOBAL_ADDRESS_BY_VERSION(0x4ABAA0, 0x4ABB90, 0x4ABB20);

float CSurfaceTable::GetWetMultiplier(unsigned char surfaceType) {
    return plugin::CallAndReturnDynGlobal<float, unsigned char>(gaddrof(CSurfaceTable::GetWetMultiplier), surfaceType);
}

int addrof(CSurfaceTable::Initialise) = ADDRESS_BY_VERSION(0x4AB8F0, 0x4AB9E0, 0x4AB970);
int gaddrof(CSurfaceTable::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4AB8F0, 0x4AB9E0, 0x4AB970);

void CSurfaceTable::Initialise(char const *fileName) {
    plugin::CallDynGlobal<char const *>(gaddrof(CSurfaceTable::Initialise), fileName);
}
