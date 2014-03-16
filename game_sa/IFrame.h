#pragma once

#include "plugin\plugin.h"
#include "RenderWare.h"

#pragma pack(push, 4)
class PLUGIN_API IFrame
{
public:
	RtQuat m_qOrientation;
	RwV3d m_vTranslation;
};
#pragma pack(pop)

VALIDATE_SIZE(IFrame, 0x1C);