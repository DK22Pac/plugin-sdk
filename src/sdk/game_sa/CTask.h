#pragma once

#include <plugin/plugin.h>
#include "eTaskType.h"

#pragma pack(push, 4)
class PLUGIN_API CTask
{
public:
	void **vtable;
	class CTask *m_pParentTask;

	CTask();
	~CTask();
	void *operator new(unsigned int size);
	void operator delete(void *object);

	// vtable

	class CTask *Clone();
	class CTask *GetSubTask();
	bool IsSimple();
	eTaskType GetId();
	void StopTimer(class CEvent *_event);
	bool MakeAbortable(class CPed *ped, int priority, class CEvent *_event);
};
#pragma pack(pop)

//VALIDATE_SIZE(CTask, 8);