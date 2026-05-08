/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CAnimBlendNode;
class CAnimBlendHierarchy;

class PLUGIN_API AnimAssociationData {
public:
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
};
VALIDATE_OFFSET(AnimAssociationData, m_link, 0x0);
VALIDATE_OFFSET(AnimAssociationData, m_nNumBlendNodes, 0x8);
VALIDATE_OFFSET(AnimAssociationData, m_nAnimGroup, 0xA);
VALIDATE_OFFSET(AnimAssociationData, m_pNodeArray, 0xC);
VALIDATE_OFFSET(AnimAssociationData, m_pHierarchy, 0x10);
VALIDATE_OFFSET(AnimAssociationData, m_fBlendAmount, 0x14);
VALIDATE_OFFSET(AnimAssociationData, m_fBlendDelta, 0x18);
VALIDATE_OFFSET(AnimAssociationData, m_fCurrentTime, 0x1C);
VALIDATE_OFFSET(AnimAssociationData, m_fSpeed, 0x20);
VALIDATE_OFFSET(AnimAssociationData, fTimeStep, 0x24);
VALIDATE_OFFSET(AnimAssociationData, m_nAnimId, 0x28);
VALIDATE_OFFSET(AnimAssociationData, m_nFlags, 0x2A);
VALIDATE_SIZE(AnimAssociationData, 0x2C);
