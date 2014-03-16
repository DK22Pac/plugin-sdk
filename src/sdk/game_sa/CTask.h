#pragma once

#include <plugin/plugin.h>
#include "eTaskType.h"

#pragma pack(push, 4)
class PLUGIN_API CTask
{
protected:
    CTask(plugin::dummy_func_t) {}
    
public:
	class CTask *m_pParentTask;

	CTask();
	virtual ~CTask();

	void *operator new(unsigned int size);
	void operator delete(void *object);

	virtual class CTask *Clone();//=0
	virtual class CTask *GetSubTask();//=0
	virtual bool IsSimple();//=0
	virtual eTaskType GetId();//=0
	virtual void StopTimer(class CEvent *_event);
	virtual bool MakeAbortable(class CPed *ped, int priority, class CEvent *_event);//=0
};
#pragma pack(pop)

//VALIDATE_SIZE(CTask, 8);
