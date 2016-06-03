#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEnterCarAsPassengerTimed : public CTaskComplex {
protected:
    CTaskComplexEnterCarAsPassengerTimed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterCarAsPassengerTimed, 0x);