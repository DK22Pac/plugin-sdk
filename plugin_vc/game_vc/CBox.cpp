/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBox.h"

// Converted from fastcall void CBox::Set(CVector const& sup, CVector const& inf) 0x410910
void CBox::Set(CVector const& sup, CVector const& inf) {
    plugin::Call<0x410910, CVector const&, CVector const&>(sup, inf);
}