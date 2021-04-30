/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CXtraCompsModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CXtraCompsModelInfo) = ADDRESS_BY_VERSION(0x50BF10, 0x50C000, 0x50BF90);
int ctor_gaddr(CXtraCompsModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BF10, 0x50C000, 0x50BF90);

int dtor_addr(CXtraCompsModelInfo) = ADDRESS_BY_VERSION(0x50BEF0, 0x50BFE0, 0x50BF70);
int dtor_gaddr(CXtraCompsModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BEF0, 0x50BFE0, 0x50BF70);

int del_dtor_addr(CXtraCompsModelInfo) = ADDRESS_BY_VERSION(0x50C360, 0x50C450, 0x50C3E0);
int del_dtor_gaddr(CXtraCompsModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C360, 0x50C450, 0x50C3E0);

int addrof(CXtraCompsModelInfo::Shutdown) = ADDRESS_BY_VERSION(0x524BB0, 0x524DF0, 0x524D80);
int gaddrof(CXtraCompsModelInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x524BB0, 0x524DF0, 0x524D80);

void CXtraCompsModelInfo::Shutdown() {
    plugin::CallVirtualMethod<1, CXtraCompsModelInfo *>(this);
}

int addrof(CXtraCompsModelInfo::CreateInstance) = ADDRESS_BY_VERSION(0x50C3B0, 0x50C4A0, 0x50C430);
int gaddrof(CXtraCompsModelInfo::CreateInstance) = GLOBAL_ADDRESS_BY_VERSION(0x50C3B0, 0x50C4A0, 0x50C430);

RwObject *CXtraCompsModelInfo::CreateInstance() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 3, CXtraCompsModelInfo *>(this);
}

int addrof(CXtraCompsModelInfo::SetClump) = ADDRESS_BY_VERSION(0x524BA0, 0x524DE0, 0x524D70);
int gaddrof(CXtraCompsModelInfo::SetClump) = GLOBAL_ADDRESS_BY_VERSION(0x524BA0, 0x524DE0, 0x524D70);

void CXtraCompsModelInfo::SetClump(RpClump *clump) {
    plugin::CallVirtualMethod<6, CXtraCompsModelInfo *, RpClump *>(this, clump);
}
