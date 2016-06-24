#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWaitAtAttractor : public CTaskComplex {
protected:
    CTaskComplexWaitAtAttractor(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWaitAtAttractor, 0x);