/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPathFind.h"
#include "eCarMission.h"

enum eCarDrivingStyle : char
{
    DRIVINGSTYLE_STOP_FOR_CARS,
    DRIVINGSTYLE_SLOW_DOWN_FOR_CARS,
    DRIVINGSTYLE_AVOID_CARS,
    DRIVINGSTYLE_PLOUGH_THROUGH,
    DRIVINGSTYLE_STOP_FOR_CARS_IGNORE_LIGHTS
};

class PLUGIN_API CAutoPilot {
public:
    CNodeAddress         m_currentAddress;
    CNodeAddress         m_startingRouteNode;
    CNodeAddress field_8;
    int field_C;
    unsigned int         m_nSpeedScaleFactor;
    CCarPathLinkAddress  m_nCurrentPathNodeInfo;
    CCarPathLinkAddress  m_nNextPathNodeInfo;
    CCarPathLinkAddress  m_nPreviousPathNodeInfo;
    char field_1A[2];
    unsigned int         m_nTimeToStartMission;
    unsigned int         m_nTimeSwitchedToRealPhysics;
    char field_24;
    char _smthCurr;
    char _smthNext;
    char                 m_nCurrentLane;
    char                 m_nNextLane;
    eCarDrivingStyle                 m_nCarDrivingStyle;
    eCarMission                 m_nCarMission;
    char                 m_nTempAction;
    unsigned int         m_nTempActionTime;
    unsigned int _someStartTime;
    char field_34;
    char field_35;
    char field_36[2];
    float field_38;
    float                m_fMaxTrafficSpeed;
    char m_nCruiseSpeed;
    char field_41;
    char field_42[2];
    float field_44;
    char field_48[1];
    char heliThrustPower;
    char field_4A;
    unsigned char        m_nCarCtrlFlags;
    char field_4C;
    char                 m_nStraightLineDistance;
    char field_4E;
    char field_4F;
    char field_50;
    char field_51;
    char field_52[10];
    CVector              m_vecDestinationCoors;
    CNodeAddress         m_aPathFindNodesInfo[8];
    unsigned short       m_nPathFindNodesCount;
    char field_8A[2];
    class CVehicle      *m_pTargetCar;
    class CEntity       *m_pCarWeMakingSlowDownFor;
    char field_94;
    char field_95;
    short field_96;
};
VALIDATE_OFFSET(CAutoPilot, m_currentAddress, 0x0);
VALIDATE_OFFSET(CAutoPilot, m_startingRouteNode, 0x4);
VALIDATE_OFFSET(CAutoPilot, field_8, 0x8);
VALIDATE_OFFSET(CAutoPilot, field_C, 0xC);
VALIDATE_OFFSET(CAutoPilot, m_nSpeedScaleFactor, 0x10);
VALIDATE_OFFSET(CAutoPilot, m_nCurrentPathNodeInfo, 0x14);
VALIDATE_OFFSET(CAutoPilot, m_nNextPathNodeInfo, 0x16);
VALIDATE_OFFSET(CAutoPilot, m_nPreviousPathNodeInfo, 0x18);
VALIDATE_OFFSET(CAutoPilot, field_1A, 0x1A);
VALIDATE_OFFSET(CAutoPilot, m_nTimeToStartMission, 0x1C);
VALIDATE_OFFSET(CAutoPilot, m_nTimeSwitchedToRealPhysics, 0x20);
VALIDATE_OFFSET(CAutoPilot, field_24, 0x24);
VALIDATE_OFFSET(CAutoPilot, _smthCurr, 0x25);
VALIDATE_OFFSET(CAutoPilot, _smthNext, 0x26);
VALIDATE_OFFSET(CAutoPilot, m_nCurrentLane, 0x27);
VALIDATE_OFFSET(CAutoPilot, m_nNextLane, 0x28);
VALIDATE_OFFSET(CAutoPilot, m_nCarDrivingStyle, 0x29);
VALIDATE_OFFSET(CAutoPilot, m_nCarMission, 0x2A);
VALIDATE_OFFSET(CAutoPilot, m_nTempAction, 0x2B);
VALIDATE_OFFSET(CAutoPilot, m_nTempActionTime, 0x2C);
VALIDATE_OFFSET(CAutoPilot, _someStartTime, 0x30);
VALIDATE_OFFSET(CAutoPilot, field_34, 0x34);
VALIDATE_OFFSET(CAutoPilot, field_35, 0x35);
VALIDATE_OFFSET(CAutoPilot, field_36, 0x36);
VALIDATE_OFFSET(CAutoPilot, field_38, 0x38);
VALIDATE_OFFSET(CAutoPilot, m_fMaxTrafficSpeed, 0x3C);
VALIDATE_OFFSET(CAutoPilot, m_nCruiseSpeed, 0x40);
VALIDATE_OFFSET(CAutoPilot, field_41, 0x41);
VALIDATE_OFFSET(CAutoPilot, field_42, 0x42);
VALIDATE_OFFSET(CAutoPilot, field_44, 0x44);
VALIDATE_OFFSET(CAutoPilot, field_48, 0x48);
VALIDATE_OFFSET(CAutoPilot, heliThrustPower, 0x49);
VALIDATE_OFFSET(CAutoPilot, field_4A, 0x4A);
VALIDATE_OFFSET(CAutoPilot, m_nCarCtrlFlags, 0x4B);
VALIDATE_OFFSET(CAutoPilot, field_4C, 0x4C);
VALIDATE_OFFSET(CAutoPilot, m_nStraightLineDistance, 0x4D);
VALIDATE_OFFSET(CAutoPilot, field_4E, 0x4E);
VALIDATE_OFFSET(CAutoPilot, field_4F, 0x4F);
VALIDATE_OFFSET(CAutoPilot, field_50, 0x50);
VALIDATE_OFFSET(CAutoPilot, field_51, 0x51);
VALIDATE_OFFSET(CAutoPilot, field_52, 0x52);
VALIDATE_OFFSET(CAutoPilot, m_vecDestinationCoors, 0x5C);
VALIDATE_OFFSET(CAutoPilot, m_aPathFindNodesInfo, 0x68);
VALIDATE_OFFSET(CAutoPilot, m_nPathFindNodesCount, 0x88);
VALIDATE_OFFSET(CAutoPilot, field_8A, 0x8A);
VALIDATE_OFFSET(CAutoPilot, m_pTargetCar, 0x8C);
VALIDATE_OFFSET(CAutoPilot, m_pCarWeMakingSlowDownFor, 0x90);
VALIDATE_OFFSET(CAutoPilot, field_94, 0x94);
VALIDATE_OFFSET(CAutoPilot, field_95, 0x95);
VALIDATE_OFFSET(CAutoPilot, field_96, 0x96);
VALIDATE_SIZE(CAutoPilot, 0x98);
