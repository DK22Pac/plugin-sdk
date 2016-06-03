#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexSmartFleeEntity.h"

class PLUGIN_API CTaskComplexFleeAnyMeans : public CTaskComplexSmartFleeEntity {
protected:
    CTaskComplexFleeAnyMeans(plugin::dummy_func_t a) : CTaskComplexSmartFleeEntity(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFleeAnyMeans, 0x);