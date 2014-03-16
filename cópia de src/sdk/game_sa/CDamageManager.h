#pragma once

#include "plugin/plugin.h"

#pragma pack(push, 4)
class PLUGIN_API CDamageManager
{
public:
	float           m_fWheelDamageEffect;
	unsigned __int8 m_nEngineStatus;
	union {
		unsigned __int8 m_anWheelsStatus[4];
		struct {
			unsigned __int8 m_nRightRearWheelsStatus;
			unsigned __int8 m_nRightFrontWheelsStatus;
			unsigned __int8 m_nLeftRearWheelsStatus;
			unsigned __int8 m_nLeftFrontWheelsStatus;
		};
	};
	union {
		unsigned __int8 m_anDoorsStatus[6];
		struct {
			unsigned __int8 m_nBonnetStatus;
			unsigned __int8 m_nBootStatus;
			unsigned __int8 m_nLeftFrontDoorStatus;
			unsigned __int8 m_nRightFrontDoorStatus;
			unsigned __int8 m_nLeftRearDoorStatus;
			unsigned __int8 m_nRightRearDoorStatus;
		};
	};
	union {
		unsigned __int32 m_dwLightsStatus;
		struct {
			unsigned __int32 m_nLeftFrontLightStatus : 2;
			unsigned __int32 m_nRightFrontLightStatus : 2;
			unsigned __int32 m_nRightRearLightStatus : 2;
			unsigned __int32 m_nLeftRearLightStatus : 2;
		};
	};
	union {
		unsigned __int32 m_dwPanelsStatus;
		struct {
			unsigned __int32 m_nLeftFrontLightStatus : 4;
			unsigned __int32 m_nRightFrontLightStatus : 4;
			unsigned __int32 m_nRightRearLightStatus : 4;
			unsigned __int32 m_nLeftRearLightStatus : 4;
		};
	};
};
#pragma pack(pop)

VALIDATE_SIZE(CDamageManager, 0x18);