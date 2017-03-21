/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColTrianglePlane.h"

// Converted from thiscall void CColTrianglePlane::Set(CompressedVector const*,CColTriangle &) 0x411EA0 
void CColTrianglePlane::Set(CompressedVector const* arg0, CColTriangle& arg1) {
    plugin::CallMethod<0x411EA0, CColTrianglePlane *, CompressedVector const*, CColTriangle&>(this, arg0, arg1);
}

// Converted from thiscall void CColTrianglePlane::GetNormal(CVector &) 0x412140 
void CColTrianglePlane::GetNormal(CVector& arg0) {
    plugin::CallMethod<0x412140, CColTrianglePlane *, CVector&>(this, arg0);
}