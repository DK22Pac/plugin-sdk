/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendNode.h"

PLUGIN_SOURCE_FILE

int addrof(CAnimBlendNode::CalcDeltas) = ADDRESS_BY_VERSION(0x401E70, 0x401E70, 0x401E70);
int gaddrof(CAnimBlendNode::CalcDeltas) = GLOBAL_ADDRESS_BY_VERSION(0x401E70, 0x401E70, 0x401E70);

void CAnimBlendNode::CalcDeltas() {
    plugin::CallMethodDynGlobal<CAnimBlendNode *>(gaddrof(CAnimBlendNode::CalcDeltas), this);
}

int addrof(CAnimBlendNode::FindKeyFrame) = ADDRESS_BY_VERSION(0x4021B0, 0x4021B0, 0x4021B0);
int gaddrof(CAnimBlendNode::FindKeyFrame) = GLOBAL_ADDRESS_BY_VERSION(0x4021B0, 0x4021B0, 0x4021B0);

bool CAnimBlendNode::FindKeyFrame(float t) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendNode *, float>(gaddrof(CAnimBlendNode::FindKeyFrame), this, t);
}

int addrof(CAnimBlendNode::GetCurrentTranslation) = ADDRESS_BY_VERSION(0x401FE0, 0x401FE0, 0x401FE0);
int gaddrof(CAnimBlendNode::GetCurrentTranslation) = GLOBAL_ADDRESS_BY_VERSION(0x401FE0, 0x401FE0, 0x401FE0);

void CAnimBlendNode::GetCurrentTranslation(CVector &trans, float weight) {
    plugin::CallMethodDynGlobal<CAnimBlendNode *, CVector &, float>(gaddrof(CAnimBlendNode::GetCurrentTranslation), this, trans, weight);
}

int addrof(CAnimBlendNode::GetEndTranslation) = ADDRESS_BY_VERSION(0x402110, 0x402110, 0x402110);
int gaddrof(CAnimBlendNode::GetEndTranslation) = GLOBAL_ADDRESS_BY_VERSION(0x402110, 0x402110, 0x402110);

void CAnimBlendNode::GetEndTranslation(CVector &trans, float weight) {
    plugin::CallMethodDynGlobal<CAnimBlendNode *, CVector &, float>(gaddrof(CAnimBlendNode::GetEndTranslation), this, trans, weight);
}

int addrof(CAnimBlendNode::Init) = ADDRESS_BY_VERSION(0x401B10, 0x401B10, 0x401B10);
int gaddrof(CAnimBlendNode::Init) = GLOBAL_ADDRESS_BY_VERSION(0x401B10, 0x401B10, 0x401B10);

void CAnimBlendNode::Init() {
    plugin::CallMethodDynGlobal<CAnimBlendNode *>(gaddrof(CAnimBlendNode::Init), this);
}

int addrof(CAnimBlendNode::NextKeyFrame) = ADDRESS_BY_VERSION(0x401DC0, 0x401DC0, 0x401DC0);
int gaddrof(CAnimBlendNode::NextKeyFrame) = GLOBAL_ADDRESS_BY_VERSION(0x401DC0, 0x401DC0, 0x401DC0);

bool CAnimBlendNode::NextKeyFrame() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendNode *>(gaddrof(CAnimBlendNode::NextKeyFrame), this);
}

int addrof(CAnimBlendNode::Update) = ADDRESS_BY_VERSION(0x401B30, 0x401B30, 0x401B30);
int gaddrof(CAnimBlendNode::Update) = GLOBAL_ADDRESS_BY_VERSION(0x401B30, 0x401B30, 0x401B30);

bool CAnimBlendNode::Update(CVector &trans, CQuaternion &rot, float weight) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendNode *, CVector &, CQuaternion &, float>(gaddrof(CAnimBlendNode::Update), this, trans, rot, weight);
}
