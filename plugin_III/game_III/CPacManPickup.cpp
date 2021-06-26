/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPacManPickup.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPacManPickup) = ADDRESS_BY_VERSION(0x4340D0, 0x4340D0, 0x4340D0);
int ctor_gaddr(CPacManPickup) = GLOBAL_ADDRESS_BY_VERSION(0x4340D0, 0x4340D0, 0x4340D0);

int addrof(CPacManPickup::Update) = ADDRESS_BY_VERSION(0x4331B0, 0x4331B0, 0x4331B0);
int gaddrof(CPacManPickup::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4331B0, 0x4331B0, 0x4331B0);

void CPacManPickup::Update() {
    plugin::CallMethodDynGlobal<CPacManPickup *>(gaddrof(CPacManPickup::Update), this);
}
