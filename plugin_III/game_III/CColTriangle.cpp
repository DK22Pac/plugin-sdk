/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColTriangle.h"

PLUGIN_SOURCE_FILE

int addrof(CColTriangle::Set) = ADDRESS_BY_VERSION(0x411E70, 0x411E70, 0x411E70);
int gaddrof(CColTriangle::Set) = GLOBAL_ADDRESS_BY_VERSION(0x411E70, 0x411E70, 0x411E70);

void CColTriangle::Set(CompressedVector const *verts, int vertA, int vertB, int vertC, unsigned char material, unsigned char flag) {
    plugin::CallMethodDynGlobal<CColTriangle *, CompressedVector const *, int, int, int, unsigned char, unsigned char>(gaddrof(CColTriangle::Set), this, verts, vertA, vertB, vertC, material, flag);
}
