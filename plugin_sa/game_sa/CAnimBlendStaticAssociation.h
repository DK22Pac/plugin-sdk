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
	char pad[6];
	__int16 sAnimID;
	__int16 sAnimGroup;
	__int16 sFlags;
	char pad2[4];
	CAnimBlendHierarchy *pAnimHeirarchy;


	//funcs
	void AllocateSequenceArray(int size);
	CAnimBlendStaticAssociation();
	void Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier);
};

VALIDATE_SIZE(CAnimBlendStaticAssociation, 0x14);