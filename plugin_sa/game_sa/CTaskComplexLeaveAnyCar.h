#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexLeaveAnyCar : public CTaskComplex {
protected:
    CTaskComplexLeaveAnyCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexLeaveAnyCar, 0x);