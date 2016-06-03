#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderFlee : public CTaskComplexWander {
protected:
    CTaskComplexWanderFlee(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderFlee, 0x);