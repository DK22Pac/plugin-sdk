/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTreadable.h"

// Converted from cdecl void* CTreadable::operator new(uint size) 0x407FF0
void* CTreadable::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x407FF0)(size);
}

// Converted from thiscall void CTreadable::CTreadable(void) 0x408020
CTreadable::CTreadable() : CBuilding(plugin::dummy) {
    ((void(__thiscall *)(CTreadable*))0x408020)(this);
}