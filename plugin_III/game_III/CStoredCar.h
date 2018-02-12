/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CAutomobile.h"

#pragma pack(push, 4)
class CStoredCar {
public:
    unsigned int m_nModelIndex;
    CVector m_vPos;
    CVector m_vRotation;
    int m_nStoredCarFlags;
    unsigned char m_nPrimaryColor;
    unsigned char m_nSecondaryColor;
    char m_nRadioStation;
    char m_anCompsToUse[2];
    unsigned char m_nAutomobileFlags;
private:
    char _pad26[2];
public:

    //funcs
    CAutomobile* RestoreCar();
    void StoreCar(CVehicle* car);
    static void SetExtras(char first, char second);
};
#pragma pack(pop)

VALIDATE_SIZE(CStoredCar, 0x28);