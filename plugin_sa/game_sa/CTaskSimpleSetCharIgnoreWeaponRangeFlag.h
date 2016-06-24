#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleSetCharIgnoreWeaponRangeFlag : public CTaskSimple {
protected:
    CTaskSimpleSetCharIgnoreWeaponRangeFlag(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSetCharIgnoreWeaponRangeFlag, 0x);