/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CAnimBlendNode;
class CAnimBlendHierarchy;
class CAnimBlendClumpData;

class PLUGIN_API AnimAssociationData {
public:
    AnimAssociationData *m_pNext;
    union {
        AnimAssociationData *m_pPrev;
        CAnimBlendClumpData *m_pClumpData; //!< this one is used when a data is the first in the list
    };
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

VALIDATE_SIZE(AnimAssociationData, 0x2C);
