#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskInteriorBeInOffice : public CTaskComplex {
protected:
    CTaskInteriorBeInOffice(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorBeInOffice, 0x);