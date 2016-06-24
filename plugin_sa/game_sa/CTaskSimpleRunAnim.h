#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleAnim.h"

class PLUGIN_API CTaskSimpleRunAnim : public CTaskSimpleAnim {
protected:
    CTaskSimpleRunAnim(plugin::dummy_func_t a) : CTaskSimpleAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleRunAnim, 0x);