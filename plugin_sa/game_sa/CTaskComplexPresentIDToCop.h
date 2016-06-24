#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexPresentIDToCop : public CTaskComplex {
protected:
    CTaskComplexPresentIDToCop(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPresentIDToCop, 0x);