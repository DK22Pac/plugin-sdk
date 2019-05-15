/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBaseModelInfo.h"
#include "RenderWare.h"
#include "RwObjectNameIdAssocation.h"

struct FrameSearchData {
    char const *name;
    RwFrame *result;
};

class CClumpModelInfo : public CBaseModelInfo {
public:
    RpClump *m_pClump;
    
    //vtable
    void SetClump(RpClump* clump);

    //funcs
    CClumpModelInfo(plugin::dummy_func_t) {}

    CClumpModelInfo();
    static void FillFrameArray(RpClump* clump, RwFrame** frames);
    static void FillFrameArrayCB(RwFrame* frame, void* searchData);
    static RwFrame* FindFrameFromIdCB(RwFrame* frame, void* searchData);
    static RwFrame* FindFrameFromNameCB(RwFrame* frame, void* searchData);
    static RwFrame* FindFrameFromNameWithoutIdCB(RwFrame* frame, void* searchData);
    static RwFrame* GetFrameFromId(RpClump* clump, int id);
    static void SetAtomicRendererCB(RpAtomic* atomic, void* renderFunc);
    void SetFrameIds(RwObjectNameIdAssocation* data);

    static inline RwFrame *GetFrameFromName(RpClump *clump, char const *name) {
        FrameSearchData searchData;
        searchData.name = name;
        searchData.result = nullptr;
        RwFrameForAllChildren(reinterpret_cast<RwFrame *>(clump->object.parent), FindFrameFromNameCB, &searchData);
        return searchData.result;
    }

protected:
    CClumpModelInfo(const CClumpModelInfo &) {};
    CClumpModelInfo &operator=(const CClumpModelInfo &) { return *this; };
};

VALIDATE_SIZE(CClumpModelInfo, 0x34);

struct ClumpModelStore {
    unsigned int m_nCount;
    CClumpModelInfo m_sObject[5];

    ~ClumpModelStore();
};
