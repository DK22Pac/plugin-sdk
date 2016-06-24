#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexDestroyCarArmed : public CTaskComplex {
protected:
    CTaskComplexDestroyCarArmed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDestroyCarArmed, 0x);