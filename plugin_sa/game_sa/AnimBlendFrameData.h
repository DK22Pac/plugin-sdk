/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

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