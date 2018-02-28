/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDummy.h"

// Converted from thiscall void CDummy::CDummy(void) 0x4737E0
CDummy::CDummy() : CEntity(plugin::dummy) {
    plugin::CallMethod<0x4737E0, CDummy *>(this);
}

// Converted from cdecl void* CDummy::operator new(uint size) 0x473830
void* CDummy::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x473830, unsigned int>(size);
}

// Converted from cdecl void CDummy::operator delete(void *data) 0x473840
void CDummy::operator delete(void* data) {
    plugin::Call<0x473840, void*>(data);
}
