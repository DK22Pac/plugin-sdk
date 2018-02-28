/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTimeModelInfo.h"

// Converted from thiscall void CTimeModelInfo::CTimeModelInfo(void) 0x50C0A0 
CTimeModelInfo::CTimeModelInfo() {
    plugin::CallMethod<0x50C0A0, CTimeModelInfo *>(this);
}

// Converted from thiscall void CTimeModelInfo::FindOtherTimeModel(void) 0x517C80 
void CTimeModelInfo::FindOtherTimeModel() {
    plugin::CallMethod<0x517C80, CTimeModelInfo *>(this);
}

// Converted from thiscall void CTimeModelInfo::~CTimeModelInfo(void) 0x50C080 
CTimeModelInfo::~CTimeModelInfo() {
    plugin::CallMethod<0x50C080, CTimeModelInfo *>(this);
}

// Converted from thiscall void CStore<CTimeModelInfo,30>::~CStore() 0x50C060 
TimeModelStore::~TimeModelStore() {
    plugin::CallMethod<0x50C060, TimeModelStore *>(this);
}
