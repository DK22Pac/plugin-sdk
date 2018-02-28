/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShinyTexts.h"

unsigned int MAX_SHINYTEXTS = 32;

CRegisteredShinyText *CShinyTexts::aShinyTexts = (CRegisteredShinyText *)0xC7D258;
unsigned int &CShinyTexts::NumShinyTexts = *(unsigned int *)0xC7C6F8;

// Converted from cdecl void CShinyTexts::Init(void) 0x7221B0
void CShinyTexts::Init() {
    plugin::Call<0x7221B0>();
}

// Converted from cdecl void CShinyTexts::RenderOutGeometryBuffer(void) 0x7221C0
void CShinyTexts::RenderOutGeometryBuffer() {
    plugin::Call<0x7221C0>();
}

// Converted from cdecl void CShinyTexts::Render(void) 0x724890
void CShinyTexts::Render() {
    plugin::Call<0x724890>();
}

// Converted from cdecl void CShinyTexts::RegisterOne(CVector cornerAA,CVector cornerBA,CVector cornerBB,CVector cornerAB,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4,uchar red,uchar green,uchar blue,uchar alpha,float maxDistance) 0x724B60
void CShinyTexts::RegisterOne(CVector cornerAA, CVector cornerBA, CVector cornerBB, CVector cornerAB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float maxDistance) {
    plugin::Call<0x724B60, CVector, CVector, CVector, CVector, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, float>(cornerAA, cornerBA, cornerBB, cornerAB, u1, v1, u2, v2, u3, v3, u4, v4, red, green, blue, alpha, maxDistance);
}