#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexKillPedGroupOnFoot : public CTaskComplex {
protected:
    CTaskComplexKillPedGroupOnFoot(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillPedGroupOnFoot, 0x);