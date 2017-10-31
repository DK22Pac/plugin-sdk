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
class PLUGIN_API CTaskSimpleCarSetPedInAsPassenger : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsPassenger(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskSimpleCarSetPedInAsPassenger(CVehicle *pVehicle,int doorframeID, CTaskUtilityLineUpPedWithCar *arg3); 
   
      char byte8;
      char gap9[3];
      int dwordC;
      CVehicle *m_pVehicle;
      int m_nDoorFrameId;
      CTaskUtilityLineUpPedWithCar* m_pUtility;
      char m_bDontUseUtility;
      char byte1D;
      char byte1E;

};
#pragma pack(pop)

VALIDATE_SIZE(CTaskSimpleCarSetPedInAsPassenger, 0x20);
