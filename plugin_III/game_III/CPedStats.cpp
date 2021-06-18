/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedStats.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPedStats *(&CPedStats::ms_apPedStats)[35] = *reinterpret_cast<CPedStats *(*)[35]>(GLOBAL_ADDRESS_BY_VERSION(0x9404D4, 0x94068C, 0x9507CC));

int addrof(CPedStats::GetPedStatType) = ADDRESS_BY_VERSION(0x4EF780, 0x4EF830, 0x4EF7C0);
int gaddrof(CPedStats::GetPedStatType) = GLOBAL_ADDRESS_BY_VERSION(0x4EF780, 0x4EF830, 0x4EF7C0);

unsigned int CPedStats::GetPedStatType(char *name) {
    return plugin::CallAndReturnDynGlobal<unsigned int, char *>(gaddrof(CPedStats::GetPedStatType), name);
}

int addrof(CPedStats::Initialise) = ADDRESS_BY_VERSION(0x4EF460, 0x4EF510, 0x4EF4A0);
int gaddrof(CPedStats::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4EF460, 0x4EF510, 0x4EF4A0);

void CPedStats::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPedStats::Initialise));
}

int addrof(CPedStats::LoadPedStats) = ADDRESS_BY_VERSION(0x4EF580, 0x4EF630, 0x4EF5C0);
int gaddrof(CPedStats::LoadPedStats) = GLOBAL_ADDRESS_BY_VERSION(0x4EF580, 0x4EF630, 0x4EF5C0);

void CPedStats::LoadPedStats() {
    plugin::CallDynGlobal(gaddrof(CPedStats::LoadPedStats));
}

int addrof(CPedStats::Shutdown) = ADDRESS_BY_VERSION(0x4EF540, 0x4EF5F0, 0x4EF580);
int gaddrof(CPedStats::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4EF540, 0x4EF5F0, 0x4EF580);

void CPedStats::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CPedStats::Shutdown));
}
