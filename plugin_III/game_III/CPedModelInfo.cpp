/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedModelInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwObjectNameIdAssocation *(&CPedModelInfo::m_pPedIds)[12] = *reinterpret_cast<RwObjectNameIdAssocation *(*)[12]>(GLOBAL_ADDRESS_BY_VERSION(0x5FE7A4, 0x5FE58C, 0x60B584));

int ctor_addr(CPedModelInfo) = ADDRESS_BY_VERSION(0x50BFA0, 0x50C090, 0x50C020);
int ctor_gaddr(CPedModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BFA0, 0x50C090, 0x50C020);

int dtor_addr(CPedModelInfo) = ADDRESS_BY_VERSION(0x50BF60, 0x50C050, 0x50BFE0);
int dtor_gaddr(CPedModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BF60, 0x50C050, 0x50BFE0);

int del_dtor_addr(CPedModelInfo) = ADDRESS_BY_VERSION(0x50C2B0, 0x50C3A0, 0x50C330);
int del_dtor_gaddr(CPedModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C2B0, 0x50C3A0, 0x50C330);

int addrof(CPedModelInfo::DeleteRwObject) = ADDRESS_BY_VERSION(0x510280, 0x510470, 0x510400);
int gaddrof(CPedModelInfo::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x510280, 0x510470, 0x510400);

void CPedModelInfo::DeleteRwObject() {
    plugin::CallVirtualMethod<2, CPedModelInfo *>(this);
}

int addrof(CPedModelInfo::SetClump) = ADDRESS_BY_VERSION(0x510210, 0x510400, 0x510390);
int gaddrof(CPedModelInfo::SetClump) = GLOBAL_ADDRESS_BY_VERSION(0x510210, 0x510400, 0x510390);

void CPedModelInfo::SetClump(RpClump *clump) {
    plugin::CallVirtualMethod<6, CPedModelInfo *, RpClump *>(this, clump);
}

int addrof(CPedModelInfo::CreateHitColModel) = ADDRESS_BY_VERSION(0x5104D0, 0x5106C0, 0x510650);
int gaddrof(CPedModelInfo::CreateHitColModel) = GLOBAL_ADDRESS_BY_VERSION(0x5104D0, 0x5106C0, 0x510650);

void CPedModelInfo::CreateHitColModel() {
    plugin::CallMethodDynGlobal<CPedModelInfo *>(gaddrof(CPedModelInfo::CreateHitColModel), this);
}

int addrof(CPedModelInfo::SetLowDetailClump) = ADDRESS_BY_VERSION(0x510390, 0x510580, 0x510510);
int gaddrof(CPedModelInfo::SetLowDetailClump) = GLOBAL_ADDRESS_BY_VERSION(0x510390, 0x510580, 0x510510);

void CPedModelInfo::SetLowDetailClump(RpClump *clump) {
    plugin::CallMethodDynGlobal<CPedModelInfo *, RpClump *>(gaddrof(CPedModelInfo::SetLowDetailClump), this, clump);
}
