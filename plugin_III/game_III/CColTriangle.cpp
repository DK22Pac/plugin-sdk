/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColTriangle.h"

// Converted from thiscall void CColTriangle::Set(CompressedVector const*,int,int,int,uchar,uchar) 0x411E70
void CColTriangle::Set(CompressedVector const* arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5) {
    plugin::CallMethod<0x411E70, CColTriangle *, CompressedVector const*, int, int, int, unsigned char, unsigned char>(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CColTrianglePlane::Set(CompressedVector const*,CColTriangle &) 0x411EA0 
void CColTrianglePlane::Set(CompressedVector const* arg0, CColTriangle& arg1) {
    plugin::CallMethod<0x411EA0, CColTrianglePlane *, CompressedVector const*, CColTriangle&>(this, arg0, arg1);
}

// Converted from thiscall void CColTrianglePlane::GetNormal(CVector &) 0x412140 
void CColTrianglePlane::GetNormal(CVector& arg0) {
    plugin::CallMethod<0x412140, CColTrianglePlane *, CVector&>(this, arg0);
}
