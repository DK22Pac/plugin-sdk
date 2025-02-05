/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSimpleModelInfo.h"
#include "RenderWare.h"
#include "CClumpModelInfo.h"
#include "CEntity.h"
#include "CLinkList.h"

typedef bool(*ClumpVisibilityCB)(RpClump*);

class PLUGIN_API CVisibilityPlugins {
public:
    struct PLUGIN_API AlphaObjectInfo {
        union {
            CEntity *entity;
            RpAtomic *atomic;
        };
        float m_fDistance;
    };
    
    union PLUGIN_API AtomicExt {
        CSimpleModelInfo *modelInfo; //!< used by SimpleModelInfo
        int flags; //!< used by ClumpModelInfo
    };
    struct PLUGIN_API ClumpExt {
        ClumpVisibilityCB visibilityCB;
        int alpha;
    };
    struct PLUGIN_API FrameExt {
        int id; //!< BUG: this is abused to hold a pointer by SetClumpModelInfo
    };

    SUPPORTED_10EN_11EN_STEAM static int &ms_atomicPluginOffset;
    SUPPORTED_10EN_11EN_STEAM static int &ms_framePluginOffset;
    SUPPORTED_10EN_11EN_STEAM static int &ms_clumpPluginOffset;
    SUPPORTED_10EN_11EN_STEAM static float &ms_vehicleLod0Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_vehicleLod1Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_vehicleFadeDist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_bigVehicleLod0Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_bigVehicleLod1Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_pedLod0Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_pedLod1Dist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_pedFadeDist;
    SUPPORTED_10EN_11EN_STEAM static float &ms_cullCompsDist;
    SUPPORTED_10EN_11EN_STEAM static RwCamera *&ms_pCamera;
    SUPPORTED_10EN_11EN_STEAM static RwV3d *&ms_pCameraPosn;
    SUPPORTED_10EN_11EN_STEAM static CLinkList<AlphaObjectInfo> &m_alphaList;
    SUPPORTED_10EN_11EN_STEAM static CLinkList<AlphaObjectInfo> &m_alphaEntityList;

    SUPPORTED_10EN_11EN_STEAM static void *AtomicConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *AtomicCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *AtomicDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void ClearAtomicFlag(RpAtomic *atomic, int flag);
    SUPPORTED_10EN_11EN_STEAM static void *ClumpConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *ClumpCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *ClumpDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static bool DefaultVisibilityCB(RpClump *clump);
    SUPPORTED_10EN_11EN_STEAM static void *FrameConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *FrameCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static void *FrameDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
    SUPPORTED_10EN_11EN_STEAM static bool FrustumSphereCB(RpClump *clump);
    SUPPORTED_10EN_11EN_STEAM static int GetAtomicId(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static CSimpleModelInfo *GetAtomicModelInfo(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static int GetClumpAlpha(RpClump *clump);
    SUPPORTED_10EN_11EN_STEAM static float GetDistanceSquaredFromCamera(RwFrame *frame);
    SUPPORTED_10EN_11EN_STEAM static float GetDotProductWithCameraVector(RwMatrix *atomicMat, RwMatrix *clumpMat, unsigned int flag);
    SUPPORTED_10EN_11EN_STEAM static int GetFrameHierarchyId(RwFrame *frame);
    SUPPORTED_10EN_11EN_STEAM static void InitAlphaAtomicList();
    SUPPORTED_10EN_11EN_STEAM static void InitAlphaEntityList();
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static bool InsertAtomicIntoSortedList(RpAtomic *atomic, float dist);
    SUPPORTED_10EN_11EN_STEAM static bool InsertEntityIntoSortedList(CEntity *entity, float dist);
    SUPPORTED_10EN_11EN_STEAM static bool MloVisibilityCB(RpClump *clump);
    SUPPORTED_10EN_11EN_STEAM static bool PluginAttach();
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderAlphaAtomic(RpAtomic *atomic, int alpha);
    SUPPORTED_10EN_11EN_STEAM static void RenderAlphaAtomics();
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderFadingAtomic(RpAtomic *atomic, float camdist);
    SUPPORTED_10EN_11EN_STEAM static void RenderFadingEntities();
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderObjAlwaysAtomic(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderPedHiDetailCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderPedLowDetailCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderPlayerCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderTrainHiDetailAlphaCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderTrainHiDetailCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleHiDetailAlphaCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleHiDetailAlphaCB_BigVehicle(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleHiDetailCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleHiDetailCB_BigVehicle(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleHiDetailCB_Boat(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleLowDetailAlphaCB_BigVehicle(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleLowDetailCB_BigVehicle(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleReallyLowDetailCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderVehicleReallyLowDetailCB_BigVehicle(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *RenderWheelAtomicCB(RpAtomic *atomic);
    SUPPORTED_10EN_11EN_STEAM static void SetAtomicFlag(RpAtomic *atomic, int flag);
    SUPPORTED_10EN_11EN_STEAM static void SetAtomicModelInfo(RpAtomic *atomic, CSimpleModelInfo *info);
    SUPPORTED_10EN_11EN_STEAM static void SetAtomicRenderCallback(RpAtomic *atomic, RpAtomic *(*f)(RpAtomic *));
    SUPPORTED_10EN_11EN_STEAM static void SetClumpAlpha(RpClump *clump, int alpha);
    SUPPORTED_10EN_11EN_STEAM static void SetClumpModelInfo(RpClump *clump, CClumpModelInfo *info);
    SUPPORTED_10EN_11EN_STEAM static void SetFrameHierarchyId(RwFrame *frame, int id);
    SUPPORTED_10EN_11EN_STEAM static void SetRenderWareCamera(RwCamera *camera);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static bool VehicleVisibilityCB(RpClump *clump);
    SUPPORTED_10EN_11EN_STEAM static bool VehicleVisibilityCB_BigVehicle(RpClump *clump);
};

SUPPORTED_10EN_11EN_STEAM RpMaterial *SetAlphaCB(RpMaterial *material, void *data);
SUPPORTED_10EN_11EN_STEAM RpMaterial *SetTextureCB(RpMaterial *material, void *data);

VALIDATE_SIZE(CVisibilityPlugins::FrameExt, 0x4);
VALIDATE_SIZE(CVisibilityPlugins::ClumpExt, 0x8);
VALIDATE_SIZE(CVisibilityPlugins::AtomicExt, 0x4);
VALIDATE_SIZE(CVisibilityPlugins::AlphaObjectInfo, 0x8);

#include "meta/meta.CVisibilityPlugins.h"
