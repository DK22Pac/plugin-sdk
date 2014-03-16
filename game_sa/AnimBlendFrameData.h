#pragma once

#include "plugin\plugin.h"
#include "RenderWare.h"
#include "IFrame.h"

#pragma pack(push, 4)
class PLUGIN_API AnimBlendFrameData
{
public:
	unsigned __int8 m_nFlags;
	RwV3d m_vOffset;
	IFrame *m_pIFrame;
	unsigned __int32 m_dwNodeId;
};
#pragma pack(pop)

VALIDATE_SIZE(AnimBlendFrameData, 0x18);