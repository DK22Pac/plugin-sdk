#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseScriptedAttractor : public CTaskComplex {
protected:
    CTaskComplexUseScriptedAttractor(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseScriptedAttractor, 0x);