#pragma once

#include "plbase/PluginBase.h"
#include <game_sa\RenderWare.h>
#include <game_sa\CVector.h>

class PLUGIN_API FxFrustumInfo_c
{
public:
	CVector field_0;
	int field_C;
	int field_10;
	RwPlane m_planes[4];
};

VALIDATE_SIZE(FxFrustumInfo_c, 0x54);