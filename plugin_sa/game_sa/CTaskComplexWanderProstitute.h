#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexWanderStandard.h"

class PLUGIN_API CTaskComplexWanderProstitute : public CTaskComplexWanderStandard {
protected:
    CTaskComplexWanderProstitute(plugin::dummy_func_t a) : CTaskComplexWanderStandard(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderProstitute, 0x);