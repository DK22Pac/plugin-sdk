#pragma once

#include "plugin\plugin.h"
#include "CTaskManager.h"
#include "CEventManager.h"
#include "CEntityScanner.h"
#include "CAiTimer.h"
#include "CTaskSimpleUseGun.h"
#include "CTaskSimpleJetpack.h"

#pragma pack(push, 1)
class PLUGIN_API CPedIntelligence
{
public:
	class CPed *m_pPed;
	CTaskManager m_TaskMgr;
	__int8 field_34[52];
	CEventManager m_EventMgr;
	__int32 m_dwDefaultDecisionMaker;
	__int32 _DM_00;
	__int32 m_fMeleeAccuracyA;
	__int32 m_fMeleeAccuracyB;
	__int32 m_dwDmNumPedsToScan;
	__int32 m_fDmRadius;
	__int32 field_CC;
	__int8 field_D0;
	__int8 m_nEventId;
	__int8 m_nEventPriority;
	__int8 field_D3;
	CEntityScanner m_VehicleScanner;
	CEntityScanner m_PedScanner;
	__int8 field_174;
	__int8 gap_175[3];
	CAiTimer field_178;
	__int32 field_184;
	__int8 field_188;
	__int8 gap_189[3];
	__int8 field_18C[212];
	__int8 field_260;
	__int8 gap_261[3];
	__int8 field_264[16];
	__int32 field_274;
	__int32 field_278;
	__int8 gap_27C[12];
	__int32 field_288;
	__int32 field_28C;
	__int32 field_290;

	CTaskSimpleJetpack *GetJetpackTask();
	CTaskSimpleUseGun *GetUseGunTask();
};
#pragma pack(pop)

VALIDATE_SIZE(CPedIntelligence, 0x294);