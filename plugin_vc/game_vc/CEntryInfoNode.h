/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSector.h"

class CEntryInfoNode {
public:
    CPtrList *m_pPtrList;
    CPtrNode *m_pPtrNode;
    CSector *m_pSector;
    CEntryInfoNode *m_pNext;
    CEntryInfoNode *m_pPrev;

    static void operator delete(void* data);
    static void* operator new(unsigned int size);

    CEntryInfoNode() {}

    inline CEntryInfoNode(CPtrList *ptrList, CPtrNode *ptrNode, CSector *sector) {
        m_pPtrList = ptrList;
        m_pPtrNode = ptrNode;
        m_pSector = sector;
    }
};
VALIDATE_OFFSET(CEntryInfoNode, m_pPtrList, 0x0);
VALIDATE_OFFSET(CEntryInfoNode, m_pPtrNode, 0x4);
VALIDATE_OFFSET(CEntryInfoNode, m_pSector, 0x8);
VALIDATE_OFFSET(CEntryInfoNode, m_pNext, 0xC);
VALIDATE_OFFSET(CEntryInfoNode, m_pPrev, 0x10);
VALIDATE_SIZE(CEntryInfoNode, 0x14);
