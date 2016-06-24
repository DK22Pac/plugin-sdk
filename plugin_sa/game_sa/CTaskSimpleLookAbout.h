#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunTimedAnim.h"

class PLUGIN_API CTaskSimpleLookAbout : public CTaskSimpleRunTimedAnim {
protected:
    CTaskSimpleLookAbout(plugin::dummy_func_t a) : CTaskSimpleRunTimedAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleLookAbout, 0x);