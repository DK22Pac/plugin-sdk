/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cParticleSystemMgr.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE cParticleSystemMgr &mod_ParticleSystemManager = *reinterpret_cast<cParticleSystemMgr *>(GLOBAL_ADDRESS_BY_VERSION(0x975428, 0x975430, 0x974430));

int addrof(cParticleSystemMgr::Initialise) = ADDRESS_BY_VERSION(0x565F60, 0x565F80, 0x565E50);
int gaddrof(cParticleSystemMgr::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x565F60, 0x565F80, 0x565E50);

void cParticleSystemMgr::Initialise() {
    plugin::CallMethodDynGlobal<cParticleSystemMgr *>(gaddrof(cParticleSystemMgr::Initialise), this);
}

int addrof(cParticleSystemMgr::LoadParticleData) = ADDRESS_BY_VERSION(0x565B00, 0x565B20, 0x5659F0);
int gaddrof(cParticleSystemMgr::LoadParticleData) = GLOBAL_ADDRESS_BY_VERSION(0x565B00, 0x565B20, 0x5659F0);

void cParticleSystemMgr::LoadParticleData() {
    plugin::CallMethodDynGlobal<cParticleSystemMgr *>(gaddrof(cParticleSystemMgr::LoadParticleData), this);
}
