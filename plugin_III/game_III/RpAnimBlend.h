/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendNode.h"
#include "CAnimBlendClumpData.h"
#include "AnimBlendFrameData.h"
#include "RenderWare.h"
#include "CAnimBlendAssociation.h"

struct PLUGIN_API AnimBlendFrameUpdateData {
    int foobar;
    CAnimBlendNode *nodes[16];
};

SUPPORTED_10EN_11EN_STEAM extern CAnimBlendClumpData *&gpAnimBlendClump;
SUPPORTED_10EN_11EN_STEAM extern AnimBlendFrameData *&pFrameDataFound;
SUPPORTED_10EN_11EN_STEAM extern RwInt32 &ClumpOffset;

SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpUpdateAnimations(RpClump *clump, float timeDelta);
SUPPORTED_10EN_11EN_STEAM void FrameUpdateCallBack(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM void FrameUpdateCallBackWithVelocityExtraction(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM void FrameUpdateCallBackWith3dVelocityExtraction(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetFirstAssociation(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM void *AnimBlendClumpDestroy(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM void *AnimBlendClumpCreate(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendAllocateData(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM void *AnimBlendClumpCopy(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM RwBool RpAnimBlendPluginAttach();
SUPPORTED_10EN_11EN_STEAM RwFrame *FrameForAllChildrenCountCBnonskin(RwFrame *frame, void *data);
SUPPORTED_10EN_11EN_STEAM RwFrame *FrameForAllChildrenFillFrameArrayCBnonskin(RwFrame *frame, void *data);
SUPPORTED_10EN_11EN_STEAM void FrameInitCBnonskin(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM void FrameFindByNameCBnonskin(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM void FillFrameArrayCBnonskin(AnimBlendFrameData *frames, void *data);
SUPPORTED_10EN_11EN_STEAM AnimBlendFrameData *RpAnimBlendClumpFindFrame(RpClump *clump, char const *name);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpFillFrameArray(RpClump *clump, AnimBlendFrameData **frames);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpInit(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM bool RpAnimBlendClumpIsInitialized(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpSetBlendDeltas(RpClump *clump, unsigned int mask, float delta);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpRemoveAllAssociations(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM void RpAnimBlendClumpRemoveAssociations(RpClump *clump, unsigned int mask);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetAssociation(RpClump *clump, unsigned int id);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetMainAssociation(RpClump *clump, CAnimBlendAssociation **assocRet, float *blendRet);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetMainPartialAssociation(RpClump *clump);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetMainAssociation_N(RpClump *clump, int n);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetMainPartialAssociation_N(RpClump *clump, int n);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendClumpGetFirstAssociation(RpClump *clump, unsigned int mask);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendGetNextAssociation(CAnimBlendAssociation *assoc);
SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *RpAnimBlendGetNextAssociation(CAnimBlendAssociation *assoc, unsigned int mask);

VALIDATE_SIZE(AnimBlendFrameUpdateData, 0x44);

#include "meta/meta.RpAnimBlend.h"
