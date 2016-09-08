/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBuilding.h"

void CBuilding::ReplaceWithNewModel(int newModelIndex)
{
	((void (__thiscall *)(CEntity *, int))0x403EC0)(this, newModelIndex);
}