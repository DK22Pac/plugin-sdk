/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfoAccelerator.h"

// Converted from thiscall void CModelInfoAccelerator::Init(void) 0x4C6A80
void CModelInfoAccelerator::Init() {
    plugin::CallMethod<0x4C6A80, CModelInfoAccelerator *>(this);
}

// Converted from thiscall void CModelInfoAccelerator::AddModelInfoId(ushort modelId) 0x4C6AA0
void CModelInfoAccelerator::AddModelInfoId(unsigned short modelId) {
    plugin::CallMethod<0x4C6AA0, CModelInfoAccelerator *, unsigned short>(this, modelId);
}

// Converted from thiscall ushort CModelInfoAccelerator::GetNextModelInfoId(void) 0x4C6AC0
unsigned short CModelInfoAccelerator::GetNextModelInfoId() {
    return plugin::CallMethodAndReturn<unsigned short, 0x4C6AC0, CModelInfoAccelerator *>(this);
}

// Converted from thiscall void CModelInfoAccelerator::AllocModelInfoIds(void) 0x4C6AE0
void CModelInfoAccelerator::AllocModelInfoIds() {
    plugin::CallMethod<0x4C6AE0, CModelInfoAccelerator *>(this);
}

// Converted from thiscall void CModelInfoAccelerator::FreeModelInfoIds(void) 0x4C6B10
void CModelInfoAccelerator::FreeModelInfoIds() {
    plugin::CallMethod<0x4C6B10, CModelInfoAccelerator *>(this);
}

// Converted from thiscall void CModelInfoAccelerator::GetEntry(CBaseModelInfo **,int *,char *) 0x4C6B30
void CModelInfoAccelerator::GetEntry(CBaseModelInfo** arg0, int* arg1, char* arg2) {
    plugin::CallMethod<0x4C6B30, CModelInfoAccelerator *, CBaseModelInfo**, int*, char*>(this, arg0, arg1, arg2);
}

// Converted from thiscall void CModelInfoAccelerator::End(char *) 0x4C6B40
void CModelInfoAccelerator::End(char* arg0) {
    plugin::CallMethod<0x4C6B40, CModelInfoAccelerator *, char*>(this, arg0);
}

// Converted from thiscall void CModelInfoAccelerator::CModelInfoAccelerator(void) 0x4C6B50
CModelInfoAccelerator::CModelInfoAccelerator() {
    plugin::CallMethod<0x4C6B50, CModelInfoAccelerator *>(this);
}

// Converted from thiscall bool CModelInfoAccelerator::GetModelInfoIdFile(void) 0x4C6B70
bool CModelInfoAccelerator::GetModelInfoIdFile() {
    return plugin::CallMethodAndReturn<bool, 0x4C6B70, CModelInfoAccelerator *>(this);
}

// Converted from thiscall void CModelInfoAccelerator::EndOfLoadPhase(void) 0x4C6BD0
void CModelInfoAccelerator::EndOfLoadPhase() {
    plugin::CallMethod<0x4C6BD0, CModelInfoAccelerator *>(this);
}

// Converted from thiscall bool CModelInfoAccelerator::Begin(char *filePath) 0x4C6C20
bool CModelInfoAccelerator::Begin(char* filePath) {
    return plugin::CallMethodAndReturn<bool, 0x4C6C20, CModelInfoAccelerator *, char*>(this, filePath);
}