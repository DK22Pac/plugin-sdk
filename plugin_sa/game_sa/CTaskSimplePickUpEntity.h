#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleHoldEntity.h"

class PLUGIN_API CTaskSimplePickUpEntity : public CTaskSimpleHoldEntity {
protected:
    CTaskSimplePickUpEntity(plugin::dummy_func_t a) : CTaskSimpleHoldEntity(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePickUpEntity, 0x);