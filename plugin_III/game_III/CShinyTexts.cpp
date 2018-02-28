/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShinyTexts.h"

unsigned int MAX_SHINYTEXTS = 32;

CRegisteredShinyText *CShinyTexts::aShinyTexts = (CRegisteredShinyText *)0x87B2D8;
unsigned int &CShinyTexts::NumShinyTexts = *(unsigned int *)0x8F1AAC;

// Converted from thiscall void CRegisteredShinyText::CRegisteredShinyText(void) 0x51C330
CRegisteredShinyText::CRegisteredShinyText() {
    plugin::CallMethod<0x51C330, CRegisteredShinyText *>(this);
}

// Converted from cdecl void CShinyTexts::Init(void) 0x51A5A0 
void CShinyTexts::Init() {
    plugin::Call<0x51A5A0>();
}

// Converted from cdecl void CShinyTexts::RegisterOne(CVector cornerAA, CVector cornerBA, CVector cornerBB, CVector cornerAB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, uchar red, uchar green, uchar blue, uchar alpha, float maxDistance) 0x51AAB0
void CShinyTexts::RegisterOne(CVector cornerAA, CVector cornerBA, CVector cornerBB, CVector cornerAB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float maxDistance) {
    plugin::Call<0x51AAB0, CVector, CVector, CVector, CVector, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, float>(cornerAA, cornerBA, cornerBB, cornerAB, u1, v1, u2, v2, u3, v3, u4, v4, red, green, blue, alpha, maxDistance);
}

// Converted from cdecl void CShinyTexts::Render(void) 0x51A5B0 
void CShinyTexts::Render() {
    plugin::Call<0x51A5B0>();
}

// Converted from cdecl void CShinyTexts::RenderOutGeometryBuffer(void) 0x51AA50 
void CShinyTexts::RenderOutGeometryBuffer() {
    plugin::Call<0x51AA50>();
}
