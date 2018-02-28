/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreamingInfo.h"

// Converted from thiscall void CStreamingInfo::Init(void) 0x407460
void CStreamingInfo::Init() {
    ((void(__thiscall *)(CStreamingInfo*))0x407460)(this);
}

// Converted from thiscall void CStreamingInfo::AddToList(CStreamingInfo* listStart) 0x407480
void CStreamingInfo::AddToList(CStreamingInfo* listStart) {
    ((void(__thiscall *)(CStreamingInfo*, CStreamingInfo*))0x407480)(this, listStart);
}

// Converted from thiscall void CStreamingInfo::RemoveFromList(void) 0x4074E0
void CStreamingInfo::RemoveFromList() {
    ((void(__thiscall *)(CStreamingInfo*))0x4074E0)(this);
}

// Converted from thiscall CStreamingInfo* CStreamingInfo::GetNext(void) 0x407520
CStreamingInfo* CStreamingInfo::GetNext() {
    return ((CStreamingInfo* (__thiscall *)(CStreamingInfo*))0x407520)(this);
}

// Converted from thiscall CStreamingInfo* CStreamingInfo::GetPrev(void) 0x407540
CStreamingInfo* CStreamingInfo::GetPrev() {
    return ((CStreamingInfo* (__thiscall *)(CStreamingInfo*))0x407540)(this);
}

// Converted from thiscall bool CStreamingInfo::InList(void) 0x407560
bool CStreamingInfo::InList() {
    return ((bool(__thiscall *)(CStreamingInfo*))0x407560)(this);
}

// Converted from thiscall uint CStreamingInfo::GetCdPosn(void) 0x407570
unsigned int CStreamingInfo::GetCdPosn() {
    return ((unsigned int(__thiscall *)(CStreamingInfo*))0x407570)(this);
}

// Converted from thiscall uint CStreamingInfo::GetCdSize(void) 0x407590
unsigned int CStreamingInfo::GetCdSize() {
    return ((unsigned int(__thiscall *)(CStreamingInfo*))0x407590)(this);
}

// Converted from thiscall bool CStreamingInfo::GetCdPosnAndSize(uint &outPosn,uint &outSize) 0x4075A0
bool CStreamingInfo::GetCdPosnAndSize(unsigned int& outPosn, unsigned int& outSize) {
    return ((bool(__thiscall *)(CStreamingInfo*, unsigned int&, unsigned int&))0x4075A0)(this, outPosn, outSize);
}

// Converted from thiscall void CStreamingInfo::SetCdPosnAndSize(uint posn,uint size) 0x4075E0
void CStreamingInfo::SetCdPosnAndSize(unsigned int posn, unsigned int size) {
    ((void(__thiscall *)(CStreamingInfo*, unsigned int, unsigned int))0x4075E0)(this, posn, size);
}