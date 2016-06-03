#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskInteriorLieInBed : public CTaskSimple {
protected:
    CTaskInteriorLieInBed(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorLieInBed, 0x);