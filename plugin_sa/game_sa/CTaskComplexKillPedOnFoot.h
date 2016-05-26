#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskComplexKillPedOnFoot : public CTaskComplex
{
public:
	unsigned __int8   m_nFlags;
	class CPed       *m_pTarget;
	unsigned __int32  m_dwAttackFlags;
	unsigned __int32  m_dwActionDelay;
	unsigned __int32  m_dwActionChance;
	__int8 field_20;
	unsigned __int32  m_dwLaunchTime;
	signed __int32    m_dwTime;
    CTaskTimer        m_taskTimer;

	CTaskComplexKillPedOnFoot();
};
#pragma pack(pop)

VALIDATE_SIZE(CTaskComplexKillPedOnFoot, 0x38);