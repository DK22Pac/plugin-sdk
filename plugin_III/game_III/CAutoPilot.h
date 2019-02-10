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
    unsigned char m_nCarCtrlFlags;
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
#pragma pack(pop)

VALIDATE_SIZE(CAutoPilot, 0x70);