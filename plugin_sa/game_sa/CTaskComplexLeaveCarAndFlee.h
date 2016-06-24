#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexLeaveCarAndFlee : public CTaskComplex {
protected:
    CTaskComplexLeaveCarAndFlee(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexLeaveCarAndFlee, 0x);