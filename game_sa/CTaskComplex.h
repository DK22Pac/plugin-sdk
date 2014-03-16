#pragma once

#include "plugin\plugin.h"
#include "CTask.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskComplex : public CTask
{
public:
	CTask *m_pSubTask;

	CTaskComplex();
	~CTaskComplex();

	// vtable

	void SetSubTask(CTask *subTask);
	CTask *CreateNextSubTask(class CPed *ped);
	CTask *CreateFirstSubTask(class CPed *ped);
	CTask *ControlSubTask(class CPed *ped);
};
#pragma pack(pop)

//VALIDATE_SIZE(CTaskComplex, 0xC);