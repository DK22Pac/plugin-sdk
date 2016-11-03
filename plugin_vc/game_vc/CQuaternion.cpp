/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CQuaternion.h"

// Converted from thiscall void CQuaternion::Get(RwMatrixTag *) 0x4DFD30
void CQuaternion::Get(RwMatrixTag* arg0) {
    plugin::CallMethod<0x4DFD30, CQuaternion *, RwMatrixTag*>(this, arg0);
}

// Converted from thiscall void CQuaternion::Set(RwV3d *axis, float angle) 0x4DFE20
void CQuaternion::Set(RwV3d* axis, float angle) {
    plugin::CallMethod<0x4DFE20, CQuaternion *, RwV3d*, float>(this, axis, angle);
}

// Converted from thiscall void CQuaternion::Slerp(CQuaternion const& from,CQuaternion const& to, float halftheta, float sintheta_inv, float t) 0x4DFBE0
void CQuaternion::Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t) {
    plugin::CallMethod<0x4DFBE0, CQuaternion *, CQuaternion const&, CQuaternion const&, float, float, float>(this, from, to, halftheta, sintheta_inv, t);
}
