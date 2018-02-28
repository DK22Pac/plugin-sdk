/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTreadable.h"

// Converted from thiscall void CTreadable::CTreadable(void) 0x4059F0
CTreadable::CTreadable() : CBuilding(plugin::dummy) {
    plugin::CallMethod<0x4059F0, CTreadable *>(this);
}

// Converted from cdecl void CTreadable::operator delete(void *data) 0x405A40
void CTreadable::operator delete(void* data) {
    plugin::Call<0x405A40, void*>(data);
}

// Converted from cdecl void* CTreadable::operator new(uint size) 0x405A30
void* CTreadable::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x405A30, unsigned int>(size);
}
