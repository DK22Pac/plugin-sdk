/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMouseControllerState.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMouseControllerState) = ADDRESS_BY_VERSION(0x491B80, 0x491C40, 0x491BD0);
int ctor_gaddr(CMouseControllerState) = GLOBAL_ADDRESS_BY_VERSION(0x491B80, 0x491C40, 0x491BD0);

CMouseControllerState::CMouseControllerState() {
    plugin::CallMethodDynGlobal<CMouseControllerState *>(ctor_gaddr(CMouseControllerState), this);
}

int addrof(CMouseControllerState::Clear) = ADDRESS_BY_VERSION(0x491BB0, 0x491C70, 0x491C00);
int gaddrof(CMouseControllerState::Clear) = GLOBAL_ADDRESS_BY_VERSION(0x491BB0, 0x491C70, 0x491C00);

void CMouseControllerState::Clear() {
    plugin::CallMethodDynGlobal<CMouseControllerState *>(gaddrof(CMouseControllerState::Clear), this);
}
