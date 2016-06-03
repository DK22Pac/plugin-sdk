#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskGangHasslePed : public CTaskComplex {
protected:
    CTaskGangHasslePed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskGangHasslePed, 0x);