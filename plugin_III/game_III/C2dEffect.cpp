/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C2dEffect.h"

PLUGIN_SOURCE_FILE

int addrof(C2dEffect::Shutdown) = ADDRESS_BY_VERSION(0x50B820, 0x50B900, 0x50B890);
int gaddrof(C2dEffect::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x50B820, 0x50B900, 0x50B890);

void C2dEffect::Shutdown() {
    plugin::CallMethodDynGlobal<C2dEffect *>(gaddrof(C2dEffect::Shutdown), this);
}
