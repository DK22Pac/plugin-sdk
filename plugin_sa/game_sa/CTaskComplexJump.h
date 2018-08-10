/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexJump : public CTaskComplex {
protected:
    CTaskComplexJump(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    unsigned int m_nType; // 0 - jump , 1 - climb
    bool bUnkFlag;

    // 0 - jump , 1 - climb
    CTaskComplexJump(unsigned int jumpType); 
};

VALIDATE_SIZE(CTaskComplexJump, 0x14);

