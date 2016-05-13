#include "plbase/PluginBase.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CPlaneTrail
{
public:
	CVector m_vPosn[16];
	unsigned __int32 m_dwTime[16];

	void Init();
	void Render(float intensity);
	void RegisterPoint(CVector point);
};
#pragma pack(pop)

VALIDATE_SIZE(CPlaneTrail, 0x100);