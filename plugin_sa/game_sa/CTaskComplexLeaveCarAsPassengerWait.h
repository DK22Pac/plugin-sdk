#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexLeaveCarAsPassengerWait : public CTaskComplex {
protected:
    CTaskComplexLeaveCarAsPassengerWait(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexLeaveCarAsPassengerWait, 0x);