#pragma once

#include "plbase/PluginBase.h"
#include "CPhysical.h"
#include "CObjectInfo.h"

enum eObjectType {
    OBJECT_MISSION = 2,
    OBJECT_TEMPORARY = 3,
    OBJECT_MISSION2 = 6
};

class CDummyObject;

#pragma pack(push, 1)
class PLUGIN_API CObject : public CPhysical {
public:
	void               *m_pControlCodeList;
	unsigned __int8     m_nObjectType; // see enum eObjectType
	unsigned __int8     m_nBonusValue;
	unsigned __int16    m_wCostValue;
	unsigned __int32 bObjectFlag0 : 1;
	unsigned __int32 bObjectFlag1 : 1;
	unsigned __int32    m_bPickupPropertyForSale : 1;
	unsigned __int32    m_bPickupInShopOutOfStock : 1;
	unsigned __int32    m_bGlassBroken : 1;
	unsigned __int32 bObjectFlag5 : 1;
	unsigned __int32    m_bIsExploded : 1;
	unsigned __int32 bObjectFlag7 : 1;
	unsigned __int32    m_bIsLampPost : 1;
	unsigned __int32    m_bIsTargatable : 1;
	unsigned __int32    m_bIsBroken : 1;
	unsigned __int32    m_bTrainCrossEnabled : 1;
	unsigned __int32    m_bIsPhotographed : 1;
	unsigned __int32    m_bIsLiftable : 1;
	unsigned __int32    m_bIsDoorMoving : 1;
	unsigned __int32    m_bbIsDoorOpen : 1;
	unsigned __int32    m_bHasNoModel : 1;
	unsigned __int32    m_bIsScaled : 1;
	unsigned __int32    m_bCanBeAttachedToMagnet : 1;
	unsigned __int32 bObjectFlag19 : 1;
	unsigned __int32 bObjectFlag20 : 1;
	unsigned __int32 bObjectFlag21 : 1;
	unsigned __int32    m_bFadingIn : 1;
	unsigned __int32    m_bAffectedByColBrightness : 1;
	unsigned __int32 bObjectFlag24 : 1;
	unsigned __int32    m_bDoNotRender : 1;
	unsigned __int32    m_bFadingIn2 : 1;
	unsigned __int32 bObjectFlag27 : 1;
	unsigned __int32 bObjectFlag28 : 1;
	unsigned __int32 bObjectFlag29 : 1;
	unsigned __int32 bObjectFlag30 : 1;
	unsigned __int32 bObjectFlag31 : 1;
	unsigned __int8     m_nColDamageEffect;
	unsigned __int8     m_nStoredColDamageEffect;
	__int8           field_146;
	__int8              m_nGarageDoorGarageIndex;
	unsigned __int8     m_nLastWeaponDamage;
	unsigned __int8     m_nColBrightness;
	__int16             m_nRefModelIndex;
	unsigned __int8     m_nCarColor[4]; // this is used for detached car parts
	__int32             m_dwRemovalTime; // time when this object must be deleted
	float               m_fHealth;
	float               m_fDoorStartAngle; // this is used for door objects
	float               m_fScale;
	CObjectInfo        *m_pObjectInfo;
	void               *m_pFire; // CFire *
	__int16             m_wScriptTriggerIndex;
	__int16             m_wRemapTxd; // this is used for detached car parts
	RwTexture          *m_pRemapTexture; // this is used for detached car parts
	CDummyObject       *m_pDummyObject; // used for dynamic objects like garage doors, train crossings etc.
	__int32             m_dwBurnTime; // time when particles must be stopped
	float               m_fBurnDamage;

    // class functions

    void ProcessGarageDoorBehaviour();
    bool CanBeDeleted();
    void SetRelatedDummy(CDummyObject* relatedDummy);
    bool TryToExplode();
    void SetObjectTargettable(unsigned char targetable);
    bool CanBeTargetted();
    void RefModelInfo(int modelIndex);
    void SetRemapTexture(RwTexture* remapTexture, short txdIndex);
    float GetRopeHeight();
    void SetRopeHeight(float height);
    CEntity* GetObjectCarriedWithRope();
    void ReleaseObjectCarriedWithRope();
    void AddToControlCodeList();
    void RemoveFromControlCodeList();
    void ResetDoorAngle();
    void LockDoor();
    void Init();
    void DoBurnEffect();
    unsigned char GetLightingFromCollisionBelow();
    void ProcessSamSiteBehaviour();
    void ProcessTrainCrossingBehaviour();
    void ObjectDamage(float damage, CVector* fxOrigin, CVector* fxDirection, CEntity* damager, eWeaponType weaponType);
    void Explode();
    void ObjectFireDamage(float damage, CEntity* damager);
    
    void GrabObjectToCarryWithRope(CPhysical* attachTo);
    bool CanBeUsedToTakeCoverBehind();
    class CObject* Create(int modelIndex);
    class CObject* Create(CDummyObject* dummyObject);
    void ProcessControlLogic();

    // static functions

    static void SetMatrixForTrainCrossing(CMatrix* matrix, float arg1);
    static void TryToFreeUpTempObjects(int numObjects);
    static void DeleteAllTempObjects();
    static void DeleteAllMissionObjects();
    static void DeleteAllTempObjectsInArea(CVector point, float radius);
};
#pragma pack(pop)

VALIDATE_SIZE(CObject, 0x17C);

bool IsObjectPointerValid_NotInWorld(CObject* object);
bool IsObjectPointerValid(CObject* object);