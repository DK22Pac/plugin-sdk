#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderCriminal : public CTaskComplexWander {
protected:
    CTaskComplexWanderCriminal(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderCriminal, 0x);