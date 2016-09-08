/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPool.h"
#include "CCopPed.h"
#include "CHeli.h"
#include "CBuilding.h"
#include "CCutsceneObject.h"
#include "CDummy.h"
#include "CColModel.h"
#include "CTask.h"
#include "CPedIntelligence.h"
#include "CTexDictionary.h"

class CPools {
public:
	static CPool<CPed, CCopPed>                                 *&ms_pPedPool;
	static CPool<CVehicle, CHeli>                               *&ms_pVehiclePool;
	static CPool<CBuilding>                                     *&ms_pBuildingPool;
	static CPool<CObject, CCutsceneObject>                      *&ms_pObjectPool;
	static CPool<CDummy>                                        *&ms_pDummyPool;
	static CPool<CColModel>                                     *&ms_pColModelPool;
	static CPool<CTask, char[128]>                              *&ms_pTaskPool;
	static CPool<CPedIntelligence>                              *&ms_pPedIntelligencePool;
};