/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "CDummyObject.h"

/* Thanks to maxorator,
   http://gtaforums.com/topic/117195-documenting-gta3vc-memory-addresses/?p=1060452931
*/

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
    CMatrix m_matDummyInitial;
    float m_fAttachForce;
    unsigned char m_nObjectType; // see eObjectType
    struct {
        unsigned char bIsPickupObject : 1; //is a pickup object
        unsigned char bDoCircleEffect : 1; //do the circle blinking effect for pickups
        unsigned char bRenderPickupQuantity : 1; //render pickup quantity as dollars
        unsigned char bRenderPickupAvailability : 1; //render pickup ammunation quantity
        unsigned char bWindowMinorCollisionDamage : 1; //window has received minor collision damage
        unsigned char bHasWindowBeenBrokenByMelee : 1; //window has been broken by melee
        unsigned char bHasObjectExplosionTriggered : 1; //has object explosion been triggered (barrels, water hydrants)
        unsigned char bIsVehicleComponent : 1; //is this a separated vehicle component

        unsigned char bSpecialLighting : 1; //used for weapon models
        unsigned char bNoVehicleCollisionWhenDetached : 1; //used for traffic light objects
    } m_nObjectFlags;
    unsigned char m_nBonusValue;
    unsigned short m_wCostValue;
private:
    char _pad172[2];
public:
    float m_fDamageMultiplier;
    unsigned char m_CollisionDamageType;
    unsigned char m_nSpecialCollisionType;
    bool m_bCameraAvoids;
    unsigned char m_nBounceScore;
private:
    char _pad17C[4];
public:
    int m_dwObjectTimer;
    short m_wRefModelId;
private:
    char _pad186[2];
public:
    CEntity *m_pInitialSurface;
    CPhysical *m_pContactPhysical;
    unsigned char m_nCarColor[2];
private:
    char _pad192[2];
public:

    //funcs

    CObject(CDummyObject* dummyObject);
    CObject(int modelId, bool arg1);
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

    static unsigned char& nNoTempObjects;
};

VALIDATE_SIZE(CObject, 0x194);