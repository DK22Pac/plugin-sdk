/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CBaseModelInfo.h"
#include "RwObjectNameIdAssocation.h"

struct RwFrame;
struct RpAtomic;
struct RpClump;


#pragma pack(push, 8)
class PLUGIN_API CClumpModelInfo : public CBaseModelInfo {
public:
    char gap28[4];
    int dword2C;
    
    //vtable

    void SetClump(RpClump* arg0);

    //funcs

    static void FillFrameArray(RpClump* clump, RwFrame** frames);
    static RwFrame* FindFrameFromIdCB(RwFrame* frame, void* searchData);
    static RwFrame* FindFrameFromNameCB(RwFrame* frame, void* searchData);
    static RwFrame* FindFrameFromNameWithoutIdCB(RwFrame* frame, void* searchData);
    static RwFrame* GetFrameFromId(RpClump* clump, int id);
    static void SetAtomicRendererCB(RpAtomic* atomic, void* renderFunc);
    static void SetFrameIds(RwObjectNameIdAssocation* data);
};
#pragma pack(pop)

VALIDATE_SIZE(CClumpModelInfo, 0x30);
