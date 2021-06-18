/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CPathNode {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPathNode)

public:
    CVector m_vecPos;
    CPathNode *m_pPrev;
    CPathNode *m_pNext;
    short m_nSearchList; //!< search list id
    short m_nObjectIndex;
    short m_nFirstLink;
    unsigned char m_nNumLinks;
    struct {
        unsigned char nUnkBits : 2;
        unsigned char bDeadEnd : 1;
        unsigned char bDisabled : 1;
        unsigned char bBetweenLevels : 1;
    } m_nFlags;
    char m_nGroup;
};

VALIDATE_SIZE(CPathNode, 0x20);

#include "meta/meta.CPathNode.h"
