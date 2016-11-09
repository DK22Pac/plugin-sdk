/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColBox.h"

// Converted from fastcall void CColBox::Set(CVector const& sup,CVector const& inf,uchar material,uchar flags) 0x4108D0
void CColBox::Set(CVector const& sup, CVector const& inf, unsigned char material, unsigned char flags) {
    plugin::Call<0x4108D0, CVector const&, CVector const&, unsigned char, unsigned char>(sup, inf, material, flags);
}

// Converted from thiscall void CColBox::operator=(CColBox const& right) 0x410890
void CColBox::operator=(CColBox const& right) {
    plugin::CallMethod<0x410890, CColBox *, CColBox const&>(this, right);
}