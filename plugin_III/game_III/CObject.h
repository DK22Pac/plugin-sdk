/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "CMatrix.h"
#include "CVector.h"
class CDummyObject;

enum PLUGIN_API eObjectCreatedBy {
    OBJECT_NA = 0,
    OBJECT_MAP = 1,
    OBJECT_MISSION = 2,
    OBJECT_TEMPORARY = 3,
    OBJECT_CUTSCENE = 4,
    OBJECT_STINGER = 5
};

class PLUGIN_API CObject : public CPhysical {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CObject)

public:
    CMatrix m_mObjectCoords;
    float m_fUprootLimit;
    char m_nObjectCreatedBy; //!< see eObjectCreatedBy
    struct {
        unsigned char bIsPickup : 1;
        unsigned char bPickupObjWithMessage : 1;
        unsigned char bOutOfStock : 1;
        unsigned char bGlassCracked : 1;
        unsigned char bGlassBroken : 1;
        unsigned char bHasBeenDamaged : 1;
        unsigned char bUseVehicleColours : 1;
    } m_nObjectFlags;
    char m_nBonusValue;
    float m_fCollisionDamageMultiplier;
    unsigned char m_nCollisionDamageEffect;
    unsigned char m_nSpecialCollisionResponseCases;
    bool m_bCameraToAvoidThisObject;
    unsigned int field_180;
    unsigned int m_nEndOfLifeTime;
    short m_nRefModelIndex;
    CEntity *m_pCurSurface;
    CEntity *m_pCollidingEntity;
    char m_nColorId[2];

    SUPPORTED_10EN_11EN_STEAM static short &nBodyCastHealth;
    SUPPORTED_10EN_11EN_STEAM static short &nNoTempObjects;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void Teleport(CVector pos);

    // virtual function #12 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM bool SetupLighting();
    SUPPORTED_10EN_11EN_STEAM void RemoveLighting(bool resetWorldColors);

    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)


    SUPPORTED_10EN_11EN_STEAM bool CanBeDeleted();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void ObjectDamage(float amount);
    SUPPORTED_10EN_11EN_STEAM void RefModelInfo(int modelIndex);

    SUPPORTED_10EN_11EN_STEAM static void DeleteAllMissionObjects();
    SUPPORTED_10EN_11EN_STEAM static void DeleteAllTempObjects();
    SUPPORTED_10EN_11EN_STEAM static void DeleteAllTempObjectsInArea(CVector point, float radius);
};

VTABLE_DESC(CObject, 0x5F7DD4, 18);
VALIDATE_SIZE(CObject, 0x198);

#include "meta/meta.CObject.h"
