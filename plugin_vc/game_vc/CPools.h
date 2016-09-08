/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
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