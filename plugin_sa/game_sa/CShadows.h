#pragma once

#include "plbase/PluginBase.h"
#include "RenderWareTypes.h"
#include "CVector.h"
#include "CRealTimeShadow.h"

class PLUGIN_API CShadows
{
public:
	static void AddPermanentShadow(unsigned char type, RwTexture* texture, CVector* posn, float x1, float y1, float x2, float y2, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, unsigned int time, float scale);
	static void StoreShadowToBeRendered(unsigned char type, RwTexture* texture, CVector* posn, float x1, float y1, float x2, float y2, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, bool bDrawOnWater, float scale, CRealTimeShadow* shadowData, bool bDrawOnBuildings);
};