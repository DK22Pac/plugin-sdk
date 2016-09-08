/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "AnimBlendFrameData.h"

#pragma pack(push, 4)
class PLUGIN_API CAnimBlendClumpData
{
public:
	void               *m_pLastAssociationLink;
	int32_t field_4;
	uint32_t              m_dwNumBones;
	int32_t field_C;
	AnimBlendFrameData *m_pBones;
};
#pragma pack(pop)
