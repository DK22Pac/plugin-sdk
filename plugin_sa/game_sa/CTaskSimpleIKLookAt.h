#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleIKChain.h"

class PLUGIN_API CTaskSimpleIKLookAt : public CTaskSimpleIKChain {
protected:
    CTaskSimpleIKLookAt(plugin::dummy_func_t a) : CTaskSimpleIKChain(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleIKLookAt, 0x);