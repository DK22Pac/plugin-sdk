#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleAnim.h"

class PLUGIN_API CTaskSimpleRunNamedAnim : public CTaskSimpleAnim {
protected:
    CTaskSimpleRunNamedAnim(plugin::dummy_func_t a) : CTaskSimpleAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleRunNamedAnim, 0x);