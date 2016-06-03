#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGetUpAndStandStill : public CTaskComplex {
protected:
    CTaskComplexGetUpAndStandStill(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGetUpAndStandStill, 0x);