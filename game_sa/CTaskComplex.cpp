#include "CTaskComplex.h"

NOINLINE CTaskComplex::CTaskComplex()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTaskComplex *))0x61A3B0)(this);
}

NOINLINE CTaskComplex::~CTaskComplex()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTaskComplex *))0x61A3D0)(this);
}

void CTaskComplex::SetSubTask(CTask *subTask)
{
	((void (__thiscall *)(CTaskComplex *, CTask *))this->vtable[7])(this, subTask);
}

CTask *CTaskComplex::CreateNextSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))this->vtable[8])(this, ped);
}

CTask *CTaskComplex::CreateFirstSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))this->vtable[9])(this, ped);
}

CTask *CTaskComplex::ControlSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))this->vtable[10])(this, ped);
}