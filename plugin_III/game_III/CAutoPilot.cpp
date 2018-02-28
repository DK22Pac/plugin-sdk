/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAutoPilot.h"

// Converted from thiscall void CAutoPilot::ModifySpeed(float speed) 0x4137B0 
void CAutoPilot::ModifySpeed(float speed) {
    plugin::CallMethod<0x4137B0, CAutoPilot *, float>(this, speed);
}

// Converted from thiscall void CAutoPilot::RemoveOnePathNode(void) 0x413A00 
void CAutoPilot::RemoveOnePathNode() {
    plugin::CallMethod<0x413A00, CAutoPilot *>(this);
}
