#pragma once
#include <plugin/plugin.h>
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
