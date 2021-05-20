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

VALIDATE_SIZE(CTempNode, 0x1C);

#include "meta/meta.CTempNode.h"
