#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleIKChain.h"

class PLUGIN_API CTaskSimpleIKPointArm : public CTaskSimpleIKChain {
protected:
    CTaskSimpleIKPointArm(plugin::dummy_func_t a) : CTaskSimpleIKChain(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleIKPointArm, 0x);