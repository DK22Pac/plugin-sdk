/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPtrListDoubleLink.h"

// Converted from thiscall void CPtrListDoubleLink::Flush(void) 0x552470
void CPtrListDoubleLink::Flush() {
    plugin::CallMethod<0x552470, CPtrListDoubleLink *>(this);
}

// Converted from thiscall void CPtrListDoubleLink::AddItem(void *item) 0x533670
void CPtrListDoubleLink::AddItem(void* item) {
    plugin::CallMethod<0x533670, CPtrListDoubleLink *, void*>(this, item);
}

// Converted from thiscall void CPtrListDoubleLink::DeleteItem(void *item) 0x5336B0
void CPtrListDoubleLink::DeleteItem(void* item) {
    plugin::CallMethod<0x5336B0, CPtrListDoubleLink *, void*>(this, item);
}