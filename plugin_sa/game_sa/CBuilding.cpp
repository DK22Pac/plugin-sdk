#include "CBuilding.h"

CBuilding::CBuilding() : CEntity(plugin::dummy_func)
{
    ((void (__thiscall *)(CBuilding *))0x403E00)(this);
}

CBuilding::~CBuilding()
{
    // 0x404180
}

void CBuilding::ReplaceWithNewModel(int newModelIndex)
{
	((void (__thiscall *)(CEntity *, int))0x403EC0)(this, newModelIndex);
}

void *CBuilding::operator new(unsigned int size)
{
	return ((void *(__cdecl *)(unsigned int))0x404090)(size);
}

void CBuilding::operator delete(void *object)
{
	((void (__cdecl *)(void *))0x4040A0)(object);
}