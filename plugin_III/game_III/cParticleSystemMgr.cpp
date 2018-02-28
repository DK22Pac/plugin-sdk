/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cParticleSystemMgr.h"

cParticleSystemMgr &mod_ParticleSystemManager = *(cParticleSystemMgr *)0x6F20E0;
unsigned int MAX_NUM_PARTICLE_SYSTEMS = 68;

// Converted from thiscall void cParticleSystemMgr::cParticleSystemMgr(void) 0x50FCB0
cParticleSystemMgr::cParticleSystemMgr() {
    plugin::CallMethod<0x50FCB0, cParticleSystemMgr *>(this);
}

// Converted from thiscall void cParticleSystemMgr::Initialise(void) 0x50FCD0
void cParticleSystemMgr::Initialise() {
    plugin::CallMethod<0x50FCD0, cParticleSystemMgr *>(this);
}

// Converted from thiscall void cParticleSystemMgr::LoadParticleData(void) 0x50FDF0
void cParticleSystemMgr::LoadParticleData() {
    plugin::CallMethod<0x50FDF0, cParticleSystemMgr *>(this);
}