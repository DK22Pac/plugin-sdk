#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseScriptedBrain : public CTaskComplex {
protected:
    CTaskComplexUseScriptedBrain(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseScriptedBrain, 0x);