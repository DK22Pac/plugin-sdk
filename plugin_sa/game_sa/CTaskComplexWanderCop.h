#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderCop : public CTaskComplexWander {
protected:
    CTaskComplexWanderCop(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderCop, 0x);