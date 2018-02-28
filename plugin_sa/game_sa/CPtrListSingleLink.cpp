/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPtrListSingleLink.h"

// Converted from thiscall void CPtrListSingleLink::Flush(void) 0x552400
void CPtrListSingleLink::Flush() {
    plugin::CallMethod<0x552400, CPtrListSingleLink *>(this);
}

// Converted from thiscall void CPtrListSingleLink::AddItem(void *item) 0x5335E0
void CPtrListSingleLink::AddItem(void* item) {
    plugin::CallMethod<0x5335E0, CPtrListSingleLink *, void*>(this, item);
}

// Converted from thiscall void CPtrListSingleLink::DeleteItem(void *item) 0x533610
void CPtrListSingleLink::DeleteItem(void* item) {
    plugin::CallMethod<0x533610, CPtrListSingleLink *, void*>(this, item);
}