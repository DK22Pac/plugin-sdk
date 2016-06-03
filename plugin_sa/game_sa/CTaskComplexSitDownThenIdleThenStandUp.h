#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSitDownThenIdleThenStandUp : public CTaskComplex {
protected:
    CTaskComplexSitDownThenIdleThenStandUp(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSitDownThenIdleThenStandUp, 0x);