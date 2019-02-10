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

enum eAnimationFlags
{
    ANIMATION_STARTED = 0x1,
    ANIMATION_LOOPED = 0x2,
    ANIMATION_FREEZE_LAST_FRAME = 0x4,
    ANIMATION_UNLOCK_LAST_FRAME = 0x8, // Animation will be stuck on last frame, if not set
    ANIMATION_PARTIAL = 0x10,
    ANIMATION_MOVEMENT = 0x20,
    ANIMATION_TRANLSATE_X = 0x40,
    ANIMATION_TRANLSATE_Y = 0x80,
    ANIMATION_UNUSED_1 = 0x100,
    ANIMATION_UNUSED_2 = 0x200,
    ANIMATION_ADD_TO_BLEND = 0x400,
    ANIMATION_UNUSED_3 = 0x800,
    ANIMATION_UNUSED_4 = 0x1000,
    ANIMATION_FREEZE_TRANSLATION = 0x2000,
    ANIMATION_BLOCK_REFERENCED = 0x4000,
    ANIMATION_INDESTRUCTIBLE = 0x8000
};

class PLUGIN_API CAnimBlendAssociation {

public:
    void *vtable;
    RwLLLink m_link;
    unsigned short m_nNumBlendNodes;
    unsigned short m_nAnimGroup;
    CAnimBlendNode *m_pNodeArray;
    CAnimBlendHierarchy *m_pHierarchy;
    float m_fBlendAmount;
    float m_fBlendDelta;
    float m_fCurrentTime;
    float m_fSpeed;
    float fTimeStep;
    short m_nAnimId;
    union {
        struct
        {
            unsigned short m_bPlaying : 1;                  // Anim will stop playing if flag is not set
            unsigned short m_bLooped : 1;                   // Anim will always restart when it completes
            unsigned short m_bFreezeLastFrame : 1;          // Anim will freeze on last frame
            unsigned short m_bUnlockLastFrame : 1;          // Animation will be stuck on last frame, if not set

            unsigned short m_bPartial : 1;                  // Partial anims run along other anims
            unsigned short m_bEnableMovement : 1;           // blends all playing anims together if set

                                                            
            unsigned short m_bTranslateX : 1;
            unsigned short m_bTranslateY : 1;                // only applies if m_bTranslateX is set

            unsigned short m_bf9 : 1;                       // doesn't seem to be used
            unsigned short m_bf10 : 1;                      // doesn't seem to be used

                                                            // If set to TRUE, then result:
                                                            // Before = https://i.imgur.com/c8T7xNK.png | AFTER = https://i.imgur.com/4gqlA4n.png
            unsigned short m_bAddAnimBlendToTotalBlend : 1;

            unsigned short m_bf12 : 1;                      // doesn't seem to be used
            unsigned short m_bSecondaryTaskAnim : 1;        // doesn't seem to be used

                                                            // Anim will play. Translation values will be ignored for anim (m_bEnableTranslation
                                                            // is ignored if set), and it only applies to some anims though
            unsigned short m_bFreezeTranslation : 1;
            unsigned short m_bBlockReferenced : 1;          // anim block can't be unloaded if it's referenced by an anim.

                                                            // Anim will not be destroyed. It will be played simultaneously with other anims
                                                            // (multiple anims at once) if you set this flag while sitting in a car, you'll still be
                                                            // seated even if you exit the vehicle or play other anims, like walking, running, crouching,
                                                            // etc, like this: https://i.imgur.com/VgWn5fl.png
            unsigned short m_bIndestructible : 1;
        };
        unsigned short m_nFlags;
    };
    eAnimBlendCallbackType m_nCallbackType;
    void(*m_pCallbackFunc)(CAnimBlendAssociation *, void *);
    void *m_pCallbackData;

    // vtable function #0 (destructor)
    SUPPORTED_10US ~CAnimBlendAssociation();
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
