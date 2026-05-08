/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

#pragma pack(push, 1)
class PLUGIN_API CFileCarGenerator {
public:
    CVector m_vecPosn;
    float m_fAngle;
    unsigned int m_nModelId;
    unsigned short m_nColor1;
private:
    unsigned char _pad16[2];
public:
    unsigned short m_nColor2;
private:
    unsigned char _pad1A[2];
public:
    unsigned char m_nFlags;
private:
    unsigned char _pad1D[3];
public:
    unsigned char m_nAlarm;
private:
    unsigned char _pad21[3];
public:
    unsigned char m_nDoorLock;
private:
    unsigned char _pad25[3];
public:
    unsigned short m_nMinDelay;
private:
    unsigned char _pad2A[2];
public:
    unsigned short m_nMaxDelay;
};
VALIDATE_OFFSET(CFileCarGenerator, m_vecPosn, 0x0);
VALIDATE_OFFSET(CFileCarGenerator, m_fAngle, 0xC);
VALIDATE_OFFSET(CFileCarGenerator, m_nModelId, 0x10);
VALIDATE_OFFSET(CFileCarGenerator, m_nColor1, 0x14);
VALIDATE_OFFSET(CFileCarGenerator, m_nColor2, 0x18);
VALIDATE_OFFSET(CFileCarGenerator, m_nFlags, 0x1C);
VALIDATE_OFFSET(CFileCarGenerator, m_nAlarm, 0x20);
VALIDATE_OFFSET(CFileCarGenerator, m_nDoorLock, 0x24);
VALIDATE_OFFSET(CFileCarGenerator, m_nMinDelay, 0x28);
VALIDATE_OFFSET(CFileCarGenerator, m_nMaxDelay, 0x2C);
VALIDATE_SIZE(CFileCarGenerator, 0x2E);
#pragma pack(pop)

VALIDATE_SIZE(CFileCarGenerator, 0x2E);
