#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexShuffleSeats : public CTaskComplex {
protected:
    CTaskComplexShuffleSeats(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexShuffleSeats, 0x);