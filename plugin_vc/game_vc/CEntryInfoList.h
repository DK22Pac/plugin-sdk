/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntryInfoNode.h"

class CEntryInfoList {
public:
    CEntryInfoNode *m_pLastEntry;

    void Flush(); // removes all entries only, doesn't touch entry ifno data (ptr node and list)

    inline void Add(CEntryInfoNode *node) {
        node->m_pNext = nullptr;
        node->m_pPrev = m_pLastEntry;
        if (m_pLastEntry)
            m_pLastEntry->m_pNext = node;
        m_pLastEntry = node;
    }

    inline void Remove(CEntryInfoNode *node) {
        if (m_pLastEntry == node)
            m_pLastEntry = node->m_pPrev;
        if (node->m_pNext)
            node->m_pNext->m_pPrev = node->m_pPrev;
        if (node->m_pPrev)
            node->m_pPrev->m_pNext = node->m_pNext;
    }
};

VALIDATE_SIZE(CEntryInfoList, 0x4);