/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendLink.h"
#include "CAnimBlendNode.h"
#include "RenderWare.h"
#include "CAnimBlendHierarchy.h"

enum PLUGIN_API eAnimationFlags : unsigned int {
    ASSOC_RUNNING = 0x1,
    ASSOC_REPEAT = 0x2,
    ASSOC_DELETEFADEDOUT = 0x4,
    ASSOC_FADEOUTWHENDONE = 0x8,
    ASSOC_PARTIAL = 0x10,
    ASSOC_MOVEMENT = 0x20,
    ASSOC_HAS_TRANSLATION = 0x40,
    ASSOC_WALK = 0x80, //!< for CPed::PlayFootSteps(void)
    ASSOC_IDLE = 0x100, //!< only used by xpress scratch, see CPed::Chat(void)
    ASSOC_NOWALK = 0x200, //!< see CPed::PlayFootSteps(void)
    ASSOC_BLOCK = 0x400, //!< unused in assoc description, blocks other anims from being played
    ASSOC_FRONTAL = 0x800, //!< anims that we fall to front
    ASSOC_HAS_X_TRANSLATION = 0x1000 //!< for 2d velocity extraction
};

enum PLUGIN_API eCallbackType : unsigned int {
    CB_NONE = 0,
    CB_FINISH = 1,
    CB_DELETE = 2
};

class PLUGIN_API CAnimBlendAssociation {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CAnimBlendAssociation)

public:
    CAnimBlendLink link;
    int m_nNumBlendNodes;
    CAnimBlendNode *m_pAnimBlendNodeArray;
    CAnimBlendHierarchy *m_pAnimBlendHierarchy;
    float m_fBlendAmount;
    float m_fBlendDelta; //!< how much blendAmount changes over time
    float m_fCurrentTime;
    float m_fSpeed;
    float m_fTimeStep;
    int m_nAnimID;
    int m_nFlags;
    int m_nCallbackType; //!< see eCallbackType
    void(*m_pCallbackFunc)(CAnimBlendAssociation *, void *);
    void *m_pCallbackData;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM void AllocateAnimBlendNodeArray(int n);
    SUPPORTED_10EN_11EN_STEAM void FreeAnimBlendNodeArray();
    SUPPORTED_10EN_11EN_STEAM CAnimBlendNode *GetNode(int index);
    SUPPORTED_10EN_11EN_STEAM void Init(RpClump *clump, CAnimBlendHierarchy *hier);
    SUPPORTED_10EN_11EN_STEAM void Init(CAnimBlendAssociation &assoc);
    SUPPORTED_10EN_11EN_STEAM void SetBlend(float amount, float delta);
    SUPPORTED_10EN_11EN_STEAM void SetCurrentTime(float time);
    SUPPORTED_10EN_11EN_STEAM void SetDeleteCallback(void(*func)(CAnimBlendAssociation *, void *), void *data);
    SUPPORTED_10EN_11EN_STEAM void SetFinishCallback(void(*func)(CAnimBlendAssociation *, void *), void *data);
    SUPPORTED_10EN_11EN_STEAM void Start(float time);
    SUPPORTED_10EN_11EN_STEAM void SyncAnimation(CAnimBlendAssociation *other);
    SUPPORTED_10EN_11EN_STEAM bool UpdateBlend(float timeDelta);
    SUPPORTED_10EN_11EN_STEAM void UpdateTime(float timeDelta, float relSpeed);

    inline void SetBlendTo(float amount, float delta) {
        this->m_fBlendDelta = delta * (amount - this->m_fBlendAmount);
    }

    inline bool IsRunning(void) { return !!(this->m_nFlags & ASSOC_RUNNING); }
    inline bool IsRepeating(void) { return !!(this->m_nFlags & ASSOC_REPEAT); }
    inline bool IsPartial(void) { return !!(this->m_nFlags & ASSOC_PARTIAL); }
    inline bool IsMovement(void) { return !!(this->m_nFlags & ASSOC_MOVEMENT); }
    inline bool HasTranslation(void) { return !!(this->m_nFlags & ASSOC_HAS_TRANSLATION); }
    inline bool HasXTranslation(void) { return !!(this->m_nFlags & ASSOC_HAS_X_TRANSLATION); }

    inline float GetBlendAmount(float weight) { return IsPartial() ? this->m_fBlendAmount : this->m_fBlendAmount * weight; }
    inline void SetRun(void) { this->m_nFlags |= ASSOC_RUNNING; }
    inline float GetTimeLeft() { return this->m_pAnimBlendHierarchy->m_fTotalLength - m_fCurrentTime; }
};

VTABLE_DESC(CAnimBlendAssociation, 0x5EA02C, 1);
VALIDATE_SIZE(CAnimBlendAssociation, 0x40);

#include "meta/meta.CAnimBlendAssociation.h"
