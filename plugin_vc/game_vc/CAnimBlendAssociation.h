/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
    unsigned short m_nFlags;
    eAnimBlendCallbackType m_nCallbackType;
    void(*m_pCallbackFunc)(CAnimBlendAssociation *, void *);
    void *m_pCallbackData;

    // vtable function #0 (destructor)
    ~CAnimBlendAssociation();
};
VALIDATE_OFFSET(CAnimBlendAssociation, vtable, 0x0);
VALIDATE_OFFSET(CAnimBlendAssociation, m_link, 0x4);
VALIDATE_OFFSET(CAnimBlendAssociation, m_nNumBlendNodes, 0xC);
VALIDATE_OFFSET(CAnimBlendAssociation, m_nAnimGroup, 0xE);
VALIDATE_OFFSET(CAnimBlendAssociation, m_pNodeArray, 0x10);
VALIDATE_OFFSET(CAnimBlendAssociation, m_pHierarchy, 0x14);
VALIDATE_OFFSET(CAnimBlendAssociation, m_fBlendAmount, 0x18);
VALIDATE_OFFSET(CAnimBlendAssociation, m_fBlendDelta, 0x1C);
VALIDATE_OFFSET(CAnimBlendAssociation, m_fCurrentTime, 0x20);
VALIDATE_OFFSET(CAnimBlendAssociation, m_fSpeed, 0x24);
VALIDATE_OFFSET(CAnimBlendAssociation, fTimeStep, 0x28);
VALIDATE_OFFSET(CAnimBlendAssociation, m_nAnimId, 0x2C);
VALIDATE_OFFSET(CAnimBlendAssociation, m_nFlags, 0x2E);
VALIDATE_OFFSET(CAnimBlendAssociation, m_nCallbackType, 0x30);
VALIDATE_OFFSET(CAnimBlendAssociation, m_pCallbackData, 0x38);
VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);

VTABLE_DESC(CAnimBlendAssociation, 0x68308C, 1);
VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);