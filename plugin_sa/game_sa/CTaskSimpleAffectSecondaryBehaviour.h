#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleAffectSecondaryBehaviour : public CTaskSimple {
protected:
    CTaskSimpleAffectSecondaryBehaviour(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleAffectSecondaryBehaviour, 0x);