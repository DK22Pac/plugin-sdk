/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTask.h"

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
	return ((CTask *(__thiscall *)(CTask *))GetVMT(this, 1))(this);
}

CTask *CTask::GetSubTask()
{
	return ((CTask *(__thiscall *)(CTask *))GetVMT(this, 2))(this);
}

bool CTask::IsSimple()
{
	return ((bool (__thiscall *)(CTask *))GetVMT(this, 3))(this);
}

eTaskType CTask::GetId()
{
	return ((eTaskType (__thiscall *)(CTask *))GetVMT(this, 4))(this);
}

void CTask::StopTimer(class CEvent *_event)
{
	((void (__thiscall *)(CTask *, class CEvent *))GetVMT(this, 5))(this, _event);
}

bool CTask::MakeAbortable(class CPed *ped, int priority, class CEvent *_event)
{
	return ((bool (__thiscall *)(CTask *, CPed *, int, class CEvent *))GetVMT(this, 6))(this, ped, priority, _event);
}