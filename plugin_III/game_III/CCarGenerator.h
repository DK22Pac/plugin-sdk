/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eVehicleModel.h"
#include "CVector.h"

class PLUGIN_API CCarGenerator {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCarGenerator)

public:
    eVehicleModel m_nModelId;
    CVector m_vecPos;
    float m_fAngle;
    short m_nPrimaryColor;
    short m_nSecondaryColor;
    unsigned char m_nForceSpawn;
    unsigned char m_nAlarm;
    unsigned char m_nDoorLock;
    unsigned short m_nMinDelay;
    unsigned short m_nMaxDelay;
    unsigned int m_nTimeNextGen;
    unsigned int m_nVehicleHandle;
    short m_nEnabled;
    bool m_bIsBlocking;
    CVector m_vecInf;
    CVector m_vecSup;
    float m_fDistance;

    SUPPORTED_10EN_11EN_STEAM unsigned int CalcNextGen();
    SUPPORTED_10EN_11EN_STEAM bool CheckForBlockage();
    SUPPORTED_10EN_11EN_STEAM bool CheckIfWithinRangeOfAnyPlayers();
    SUPPORTED_10EN_11EN_STEAM void DoInternalProcessing();
    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM void Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay);
    SUPPORTED_10EN_11EN_STEAM void SwitchOff();
    SUPPORTED_10EN_11EN_STEAM void SwitchOn();
};

VALIDATE_SIZE(CCarGenerator, 0x48);

#include "meta/meta.CCarGenerator.h"
