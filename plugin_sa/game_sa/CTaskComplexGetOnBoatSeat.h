#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGetOnBoatSeat : public CTaskComplex {
protected:
    CTaskComplexGetOnBoatSeat(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGetOnBoatSeat, 0x);