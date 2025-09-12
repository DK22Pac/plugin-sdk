/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPtrNode.h"

class CPtrList {
protected:
    CPtrNode *m_pHead;

public:
    void Flush();

    inline void Add(CPtrNode *node) {
        node->m_pNext = nullptr;
        node->m_pPrev = m_pHead;
        if (m_pHead)
            m_pHead->m_pNext = node;
        m_pHead = node;
    }

    inline void Remove(CPtrNode *node) {
        if (m_pHead == node)
            m_pHead = node->m_pPrev;
        if (node->m_pNext)
            node->m_pNext->m_pPrev = node->m_pPrev;
        if (node->m_pPrev)
            node->m_pPrev->m_pNext = node->m_pNext;
    }

	inline CPtrNode* GetNode() {
        return m_pHead;
    }
};

VALIDATE_SIZE(CPtrList, 0x4);