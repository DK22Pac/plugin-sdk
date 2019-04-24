/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTimeModelInfo.h"

// Converted from thiscall void CTimeModelInfo::FindOtherTimeModel(void) 0x56F330
void CTimeModelInfo::FindOtherTimeModel() {
    plugin::CallMethod<0x56F330, CTimeModelInfo *>(this);
}

// Converted from thiscall void CStore<CTimeModelInfo,385>::~CStore() 0x560240 
TimeModelStore::~TimeModelStore() {
    plugin::CallMethod<0x560240, TimeModelStore *>(this);
}
