#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexLeaveCar.h"

class PLUGIN_API CTaskComplexLeaveCarAndDie : public CTaskComplexLeaveCar {
protected:
    CTaskComplexLeaveCarAndDie(plugin::dummy_func_t a) : CTaskComplexLeaveCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexLeaveCarAndDie, 0x);