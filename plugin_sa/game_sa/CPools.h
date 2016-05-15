#pragma once

#include "plbase/PluginBase.h"
#include "CPool.h"
#include "CCopPed.h"
#include "CVehicle.h"
#include "CBuilding.h"
#include "CCutsceneObject.h"
#include "CDummy.h"
#include "CColModel.h"
#include "CTask.h"
#include "CPedIntelligence.h"
#include "CTexDictionary.h"

class PLUGIN_API CPools
{
public:
    // TODO aligned storage or actual B object in all of those pools
    
	static CPool<CPed, CCopPed>                                 *&ms_pPedPool;
	static CPool<CVehicle, char[0xA18]>                         *&ms_pVehiclePool;
	static CPool<CBuilding>                                     *&ms_pBuildingPool;
	static CPool<CObject, CCutsceneObject>                      *&ms_pObjectPool;
	static CPool<CDummy>                                        *&ms_pDummyPool;
	static CPool<CColModel>                                     *&ms_pColModelPool;
	static CPool<CTask, char[128]>                              *&ms_pTaskPool;
	static CPool<CPedIntelligence>                              *&ms_pPedIntelligencePool;
};