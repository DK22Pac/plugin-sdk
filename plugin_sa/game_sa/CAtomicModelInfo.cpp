#include "CAtomicModelInfo.h"

void CAtomicModelInfo::SetAtomic(RpAtomic *atomic)
{
	((void (__thiscall *)(CAtomicModelInfo *, RpAtomic *))GetVMT(this, 15))(this, atomic);
}

RpAtomic *CAtomicModelInfo::GetAtomicFromDistance(float distance)
{
	return ((RpAtomic *(__thiscall *)(CAtomicModelInfo *, float))0x4C44B0)(this, distance);
}