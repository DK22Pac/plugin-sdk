/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBuilding.h"

// Converted from CTreadable* CBuilding::GetIsATreadable(void) 0x0
CTreadable* CBuilding::GetIsATreadable() {
    return plugin::CallVirtualMethodAndReturn<CTreadable*, 17, CBuilding *>(this);
}

// Converted from thiscall void CBuilding::CBuilding(void) 0x4057D0
CBuilding::CBuilding() : CEntity(plugin::dummy) {
    plugin::CallMethod<0x4057D0, CBuilding *>(this);
}

// Converted from thiscall void CBuilding::ReplaceWithNewModel(int modelIndex) 0x405850
void CBuilding::ReplaceWithNewModel(int modelIndex) {
    plugin::CallMethod<0x405850, CBuilding *, int>(this, modelIndex);
}

// Converted from cdecl void* CBuilding::operator new(uint size) 0x405820
void* CBuilding::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x405820, unsigned int>(size);
}

// Converted from cdecl void CBuilding::operator delete(void *data) 0x405830
void CBuilding::operator delete(void* data) {
    plugin::Call<0x405830, void*>(data);
}
