#pragma once

#include "plbase/PluginBase_VC.h"

class CPtrNode {
public:
    void     *m_ptr; // usually a ptr to CEntity
    CPtrNode *m_pNext;
    CPtrNode *m_pPrev;
};

class CPtrList {
public:
    CPtrNode *m_pLast;
};