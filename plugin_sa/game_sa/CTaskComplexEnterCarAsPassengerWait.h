#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEnterCarAsPassengerWait : public CTaskComplex {
protected:
    CTaskComplexEnterCarAsPassengerWait(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterCarAsPassengerWait, 0x);