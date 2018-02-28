/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendNode.h"

// Converted from thiscall void CAnimBlendNode::CalcDeltas(void) 0x4D0190
void CAnimBlendNode::CalcDeltas() {
    plugin::CallMethod<0x4D0190, CAnimBlendNode *>(this);
}

// Converted from thiscall void CAnimBlendNode::CalcDeltasCompressed(void) 0x4D0350
void CAnimBlendNode::CalcDeltasCompressed() {
    plugin::CallMethod<0x4D0350, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::FindKeyFrame(float arg1) 0x4D0240
bool CAnimBlendNode::FindKeyFrame(float arg1) {
    return plugin::CallMethodAndReturn<bool, 0x4D0240, CAnimBlendNode *, float>(this, arg1);
}

// Converted from thiscall void CAnimBlendNode::GetCurrentTranslation(CVector &Vector,float arg2) 0x4CFC50
void CAnimBlendNode::GetCurrentTranslation(CVector& Vector, float arg2) {
    plugin::CallMethod<0x4CFC50, CAnimBlendNode *, CVector&, float>(this, Vector, arg2);
}

// Converted from thiscall void CAnimBlendNode::GetCurrentTranslationCompressed(CVector &Vector,float arg2) 0x4CFE60
void CAnimBlendNode::GetCurrentTranslationCompressed(CVector& Vector, float arg2) {
    plugin::CallMethod<0x4CFE60, CAnimBlendNode *, CVector&, float>(this, Vector, arg2);
}

// Converted from thiscall void CAnimBlendNode::GetEndTranslation(CVector &Vector, float arg2) 0x4CFD90
void CAnimBlendNode::GetEndTranslation(CVector& Vector, float arg2) {
    plugin::CallMethod<0x4CFD90, CAnimBlendNode *, CVector&, float>(this, Vector, arg2);
}

// Converted from thiscall void CAnimBlendNode::GetEndTranslationCompressed(CVector &Vector ,float arg2) 0x4D0000
void CAnimBlendNode::GetEndTranslationCompressed(CVector& Vector, float arg2) {
    plugin::CallMethod<0x4D0000, CAnimBlendNode *, CVector&, float>(this, Vector, arg2);
}

// Converted from thiscall void CAnimBlendNode::Init(void) 0x4CFB70
void CAnimBlendNode::Init() {
    plugin::CallMethod<0x4CFB70, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::NextKeyFrame(void) 0x4D04A0
bool CAnimBlendNode::NextKeyFrame() {
    return plugin::CallMethodAndReturn<bool, 0x4D04A0, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::NextKeyFrameCompressed(void) 0x4D0570
bool CAnimBlendNode::NextKeyFrameCompressed() {
    return plugin::CallMethodAndReturn<bool, 0x4D0570, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::NextKeyFrameNoCalc(void) 0x4CFB90
bool CAnimBlendNode::NextKeyFrameNoCalc() {
    return plugin::CallMethodAndReturn<bool, 0x4CFB90, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::SetupKeyFrameCompressed(void) 0x4D0650
bool CAnimBlendNode::SetupKeyFrameCompressed() {
    return plugin::CallMethodAndReturn<bool, 0x4D0650, CAnimBlendNode *>(this);
}

// Converted from thiscall bool CAnimBlendNode::Update(CVector &Vector,CQuaternion &Qauternion,float arg3) 0x4D06C0
bool CAnimBlendNode::Update(CVector& Vector, CQuaternion& Qauternion, float arg3) {
    return plugin::CallMethodAndReturn<bool, 0x4D06C0, CAnimBlendNode *, CVector&, CQuaternion&, float>(this, Vector, Qauternion, arg3);
}

// Converted from thiscall bool CAnimBlendNode::UpdateCompressed(CVector &Vector,CQuaternion &Quaternion,float arg3) 0x4D08D0 0x4D0160
bool CAnimBlendNode::UpdateCompressed(CVector& Vector, CQuaternion& Quaternion, float arg3) {
    return plugin::CallMethodAndReturn<bool, 0x4D08D0, CAnimBlendNode *, CVector&, CQuaternion&, float>(this, Vector, Quaternion, arg3);
}