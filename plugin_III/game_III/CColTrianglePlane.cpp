/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColTrianglePlane.h"

PLUGIN_SOURCE_FILE

int addrof(CColTrianglePlane::GetNormal) = ADDRESS_BY_VERSION(0x412140, 0x412140, 0x412140);
int gaddrof(CColTrianglePlane::GetNormal) = GLOBAL_ADDRESS_BY_VERSION(0x412140, 0x412140, 0x412140);

void CColTrianglePlane::GetNormal(CVector &point) {
    plugin::CallMethodDynGlobal<CColTrianglePlane *, CVector &>(gaddrof(CColTrianglePlane::GetNormal), this, point);
}

int addrof(CColTrianglePlane::Set) = ADDRESS_BY_VERSION(0x411EA0, 0x411EA0, 0x411EA0);
int gaddrof(CColTrianglePlane::Set) = GLOBAL_ADDRESS_BY_VERSION(0x411EA0, 0x411EA0, 0x411EA0);

void CColTrianglePlane::Set(CompressedVector const *verts, CColTriangle &tri) {
    plugin::CallMethodDynGlobal<CColTrianglePlane *, CompressedVector const *, CColTriangle &>(gaddrof(CColTrianglePlane::Set), this, verts, tri);
}
