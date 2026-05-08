/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CVehicle;

class CCarGenerator {
public:
    int            m_nModelId;
    CVector        m_vPos;
    float          m_fAngle;
    short          m_nPrimaryColor;
    short          m_nSecondaryColor;
    unsigned char  m_nForceSpawn;
    unsigned char  m_nAlarm;
    unsigned char  m_nDoorLock;
    char field_1B;
    unsigned short m_nMinDelay;
    unsigned short m_nMaxDelay;
    unsigned int   m_nTimeNextGen;
    unsigned int   m_nVehicleHandle;
    short          m_nEnabled;
    char field_2A;
    char field_2B;
    
    //funcs
    bool CheckForBlockage(int modelId);
    bool CheckIfWithinRangeOfAnyPlayers();
    void DoInternalProcessing();
    void Process();
    unsigned int Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay);
    void SwitchOff();
    void SwitchOn();
};
VALIDATE_OFFSET(CCarGenerator, m_nModelId, 0x0);
VALIDATE_OFFSET(CCarGenerator, m_vPos, 0x4);
VALIDATE_OFFSET(CCarGenerator, m_fAngle, 0x10);
VALIDATE_OFFSET(CCarGenerator, m_nPrimaryColor, 0x14);
VALIDATE_OFFSET(CCarGenerator, m_nSecondaryColor, 0x16);
VALIDATE_OFFSET(CCarGenerator, m_nForceSpawn, 0x18);
VALIDATE_OFFSET(CCarGenerator, m_nAlarm, 0x19);
VALIDATE_OFFSET(CCarGenerator, m_nDoorLock, 0x1A);
VALIDATE_OFFSET(CCarGenerator, field_1B, 0x1B);
VALIDATE_OFFSET(CCarGenerator, m_nMinDelay, 0x1C);
VALIDATE_OFFSET(CCarGenerator, m_nMaxDelay, 0x1E);
VALIDATE_OFFSET(CCarGenerator, m_nTimeNextGen, 0x20);
VALIDATE_OFFSET(CCarGenerator, m_nVehicleHandle, 0x24);
VALIDATE_OFFSET(CCarGenerator, m_nEnabled, 0x28);
VALIDATE_OFFSET(CCarGenerator, field_2A, 0x2A);
VALIDATE_OFFSET(CCarGenerator, field_2B, 0x2B);
VALIDATE_SIZE(CCarGenerator, 0x2C);