#include "CTaskSimple.h"

bool CTaskSimple::ProcessPed(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))GetVMT(this, 7))(this, ped);
}

bool CTaskSimple::SetPedPosition(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))GetVMT(this, 8))(this, ped);
}