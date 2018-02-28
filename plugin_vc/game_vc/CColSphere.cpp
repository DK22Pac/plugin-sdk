/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColSphere.h"

// Converted from thiscall bool CColSphere::IntersectRay(CVector const& rayStart, CVector const& rayEnd, CVector& intPoint1, CVector& intPoint2) 0x417260
bool CColSphere::IntersectRay(CVector const& rayStart, CVector const& rayEnd, CVector& intPoint1, CVector& intPoint2) {
    return plugin::CallMethodAndReturn<bool, 0x417260, CColSphere *, CVector const&, CVector const&, CVector&, CVector&>(this, rayStart, rayEnd, intPoint1, intPoint2);
}

// Converted from thiscall void CColSphere::Set(float radius, CVector const& center, uchar material, uchar flags) 0x4173A0
void CColSphere::Set(float radius, CVector const& center, unsigned char material, unsigned char flags) {
    plugin::CallMethod<0x4173A0, CColSphere *, float, CVector const&, unsigned char, unsigned char>(this, radius, center, material, flags);
}