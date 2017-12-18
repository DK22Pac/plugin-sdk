/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLights.h"

unsigned int MAX_NUM_BRIGHTLIGHTS = 32;

tBrightLight *CBrightLights::aBrightLights = (tBrightLight *)0x818848;
unsigned int &CBrightLights::NumBrightLights = *(unsigned int *)0x97F2BC;

// Converted from thiscall void CBrightLights::CBrightLights(void) 0x575140 
CBrightLights::CBrightLights() {
    plugin::CallMethod<0x575140, CBrightLights *>(this);
}

// Converted from cdecl void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, uchar red, uchar green, uchar blue, uchar alpha) 0x571820
void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    plugin::Call<0x571820, CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char>(posn, right, up, at, red, green, blue, alpha);
}

// Converted from cdecl void CBrightLights::Render(void) 0x5719B0 
void CBrightLights::Render() {
    plugin::Call<0x5719B0>();
}
