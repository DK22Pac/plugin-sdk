/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CInstance.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CInstance) = ADDRESS_BY_VERSION(0x50BEB0, 0x50BFA0, 0x50BF30);
int ctor_gaddr(CInstance) = GLOBAL_ADDRESS_BY_VERSION(0x50BEB0, 0x50BFA0, 0x50BF30);

int dtor_addr(CInstance) = ADDRESS_BY_VERSION(0x50BE90, 0x50BF80, 0x50BF10);
int dtor_gaddr(CInstance) = GLOBAL_ADDRESS_BY_VERSION(0x50BE90, 0x50BF80, 0x50BF10);

int del_dtor_addr(CInstance) = ADDRESS_BY_VERSION(0x50C3C0, 0x50C4B0, 0x50C440);
int del_dtor_gaddr(CInstance) = GLOBAL_ADDRESS_BY_VERSION(0x50C3C0, 0x50C4B0, 0x50C440);

int addrof(CInstance::Shutdown) = ADDRESS_BY_VERSION(0x50B850, 0x50B940, 0x50B8D0);
int gaddrof(CInstance::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x50B850, 0x50B940, 0x50B8D0);

void CInstance::Shutdown() {
    plugin::CallMethodDynGlobal<CInstance *>(gaddrof(CInstance::Shutdown), this);
}
