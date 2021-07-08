/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendClumpData.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendClumpData) = ADDRESS_BY_VERSION(0x401880, 0x401880, 0x401880);
int ctor_gaddr(CAnimBlendClumpData) = GLOBAL_ADDRESS_BY_VERSION(0x401880, 0x401880, 0x401880);

int dtor_addr(CAnimBlendClumpData) = ADDRESS_BY_VERSION(0x4018B0, 0x4018B0, 0x4018B0);
int dtor_gaddr(CAnimBlendClumpData) = GLOBAL_ADDRESS_BY_VERSION(0x4018B0, 0x4018B0, 0x4018B0);

int addrof(CAnimBlendClumpData::ForAllFrames) = ADDRESS_BY_VERSION(0x401930, 0x401930, 0x401930);
int gaddrof(CAnimBlendClumpData::ForAllFrames) = GLOBAL_ADDRESS_BY_VERSION(0x401930, 0x401930, 0x401930);

void CAnimBlendClumpData::ForAllFrames(void(*func)(AnimBlendFrameData *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *>(gaddrof(CAnimBlendClumpData::ForAllFrames), this, func, data);
}

int addrof(CAnimBlendClumpData::SetNumberOfBones) = ADDRESS_BY_VERSION(0x4018F0, 0x4018F0, 0x4018F0);
int gaddrof(CAnimBlendClumpData::SetNumberOfBones) = GLOBAL_ADDRESS_BY_VERSION(0x4018F0, 0x4018F0, 0x4018F0);

void CAnimBlendClumpData::SetNumberOfBones(int n) {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *, int>(gaddrof(CAnimBlendClumpData::SetNumberOfBones), this, n);
}
