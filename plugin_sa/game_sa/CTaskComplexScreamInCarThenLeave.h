#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexScreamInCarThenLeave : public CTaskComplex {
protected:
    CTaskComplexScreamInCarThenLeave(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexScreamInCarThenLeave, 0x);