#pragma once

#include "plugin/plugin.h"
#include "CTask.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskSimple : public CTask
{
public:
	CTaskSimple();
	~CTaskSimple();

	// vtable

	bool ProcessPed(class CPed *ped);
	bool SetPedPosition(class CPed *ped);
};
#pragma pack(pop)

//VALIDATE_SIZE(CTaskSimple, 8);