#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunAnim.h"

class PLUGIN_API CTaskSimpleScratchHead : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleScratchHead(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleScratchHead, 0x);