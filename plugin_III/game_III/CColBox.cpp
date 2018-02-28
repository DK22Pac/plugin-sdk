/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColBox.h"

// Converted from thiscall void CColBox::Set(CVector const& sup, CVector const& inf, uchar material, uchar flags) 0x40B2A0
void CColBox::Set(CVector const& sup, CVector const& inf, unsigned char material, unsigned char flags) {
    plugin::CallMethod<0x40B2A0, CColBox *, CVector const&, CVector const&, unsigned char, unsigned char>(this, sup, inf, material, flags);
}

// Converted from thiscall void CColBox::operator=(CColBox const& right) 0x40B2E0
void CColBox::operator=(CColBox const& right) {
    plugin::CallMethod<0x40B2E0, CColBox *, CColBox const&>(this, right);
}