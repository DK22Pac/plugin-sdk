#pragma once

#include "plbase/PluginBase.h"
#include "CTask.h"

class PLUGIN_API CTaskSimple : public CTask {
    CTaskSimple() = delete;
protected:
    CTaskSimple(plugin::dummy_func_t a) : CTask(a) {}
public:
	virtual bool ProcessPed(class CPed *ped);//=0
	virtual bool SetPedPosition(class CPed *ped);
};

VALIDATE_SIZE(CTaskSimple, 8);