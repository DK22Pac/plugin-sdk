/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTrace.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwImVertexIndex(&TraceIndexList)[48] = *reinterpret_cast<RwImVertexIndex(*)[48]>(GLOBAL_ADDRESS_BY_VERSION(0x699078, 0x699078, 0x698080));
PLUGIN_VARIABLE RwIm3DVertex(&TraceVertices)[10] = *reinterpret_cast<RwIm3DVertex(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0x77EC54, 0x77EC54, 0x77DC54));

int ctor_addr(CBulletTrace) = ADDRESS_BY_VERSION(0x575190, 0x5751B0, 0x575080);
int ctor_gaddr(CBulletTrace) = GLOBAL_ADDRESS_BY_VERSION(0x575190, 0x5751B0, 0x575080);
