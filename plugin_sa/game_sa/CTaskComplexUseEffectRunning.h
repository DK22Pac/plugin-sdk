#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexUseEffect.h"

class PLUGIN_API CTaskComplexUseEffectRunning : public CTaskComplexUseEffect {
protected:
    CTaskComplexUseEffectRunning(plugin::dummy_func_t a) : CTaskComplexUseEffect(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseEffectRunning, 0x);