#include "CTask.h"
#include <math.h>

NOINLINE CTask::CTask()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTask *))0x61A340)(this);
}

NOINLINE CTask::~CTask()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTask *))0x61A350)(this);
}

void *CTask::operator new(unsigned int size)
{
	return ((CTask *(__cdecl *)(unsigned int))0x61A5A0)(size);
}

void CTask::operator delete(void *object)
{
	((void (__cdecl *)(void *))0x61A5B0)(object);
}

CTask *CTask::Clone()
{
	return ((CTask *(__thiscall *)(CTask *))this->vtable[1])(this);
}

CTask *CTask::GetSubTask()
{
	return ((CTask *(__thiscall *)(CTask *))this->vtable[2])(this);
}

bool CTask::IsSimple()
{
	return ((bool (__thiscall *)(CTask *))this->vtable[3])(this);
}

eTaskType CTask::GetId()
{
	return ((eTaskType (__thiscall *)(CTask *))this->vtable[4])(this);
}

void CTask::StopTimer(class CEvent *_event)
{
	((void (__thiscall *)(CTask *, class CEvent *))this->vtable[5])(this, _event);
}

bool CTask::MakeAbortable(class CPed *ped, int priority, class CEvent *_event)
{
	return ((bool (__thiscall *)(CTask *, int, class CEvent *))this->vtable[6])(this, priority, _event);
}