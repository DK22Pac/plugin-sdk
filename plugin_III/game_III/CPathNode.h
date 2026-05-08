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

public:
    CVector GetPosition() {
        return m_vecPos;
    }
};
VALIDATE_OFFSET(CPathNode, m_vecPos, 0x0);
VALIDATE_OFFSET(CPathNode, m_pPrev, 0xC);
VALIDATE_OFFSET(CPathNode, m_pNext, 0x10);
VALIDATE_OFFSET(CPathNode, m_nSearchList, 0x14);
VALIDATE_OFFSET(CPathNode, m_nObjectIndex, 0x16);
VALIDATE_OFFSET(CPathNode, m_nFirstLink, 0x18);
VALIDATE_OFFSET(CPathNode, m_nNumLinks, 0x1A);
VALIDATE_OFFSET(CPathNode, m_nFlags, 0x1B);
VALIDATE_OFFSET(CPathNode, m_nGroup, 0x1C);
VALIDATE_SIZE(CPathNode, 0x20);

#include "meta/meta.CPathNode.h"
