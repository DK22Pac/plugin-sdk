/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClumpModelInfo.h"

// Converted from void CClumpModelInfo::SetClump(RpClump *) 0x6980B8
void CClumpModelInfo::SetClump(RpClump* clump) {
    plugin::CallVirtualMethod<9, CClumpModelInfo *, RpClump*>(this, clump);
}

CClumpModelInfo::CClumpModelInfo() {
    plugin::CallMethod<0x5601C0, CClumpModelInfo *>(this);
}

// Converted from cdecl void CClumpModelInfo::FillFrameArray(RpClump *clump, RwFrame **frames) 0x541100
void CClumpModelInfo::FillFrameArray(RpClump* clump, RwFrame** frames) {
    plugin::Call<0x541100, RpClump*, RwFrame**>(clump, frames);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromIdCB(RwFrame *frame, void *searchData) 0x541160
RwFrame* CClumpModelInfo::FindFrameFromIdCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x541160, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromNameCB(RwFrame *frame, void *searchData) 0x5411E0
RwFrame* CClumpModelInfo::FindFrameFromNameCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x5411E0, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame *frame, void *searchData) 0x541190
RwFrame* CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x541190, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::GetFrameFromId(RpClump *clump, int id) 0x541120
RwFrame* CClumpModelInfo::GetFrameFromId(RpClump* clump, int id) {
    return plugin::CallAndReturn<RwFrame*, 0x541120, RpClump*, int>(clump, id);
}

// Converted from cdecl void CClumpModelInfo::SetAtomicRendererCB(RpAtomic *atomic, void *renderFunc) 0x5412A0 
void CClumpModelInfo::SetAtomicRendererCB(RpAtomic* atomic, void* renderFunc) {
    plugin::Call<0x5412A0, RpAtomic*, void*>(atomic, renderFunc);
}

// Converted from thiscall void CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation *data) 0x541090
void CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation* data) {
    plugin::CallMethod<0x541090, CClumpModelInfo *, RwObjectNameIdAssocation*>(this, data);
}

// Converted from thiscall void CStore<CClumpModelInfo,5>::~CStore() 0x560190 
ClumpModelStore::~ClumpModelStore() {
    plugin::CallMethod<0x560190, ClumpModelStore *>(this);
}
