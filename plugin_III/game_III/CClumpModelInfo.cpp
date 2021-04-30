/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClumpModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CClumpModelInfo) = ADDRESS_BY_VERSION(0x50C040, 0x50C130, 0x50C0C0);
int ctor_gaddr(CClumpModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C040, 0x50C130, 0x50C0C0);

int dtor_addr(CClumpModelInfo) = ADDRESS_BY_VERSION(0x50C030, 0x50C120, 0x50C0B0);
int dtor_gaddr(CClumpModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C030, 0x50C120, 0x50C0B0);

int del_dtor_addr(CClumpModelInfo) = ADDRESS_BY_VERSION(0x50C320, 0x50C410, 0x50C3A0);
int del_dtor_gaddr(CClumpModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C320, 0x50C410, 0x50C3A0);

int addrof(CClumpModelInfo::DeleteRwObject) = ADDRESS_BY_VERSION(0x4F8800, 0x4F88E0, 0x4F8870);
int gaddrof(CClumpModelInfo::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x4F8800, 0x4F88E0, 0x4F8870);

void CClumpModelInfo::DeleteRwObject() {
    plugin::CallVirtualMethod<2, CClumpModelInfo *>(this);
}

int addrof_o(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)()) = ADDRESS_BY_VERSION(0x4F8920, 0x4F8A00, 0x4F8990);
int gaddrof_o(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x4F8920, 0x4F8A00, 0x4F8990);

RwObject *CClumpModelInfo::CreateInstance() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 3, CClumpModelInfo *>(this);
}

int addrof_o(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)(RwMatrix *)) = ADDRESS_BY_VERSION(0x4F88A0, 0x4F8980, 0x4F8910);
int gaddrof_o(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)(RwMatrix *)) = GLOBAL_ADDRESS_BY_VERSION(0x4F88A0, 0x4F8980, 0x4F8910);

RwObject *CClumpModelInfo::CreateInstance(RwMatrix *matrix) {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 4, CClumpModelInfo *, RwMatrix *>(this, matrix);
}

int addrof(CClumpModelInfo::GetRwObject) = ADDRESS_BY_VERSION(0x50C1C0, 0x50C2B0, 0x50C240);
int gaddrof(CClumpModelInfo::GetRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x50C1C0, 0x50C2B0, 0x50C240);

RwObject *CClumpModelInfo::GetRwObject() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 5, CClumpModelInfo *>(this);
}

int addrof(CClumpModelInfo::SetClump) = ADDRESS_BY_VERSION(0x4F8830, 0x4F8910, 0x4F88A0);
int gaddrof(CClumpModelInfo::SetClump) = GLOBAL_ADDRESS_BY_VERSION(0x4F8830, 0x4F8910, 0x4F88A0);

void CClumpModelInfo::SetClump(RpClump *clump) {
    plugin::CallVirtualMethod<6, CClumpModelInfo *, RpClump *>(this, clump);
}

int addrof(CClumpModelInfo::SetFrameIds) = ADDRESS_BY_VERSION(0x4F8BB0, 0x4F8C90, 0x4F8C20);
int gaddrof(CClumpModelInfo::SetFrameIds) = GLOBAL_ADDRESS_BY_VERSION(0x4F8BB0, 0x4F8C90, 0x4F8C20);

void CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation *id) {
    plugin::CallMethodDynGlobal<CClumpModelInfo *, RwObjectNameIdAssocation *>(gaddrof(CClumpModelInfo::SetFrameIds), this, id);
}

int addrof(CClumpModelInfo::FillFrameArray) = ADDRESS_BY_VERSION(0x4F8B90, 0x4F8C70, 0x4F8C00);
int gaddrof(CClumpModelInfo::FillFrameArray) = GLOBAL_ADDRESS_BY_VERSION(0x4F8B90, 0x4F8C70, 0x4F8C00);

void CClumpModelInfo::FillFrameArray(RpClump *clump, RwFrame **frames) {
    plugin::CallDynGlobal<RpClump *, RwFrame **>(gaddrof(CClumpModelInfo::FillFrameArray), clump, frames);
}

int addrof(CClumpModelInfo::FillFrameArrayCB) = ADDRESS_BY_VERSION(0x4F8B20, 0x4F8C00, 0x4F8B90);
int gaddrof(CClumpModelInfo::FillFrameArrayCB) = GLOBAL_ADDRESS_BY_VERSION(0x4F8B20, 0x4F8C00, 0x4F8B90);

RwFrame *CClumpModelInfo::FillFrameArrayCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(CClumpModelInfo::FillFrameArrayCB), frame, data);
}

int addrof(CClumpModelInfo::FindFrameFromIdCB) = ADDRESS_BY_VERSION(0x4F8AD0, 0x4F8BB0, 0x4F8B40);
int gaddrof(CClumpModelInfo::FindFrameFromIdCB) = GLOBAL_ADDRESS_BY_VERSION(0x4F8AD0, 0x4F8BB0, 0x4F8B40);

RwFrame *CClumpModelInfo::FindFrameFromIdCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(CClumpModelInfo::FindFrameFromIdCB), frame, data);
}

int addrof(CClumpModelInfo::FindFrameFromNameCB) = ADDRESS_BY_VERSION(0x4F8960, 0x4F8A40, 0x4F89D0);
int gaddrof(CClumpModelInfo::FindFrameFromNameCB) = GLOBAL_ADDRESS_BY_VERSION(0x4F8960, 0x4F8A40, 0x4F89D0);

RwFrame *CClumpModelInfo::FindFrameFromNameCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(CClumpModelInfo::FindFrameFromNameCB), frame, data);
}

int addrof(CClumpModelInfo::FindFrameFromNameWithoutIdCB) = ADDRESS_BY_VERSION(0x4F8A10, 0x4F8AF0, 0x4F8A80);
int gaddrof(CClumpModelInfo::FindFrameFromNameWithoutIdCB) = GLOBAL_ADDRESS_BY_VERSION(0x4F8A10, 0x4F8AF0, 0x4F8A80);

RwFrame *CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(CClumpModelInfo::FindFrameFromNameWithoutIdCB), frame, data);
}

int addrof(CClumpModelInfo::GetFrameFromId) = ADDRESS_BY_VERSION(0x4F8B50, 0x4F8C30, 0x4F8BC0);
int gaddrof(CClumpModelInfo::GetFrameFromId) = GLOBAL_ADDRESS_BY_VERSION(0x4F8B50, 0x4F8C30, 0x4F8BC0);

RwFrame *CClumpModelInfo::GetFrameFromId(RpClump *clump, int id) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RpClump *, int>(gaddrof(CClumpModelInfo::GetFrameFromId), clump, id);
}

int addrof(CClumpModelInfo::SetAtomicRendererCB) = ADDRESS_BY_VERSION(0x4F8940, 0x4F8A20, 0x4F89B0);
int gaddrof(CClumpModelInfo::SetAtomicRendererCB) = GLOBAL_ADDRESS_BY_VERSION(0x4F8940, 0x4F8A20, 0x4F89B0);

RpAtomic *CClumpModelInfo::SetAtomicRendererCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CClumpModelInfo::SetAtomicRendererCB), atomic, data);
}
