/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBaseModelInfo.h"
#include "RenderWare.h"
#include "RwObjectNameIdAssocation.h"
#include "NodeName.h"

struct FrameSearchData {
    char const *name;
    RwFrame *result;
};

VALIDATE_SIZE(FrameSearchData, 8);

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

    static RwFrame* FindFrameFromNameCB_Fixed(RwFrame* frame, void* data) {
        auto searchData = reinterpret_cast<FrameSearchData *>(data);
        if (!_stricmp(GetFrameNodeName(frame), searchData->name)) {
            searchData->result = frame;
            return nullptr;
        }
        RwFrameForAllChildren(frame, FindFrameFromNameCB_Fixed, data);
        if (searchData->result)
            return nullptr;
        return frame;
    }

    static RwFrame *GetFrameFromName(RpClump *clump, char const *name) {
        FrameSearchData searchData;
        searchData.name = name;
        searchData.result = nullptr;
        RwFrameForAllChildren(reinterpret_cast<RwFrame *>(clump->object.parent), FindFrameFromNameCB_Fixed, &searchData);
        return searchData.result;
    }

protected:
    CClumpModelInfo(const CClumpModelInfo &) {};
    CClumpModelInfo &operator=(const CClumpModelInfo &) { return *this; };
};

VALIDATE_SIZE(CClumpModelInfo, 0x30);

struct ClumpModelStore {
    unsigned int m_nCount;
    CClumpModelInfo m_sObject[5];

    ~ClumpModelStore();
};
