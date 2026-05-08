/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPed.h"
#include "eCopType.h"


class CHeli;
class CStinger;

class CCopPed : public CPed {
public:
    int field_5F4;
    float field_5F8;
    char field_5FC;
    char field_5FD;
    char field_5FE;
    char field_5FF;
    char field_600;
    char field_601;
    char field_602;
    char field_603; // padding?
    float fAbseilPos; //current abseil position (on the rope)
    unsigned int m_copType; //type of the cop, 0-4 (3 - descending from rope)
    bool bThrowsSpikeTrap; //if this is set, the cop will throw a spike trap as soon as it can
private:
    char _pad1[3]; // 1549-1552
public:
    CHeli* pHeliAbseil; //pointer to the heli this cop is abseiling from
    unsigned int dwRopeIdentifier; // swat rope (CRopes)
    int field_618;
    int field_61C;
    CStinger *m_pStinger; // CStinger object
    int field_624;
    char field_628;
private:
    char _pad4[3];
public:

    void ArrestPlayer();
    CCopPed(eCopType copType, int arg1);
    void ClearPursuit();
    void CopAI();
    void ProcessHeliSwat();
    void ProcessStingerCop();
    int ScanForCrimes();
    void SetArrestPlayer(CPed* ped);
    void SetPursuit(bool arg0);
};
VALIDATE_OFFSET(CCopPed, field_5F4, 0x5F4);
VALIDATE_OFFSET(CCopPed, field_5F8, 0x5F8);
VALIDATE_OFFSET(CCopPed, field_5FC, 0x5FC);
VALIDATE_OFFSET(CCopPed, field_5FD, 0x5FD);
VALIDATE_OFFSET(CCopPed, field_5FE, 0x5FE);
VALIDATE_OFFSET(CCopPed, field_5FF, 0x5FF);
VALIDATE_OFFSET(CCopPed, field_600, 0x600);
VALIDATE_OFFSET(CCopPed, field_601, 0x601);
VALIDATE_OFFSET(CCopPed, field_602, 0x602);
VALIDATE_OFFSET(CCopPed, field_603, 0x603);
VALIDATE_OFFSET(CCopPed, fAbseilPos, 0x604);
VALIDATE_OFFSET(CCopPed, m_copType, 0x608);
VALIDATE_OFFSET(CCopPed, bThrowsSpikeTrap, 0x60C);
VALIDATE_OFFSET(CCopPed, pHeliAbseil, 0x610);
VALIDATE_OFFSET(CCopPed, dwRopeIdentifier, 0x614);
VALIDATE_OFFSET(CCopPed, field_618, 0x618);
VALIDATE_OFFSET(CCopPed, field_61C, 0x61C);
VALIDATE_OFFSET(CCopPed, m_pStinger, 0x620);
VALIDATE_OFFSET(CCopPed, field_624, 0x624);
VALIDATE_OFFSET(CCopPed, field_628, 0x628);
VALIDATE_SIZE(CCopPed, 0x62C);