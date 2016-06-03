#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskInteriorSitInChair : public CTaskSimple {
protected:
    CTaskInteriorSitInChair(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorSitInChair, 0x);