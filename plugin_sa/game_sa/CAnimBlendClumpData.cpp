/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendClumpData.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendClumpData) = ADDRESS_BY_VERSION(0x4CF0E0, 0, 0, 0, 0, 0);
int ctor_gaddr(CAnimBlendClumpData) = GLOBAL_ADDRESS_BY_VERSION(0x4CF0E0, 0, 0, 0, 0, 0);

CAnimBlendClumpData::CAnimBlendClumpData() {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(ctor_gaddr(CAnimBlendClumpData), this);
}

int dtor_addr(CAnimBlendClumpData) = ADDRESS_BY_VERSION(0x4CF100, 0, 0, 0, 0, 0);
int dtor_gaddr(CAnimBlendClumpData) = GLOBAL_ADDRESS_BY_VERSION(0x4CF100, 0, 0, 0, 0, 0);

CAnimBlendClumpData::~CAnimBlendClumpData() {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(dtor_gaddr(CAnimBlendClumpData), this);
}

int addrof(CAnimBlendClumpData::ForAllFrames) = ADDRESS_BY_VERSION(0x4CF190, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendClumpData::ForAllFrames) = GLOBAL_ADDRESS_BY_VERSION(0x4CF190, 0, 0, 0, 0, 0);

void CAnimBlendClumpData::ForAllFrames(void(*callback)(AnimBlendFrameData *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *>(gaddrof(CAnimBlendClumpData::ForAllFrames), this, callback, data);
}

int addrof(CAnimBlendClumpData::ForAllFramesInSPR) = ADDRESS_BY_VERSION(0x4CF1E0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendClumpData::ForAllFramesInSPR) = GLOBAL_ADDRESS_BY_VERSION(0x4CF1E0, 0, 0, 0, 0, 0);

void CAnimBlendClumpData::ForAllFramesInSPR(void(*callback)(AnimBlendFrameData *, void *), void *data, unsigned int a3) {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *, unsigned int>(gaddrof(CAnimBlendClumpData::ForAllFramesInSPR), this, callback, data, a3);
}

int addrof(CAnimBlendClumpData::LoadFramesIntoSPR) = ADDRESS_BY_VERSION(0x4CF1D0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendClumpData::LoadFramesIntoSPR) = GLOBAL_ADDRESS_BY_VERSION(0x4CF1D0, 0, 0, 0, 0, 0);

void CAnimBlendClumpData::LoadFramesIntoSPR() {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(gaddrof(CAnimBlendClumpData::LoadFramesIntoSPR), this);
}

int addrof(CAnimBlendClumpData::SetNumberOfBones) = ADDRESS_BY_VERSION(0x4CF140, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendClumpData::SetNumberOfBones) = GLOBAL_ADDRESS_BY_VERSION(0x4CF140, 0, 0, 0, 0, 0);

void CAnimBlendClumpData::SetNumberOfBones(int numBones) {
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *, int>(gaddrof(CAnimBlendClumpData::SetNumberOfBones), this, numBones);
}
