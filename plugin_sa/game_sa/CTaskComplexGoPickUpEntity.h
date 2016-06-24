#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoPickUpEntity : public CTaskComplex {
protected:
    CTaskComplexGoPickUpEntity(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoPickUpEntity, 0x);