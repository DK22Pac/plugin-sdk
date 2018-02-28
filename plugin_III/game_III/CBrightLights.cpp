/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLights.h"

unsigned int MAX_NUM_BRIGHTLIGHTS = 32;

CBrightLight *CBrightLights::aBrightLights = (CBrightLight *)0x733A68;
unsigned int &CBrightLights::NumBrightLights = *(unsigned int *)0x8F2C70;

// Converted from thiscall void CBrightLight::CBrightLight(void) 0x51C340
CBrightLight::CBrightLight() {
    plugin::CallMethod<0x51C340, CBrightLight *>(this);
}

// Converted from cdecl void CBrightLights::Init(void) 0x5197A0
void CBrightLights::Init() {
    plugin::Call<0x5197A0>();
}

// Converted from cdecl void CBrightLights::Render(void) 0x5197B0
void CBrightLights::Render() {
    plugin::Call<0x5197B0>();
}

// Converted from cdecl void CBrightLights::RenderOutGeometryBuffer(void) 0x51A3B0
void CBrightLights::RenderOutGeometryBuffer() {
    plugin::Call<0x51A3B0>();
}

// Converted from cdecl void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, uchar red, uchar green, uchar blue, uchar alpha) 0x51A410
void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    plugin::Call<0x51A410, CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char>(posn, right, up, at, red, green, blue, alpha);
}
