/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAntenna.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAntenna) = ADDRESS_BY_VERSION(0x4F6A10, 0x4F6AC0, 0x4F6A50);
int ctor_gaddr(CAntenna) = GLOBAL_ADDRESS_BY_VERSION(0x4F6A10, 0x4F6AC0, 0x4F6A50);

int addrof(CAntenna::Update) = ADDRESS_BY_VERSION(0x4F6830, 0x4F68E0, 0x4F6870);
int gaddrof(CAntenna::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F6830, 0x4F68E0, 0x4F6870);

void CAntenna::Update(CVector dir, CVector pos) {
    plugin::CallMethodDynGlobal<CAntenna *, CVector, CVector>(gaddrof(CAntenna::Update), this, dir, pos);
}
