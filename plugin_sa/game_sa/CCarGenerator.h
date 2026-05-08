/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"

class PLUGIN_API CCarGenerator {
public:
    short            m_nModelId;
    char             m_nColor1;
    char             m_nColor2;
    CompressedVector m_vecPosn;
    char             m_nAngle;
    char             m_nAlarm;
    char             m_nDoorLock;

    union
    {
        struct
        {
            unsigned char bWaitUntilFarFromPlayer : 1;
            unsigned char bHighPriority : 1;
            unsigned char bActive : 1;
            unsigned char bPlayerHasAlreadyOwnedCar : 1;
            unsigned char bIgnorePopulationLimit : 1;
        };
        unsigned char m_nFlags;
    };
    short            m_nMinDelay;
    short            m_nMaxDelay;
private:
    char _pad12[2];
public:
    int              m_nNextGenTime;
    short            m_nVehicleHandle;
    signed short            m_nGenerateCount; // (0) Don't Spawn , (1 - 32767) Spawn X number of times , (-1) Always Spawn.
    char             m_nIplId;
    bool             m_bIsUsed;
private:
    char _pad1E[2];
public:

    SUPPORTED_10US bool CheckForBlockage(int modelId);
    SUPPORTED_10US bool CheckIfWithinRangeOfAnyPlayers();
    SUPPORTED_10US void DoInternalProcessing();
    SUPPORTED_10US void Process();
    SUPPORTED_10US void Setup(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char bforceSpawn, unsigned char alarm_chances, unsigned char doorLock_chances, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char bOwnedbyplayer);
    SUPPORTED_10US void SwitchOff();
    SUPPORTED_10US void SwitchOn();

    //! unused
    SUPPORTED_10US static unsigned int CalcNextGen();
    //! unused
    SUPPORTED_10US static CCarGenerator *Get(unsigned short index);
};
VALIDATE_OFFSET(CCarGenerator, m_nModelId, 0x0);
VALIDATE_OFFSET(CCarGenerator, m_nColor1, 0x2);
VALIDATE_OFFSET(CCarGenerator, m_nColor2, 0x3);
VALIDATE_OFFSET(CCarGenerator, m_vecPosn, 0x4);
VALIDATE_OFFSET(CCarGenerator, m_nAngle, 0xA);
VALIDATE_OFFSET(CCarGenerator, m_nAlarm, 0xB);
VALIDATE_OFFSET(CCarGenerator, m_nDoorLock, 0xC);
VALIDATE_OFFSET(CCarGenerator, m_nFlags, 0xD);
VALIDATE_OFFSET(CCarGenerator, m_nMinDelay, 0xE);
VALIDATE_OFFSET(CCarGenerator, m_nMaxDelay, 0x10);
VALIDATE_OFFSET(CCarGenerator, m_nNextGenTime, 0x14);
VALIDATE_OFFSET(CCarGenerator, m_nVehicleHandle, 0x18);
VALIDATE_OFFSET(CCarGenerator, m_nGenerateCount, 0x1A);
VALIDATE_OFFSET(CCarGenerator, m_nIplId, 0x1C);
VALIDATE_OFFSET(CCarGenerator, m_bIsUsed, 0x1D);
VALIDATE_SIZE(CCarGenerator, 0x20);

#include "meta/meta.CCarGenerator.h"