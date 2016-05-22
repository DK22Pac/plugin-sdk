#include "CTaskComplex.h"

void CTaskComplex::SetSubTask(CTask *subTask)
{
	((void (__thiscall *)(CTaskComplex *, CTask *))GetVMT(this, 7))(this, subTask);
}

CTask *CTaskComplex::CreateNextSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))GetVMT(this, 8))(this, ped);
}

CTask *CTaskComplex::CreateFirstSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))GetVMT(this, 9))(this, ped);
}

CTask *CTaskComplex::ControlSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))GetVMT(this, 10))(this, ped);
}
