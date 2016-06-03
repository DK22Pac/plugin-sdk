#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexUseEffect.h"

class PLUGIN_API CTaskComplexUseEffectSprinting : public CTaskComplexUseEffect {
protected:
    CTaskComplexUseEffectSprinting(plugin::dummy_func_t a) : CTaskComplexUseEffect(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseEffectSprinting, 0x);