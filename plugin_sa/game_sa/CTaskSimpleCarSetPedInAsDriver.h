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

class PLUGIN_API CTaskSimpleCarSetPedInAsDriver : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsDriver(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskSimpleCarSetPedInAsDriver(CVehicle *pVehicle, CTaskUtilityLineUpPedWithCar *arg2 );   

      char byte8;
private:
      char gap9[3];
public:
      int dwordC;
      CVehicle *m_pVehicle;
      int m_pUtility;
      char field_18;
      char byte19;
      char byte1A;

};

VALIDATE_SIZE(CTaskSimpleCarSetPedInAsDriver, 0x1C);