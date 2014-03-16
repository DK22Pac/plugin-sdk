#include "CAtomicModelInfo.h"

CAtomicModelInfo::CAtomicModelInfo()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CAtomicModelInfo *))0x4C5540)(this);
}

CAtomicModelInfo::~CAtomicModelInfo()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CAtomicModelInfo *))0x4C5590)(this);
}

void CAtomicModelInfo::SetAtomic(RpAtomic *atomic)
{
	((void (__thiscall *)(CAtomicModelInfo *, RpAtomic *))this->vtable[15])(this, atomic);
}

RpAtomic *CAtomicModelInfo::GetAtomicFromDistance(float distance)
{
	return ((RpAtomic *(__thiscall *)(CAtomicModelInfo *, float))0x4C44B0)(this, distance);
}