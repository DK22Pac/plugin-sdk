/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPlaceable.h"

class CInstance : public CPlaceable {
protected:
    CInstance(plugin::dummy_func_t) : CPlaceable(plugin::dummy) {}
public:
    int field_4C;

    //funcs
    CInstance();
    void Shutdown();
    ~CInstance();
    
    CInstance(const CInstance &) = delete;
    CInstance &operator=(const CInstance &) = delete;
};

VALIDATE_SIZE(CInstance, 0x50);