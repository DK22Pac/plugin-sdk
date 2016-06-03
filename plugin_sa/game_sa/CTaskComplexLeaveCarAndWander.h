#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexLeaveCarAndWander : public CTaskComplex {
protected:
    CTaskComplexLeaveCarAndWander(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexLeaveCarAndWander, 0x);