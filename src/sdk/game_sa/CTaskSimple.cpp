#include "CTaskSimple.h"

NOINLINE CTaskSimple::CTaskSimple() : CTask(plugin::dummy_func)
{
    ((void (__thiscall *)(CTaskSimple *))0x61A390)(this);
}

NOINLINE CTaskSimple::~CTaskSimple()
{
    // 0x61A3A0
}

bool CTaskSimple::ProcessPed(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))GetVMT(this, 7))(this, ped);
}

bool CTaskSimple::SetPedPosition(class CPed *ped)
{
	return ((bool (__thiscall *)(CTaskSimple *, class CPed *))GetVMT(this, 8))(this, ped);
}