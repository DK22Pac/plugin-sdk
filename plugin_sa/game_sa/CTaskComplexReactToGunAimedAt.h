#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexReactToGunAimedAt : public CTaskComplex {
protected:
    CTaskComplexReactToGunAimedAt(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexReactToGunAimedAt, 0x);