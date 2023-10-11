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

class CPools {
public:
    static CPool<CObject, CObject>*& ms_pObjectsPool;
    static CPool<CTask, char[128]>*& ms_pTaskPool;

};