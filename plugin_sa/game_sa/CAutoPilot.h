/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"
#include "CPathFind.h"

#pragma pack(push, 1)
class PLUGIN_API CAutoPilot
{
public:
	CNodeAddress field_0;
	CNodeAddress    m_startingRouteNode;
	CNodeAddress field_8;
	int32_t field_C;
	uint32_t          m_dwSpeedScaleFactor;
	CCarPathLinkAddress m_wCurrentPathNodeInfo;
	CCarPathLinkAddress m_wNextPathNodeInfo;
	CCarPathLinkAddress m_wPreviousPathNodeInfo;
	int8_t field_1A[2];
	uint32_t          m_dwTimeToStartMission;
	uint32_t          m_dwTimeSwitchedToRealPhysics;
	int8_t field_24;
	int8_t field_25;
	int8_t field_26;
	int8_t            m_nCurrentLane;
	int8_t            m_nNextLane;
	int8_t            m_nCarDrivingStyle;
	int8_t            m_nCarMission;
	int8_t            m_nTempAction;
	uint32_t          m_dwTempActionTime;
	uint32_t field_30;
	int8_t field_34;
	int8_t field_35;
	int8_t field_36[2];
	float field_38;
	float           m_fMaxTrafficSpeed;
	int8_t field_40;
	int8_t field_41;
	int8_t field_42[2];
	float field_44;
	int8_t field_48[1];
	int8_t field_49;
	int8_t field_4A;
	uint8_t           m_nCarCtrlFlags;
	int8_t field_4C;
	int8_t            m_nStraightLineDistance;
	int8_t field_4E;
	int8_t field_4F;
	int8_t field_50;
	int8_t field_51;
	int8_t field_52[10];
	CVector         m_vDestinationCoors;
	CNodeAddress    m_aPathFindNodesInfo[8];
	uint16_t        m_wPathFindNodesCount;
	int8_t field_8A[2];
	class CVehicle *m_pTargetCar;
	class CEntity  *m_pCarWeMakingSlowDownFor;
	int8_t field_94;
	int8_t field_95;
	int16_t field_96;
};
#pragma pack(pop)

VALIDATE_SIZE(CAutoPilot, 0x98);