#pragma once

#include "plbase/PluginBase.h"
#include "CTask.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskComplex : public CTask
{
    CTaskComplex() = delete;
protected:
    CTaskComplex(plugin::dummy_func_t a) : CTask(a) {}
public:
	CTask *m_pSubTask;

	// vtable
	virtual void SetSubTask(CTask *subTask);
	virtual CTask *CreateNextSubTask(class CPed *ped);//=0
	virtual CTask *CreateFirstSubTask(class CPed *ped);//=0
	virtual CTask *ControlSubTask(class CPed *ped);//=0
};
#pragma pack(pop)

VALIDATE_SIZE(CTaskComplex, 0xC);