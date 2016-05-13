#pragma once

#include "plbase/PluginBase.h"

#pragma pack(push, 4)
class PLUGIN_API AnimBlendFrameData
{
public:
	unsigned __int8 m_nFlags;
	CVector m_vOffset;
	class IFrame *m_pIFrame;
	unsigned __int32 m_dwNodeId;
};
#pragma pack(pop)

VALIDATE_SIZE(AnimBlendFrameData, 0x18);