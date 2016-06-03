#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexAvoidOtherPedWhileWandering : public CTaskComplex {
protected:
    CTaskComplexAvoidOtherPedWhileWandering(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexAvoidOtherPedWhileWandering, 0x);