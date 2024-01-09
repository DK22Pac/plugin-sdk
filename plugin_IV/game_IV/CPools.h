/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPool.h"

class CObject;
class CTask;
class CPed;
class CCam;
class CAutomobile;
class CVehicle;

class CPools {
public:
    static CPool<CObject>*& ms_pObjectsPool;
    static CPool<CTask>*& ms_pTaskPool;
    static CPool<CPed>*& ms_pPedPool;
    static CPool<CCam>*& ms_pCamPool;
    static CPool<CVehicle>*& ms_pVehiclePool;

public:
    static int32_t GetPedRef(CPed* ped);
    static int32_t GetVehicleRef(CVehicle* veh);
    static int32_t GetObjectRef(CObject* obj);
};
