#include "CTaskSimple.h"

NOINLINE CTaskSimple::CTaskSimple()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTaskSimple *))0x61A390)(this);
}

NOINLINE CTaskSimple::~CTaskSimple()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTaskSimple *))0x61A3A0)(this);
}

bool CTaskSimple::ProcessPed(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))this->vtable[7])(this, ped);
}

bool CTaskSimple::SetPedPosition(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))this->vtable[8])(this, ped);
}