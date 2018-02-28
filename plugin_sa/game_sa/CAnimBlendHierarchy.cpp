/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendHierarchy.h"

// Converted from thiscall void* CAnimBlendHierarchy::AllocSequenceBlock(bool arg1) 0x4CF510 
void* CAnimBlendHierarchy::AllocSequenceBlock(bool arg1) {
	return plugin::CallMethodAndReturn<void*, 0x4CF510, CAnimBlendHierarchy *, bool>(this, arg1);
}

// Converted from thiscall void CAnimBlendHierarchy::CAnimBlendHierarchy(void) 0x4CF270 
CAnimBlendHierarchy::CAnimBlendHierarchy() {
	plugin::CallMethod<0x4CF270, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::CalcTotalTime(void) 0x4CF2F0 
void CAnimBlendHierarchy::CalcTotalTime() {
	plugin::CallMethod<0x4CF2F0, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::CalcTotalTimeCompressed(void) 0x4CF3E0 
void CAnimBlendHierarchy::CalcTotalTimeCompressed() {
	plugin::CallMethod<0x4CF3E0, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::RemoveAnimSequences(void) 0x4CF8E0 
void CAnimBlendHierarchy::RemoveAnimSequences() {
	plugin::CallMethod<0x4CF8E0, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::RemoveQuaternionFlips(void) 0x4CF4E0 
void CAnimBlendHierarchy::RemoveQuaternionFlips() {
	plugin::CallMethod<0x4CF4E0, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::RemoveUncompressedData(void) 0x4CF760 
void CAnimBlendHierarchy::RemoveUncompressedData() {
	plugin::CallMethod<0x4CF760, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::SetName(char const*string) 0x4CF2D0 
void CAnimBlendHierarchy::SetName(char const* string) {
	plugin::CallMethod<0x4CF2D0, CAnimBlendHierarchy *, char const*>(this, string);
}

// Converted from thiscall void CAnimBlendHierarchy::Shutdown(void) 0x4CF980 
void CAnimBlendHierarchy::Shutdown() {
	plugin::CallMethod<0x4CF980, CAnimBlendHierarchy *>(this);
}

// Converted from thiscall void CAnimBlendHierarchy::Uncompress(void) 0x4CF5F0 
void CAnimBlendHierarchy::Uncompress() {
	plugin::CallMethod<0x4CF5F0, CAnimBlendHierarchy *>(this);
}



