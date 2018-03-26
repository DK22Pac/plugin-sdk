/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"

enum CAR_GENERATOR_FLAG : char
{
  bWaitUntilFarFromPlayer = 0x1,
  bHighPriority = 0x2,
  bActive = 0x4,
  bPlayerHasAlreadyOwnedCar = 0x8,
  bIgnorePopulationLimit = 0x10,
};

class PLUGIN_API CCarGenerator {
    short            m_nModelId;
    char             m_nColor1;
    char             m_nColor2;
    CompressedVector m_vecPosn;
    char             m_nAngle;
    char             m_nAlarm;
    char             m_nDoorLock;
    CAR_GENERATOR_FLAG m_nFlags;
    short            m_nMinDelay;
    short            m_nMaxDelay;
private:
    char _pad12[2];
public:
    int              m_nNextGenTime;
    short            m_nVehicleHandle;
    short            m_nState;
    char             m_nIplId;
    bool             m_bIsUsed;
private:
    char _pad1E[2];
public:

    void SwitchOff();
    static int CalcNextGen();
    void Setup(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char Ownedbyplayer);
    bool CheckIfWithinRangeOfAnyPlayers();
    void SwitchOn();
    bool CheckForBlockage(int modelId);
    void DoInternalProcessing();
    void Process();
};

VALIDATE_SIZE(CCarGenerator, 0x20);
