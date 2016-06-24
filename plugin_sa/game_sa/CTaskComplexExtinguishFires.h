#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexExtinguishFires : public CTaskComplex {
protected:
    CTaskComplexExtinguishFires(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexExtinguishFires, 0x);