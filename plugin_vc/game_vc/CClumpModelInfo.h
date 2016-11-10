/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
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
    union {
        char *m_pszAnimFileName;
        int m_nAnimFileIndex;
    };
    
    //vtable

    void SetClump(RpClump* clump);

    //funcs

    CClumpModelInfo();
    CClumpModelInfo(plugin::dummy_func_t) {}

    static void FillFrameArray(RpClump* clump, RwFrame** frames);
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
    CClumpModelInfo &operator=(const CClumpModelInfo &) {};
};

VALIDATE_SIZE(CClumpModelInfo, 0x30);