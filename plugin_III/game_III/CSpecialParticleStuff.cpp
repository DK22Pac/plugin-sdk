/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSpecialParticleStuff.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned int &CSpecialParticleStuff::BoatFoamStart = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2A10, 0x8F2AC4, 0x902C04));

int addrof(CSpecialParticleStuff::CreateFoamAroundObject) = ADDRESS_BY_VERSION(0x51BC50, 0x51BE80, 0x51BE10);
int gaddrof(CSpecialParticleStuff::CreateFoamAroundObject) = GLOBAL_ADDRESS_BY_VERSION(0x51BC50, 0x51BE80, 0x51BE10);

void CSpecialParticleStuff::CreateFoamAroundObject(CMatrix *matrix, float x, float y, float z, int particles) {
    plugin::CallDynGlobal<CMatrix *, float, float, float, int>(gaddrof(CSpecialParticleStuff::CreateFoamAroundObject), matrix, x, y, z, particles);
}

int addrof(CSpecialParticleStuff::StartBoatFoamAnimation) = ADDRESS_BY_VERSION(0x51C030, 0x51C260, 0x51C1F0);
int gaddrof(CSpecialParticleStuff::StartBoatFoamAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x51C030, 0x51C260, 0x51C1F0);

void CSpecialParticleStuff::StartBoatFoamAnimation() {
    plugin::CallDynGlobal(gaddrof(CSpecialParticleStuff::StartBoatFoamAnimation));
}

int addrof(CSpecialParticleStuff::UpdateBoatFoamAnimation) = ADDRESS_BY_VERSION(0x51C040, 0x51C270, 0x51C200);
int gaddrof(CSpecialParticleStuff::UpdateBoatFoamAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x51C040, 0x51C270, 0x51C200);

void CSpecialParticleStuff::UpdateBoatFoamAnimation(CMatrix *matrix) {
    plugin::CallDynGlobal<CMatrix *>(gaddrof(CSpecialParticleStuff::UpdateBoatFoamAnimation), matrix);
}
