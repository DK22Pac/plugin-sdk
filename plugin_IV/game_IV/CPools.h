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
    static CPool* ms_pObjectsPool;
    static CPool* ms_pTaskPool;
    static CPool* ms_pPedPool;
    static CPool* ms_pCamPool;
    static CPool* ms_pVehiclePool;

};