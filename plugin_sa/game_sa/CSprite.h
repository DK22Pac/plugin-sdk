#pragma once

#include "plbase/PluginBase.h"
#include "RenderWareTypes.h"

class PLUGIN_API CSprite
{
public:
	static void RenderOneXLUSprite(float x, float y, float z, float halfWidth, float halfHeight, 
		unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, 
		unsigned char intensity, unsigned char udir, unsigned char vdir);
	static bool CalcScreenCoors(RwV3d const &posn, RwV3d *out, float *w, float *h, bool checkMaxVisible, bool checkMinVisible);
};