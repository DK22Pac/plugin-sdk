#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEvasiveStep : public CTaskComplex {
protected:
    CTaskComplexEvasiveStep(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEvasiveStep, 0x);