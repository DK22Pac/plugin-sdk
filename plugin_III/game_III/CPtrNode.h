/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPtrNode {
public:
    void* m_pVoid; // usually a ptr to CEntity
    CPtrNode* m_pPrev;
    CPtrNode* m_pNext;

    CPtrNode() {}

    inline CPtrNode(void* item) : m_pVoid(item) {}

    static void operator delete(void* data);
    static void* operator new(unsigned int size);
};
VALIDATE_OFFSET(CPtrNode, m_pVoid, 0x0);
VALIDATE_OFFSET(CPtrNode, m_pPrev, 0x4);
VALIDATE_OFFSET(CPtrNode, m_pNext, 0x8);
VALIDATE_SIZE(CPtrNode, 0xC);
