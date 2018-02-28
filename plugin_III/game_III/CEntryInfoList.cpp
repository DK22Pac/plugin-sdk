/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntryInfoList.h"

// Converted from cdecl void CEntryInfoNode::operator delete(void *data) 0x475A50
void CEntryInfoNode::operator delete(void* data) {
    ((void(__cdecl *)(void*))0x475A50)(data);
}

// Converted from cdecl void* CEntryInfoNode::operator new(uint size) 0x475A40
void* CEntryInfoNode::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x475A40)(size);
}

// Converted from thiscall void CEntryInfoList::Flush(void) 0x475A70
void CEntryInfoList::Flush() {
    ((void(__thiscall *)(CEntryInfoList*))0x475A70)(this);
}