#pragma once

#include <plugin/plugin.h>
#include "CPool.h"
#include "CCopPed.h"
#include "CVehicle.h"
#include "CBuilding.h"
#include "CObject.h"
#include "CDummy.h"
#include "CColModel.h"
#include "CTask.h"
#include "CPedIntelligence.h"
#include "CTexDictionary.h"

#include <type_traits> 

class PLUGIN_API CPools
{
public:
    // TODO aligned storage or actual B object in all of those pools
    
	static CPool<CPed, CCopPed>                                 *&ms_pPedPool;
	static CPool<CVehicle, std::aligned_storage<0xA18, 1> >     *&ms_pVehiclePool;
	static CPool<CBuilding>                                     *&ms_pBuildingPool;
	static CPool<CObject>                                       *&ms_pObjectPool;
	static CPool<CDummy>                                        *&ms_pDummyPool;
	static CPool<CColModel>                                     *&ms_pColModelPool;
	static CPool<CTask>                                         *&ms_pTaskPool;
	static CPool<CPedIntelligence>                              *&ms_pPedIntelligencePool;
};