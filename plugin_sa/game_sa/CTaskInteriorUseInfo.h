#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskInteriorUseInfo : public CTaskComplex {
protected:
    CTaskInteriorUseInfo(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorUseInfo, 0x);