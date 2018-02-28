/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLights.h"

unsigned int MAX_NUM_BRIGHTLIGHTS = 32;

tBrightLight *CBrightLights::aBrightLights = (tBrightLight *)0xC7CB58;
unsigned int &CBrightLights::NumBrightLights = *(unsigned int *)0xC7C6FC;

// Converted from cdecl void CBrightLights::RenderOutGeometryBuffer(void) 0x722150
void CBrightLights::RenderOutGeometryBuffer() {
    plugin::Call<0x722150>();
}

// Converted from cdecl void CBrightLights::Render(void) 0x7241C0
void CBrightLights::Render() {
    plugin::Call<0x7241C0>();
}

// Converted from cdecl void CBrightLights::RegisterOne(CVector posn,CVector top,CVector right,CVector at,uchar color,uchar,uchar,uchar) 0x724770
void CBrightLights::RegisterOne(CVector posn, CVector top, CVector right, CVector at, unsigned char color, unsigned char arg5, unsigned char arg6, unsigned char arg7) {
    plugin::Call<0x724770, CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char>(posn, top, right, at, color, arg5, arg6, arg7);
}

// Converted from cdecl void CBrightLights::Init(void) 0x722140
void CBrightLights::Init() {
    plugin::Call<0x722140>();
}