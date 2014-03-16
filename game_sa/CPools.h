#pragma once

#include "plugin\plugin.h"
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

class PLUGIN_API CPools
{
public:
	static CPool<CPed, CCopPed> *&ms_pPedPool;
	static CPool<CVehicle> *&ms_pVehiclePool;
	static CPool<CBuilding> *&ms_pBuildingPool;
	static CPool<CObject> *&ms_pObjectPool;
	static CPool<CDummy> *&ms_pDummyPool;
	static CPool<CColModel> *&ms_pColModelPool;
	static CPool<CTask> *&ms_pTaskPool;
	static CPool<CPedIntelligence> *&ms_pPedIntelligencePool;
};