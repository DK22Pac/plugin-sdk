#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleNone.h"

class PLUGIN_API CTaskSimpleFinishBrain : public CTaskSimpleNone {
protected:
    CTaskSimpleFinishBrain(plugin::dummy_func_t a) : CTaskSimpleNone(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleFinishBrain, 0x);