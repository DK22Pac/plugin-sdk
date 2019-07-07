/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAudioHydrant.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAudioHydrant) = ADDRESS_BY_VERSION(0x4BFE00, 0x4BFEF0, 0x4BFE80);
int ctor_gaddr(CAudioHydrant) = GLOBAL_ADDRESS_BY_VERSION(0x4BFE00, 0x4BFEF0, 0x4BFE80);

int addrof(CAudioHydrant::Add) = ADDRESS_BY_VERSION(0x4BC330, 0x4BC420, 0x4BC3B0);
int gaddrof(CAudioHydrant::Add) = GLOBAL_ADDRESS_BY_VERSION(0x4BC330, 0x4BC420, 0x4BC3B0);

void CAudioHydrant::Add(CParticleObject *object) {
    plugin::CallDynGlobal<CParticleObject *>(gaddrof(CAudioHydrant::Add), object);
}

int addrof(CAudioHydrant::Remove) = ADDRESS_BY_VERSION(0x4BC390, 0x4BC480, 0x4BC410);
int gaddrof(CAudioHydrant::Remove) = GLOBAL_ADDRESS_BY_VERSION(0x4BC390, 0x4BC480, 0x4BC410);

void CAudioHydrant::Remove(CParticleObject *object) {
    plugin::CallDynGlobal<CParticleObject *>(gaddrof(CAudioHydrant::Remove), object);
}
