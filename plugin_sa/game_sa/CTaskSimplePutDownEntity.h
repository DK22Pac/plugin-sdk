#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleHoldEntity.h"

class PLUGIN_API CTaskSimplePutDownEntity : public CTaskSimpleHoldEntity {
protected:
    CTaskSimplePutDownEntity(plugin::dummy_func_t a) : CTaskSimpleHoldEntity(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePutDownEntity, 0x);