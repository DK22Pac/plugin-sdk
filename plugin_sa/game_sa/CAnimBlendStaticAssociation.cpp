/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendStaticAssociation.h"


// Converted from thiscall void CAnimBlendStaticAssociation::AllocateSequenceArray(int size) 0x4CE960 
void CAnimBlendStaticAssociation::AllocateSequenceArray(int size) {
	plugin::CallMethod<0x4CE960, CAnimBlendStaticAssociation *, int>(this, size);
}

// Converted from thiscall void CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(void) 0x4CE940 
CAnimBlendStaticAssociation::CAnimBlendStaticAssociation() {
	plugin::CallMethod<0x4CE940, CAnimBlendStaticAssociation *>(this);
}

// Converted from thiscall void CAnimBlendStaticAssociation::Init(RpClump *pClump,CAnimBlendHierarchy *pAnimBlendHier) 0x4CEC20 
void CAnimBlendStaticAssociation::Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier) {
	plugin::CallMethod<0x4CEC20, CAnimBlendStaticAssociation *, RpClump*, CAnimBlendHierarchy*>(this, pClump, pAnimBlendHier);
}