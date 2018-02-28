/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CSpecialParticleStuff.h"

unsigned int &CSpecialParticleStuff::FrameInAnimation = *(unsigned int *)0x649A74;
unsigned int &CSpecialParticleStuff::BoatFoamStart = *(unsigned int *)0x8F2A10;

// Converted from cdecl void CSpecialParticleStuff::CreateFoamAroundObject(CMatrix *matrix,float x,float y,float z,int time) 0x51BC50 
void CSpecialParticleStuff::CreateFoamAroundObject(CMatrix* matrix, float x, float y, float z, int time) {
    plugin::Call<0x51BC50, CMatrix*, float, float, float, int>(matrix, x, y, z, time);
}

// Converted from cdecl void CSpecialParticleStuff::StartBoatFoamAnimation(void) 0x51C030 
void CSpecialParticleStuff::StartBoatFoamAnimation() {
    plugin::Call<0x51C030>();
}

// Converted from cdecl void CSpecialParticleStuff::UpdateBoatFoamAnimation(CMatrix *matrix) 0x51C040 
void CSpecialParticleStuff::UpdateBoatFoamAnimation(CMatrix* matrix) {
    plugin::Call<0x51C040, CMatrix*>(matrix);
}
