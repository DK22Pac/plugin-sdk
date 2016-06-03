#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskGangHassleVehicle : public CTaskComplex {
protected:
    CTaskGangHassleVehicle(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskGangHassleVehicle, 0x);