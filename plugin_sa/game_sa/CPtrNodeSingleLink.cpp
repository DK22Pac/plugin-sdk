/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPtrNodeSingleLink.h"

// Converted from cdecl void* CPtrNodeSingleLink::operator new(uint size) 0x552380
void* CPtrNodeSingleLink::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x552380, unsigned int>(size);
}

// Converted from cdecl void CPtrNodeSingleLink::operator delete(void *data) 0x552390
void CPtrNodeSingleLink::operator delete(void* data) {
    plugin::Call<0x552390, void*>(data);
}