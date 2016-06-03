#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderGang : public CTaskComplexWander {
protected:
    CTaskComplexWanderGang(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderGang, 0x);