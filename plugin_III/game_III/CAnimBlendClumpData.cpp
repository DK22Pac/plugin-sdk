/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendClumpData.h"

// Converted from thiscall void CAnimBlendClumpData::CAnimBlendClumpData(void) 0x401880 
CAnimBlendClumpData::CAnimBlendClumpData() {
    plugin::CallMethod<0x401880, CAnimBlendClumpData *>(this);
}

// Converted from thiscall void CAnimBlendClumpData::SetNumberOfBones(int) 0x4018F0 
void CAnimBlendClumpData::SetNumberOfBones(int numBones) {
    plugin::CallMethod<0x4018F0, CAnimBlendClumpData *, int>(this, numBones);
}

// Converted from thiscall void CAnimBlendClumpData::~CAnimBlendClumpData() 0x4018B0 
CAnimBlendClumpData::~CAnimBlendClumpData() {
    plugin::CallMethod<0x4018B0, CAnimBlendClumpData *>(this);
}

void CAnimBlendClumpData::ForAllFrames(void(*callback)(AnimBlendFrameData *, void *), void *data) {
    plugin::CallMethod<0x401930, CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *>(this, callback, data);
}