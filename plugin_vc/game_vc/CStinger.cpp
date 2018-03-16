/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CStinger.h"

// Converted from thiscall void CStinger::CStinger(void)	0x629B50
CStinger::CStinger() {
    plugin::CallMethod<0x629B50, CStinger *>(this);
}

// Converted from thiscall void CStinger::Deploy(CPed *pPed)	0x628EF0
void CStinger::Deploy(CPed* pPed) {
    plugin::CallMethod<0x628EF0, CStinger *, CPed*>(this, pPed);
}

// Converted from thiscall void CStinger::CheckForBurstTyres(void)	0x628F70	
void CStinger::CheckForBurstTyres() {
    plugin::CallMethod<0x628F70, CStinger *>(this);
}

// Converted from thiscall void CStinger::Init(CPed *pPed)	0x6298D0	
void CStinger::Init(CPed* pPed) {
    plugin::CallMethod<0x6298D0, CStinger *, CPed*>(this, pPed);
}

// Converted from thiscall void CStinger::Process(void)	0x629380	
void CStinger::Process() {
    plugin::CallMethod<0x629380, CStinger *>(this);
}

// Converted from thiscall void CStinger::Remove(void)	0x629880	
void CStinger::Remove() {
    plugin::CallMethod<0x629880, CStinger *>(this);
}

// Converted from thiscall void CStinger::~CStinger()	0x629B40	
CStinger::~CStinger() {
    plugin::CallMethod<0x629B40, CStinger *>(this);
}