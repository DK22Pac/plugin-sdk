/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CVehicle.h"
#include "CTaskUtilityLineUpPedWithCar.h"

#pragma pack(push,4)
class PLUGIN_API CTaskSimpleCarSetPedInAsDriver : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsDriver(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskSimpleCarSetPedInAsDriver(CVehicle *pVehicle, CTaskUtilityLineUpPedWithCar *arg2 );   

      char byte8;
      char gap9[3];
      int dwordC;
      CVehicle *m_pVehicle;
      int m_pUtility;
      char field_18;
      char byte19;
      char byte1A;

};
#pragma pack(pop)

VALIDATE_SIZE(CTaskSimpleCarSetPedInAsDriver, 0x1C);