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
	CTaskSimpleCarSetPedInAsPassenger(CVehicle *pVehicle,int doorframeID, CTaskUtilityLineUpPedWithCar *arg3); 
   
      char byte8;
private:
      char gap9[3];
public:
      int dwordC;
      CVehicle *m_pVehicle;
      int m_nDoorFrameId;
      CTaskUtilityLineUpPedWithCar* m_pUtility;
      char m_bDontUseUtility;
      char byte1D;
      char byte1E;
};

VALIDATE_SIZE(CTaskSimpleCarSetPedInAsPassenger, 0x20);
