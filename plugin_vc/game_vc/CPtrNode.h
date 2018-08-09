/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

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
