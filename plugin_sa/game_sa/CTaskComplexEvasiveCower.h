#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEvasiveCower : public CTaskComplex {
protected:
    CTaskComplexEvasiveCower(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEvasiveCower, 0x);