#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskInteriorBeInHouse : public CTaskComplex {
protected:
    CTaskInteriorBeInHouse(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorBeInHouse, 0x);