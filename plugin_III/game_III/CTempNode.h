/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CTempNode {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTempNode)

public:
    CVector m_vecPos;
    float m_fDirX;
    float m_fDirY;
    short m_nNextNodeIndex;
    short m_nPrevNodeIndex;
    char m_nNumLeftLanes;
    char m_nNumRightLanes;
    char m_nLinkState;
};
VALIDATE_OFFSET(CTempNode, m_vecPos, 0x0);
VALIDATE_OFFSET(CTempNode, m_fDirX, 0xC);
VALIDATE_OFFSET(CTempNode, m_fDirY, 0x10);
VALIDATE_OFFSET(CTempNode, m_nNextNodeIndex, 0x14);
VALIDATE_OFFSET(CTempNode, m_nPrevNodeIndex, 0x16);
VALIDATE_OFFSET(CTempNode, m_nNumLeftLanes, 0x18);
VALIDATE_OFFSET(CTempNode, m_nNumRightLanes, 0x19);
VALIDATE_OFFSET(CTempNode, m_nLinkState, 0x1A);
VALIDATE_SIZE(CTempNode, 0x1C);

#include "meta/meta.CTempNode.h"
