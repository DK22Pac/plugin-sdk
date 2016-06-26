/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase/PluginBase_VC.h"

class CPtrNode {
public:
    void     *m_ptr; // usually a ptr to CEntity
    CPtrNode *m_pNext;
    CPtrNode *m_pPrev;

    CPtrNode() {}

    inline CPtrNode(void *Ptr) : m_ptr(Ptr) {}

    static void operator delete(void* data);
    static void* operator new(unsigned int size);
};

VALIDATE_SIZE(CPtrNode, 0xC);

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