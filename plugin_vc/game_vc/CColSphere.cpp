/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColSphere.h"

// Converted from fastcall bool CColSphere::IntersectRay(CVector const& rayStart, CVector const& rayEnd, CVector& intPoint1, CVector& intPoint2) 0x417260
bool CColSphere::IntersectRay(CVector const& rayStart, CVector const& rayEnd, CVector& intPoint1, CVector& intPoint2) {
    return plugin::CallAndReturn<bool, 0x417260, CVector const&, CVector const&, CVector&, CVector&>(rayStart, rayEnd, intPoint1, intPoint2);
}

// Converted from fastcall void CColSphere::Set(float radius,CVector const& center,uchar material,uchar flags) 0x4173A0
void CColSphere::Set(float radius, CVector const& center, unsigned char material, unsigned char flags) {
    plugin::Call<0x4173A0, float, CVector const&, unsigned char, unsigned char>(radius, center, material, flags);
}