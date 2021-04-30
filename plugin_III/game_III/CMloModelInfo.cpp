/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMloModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMloModelInfo) = ADDRESS_BY_VERSION(0x50C100, 0x50C1F0, 0x50C180);
int ctor_gaddr(CMloModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C100, 0x50C1F0, 0x50C180);

int dtor_addr(CMloModelInfo) = ADDRESS_BY_VERSION(0x50C0E0, 0x50C1D0, 0x50C160);
int dtor_gaddr(CMloModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C0E0, 0x50C1D0, 0x50C160);

int del_dtor_addr(CMloModelInfo) = ADDRESS_BY_VERSION(0x50C170, 0x50C260, 0x50C1F0);
int del_dtor_gaddr(CMloModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C170, 0x50C260, 0x50C1F0);

int addrof(CMloModelInfo::ConstructClump) = ADDRESS_BY_VERSION(0x50B1A0, 0x50B280, 0x50B210);
int gaddrof(CMloModelInfo::ConstructClump) = GLOBAL_ADDRESS_BY_VERSION(0x50B1A0, 0x50B280, 0x50B210);

void CMloModelInfo::ConstructClump() {
    plugin::CallMethodDynGlobal<CMloModelInfo *>(gaddrof(CMloModelInfo::ConstructClump), this);
}
