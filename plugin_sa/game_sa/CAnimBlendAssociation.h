/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "AnimAssociationData.h"
#include "eAnimBlendCallbackType.h"
#include "RenderWare.h"

class CAnimBlendNode;
class CAnimBlendHierarchy;
class CAnimBlendStaticAssociation;

class PLUGIN_API CAnimBlendAssociation : public AnimAssociationData {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CAnimBlendAssociation)

public:
    eAnimBlendCallbackType m_nCallbackType;
    void(*m_pCallbackFunc)(CAnimBlendAssociation *, void *);
    void *m_pCallbackData;

    // vtable function #0 (destructor)

    SUPPORTED_10US void AllocateAnimBlendNodeArray(int count);
    SUPPORTED_10US void FreeAnimBlendNodeArray();
    SUPPORTED_10US CAnimBlendNode *GetNode(int nodeIndex);
    SUPPORTED_10US void Init(RpClump *clump, CAnimBlendHierarchy *hierarchy);
    SUPPORTED_10US void Init(CAnimBlendAssociation &source);
    SUPPORTED_10US void Init(CAnimBlendStaticAssociation &source);
    SUPPORTED_10US void ReferenceAnimBlock();
    SUPPORTED_10US void SetBlend(float blendAmount, float blendDelta);
    SUPPORTED_10US void SetBlendTo(float blendAmount, float blendDelta);
    SUPPORTED_10US void SetCurrentTime(float currentTime);
    SUPPORTED_10US void SetDeleteCallback(void(*callback)(CAnimBlendAssociation *, void *), void *data);
    SUPPORTED_10US void SetFinishCallback(void(*callback)(CAnimBlendAssociation *, void *), void *data);
    SUPPORTED_10US void Start(float currentTime);
    SUPPORTED_10US void SyncAnimation(CAnimBlendAssociation *syncWith);
    SUPPORTED_10US bool UpdateBlend(float blendDeltaMult);
    SUPPORTED_10US bool UpdateTime(float unused1, float unused2);
    SUPPORTED_10US void UpdateTimeStep(float speedMult, float timeMult);
};

VTABLE_DESC(CAnimBlendAssociation, 0x85C6D0, 1);
VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);

#include "meta/meta.CAnimBlendAssociation.h"
