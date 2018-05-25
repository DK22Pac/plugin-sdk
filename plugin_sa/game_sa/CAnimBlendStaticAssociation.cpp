/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendStaticAssociation.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendStaticAssociation) = ADDRESS_BY_VERSION(0x4CE940, 0, 0, 0, 0, 0);
int ctor_gaddr(CAnimBlendStaticAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CE940, 0, 0, 0, 0, 0);

int ctor_addr_o(CAnimBlendStaticAssociation, void(RpClump *, CAnimBlendHierarchy *)) = ADDRESS_BY_VERSION(0x4CEF60, 0, 0, 0, 0, 0);
int ctor_gaddr_o(CAnimBlendStaticAssociation, void(RpClump *, CAnimBlendHierarchy *)) = GLOBAL_ADDRESS_BY_VERSION(0x4CEF60, 0, 0, 0, 0, 0);

int dtor_addr(CAnimBlendStaticAssociation) = ADDRESS_BY_VERSION(0x4CEC00, 0, 0, 0, 0, 0);
int dtor_gaddr(CAnimBlendStaticAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CEC00, 0, 0, 0, 0, 0);

int del_dtor_addr(CAnimBlendStaticAssociation) = ADDRESS_BY_VERSION(0x4CDF50, 0, 0, 0, 0, 0);
int del_dtor_gaddr(CAnimBlendStaticAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CDF50, 0, 0, 0, 0, 0);

int addrof(CAnimBlendStaticAssociation::AllocateSequenceArray) = ADDRESS_BY_VERSION(0x4CE960, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendStaticAssociation::AllocateSequenceArray) = GLOBAL_ADDRESS_BY_VERSION(0x4CE960, 0, 0, 0, 0, 0);

void CAnimBlendStaticAssociation::AllocateSequenceArray(int count) {
    plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *, int>(gaddrof(CAnimBlendStaticAssociation::AllocateSequenceArray), this, count);
}

int addrof(CAnimBlendStaticAssociation::FreeSequenceArray) = ADDRESS_BY_VERSION(0x4CE9A0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendStaticAssociation::FreeSequenceArray) = GLOBAL_ADDRESS_BY_VERSION(0x4CE9A0, 0, 0, 0, 0, 0);

void CAnimBlendStaticAssociation::FreeSequenceArray() {
    plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *>(gaddrof(CAnimBlendStaticAssociation::FreeSequenceArray), this);
}

int addrof(CAnimBlendStaticAssociation::Init) = ADDRESS_BY_VERSION(0x4CEC20, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendStaticAssociation::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4CEC20, 0, 0, 0, 0, 0);

void CAnimBlendStaticAssociation::Init(RpClump *clump, CAnimBlendHierarchy *hierarchy) {
    plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *, RpClump *, CAnimBlendHierarchy *>(gaddrof(CAnimBlendStaticAssociation::Init), this, clump, hierarchy);
}
