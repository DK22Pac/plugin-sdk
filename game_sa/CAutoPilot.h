#pragma once

#include "plugin\plugin.h"
#include "CVector.h"
#include "CNodeAddress.h"

#pragma pack(push, 1)
class PLUGIN_API CAutoPilot
{
public:
	CNodeAddress field_0;
	CNodeAddress    m_startingRouteNode;
	CNodeAddress field_8;
	Int32 field_C;
	UInt32          m_dwSpeedScaleFactor;
	UInt16          m_wCurrentPathNodeInfo;
	UInt16          m_wNextPathNodeInfo;
	UInt16          m_wPreviousPathNodeInfo;
	Int8 field_1A[2];
	UInt32          m_dwTimeToStartMission;
	UInt32          m_dwTimeSwitchedToRealPhysics;
	Int8 field_24;
	Int8 field_25;
	Int8 field_26;
	Int8            m_nCuurentLane;
	Int8            m_nNextLane;
	Int8            m_nCarDrivingStyle;
	Int8            m_nCarMission;
	Int8            m_nTempAction;
	UInt32          m_dwTempActionTime;
	UInt32 field_30;
	Int8 field_34;
	Int8 field_35;
	Int8 field_36[2];
	Float field_38;
	Float           m_fMaxTrafficSpeed;
	Int8 field_40;
	Int8 field_41;
	Int8 field_42[2];
	Float field_44;
	Int8 field_48[1];
	Int8 field_49;
	Int8 field_4A;
	UInt8           m_nCarCtrlFlags;
	Int8 field_4C;
	Int8            m_nStraightLineDistance;
	Int8 field_4E;
	Int8 field_4F;
	Int8 field_50;
	Int8 field_51;
	Int8 field_52[10];
	CVector         m_vDestinationCoors;
	CNodeAddress    m_aPathFindNodesInfo[8];
	UInt16          m_wPathFindNodesCount;
	Int8 field_8A[2];
	class CVehicle *m_pTargetCar;
	class CEntity  *m_pCarWeMakingSlowDownFor;
	Int8 field_94;
	Int8 field_95;
	Int16 field_96;
};
#pragma pack(pop)

VALIDATE_SIZE(CAutoPilot, 0x98);