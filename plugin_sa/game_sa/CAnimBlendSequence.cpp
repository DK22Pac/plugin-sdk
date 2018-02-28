/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendSequence.h"

// Converted from thiscall void CAnimBlendSequence::CAnimBlendSequence(void) 0x4D0C10
CAnimBlendSequence::CAnimBlendSequence() {
	plugin::CallMethod<0x4D0C10, CAnimBlendSequence *>(this);
}

// Converted from thiscall void CAnimBlendSequence::CompressKeyframes(uchar *arg1) 0x4D0F40
void CAnimBlendSequence::CompressKeyframes(unsigned char* arg1) {
	plugin::CallMethod<0x4D0F40, CAnimBlendSequence *, unsigned char*>(this, arg1);
}

// Converted from thiscall int CAnimBlendSequence::GetDataSize(bool arg1) 0x4D0C90
int CAnimBlendSequence::GetDataSize(bool arg1) {
	return plugin::CallMethodAndReturn<int, 0x4D0C90, CAnimBlendSequence *, bool>(this, arg1);
}

// Converted from thiscall bool CAnimBlendSequence::MoveMemorY(void) 0x4D1150
bool CAnimBlendSequence::MoveMemorY() {
	return plugin::CallMethodAndReturn<bool, 0x4D1150, CAnimBlendSequence *>(this);
}

// Converted from thiscall int CAnimBlendSequence::RemoveQuaternionFlips(void) 0x4D1190
int CAnimBlendSequence::RemoveQuaternionFlips() {
	return plugin::CallMethodAndReturn<int, 0x4D1190, CAnimBlendSequence *>(this);
}

// Converted from thiscall void CAnimBlendSequence::RemoveUncompressedData(uchar *arg1) 0x4D12A0
void CAnimBlendSequence::RemoveUncompressedData(unsigned char* arg1) {
	plugin::CallMethod<0x4D12A0, CAnimBlendSequence *, unsigned char*>(this, arg1);
}

// Converted from thiscall void CAnimBlendSequence::SetBoneTag(int hash) 0x4D0C70
void CAnimBlendSequence::SetBoneTag(int hash) {
	plugin::CallMethod<0x4D0C70, CAnimBlendSequence *, int>(this, hash);
}

// Converted from thiscall void CAnimBlendSequence::SetName(char const *string) 0x4D0C50
void CAnimBlendSequence::SetName(char const* string) {
	plugin::CallMethod<0x4D0C50, CAnimBlendSequence *, char const*>(this, string);
}

// Converted from thiscall void CAnimBlendSequence::SetNumFrames(int count,bool arg2,bool arg3,uchar *arg4) 0x4D0CD0
void CAnimBlendSequence::SetNumFrames(int count, bool arg2, bool arg3, unsigned char* arg4) {
	plugin::CallMethod<0x4D0CD0, CAnimBlendSequence *, int, bool, bool, unsigned char*>(this, count, arg2, arg3, arg4);
}

// Converted from thiscall void CAnimBlendSequence::Uncompress(uchar *arg1) 0x4D0D40
void CAnimBlendSequence::Uncompress(unsigned char* arg1) {
	plugin::CallMethod<0x4D0D40, CAnimBlendSequence *, unsigned char*>(this, arg1);
}

// Converted from thiscall void CAnimBlendSequence::~CAnimBlendSequence(void) 0x4D0C30
CAnimBlendSequence::~CAnimBlendSequence() {
	plugin::CallMethod<0x4D0C30, CAnimBlendSequence *>(this);
}