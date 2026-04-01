/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEAudioEntity.h"
#include "CAnimBlock.h"
#include "CTaskSimple.h"
#include "eAnimations.h"

class CEntity;
class CAnimBlendAssociation;
class CAnimBlendHierarchy;
class CVector;

class PLUGIN_API CTaskSimpleHoldEntity : public CTaskSimple {
protected:
    CTaskSimpleHoldEntity(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CEntity*               m_pEntityToHold;
    CVector                m_vecPosition;
    uint8_t                m_nBoneFrameId; // see ePedNode
    uint8_t                m_bBoneFlags;   // See eHoldEntityBoneFlags
    bool                   field_1A[2];
    float                  m_fRotation;
    int                    m_nAnimId;
    eAnimGroup             m_nAnimGroupId;
    int32_t                m_animFlags; // see eAnimationFlags
    CAnimBlock*            m_pAnimBlock;
    CAnimBlendHierarchy*   m_pAnimBlendHierarchy; // If set, m_animID and m_groupID are ignored in StartAnim method
    bool                   m_bEntityDropped;
    bool                   m_bEntityRequiresProcessing;
    bool                   m_bDisallowDroppingOnAnimEnd;
    bool                   field_37;
    CAnimBlendAssociation* m_pAnimBlendAssociation;
    
};

VALIDATE_SIZE(CTaskSimpleHoldEntity, 0x3C);
