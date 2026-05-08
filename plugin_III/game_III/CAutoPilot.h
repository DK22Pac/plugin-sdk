/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPathFind.h"
#include "eCarMission.h"
#include "CVector.h"
#include "CNodeAddress.h"
class CVehicle;

enum eCarTempAction : char
{
    TEMPACT_NONE = 0,
    TEMPACT_WAIT = 1,
    TEMPACT_REVERSE = 2,
    TEMPACT_HANDBRAKETURNLEFT = 3,
    TEMPACT_HANDBRAKETURNRIGHT = 4,
    TEMPACT_HANDBRAKESTRAIGHT = 5,
    TEMPACT_TURNLEFT = 6,
    TEMPACT_TURNRIGHT = 7,
    TEMPACT_GOFORWARD = 8,
    TEMPACT_SWERVELEFT = 9,
    TEMPACT_SWERVERIGHT = 0xA
};

enum eCarDrivingStyle : char
{
    DRIVINGSTYLE_STOP_FOR_CARS,
    DRIVINGSTYLE_SLOW_DOWN_FOR_CARS,
    DRIVINGSTYLE_AVOID_CARS,
    DRIVINGSTYLE_PLOUGH_THROUGH,
    DRIVINGSTYLE_STOP_FOR_CARS_IGNORE_LIGHTS
};

#pragma pack(push, 1)
class CAutoPilot {
public:
    CNodeAddress m_currentAddress;
    CNodeAddress m_startingRouteNode;
    CNodeAddress m_PreviousRouteNode;
    unsigned int m_nTotalSpeedScaleFactor;
    unsigned int m_nSpeedScaleFactor;
    unsigned int m_nCurrentPathNodeInfo;
    unsigned int m_nNextPathNodeInfo;
    unsigned int m_nPreviousPathNodeInfo;
    unsigned int m_nTimeToStartMission;
    unsigned int m_nTimeSwitchedToRealPhysics;
    char m_nPreviousDirection;
    char m_nCurrentDirecton;
    char m_nNextDirection;
    char m_nPreviousPathDirection;
    char m_nCurrentPathDirection;
    eCarDrivingStyle m_nDrivingStyle;
    eCarMission m_nCarMission;
    eCarTempAction m_nAnimationId;
    unsigned int m_nAnimationTime;
    float m_fMaxTrafficSpeed;
    unsigned char m_nCruiseSpeed;

    uint8_t m_bSlowedDownBecauseOfCars : 1;
    uint8_t m_bSlowedDownBecauseOfPeds : 1;
    uint8_t m_bStayInCurrentLevel : 1;
    uint8_t m_bStayInFastLane : 1;
    uint8_t m_bIgnorePathfinding : 1;

    char pad1[2];
    CVector m_vecDestinationCoors;
    CNodeAddress m_aPathFindNodesInfo[8];
    unsigned short m_nPathFindNodesCount;
    char pad2[2];
    CVehicle *m_pTargetCar;

    //funcs
    void ModifySpeed(float speed);
    void RemoveOnePathNode();
};
VALIDATE_OFFSET(CAutoPilot, m_currentAddress, 0x0);
VALIDATE_OFFSET(CAutoPilot, m_startingRouteNode, 0x4);
VALIDATE_OFFSET(CAutoPilot, m_PreviousRouteNode, 0x8);
VALIDATE_OFFSET(CAutoPilot, m_nTotalSpeedScaleFactor, 0xC);
VALIDATE_OFFSET(CAutoPilot, m_nSpeedScaleFactor, 0x10);
VALIDATE_OFFSET(CAutoPilot, m_nCurrentPathNodeInfo, 0x14);
VALIDATE_OFFSET(CAutoPilot, m_nNextPathNodeInfo, 0x18);
VALIDATE_OFFSET(CAutoPilot, m_nPreviousPathNodeInfo, 0x1C);
VALIDATE_OFFSET(CAutoPilot, m_nTimeToStartMission, 0x20);
VALIDATE_OFFSET(CAutoPilot, m_nTimeSwitchedToRealPhysics, 0x24);
VALIDATE_OFFSET(CAutoPilot, m_nPreviousDirection, 0x28);
VALIDATE_OFFSET(CAutoPilot, m_nCurrentDirecton, 0x29);
VALIDATE_OFFSET(CAutoPilot, m_nNextDirection, 0x2A);
VALIDATE_OFFSET(CAutoPilot, m_nPreviousPathDirection, 0x2B);
VALIDATE_OFFSET(CAutoPilot, m_nCurrentPathDirection, 0x2C);
VALIDATE_OFFSET(CAutoPilot, m_nDrivingStyle, 0x2D);
VALIDATE_OFFSET(CAutoPilot, m_nCarMission, 0x2E);
VALIDATE_OFFSET(CAutoPilot, m_nAnimationId, 0x2F);
VALIDATE_OFFSET(CAutoPilot, m_nAnimationTime, 0x30);
VALIDATE_OFFSET(CAutoPilot, m_fMaxTrafficSpeed, 0x34);
VALIDATE_OFFSET(CAutoPilot, m_nCruiseSpeed, 0x38);
VALIDATE_OFFSET(CAutoPilot, pad1, 0x3A);
VALIDATE_OFFSET(CAutoPilot, m_vecDestinationCoors, 0x3C);
VALIDATE_OFFSET(CAutoPilot, m_aPathFindNodesInfo, 0x48);
VALIDATE_OFFSET(CAutoPilot, m_nPathFindNodesCount, 0x68);
VALIDATE_OFFSET(CAutoPilot, pad2, 0x6A);
VALIDATE_OFFSET(CAutoPilot, m_pTargetCar, 0x6C);
VALIDATE_SIZE(CAutoPilot, 0x70);
#pragma pack(pop)

VALIDATE_SIZE(CAutoPilot, 0x70);