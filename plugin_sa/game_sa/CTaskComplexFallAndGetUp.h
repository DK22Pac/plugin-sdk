#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFallAndGetUp : public CTaskComplex {
protected:
    CTaskComplexFallAndGetUp(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFallAndGetUp, 0x);