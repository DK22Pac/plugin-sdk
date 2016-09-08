/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plbase/PluginBase_SA.h"
#include "CPlaneTrail.h"

#define NUM_PLANE_TRAILS 3

class PLUGIN_API CPlaneTrails
{
public:
	// count: NUM_PLANE_TRAILS (3)
	static CPlaneTrail *aArray;

	static void Init();
	static void Update();
	static void RegisterPoint(CVector point, unsigned int trailIndex);
};