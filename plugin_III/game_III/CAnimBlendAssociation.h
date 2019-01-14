/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CAnimBlendClumpData.h"
#include "CAnimBlendNode.h"

class CAnimBlendHierarchy;
enum eAnimationFlags
{
    ANIMATION_STARTED = 0x1,
    ANIMATION_LOOPED = 0x2,
    ANIMATION_HASPARTIALBLEND = 0x4,
    ANIMATION_FLAG8 = 0x8,
    ANIMATION_PARTIAL = 0x10,
    ANIMATION_MOVEMENT = 0x20,
    // Camera will not move with ped, and ped will go back to the initial position
    // when the animation ends
    ANIMATION_CUTSCENEANIM = 0x40,
    ANIMATION_FLAG80 = 0x80,
    ANIMATION_FLAG100 = 0x100,
    ANIMATION_FLAG200 = 0x200,
    ANIMATION_FLAG400 = 0x400,
    ANIMATION_FLAG800 = 0x800,
    ANIMATION_PLAYER_LR = 0x1000
};

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

VALIDATE_SIZE(CAnimBlendAssociation, 0x40);