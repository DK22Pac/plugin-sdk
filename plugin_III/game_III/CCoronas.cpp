/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

// Converted from cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, uchar, uchar, uchar, uchar, uchar, float) 0x4FA080
void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11, unsigned char arg12, float arg13) {
    plugin::Call<0x4FA080, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float>(id, red, green, blue, alpha, posn, radius, farClip, arg8, arg9, arg10, arg11, arg12, arg13);
}

// Converted from cdecl void CCoronas::UpdateCoronaCoors(uint id, CVector const& posn, float farClip, float angle) 0x4FA2D0
void CCoronas::UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle) {
    plugin::Call<0x4FA2D0, unsigned int, CVector const&, float, float>(id, posn, farClip, angle);
}