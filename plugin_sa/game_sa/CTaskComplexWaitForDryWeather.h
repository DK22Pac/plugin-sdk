#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWaitForDryWeather : public CTaskComplex {
protected:
    CTaskComplexWaitForDryWeather(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWaitForDryWeather, 0x);