/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntryInfoList.h"

// Converted from cdecl void CEntryInfoNode::operator delete(void *data) 0x489BB0
void CEntryInfoNode::operator delete(void* data) {
    ((void(__cdecl *)(void*))0x489BB0)(data);
}

// Converted from cdecl void* CEntryInfoNode::operator new(uint size) 0x489BD0
void* CEntryInfoNode::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x489BD0)(size);
}

// Converted from thiscall void CEntryInfoList::Flush(void) 0x489B60
void CEntryInfoList::Flush() {
    ((void(__thiscall *)(CEntryInfoList*))0x489B60)(this);
}