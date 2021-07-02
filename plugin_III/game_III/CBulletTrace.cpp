/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTrace.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwImVertexIndex(&TraceIndexList)[12] = *reinterpret_cast<RwImVertexIndex(*)[12]>(GLOBAL_ADDRESS_BY_VERSION(0x64986C, 0x64986C, 0x65986C));
PLUGIN_VARIABLE RwIm3DVertex(&TraceVertices)[6] = *reinterpret_cast<RwIm3DVertex(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x649884, 0x649884, 0x659884));

int ctor_addr(CBulletTrace) = ADDRESS_BY_VERSION(0x51C390, 0x51C5C0, 0x51C550);
int ctor_gaddr(CBulletTrace) = GLOBAL_ADDRESS_BY_VERSION(0x51C390, 0x51C5C0, 0x51C550);

int addrof(CBulletTrace::Update) = ADDRESS_BY_VERSION(0x519270, 0x5194A0, 0x519430);
int gaddrof(CBulletTrace::Update) = GLOBAL_ADDRESS_BY_VERSION(0x519270, 0x5194A0, 0x519430);

void CBulletTrace::Update() {
    plugin::CallMethodDynGlobal<CBulletTrace *>(gaddrof(CBulletTrace::Update), this);
}
