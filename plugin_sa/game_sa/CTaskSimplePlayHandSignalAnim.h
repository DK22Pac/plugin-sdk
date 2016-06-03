#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleAnim.h"

class PLUGIN_API CTaskSimplePlayHandSignalAnim : public CTaskSimpleAnim {
protected:
    CTaskSimplePlayHandSignalAnim(plugin::dummy_func_t a) : CTaskSimpleAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePlayHandSignalAnim, 0x);