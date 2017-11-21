/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CAnimBlendHierarchy.h"
#include "RenderWare.h"

class CAnimBlendStaticAssociation
{
public:
	unsigned short m_numBlendNodes;                   // +0x04
	short m_animID;                           // +0x06
	short m_animGroup;                        // +0x08
	short m_flags;                            // +0x0A
	int* m_pAnimBlendNodesSequenceArray;      // +0x0C 
	CAnimBlendHierarchy* m_pAnimBlendHier;  // +0x10


	//funcs
	void AllocateSequenceArray(int size);
	CAnimBlendStaticAssociation();
	void Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier);
	virtual ~CAnimBlendStaticAssociation() = 0;
};

VALIDATE_SIZE(CAnimBlendStaticAssociation, 0x14);
