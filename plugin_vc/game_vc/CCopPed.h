/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CPed.h"

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
    float field_604; // related to heli swat
    unsigned int m_nCopType;
    char field_60C;
private:
    char _pad60D[3];
public:
    int field_610;
    unsigned int m_nRopeId; // swat rope (CRopes)
    int field_618;
    int field_61C;
    void *m_pStinger; // CStinger object
    int field_624;
    char field_628;
private:
    char _pad629[3];
public:

};

VALIDATE_SIZE(CCopPed, 0x62C);