/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVehicle.h"
#include "CTaskUtilityLineUpPedWithCar.h"

class PLUGIN_API CTaskSimpleCarSetPedInAsPassenger : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsPassenger(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
private:
    char gap9[3];
public:
    CAnimBlendAssociation* m_pAnim;
    CVehicle* m_pTargetVehicle;
    int m_iTargetDoor;
    CTaskUtilityLineUpPedWithCar* m_pUtility;
    bool m_bWarpingInToCar;
    unsigned char m_nDoorFlagsToClear;
    unsigned char m_nNumGettingInToClear;
private:
    char _pad2[1];
public:

    CTaskSimpleCarSetPedInAsPassenger(CVehicle *pTargetVehicle, int nTargetDoor, CTaskUtilityLineUpPedWithCar *pUtility);

};
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_bIsFinished, 0x8);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_pAnim, 0xC);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_pTargetVehicle, 0x10);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_iTargetDoor, 0x14);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_pUtility, 0x18);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_bWarpingInToCar, 0x1C);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_nDoorFlagsToClear, 0x1D);
VALIDATE_OFFSET(CTaskSimpleCarSetPedInAsPassenger, m_nNumGettingInToClear, 0x1E);
VALIDATE_SIZE(CTaskSimpleCarSetPedInAsPassenger, 0x20);

