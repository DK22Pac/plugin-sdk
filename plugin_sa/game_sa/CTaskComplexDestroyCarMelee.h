#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexDestroyCarMelee : public CTaskComplex {
protected:
    CTaskComplexDestroyCarMelee(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDestroyCarMelee, 0x);