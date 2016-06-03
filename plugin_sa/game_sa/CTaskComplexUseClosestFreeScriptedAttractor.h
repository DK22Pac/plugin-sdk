#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseClosestFreeScriptedAttractor : public CTaskComplex {
protected:
    CTaskComplexUseClosestFreeScriptedAttractor(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseClosestFreeScriptedAttractor, 0x);