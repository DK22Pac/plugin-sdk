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

enum eAnimationFlags {
    ANIMATION_DEFAULT = 0,      //0x0,
    ANIMATION_IS_PLAYING = 1 << 0, //0x1,
    ANIMATION_IS_LOOPED = 1 << 1, //0x2,
    ANIMATION_IS_BLEND_AUTO_REMOVE = 1 << 2, //!< (0x4) Automatically `delete this` once faded out (`m_BlendAmount <= 0 && m_BlendDelta <= 0`)
    ANIMATION_IS_FINISH_AUTO_REMOVE = 1 << 3, //0x8,  // Animation will be stuck on last frame, if not set
    ANIMATION_IS_PARTIAL = 1 << 4, //0x10, // TODO: Flag name is possibly incorrect? Following the usual logic (like `ANIMATION_MOVEMENT`), it should be `ANIMATION_GET_IN_CAR` (See  `RemoveGetInAnims`)
    ANIMATION_IS_SYNCRONISED = 1 << 5, //0x20,
    ANIMATION_CAN_EXTRACT_VELOCITY = 1 << 6, //0x40,
    ANIMATION_CAN_EXTRACT_X_VELOCITY = 1 << 7, //0x80,

    // ** User defined flags **
    ANIMATION_WALK = 1 << 8,  //0x100,
    ANIMATION_200 = 1 << 9,  //0x200,
    ANIMATION_DONT_ADD_TO_PARTIAL_BLEND = 1 << 10, //0x400, // Possibly should be renamed to ANIMATION_IDLE, see `CPed::PlayFootSteps()`
    ANIMATION_IS_FRONT = 1 << 11, //0x800,
    ANIMATION_SECONDARY_TASK_ANIM = 1 << 12, //0x1000,
    // **

    ANIMATION_IGNORE_ROOT_TRANSLATION = 1 << 13, //0x2000,
    ANIMATION_REFERENCE_BLOCK = 1 << 14, //0x4000,
    ANIMATION_FACIAL = 1 << 15, //0x8000 // The animation is never destroyed if this flag is set, NO MATTER WHAT
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
