#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderMedic : public CTaskComplexWander {
protected:
    CTaskComplexWanderMedic(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderMedic, 0x);