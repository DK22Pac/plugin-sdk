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
#include "CVector.h"
#include "eAnimations.h"

class CEntity;
class CAnimBlendAssociation;
class CAnimBlendHierarchy;

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
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_pEntityToHold, 0x8);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_vecPosition, 0xC);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_nBoneFrameId, 0x18);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_bBoneFlags, 0x19);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, field_1A, 0x1A);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_fRotation, 0x1C);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_nAnimId, 0x20);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_nAnimGroupId, 0x24);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_animFlags, 0x28);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_pAnimBlock, 0x2C);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_pAnimBlendHierarchy, 0x30);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_bEntityDropped, 0x34);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_bEntityRequiresProcessing, 0x35);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_bDisallowDroppingOnAnimEnd, 0x36);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, field_37, 0x37);
VALIDATE_OFFSET(CTaskSimpleHoldEntity, m_pAnimBlendAssociation, 0x38);
VALIDATE_SIZE(CTaskSimpleHoldEntity, 0x3C);
