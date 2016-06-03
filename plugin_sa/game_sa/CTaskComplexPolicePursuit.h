#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexPolicePursuit : public CTaskComplex {
protected:
    CTaskComplexPolicePursuit(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPolicePursuit, 0x);