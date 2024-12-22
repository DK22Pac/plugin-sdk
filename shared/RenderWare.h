/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#if defined(RW) || defined(UNREAL)
#include "PluginBase.h"

#if __has_include(<rwplcore.h>)
#ifndef rwPLUGIN_ID 
#define rwPLUGIN_ID 0x01
#endif
#include <rwcore.h>
#include <rpworld.h>
#include <rphanim.h>
#include <rpmatfx.h>
#include <rpskin.h>
#include <rpcollis.h>
#include <rtquat.h>
#include <rtvcat.h>
#include <rtbmp.h>
#include <rtpng.h>
#include <rpanisot.h>
#include <skeleton.h>
#include <rpdbgerr.h>
#else
#error[Plugin-SDK] RenderWare SDK not found, please add (to this project include directories) a path to: "$(PLUGIN_SDK_DIR)\\plugin_XX\\game_XX\\rw\\" XX is the suffix of the target game (ex: III, VC or SA)
#endif

#if defined(GTASA) || defined(GTAVC)
#include <rtanim.h>
#endif

#if defined(GTASA)
#include <rpuvanim.h>
#include <rtdict.h>
#endif

struct SkinBoneData {
    RwUInt32 numBones;
    RwUInt32 numUsedBones;
    RwUInt8* usedBoneList;
    RwMatrix* invBoneToSkinMat;
};

struct SkinVertexMaps {
    RwUInt32 maxWeights;
    RwUInt32* matrixIndices;
    RwMatrixWeights* matrixWeights;
};

struct SkinPlatformData {
    RwUInt32 maxWeights;
};

struct SkinSplitData {
    RwUInt32 boneLimit;
    RwUInt32 numMeshes;
    RwUInt32 numRLE;
    RwUInt8* matrixRemapIndices;
    RwUInt8* meshRLECount;
    RwUInt8* meshRLE;
};

typedef void* SkinUnaligned;

struct RpSkinData {
    SkinBoneData boneData;
    SkinVertexMaps vertexMaps;
    SkinPlatformData platformData;
    SkinSplitData skinSplitData;
    SkinUnaligned* unaligned;
};

static RpSkinData* RpSkinGetData(RpSkin* skin) {
    return reinterpret_cast<RpSkinData*>(skin);
}

extern RsGlobalType& RsGlobal;
extern RwModuleInfo& _rwIm3DModule;
extern RwModuleInfo& rasterModule;
extern RwInt32& _rpClumpLightExtOffset;

#ifdef GTASA
extern RwPluginRegistry& geometryTKList;
#endif


#ifndef RWIMMEDIGLOBAL
#define RWIMMEDIGLOBAL(var)                             \
    (RWPLUGINOFFSET(rwImmediGlobals,                    \
                    RwEngineInstance,                   \
                    _rwIm3DModule.globalsOffset)->var)
#endif

typedef struct rwRasterGlobals rwRasterGlobals;
struct rwRasterGlobals {
    RwRaster* rasterStack[rwRASTERCONTEXTSTACKSIZE];
    RwInt32 rasterSP;
    RwRaster dummyRaster;

    RwFreeList* rasterFreeList;
};

#ifndef RWRASTERGLOBAL
#define RWRASTERGLOBAL(var)                             \
    (RWPLUGINOFFSET(rwRasterGlobals,                    \
                    RwEngineInstance,                   \
                    rasterModule.globalsOffset)->var)
#endif

typedef struct RpClumpLightExt RpClumpLightExt;
struct RpClumpLightExt {
    RpClump* clump;
    RwLLLink inClumpLink;
};

#ifndef CLUMPLIGHTEXTFROMLIGHT
#define CLUMPLIGHTEXTFROMLIGHT(light) \
   ((RpClumpLightExt *)(((RwUInt8 *)(light)) + _rpClumpLightExtOffset))
#endif

#endif
