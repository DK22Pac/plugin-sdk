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

struct PLUGIN_API FrameSearchData {
    char const *name;
    RwFrame *result;
};

class PLUGIN_API CClumpModelInfo : public CBaseModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CClumpModelInfo)

public:
    RpClump *m_pClump;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();
    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance();
    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance(RwMatrix *matrix);
    SUPPORTED_10EN_11EN_STEAM RwObject *GetRwObject();
    SUPPORTED_10EN_11EN_STEAM void SetClump(RpClump *clump);

    SUPPORTED_10EN_11EN_STEAM void SetFrameIds(RwObjectNameIdAssocation *id);

    SUPPORTED_10EN_11EN_STEAM static void FillFrameArray(RpClump *clump, RwFrame **frames);
    SUPPORTED_10EN_11EN_STEAM static RwFrame *FillFrameArrayCB(RwFrame *frame, void *data);
    SUPPORTED_10EN_11EN_STEAM static RwFrame *FindFrameFromIdCB(RwFrame *frame, void *data);
    SUPPORTED_10EN_11EN_STEAM static RwFrame *FindFrameFromNameCB(RwFrame *frame, void *data);
    SUPPORTED_10EN_11EN_STEAM static RwFrame *FindFrameFromNameWithoutIdCB(RwFrame *frame, void *data);
    SUPPORTED_10EN_11EN_STEAM static RwFrame *GetFrameFromId(RpClump *clump, int id);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB(RpAtomic *atomic, void *data);

    static inline RwFrame *GetFrameFromName(RpClump *clump, char const *name) {
        FrameSearchData searchData;
        searchData.name = name;
        searchData.result = nullptr;
        RwFrameForAllChildren(reinterpret_cast<RwFrame *>(clump->object.parent), FindFrameFromNameCB, &searchData);
        return searchData.result;
    }
};

VALIDATE_SIZE(FrameSearchData, 0x8);
VTABLE_DESC(CClumpModelInfo, 0x5FE020, 7);
VALIDATE_SIZE(CClumpModelInfo, 0x34);

#include "meta/meta.CClumpModelInfo.h"
