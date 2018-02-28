/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPtrList.h"

// Converted from thiscall uint CPtrList::CountElements(void) 0x5521B0
unsigned int CPtrList::CountElements() {
    return plugin::CallMethodAndReturn<unsigned int, 0x5521B0, CPtrList *>(this);
}

// Converted from thiscall bool CPtrList::IsMemberOfList(void *memberNode) 0x5521D0
bool CPtrList::IsMemberOfList(void* memberNode) {
    return plugin::CallMethodAndReturn<bool, 0x5521D0, CPtrList *, void*>(this, memberNode);
}