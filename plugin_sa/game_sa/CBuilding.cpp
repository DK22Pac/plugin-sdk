#include "CBuilding.h"

void CBuilding::ReplaceWithNewModel(int newModelIndex)
{
	((void (__thiscall *)(CEntity *, int))0x403EC0)(this, newModelIndex);
}