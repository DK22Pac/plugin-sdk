/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendNode.h"

// Converted from thiscall void CAnimBlendNode::CalcDeltas(void) 0x401E70 
void CAnimBlendNode::CalcDeltas() {
    plugin::CallMethod<0x401E70, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::FindKeyFrame(float) 0x4021B0 
bool CAnimBlendNode::FindKeyFrame(float arg0) {
    return plugin::CallMethodAndReturn<bool, 0x4021B0, CAnimBlendNode *, float>(this, arg0);
}

// Converted from thiscall void CAnimBlendNode::GetCurrentTranslation(CVector &,float) 0x401FE0 
void CAnimBlendNode::GetCurrentTranslation(CVector& arg0, float arg1) {
    plugin::CallMethod<0x401FE0, CAnimBlendNode *, CVector&, float>(this, arg0, arg1);
}

// Converted from thiscall void CAnimBlendNode::GetEndTranslation(CVector &,float) 0x402110 
void CAnimBlendNode::GetEndTranslation(CVector& arg0, float arg1) {
    plugin::CallMethod<0x402110, CAnimBlendNode *, CVector&, float>(this, arg0, arg1);
}

// Converted from thiscall void CAnimBlendNode::Init(void) 0x401B10 
void CAnimBlendNode::Init() {
    plugin::CallMethod<0x401B10, CAnimBlendNode *>(this);
}

// Converted from thiscall void CAnimBlendNode::NextKeyFrame(void) 0x401DC0 
void CAnimBlendNode::NextKeyFrame() {
    plugin::CallMethod<0x401DC0, CAnimBlendNode *>(this);
}
