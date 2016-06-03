#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWanderCop.h"

class PLUGIN_API CTaskComplexBeCop : public CTaskComplexWanderCop {
protected:
    CTaskComplexBeCop(plugin::dummy_func_t a) : CTaskComplexWanderCop(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexBeCop, 0x);