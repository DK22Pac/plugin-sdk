#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToPointAnyMeans : public CTaskComplex {
protected:
    CTaskComplexGoToPointAnyMeans(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointAnyMeans, 0x);