/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBuilding.h"

// Converted from CTreadable* CBuilding::GetIsATreadable(void) 0x0
CTreadable* CBuilding::GetIsATreadable() {
    return ((CTreadable* (__thiscall *)(CBuilding*))(*(void ***)this)[17])(this);
}

// Converted from cdecl bool IsBuildingPointerValid(CBuilding *building) 0x407D30
bool IsBuildingPointerValid(CBuilding* building) {
    return ((bool(__cdecl *)(CBuilding*))0x407D30)(building);
}

// Converted from thiscall void CBuilding::ReplaceWithNewModel(int modelIndex) 0x407DB0
void CBuilding::ReplaceWithNewModel(int modelIndex) {
    ((void(__thiscall *)(CBuilding*, int))0x407DB0)(this, modelIndex);
}

// Converted from cdecl void* CBuilding::operator new(uint size) 0x407E10
void* CBuilding::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x407E10)(size);
}

// Converted from thiscall void CBuilding::CBuilding(void) 0x407E40
CBuilding::CBuilding() : CEntity(plugin::dummy) {
    ((void(__thiscall *)(CBuilding*))0x407E40)(this);
}