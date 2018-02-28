/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBuilding.h"

void CBuilding::ReplaceWithNewModel(int newModelIndex)
{
	((void (__thiscall *)(CEntity *, int))0x403EC0)(this, newModelIndex);
}

// Converted from cdecl void* CBuilding::operator new(uint size) 0x404090
void* CBuilding::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x404090, unsigned int>(size);
}

// Converted from cdecl void CBuilding::operator delete(void *data) 0x4040A0
void CBuilding::operator delete(void* data) {
    plugin::Call<0x4040A0, void*>(data);
}

// Converted from thiscall void CBuilding::CBuilding(void) 0x403E00
CBuilding::CBuilding() : CEntity(plugin::dummy) {
    plugin::CallMethod<0x403E00, CBuilding *>(this);
}