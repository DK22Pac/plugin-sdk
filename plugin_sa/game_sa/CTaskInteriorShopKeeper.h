#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskInteriorShopKeeper : public CTaskComplex {
protected:
    CTaskInteriorShopKeeper(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorShopKeeper, 0x);