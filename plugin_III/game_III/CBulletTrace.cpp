/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTrace.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CBulletTrace) = ADDRESS_BY_VERSION(0x51C390, 0x51C5C0, 0x51C550);
int ctor_gaddr(CBulletTrace) = GLOBAL_ADDRESS_BY_VERSION(0x51C390, 0x51C5C0, 0x51C550);

int addrof(CBulletTrace::Update) = ADDRESS_BY_VERSION(0x519270, 0x5194A0, 0x519430);
int gaddrof(CBulletTrace::Update) = GLOBAL_ADDRESS_BY_VERSION(0x519270, 0x5194A0, 0x519430);

void CBulletTrace::Update() {
    plugin::CallMethodDynGlobal<CBulletTrace *>(gaddrof(CBulletTrace::Update), this);
}
