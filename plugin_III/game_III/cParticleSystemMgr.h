/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "tParticleSystemData.h"

class cParticleSystemMgr {
public:
    tParticleSystemData m_particleSystems[68];

    cParticleSystemMgr();
    void Initialise();
    void LoadParticleData();
};

VALIDATE_SIZE(cParticleSystemMgr, 0x2420);

extern cParticleSystemMgr &mod_ParticleSystemManager;
extern unsigned int MAX_NUM_PARTICLE_SYSTEMS; // default 68