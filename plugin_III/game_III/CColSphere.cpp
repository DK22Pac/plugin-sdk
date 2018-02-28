/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColSphere.h"

// Converted from thiscall void CColSphere::Set(float radius, CVector const& center, uchar material, uchar flags) 0x411E40
void CColSphere::Set(float radius, CVector const& center, unsigned char material, unsigned char flags) {
    plugin::CallMethod<0x411E40, CColSphere *, float, CVector const&, unsigned char, unsigned char>(this, radius, center, material, flags);
}