#pragma once

#include "plbase/PluginBase_VC.h"
#include "CPool.h"
#include "CTreadable.h"

class PLUGIN_API CPools
{
public:
    static CPool<CBuilding>  *&ms_pBuildingPool;
    static CPool<CTreadable> *&ms_pTreadablePool;
};