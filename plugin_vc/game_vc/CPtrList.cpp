/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#include "CPtrList.h"

// Converted from cdecl void CPtrNode::operator delete(void *data) 0x4C1500
void CPtrNode::operator delete(void* data) {
    ((void(__cdecl *)(void*))0x4C1500)(data);
}

// Converted from cdecl void* CPtrNode::operator new(uint size) 0x4C1520
void* CPtrNode::operator new(unsigned int size){
    return ((void* (__cdecl *)(unsigned int))0x4C1520)(size);
}

// Converted from thiscall void CPtrList::Flush(void) 0x4C14B0
void CPtrList::Flush() {
    ((void(__thiscall *)(CPtrList*))0x4C14B0)(this);
}