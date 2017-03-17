/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPhysical.h"
#include "CDummyObject.h"

enum eObjectType {
    OBJECT_NA = 0,
    OBJECT_MAP = 1,
    OBJECT_MISSION = 2,
    OBJECT_TEMPORARY = 3,
    OBJECT_CUTSCENE = 4,
    OBJECT_STINGER = 5
};

class CObject : public CPhysical {
public:
    
    //funcs
    CObject(CDummyObject* dummyObject);
    CObject(int arg0, bool arg1);
    CObject();
    bool CanBeDeleted();
    static void DeleteAllMissionObjects();
    static void DeleteAllTempObjects();
    static void DeleteAllTempObjectsInArea(CVector point, float radius);
    void Init();
    void ObjectDamage(float damage);
    void RefModelInfo(int modelIndex);
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    static void* operator new(unsigned int size, int arg1);
};
