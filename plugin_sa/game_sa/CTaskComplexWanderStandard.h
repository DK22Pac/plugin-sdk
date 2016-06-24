#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderStandard : public CTaskComplexWander {
protected:
    CTaskComplexWanderStandard(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    CTaskComplexWanderStandard(int arg0, unsigned char arg1, bool arg2);
};

//VALIDATE_SIZE(CTaskComplexWanderStandard, 0x);