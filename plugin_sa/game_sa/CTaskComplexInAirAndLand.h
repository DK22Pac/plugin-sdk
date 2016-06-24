#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexInAirAndLand : public CTaskComplex {
protected:
    CTaskComplexInAirAndLand(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexInAirAndLand, 0x);