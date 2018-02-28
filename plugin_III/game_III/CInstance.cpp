/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CInstance.h"

// Converted from thiscall void CInstance::CInstance(void) 0x50BEB0 
CInstance::CInstance() {
    plugin::CallMethod<0x50BEB0, CInstance *>(this);
}

// Converted from thiscall void CInstance::Shutdown(void) 0x50B850 
void CInstance::Shutdown() {
    plugin::CallMethod<0x50B850, CInstance *>(this);
}

// Converted from thiscall void CStore<CInstance,1>::~CStore() 0x50BE70 
MloInstanceStore::~MloInstanceStore() {
    plugin::CallMethod<0x50BE70, MloInstanceStore *>(this);
}
