/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPool.h"
#include "CCutsceneObject.h"
#include "CCopPed.h"
#include "CHeli.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CObject.h"

#ifdef GetObject
#undef GetObject
#endif

typedef CPool<CPed, CCopPed> CPedPool;
typedef CPool<CVehicle, CHeli> CVehiclePool;
typedef CPool<CObject, CCutsceneObject> CObjectPool;

class CPools {
public:
    static CPedPool*& ms_pPedPool;
    static CVehiclePool*& ms_pVehiclePool;
    static CObjectPool*& ms_pObjectPool;

public:
    static CPed* GetPed(int32_t handle);
    static CVehicle* GetVehicle(int32_t handle);
    static CObject* GetObject(int32_t handle);
    static int32_t GetPedRef(CPed* ped);
    static int32_t GetVehicleRef(CVehicle* vehicle);
    static int32_t GetObjectRef(CObject* object);
};
