/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "eVehicleModel.h"

class CCarGenerator {
public:
    eVehicleModel  m_nModelId;
    CVector        m_vecPos;
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
    int            m_nVehicleHandle;
    short          m_nEnabled;
    bool           m_bIsBlocking;
    char field_2B;
    CVector        m_vecSup;
    CVector        m_vecInf;
    float          m_fDistance;
        
    //funcs
    unsigned int CalcNextGen();
    bool CheckForBlockage();
    bool CheckIfWithinRangeOfAnyPlayers();
    void DoInternalProcessing();
    void Process();
    void Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay);
    void SwitchOff();
    void SwitchOn();
};

VALIDATE_SIZE(CCarGenerator, 0x48);
