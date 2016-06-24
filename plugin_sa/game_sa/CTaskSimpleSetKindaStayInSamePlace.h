#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleSetKindaStayInSamePlace : public CTaskSimple {
protected:
    CTaskSimpleSetKindaStayInSamePlace(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSetKindaStayInSamePlace, 0x);