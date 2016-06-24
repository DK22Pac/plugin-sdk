#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWaitForBackup : public CTaskComplex {
protected:
    CTaskComplexWaitForBackup(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWaitForBackup, 0x);