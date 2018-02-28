/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDummy.h"

// Converted from cdecl bool IsDummyPointerValid(CDummy *dummy) 0x487460
bool IsDummyPointerValid(CDummy* dummy) {
    return ((bool(__cdecl *)(CDummy*))0x487460)(dummy);
}

// Converted from cdecl void* CDummy::operator new(uint size) 0x4877B0
void* CDummy::operator new(unsigned int size) {
    return ((void* (__cdecl *)(unsigned int))0x4877B0)(size);
}

// Converted from thiscall void CDummy::CDummy(void) 0x4877E0
CDummy::CDummy() : CEntity(plugin::dummy) {
    ((void(__thiscall *)(CDummy*))0x4877E0)(this);
}