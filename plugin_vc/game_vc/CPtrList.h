/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPtrNode.h"

class CPtrList {
public:
    CPtrNode *m_pLast;

    void Flush();

    inline void Add(CPtrNode *node) {
        node->m_pNext = nullptr;
        node->m_pPrev = m_pLast;
        if (m_pLast)
            m_pLast->m_pNext = node;
        m_pLast = node;
    }

    inline void Remove(CPtrNode *node) {
        if (m_pLast == node)
            m_pLast = node->m_pPrev;
        if (node->m_pNext)
            node->m_pNext->m_pPrev = node->m_pPrev;
        if (node->m_pPrev)
            node->m_pPrev->m_pNext = node->m_pNext;
    }
};

VALIDATE_SIZE(CPtrList, 0x4);
