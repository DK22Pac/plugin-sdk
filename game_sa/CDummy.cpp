#include "CDummy.h"

NOINLINE CDummy::CDummy()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CDummy *))0x532540)(this);
}

NOINLINE CDummy::~CDummy()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CDummy *))0x532560)(this);
}

void *CDummy::operator new(unsigned int size)
{
	return ((void *(__cdecl *)(unsigned int))0x5326E0)(size);
}

void CDummy::operator delete(void *object)
{
	((void (__cdecl *)(void *))0x5326F0)(object);
}