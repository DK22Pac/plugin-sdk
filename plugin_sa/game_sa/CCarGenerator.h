/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CompressedVector.h"

class CCarGenerator {
    short            m_nModelId;
    char             m_nColor1;
    char             m_nColor2;
    CompressedVector m_vecPosn;
    char             m_nAngle;
    char             m_nAlarm;
    char             m_nDoorLock;
    struct {
        unsigned char bCanSpawn : 1;
        unsigned char b02 : 1;
        unsigned char b03 : 1;
        unsigned char b04 : 1;
        unsigned char b05 : 1;
        unsigned char b06 : 1;
        unsigned char b07 : 1;
        unsigned char b08 : 1;
    } m_nFlags;
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
    void Setup(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char arg13);
    bool CheckIfWithinRangeOfAnyPlayers();
    void SwitchOn();
    bool CheckForBlockage(int modelId);
    void DoInternalProcessing();
    void Process();
};

VALIDATE_SIZE(CCarGenerator, 0x20);