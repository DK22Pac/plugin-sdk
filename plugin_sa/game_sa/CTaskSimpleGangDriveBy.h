#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleGangDriveBy : public CTaskSimple {
protected:
    CTaskSimpleGangDriveBy(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleGangDriveBy, 0x);