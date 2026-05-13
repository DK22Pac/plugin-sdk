/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CVehicle.h"
#include "CTaskUtilityLineUpPedWithCar.h"

class PLUGIN_API CTaskComplexLeaveCar : public CTaskComplex {
protected:
    CTaskComplexLeaveCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    CVehicle* m_pTargetVehicle;
    int m_nTargetDoor;
    int m_nDelayTime;
    bool m_bSensibleLeaveCar;
    bool m_bForceGetOut;
    bool m_bDie;
private:
    char _pad1;
public:

    CTaskUtilityLineUpPedWithCar *m_pTaskUtilityLineUpPedWithCa;
    unsigned char m_nDoorFlagsSet;
    unsigned char m_nNumGettingInSet;
private:
    char _pad2[2];
public:

    int m_nDieAnimID;
    float m_fDieAnimBlendDelta;
    float m_fDieAnimSpeed;

    bool m_bIsInAir;
private:
    char _pad3[3];
public:

    CTaskComplexLeaveCar(CVehicle* pTargetVehicle, int nTargetDoor, int nDelayTime, bool bSensibleLeaveCar, bool bForceGetOut);

};
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_pTargetVehicle, 0xC);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_nTargetDoor, 0x10);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_nDelayTime, 0x14);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_bSensibleLeaveCar, 0x18);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_bForceGetOut, 0x19);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_bDie, 0x1A);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_pTaskUtilityLineUpPedWithCa, 0x1C);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_nDoorFlagsSet, 0x20);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_nNumGettingInSet, 0x21);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_nDieAnimID, 0x24);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_fDieAnimBlendDelta, 0x28);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_fDieAnimSpeed, 0x2C);
VALIDATE_OFFSET(CTaskComplexLeaveCar, m_bIsInAir, 0x30);
VALIDATE_SIZE(CTaskComplexLeaveCar, 0x34);

