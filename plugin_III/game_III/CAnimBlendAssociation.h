/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "RenderWare.h"
#include "CAnimBlendClumpData.h"
#include "CAnimBlendNode.h"

class CAnimBlendHierarchy;

#pragma pack(push, 8)
class CAnimBlendAssociation {
public:
    void *vtable;
    CAnimBlendAssociation *m_pPrev;
    CAnimBlendClumpData *m_pAnimBlendClumpData;
    short m_nNumBlendNodes;
    short m_nAnimGroup;
    CAnimBlendNode *m_pAnimBlendNodeArray;
    CAnimBlendHierarchy *m_pAnimBlendHierarchy;
    float m_fBlendAmount;
    float m_fBlendDelta;
    float m_fCurrentTime;
    float m_fSpeed;
    float m_fTimeStep;
    int m_nAnimID;
    int m_nFlags;
    int m_nCallbackType;
    void *m_pCallbackFunc;
    void *m_pCallbackData;
        
    //vtable
    ~CAnimBlendAssociation();

    //funcs
    void AllocateAnimBlendNodeArray(int arg0);
    CAnimBlendAssociation(CAnimBlendAssociation& arg0);
    CAnimBlendAssociation();
    void FreeAnimBlendNodeArray();
    CAnimBlendNode* GetNode(int arg0);
    void Init(CAnimBlendAssociation& arg0);
    void Init(RpClump* clump, CAnimBlendHierarchy* hierarchy);
    void SetBlend(float amount, float delta);
    void SetCurrentTime(float time);
    void Start(float time);
    void SyncAnimation(CAnimBlendAssociation* arg0);
    bool UpdateBlend(float arg0);
    void UpdateTime(float arg0, float arg1);
    //CAnimBlendAssociation::SetDeleteCallback(void(*)(CAnimBlendAssociation*, void *), void *) 0x401800
    //CAnimBlendAssociation::SetFinishCallback(void(*)(CAnimBlendAssociation*, void *), void *) 0x401820
};
#pragma pack(pop)

VALIDATE_SIZE(CAnimBlendAssociation, 0x40);