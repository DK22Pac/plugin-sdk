/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CPool.h"
#include "CTreadable.h"
#include "CDummy.h"
#include "CEntryInfoList.h"
#include "CPtrList.h"

class PLUGIN_API CPools
{
public:
    static CPool<CBuilding>      *&ms_pBuildingPool;
    static CPool<CTreadable>     *&ms_pTreadablePool;
    static CPool<CPtrNode>       *&ms_pPtrNodePool;
    static CPool<CEntryInfoNode> *&ms_pEntryInfoNodePool;
};