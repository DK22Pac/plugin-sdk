#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGangJoinRespond : public CTaskComplex {
protected:
    CTaskComplexGangJoinRespond(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGangJoinRespond, 0x);