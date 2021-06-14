/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredCorona.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CRegisteredCorona) = ADDRESS_BY_VERSION(0x4FADE0, 0x4FAEC0, 0x4FAE50);
int ctor_gaddr(CRegisteredCorona) = GLOBAL_ADDRESS_BY_VERSION(0x4FADE0, 0x4FAEC0, 0x4FAE50);

int addrof(CRegisteredCorona::Update) = ADDRESS_BY_VERSION(0x4F8C40, 0x4F8D20, 0x4F8CB0);
int gaddrof(CRegisteredCorona::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F8C40, 0x4F8D20, 0x4F8CB0);

void CRegisteredCorona::Update() {
    plugin::CallMethodDynGlobal<CRegisteredCorona *>(gaddrof(CRegisteredCorona::Update), this);
}
