/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplex.h"

CTaskComplex::CTaskComplex() : CTask(plugin::dummy)
{
    plugin::CallMethod<0x61A3B0, CTaskComplex *>(this);
}

void CTaskComplex::SetSubTask(CTask *subTask)
{
	((void (__thiscall *)(CTaskComplex *, CTask *))plugin::GetVMT(this, 7))(this, subTask);
}

CTask *CTaskComplex::CreateNextSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))plugin::GetVMT(this, 8))(this, ped);
}

CTask *CTaskComplex::CreateFirstSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))plugin::GetVMT(this, 9))(this, ped);
}

CTask *CTaskComplex::ControlSubTask(class CPed *ped)
{
	return ((CTask *(__thiscall *)(CTaskComplex *, class CPed *))plugin::GetVMT(this, 10))(this, ped);
}
