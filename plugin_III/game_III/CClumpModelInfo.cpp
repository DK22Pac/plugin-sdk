/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClumpModelInfo.h"

// Converted from void CClumpModelInfo::SetClump(RpClump *clump) 0x4F8830
void CClumpModelInfo::SetClump(RpClump* clump) {
    plugin::CallVirtualMethod<6, CClumpModelInfo *, RpClump*>(this, clump);
}

// Converted from thiscall void CClumpModelInfo::CClumpModelInfo(void) 0x50C040 
CClumpModelInfo::CClumpModelInfo() {
    plugin::CallMethod<0x50C040, CClumpModelInfo *>(this);
}

// Converted from cdecl void CClumpModelInfo::FillFrameArray(RpClump *clump,RwFrame **frames) 0x4F8B90
void CClumpModelInfo::FillFrameArray(RpClump* clump, RwFrame** frames) {
    plugin::Call<0x4F8B90, RpClump*, RwFrame**>(clump, frames);
}

// Converted from cdecl void CClumpModelInfo::FillFrameArrayCB(RwFrame *frame,void *searchData) 0x4F8B20
void CClumpModelInfo::FillFrameArrayCB(RwFrame* frame, void* searchData) {
    plugin::Call<0x4F8B20, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromIdCB(RwFrame *frame,void *searchData) 0x4F8AD0
RwFrame* CClumpModelInfo::FindFrameFromIdCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x4F8AD0, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromNameCB(RwFrame *frame,void *searchData) 0x4F8960
RwFrame* CClumpModelInfo::FindFrameFromNameCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x4F8960, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame *frame,void *searchData) 0x4F8A10
RwFrame* CClumpModelInfo::FindFrameFromNameWithoutIdCB(RwFrame* frame, void* searchData) {
    return plugin::CallAndReturn<RwFrame*, 0x4F8A10, RwFrame*, void*>(frame, searchData);
}

// Converted from cdecl RwFrame* CClumpModelInfo::GetFrameFromId(RpClump *clump,int id) 0x4F8B50
RwFrame* CClumpModelInfo::GetFrameFromId(RpClump* clump, int id) {
    return plugin::CallAndReturn<RwFrame*, 0x4F8B50, RpClump*, int>(clump, id);
}

// Converted from cdecl void CClumpModelInfo::SetAtomicRendererCB(RpAtomic *atomic,void *renderFunc) 0x4F8940
void CClumpModelInfo::SetAtomicRendererCB(RpAtomic* atomic, void* renderFunc) {
    plugin::Call<0x4F8940, RpAtomic*, void*>(atomic, renderFunc);
}

// Converted from thiscall void CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation *data) 0x4F8BB0
void CClumpModelInfo::SetFrameIds(RwObjectNameIdAssocation* data) {
    plugin::CallMethod<0x4F8BB0, CClumpModelInfo *, RwObjectNameIdAssocation*>(this, data);
}

// Converted from thiscall void CStore<CClumpModelInfo,5>::~CStore() 0x50C010 
ClumpModelStore::~ClumpModelStore() {
    plugin::CallMethod<0x50C010, ClumpModelStore *>(this);
}
