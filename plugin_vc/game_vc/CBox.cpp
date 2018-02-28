/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBox.h"

// Converted from fastcall void CBox::Set(CVector const& vecMin, CVector const& vecMax) 0x410910
void CBox::Set(CVector const& vecMin, CVector const& vecMax) {
    plugin::Call<0x410910, CVector const&, CVector const&>(vecMin, vecMax);
}