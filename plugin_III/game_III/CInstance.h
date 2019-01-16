/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"

class CInstance : public CPlaceable {
protected:
    CInstance(plugin::dummy_func_t) : CPlaceable(plugin::dummy) {}
public:
    unsigned int m_nModelIndex;

    //funcs
    CInstance();
    void Shutdown();
    
    CInstance(const CInstance &) = delete;
    CInstance &operator=(const CInstance &) = delete;
};

VALIDATE_SIZE(CInstance, 0x50);

struct MloInstanceStore {
    unsigned int m_nCount;
    CInstance m_sObject[1];

    ~MloInstanceStore();
};
