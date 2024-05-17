/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "RenderWare.h"
#include "CReference.h"
#include "CVector.h"
#include "CRect.h"
#include "eEntityStatus.h"

enum PLUGIN_API eEntityType {
    ENTITY_TYPE_NOTHING = 0,
    ENTITY_TYPE_BUILDING = 1,
    ENTITY_TYPE_VEHICLE = 2,
    ENTITY_TYPE_PED = 3,
    ENTITY_TYPE_OBJECT = 4,
    ENTITY_TYPE_DUMMY = 5,
    ENTITY_TYPE_NOTINPOOLS = 6,
    ENTITY_TYPE_7 = 7
};

class PLUGIN_API CEntity : public CPlaceable {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CEntity)

public:
    union {
        RwObject *m_pRwObject;
        RpAtomic *m_pRwAtomic;
        RpClump  *m_pRwClump;
    };

    unsigned char m_nType : 3;
    unsigned char m_nStatus : 5;
	
    struct {
        unsigned char bUsesCollision : 1; //!< does entity use collision
        unsigned char bCollisionProcessed : 1; //!< has object been processed by a ProcessEntityCollision function
        unsigned char bIsStatic : 1; //!< is entity static
        unsigned char bHasContacted : 1; //!< has entity processed some contact forces
        unsigned char bPedPhysics : 1;
        unsigned char bIsStuck : 1; //!< is entity stuck
        unsigned char bIsInSafePosition : 1; //!< is entity in a collision free safe position
        unsigned char bUseCollisionRecords : 1;

        unsigned char bWasPostponed : 1; //!< was entity control processing postponed
        unsigned char bExplosionProof : 1;
        unsigned char bIsVisible : 1; //!< is the entity visible
        unsigned char bHasCollided : 1;
        unsigned char bRenderScorched : 1;
        unsigned char bHasBlip : 1;
        unsigned char bIsBIGBuilding : 1; //!< set if this entity is a big building
        unsigned char bRenderDamaged : 1; //!< use damaged LOD models for objects with applicable damage

        unsigned char bBulletProof : 1;
        unsigned char bFireProof : 1;
        unsigned char bCollisionProof : 1;
        unsigned char bMeleeProof : 1;
        unsigned char bOnlyDamagedByPlayer : 1;
        unsigned char bStreamingDontDelete : 1; //!< dont let the streaming remove this
        unsigned char bZoneCulled : 1;
        unsigned char bZoneCulled2 : 1; //!< only treadables+10m

        unsigned char bRemoveFromWorld : 1; //!< remove this entity next time it should be processed
        unsigned char bHasHitWall : 1; //!< has collided with a building (changes subsequent collisions)
        unsigned char bImBeingRendered : 1; //!< don't delete me because I'm being rendered
        unsigned char bTouchingWater : 1; //!< used by cBuoyancy::ProcessBuoyancy
        unsigned char bIsSubway : 1; //!< set when subway, but maybe different meaning?
        unsigned char bDrawLast : 1; //!< draw object last
        unsigned char bNoBrightHeadLights : 1;
        unsigned char bDoNotRender : 1;

        unsigned char bDistanceFade : 1; //!< fade entity because it is far away
        unsigned char bFlag34 : 1;
    } m_nFlags;
private:
    char _pad56[2];
public:
    unsigned short m_nScanCode;
    unsigned short m_nRandomSeed;
    short m_nModelIndex;
    short m_nLevel; //!< -1 - ignore level transitions
    CReference *m_pFirstRef;

    // virtual function #0 (destructor)

    SUPPORTED_10EN_11EN_STEAM void Add();
    SUPPORTED_10EN_11EN_STEAM void Remove();
    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);
    SUPPORTED_10EN_11EN_STEAM void SetModelIndexNoCreate(unsigned int modelIndex);
    SUPPORTED_10EN_11EN_STEAM void CreateRwObject();
    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();
    SUPPORTED_10EN_11EN_STEAM CRect *GetBoundRect();
    SUPPORTED_10EN_11EN_STEAM void ProcessControl();
    SUPPORTED_10EN_11EN_STEAM void ProcessCollision();
    SUPPORTED_10EN_11EN_STEAM void ProcessShift();
    SUPPORTED_10EN_11EN_STEAM void Teleport(CVector point);
    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM bool SetupLighting();
    SUPPORTED_10EN_11EN_STEAM void RemoveLighting(bool resetWorldColors);
    SUPPORTED_10EN_11EN_STEAM void FlagToDestroyWhenNextProcessed();

    SUPPORTED_10EN_11EN_STEAM void AddSteamsFromGround(CVector *unused);
    SUPPORTED_10EN_11EN_STEAM void AttachToRwObject(RwObject *rwObject);
    SUPPORTED_10EN_11EN_STEAM void DetachFromRwObject();
    SUPPORTED_10EN_11EN_STEAM CVector *GetBoundCentre();
    SUPPORTED_10EN_11EN_STEAM void GetBoundCentre(CVector &out);
    SUPPORTED_10EN_11EN_STEAM float GetBoundRadius();
    SUPPORTED_10EN_11EN_STEAM float GetDistanceFromCentreOfMassToBaseOfModel();
    SUPPORTED_10EN_11EN_STEAM bool GetIsOnScreen();
    SUPPORTED_10EN_11EN_STEAM bool GetIsOnScreenComplex();
    SUPPORTED_10EN_11EN_STEAM bool GetIsTouching(CVector const &posn, float radius);
    SUPPORTED_10EN_11EN_STEAM bool IsVisible();
    SUPPORTED_10EN_11EN_STEAM void ModifyMatrixForBannerInWind();
    SUPPORTED_10EN_11EN_STEAM void ModifyMatrixForTreeInWind();
    SUPPORTED_10EN_11EN_STEAM void PreRenderForGlassWindow();
    SUPPORTED_10EN_11EN_STEAM void ProcessLightsForEntity();
    SUPPORTED_10EN_11EN_STEAM void PruneReferences();
    SUPPORTED_10EN_11EN_STEAM void RegisterReference(CEntity **entity);
    SUPPORTED_10EN_11EN_STEAM void ResolveReferences();
    SUPPORTED_10EN_11EN_STEAM void SetState(unsigned char state);
    SUPPORTED_10EN_11EN_STEAM void SetupBigBuilding();
    SUPPORTED_10EN_11EN_STEAM void UpdateRwFrame();
	
	inline CVector TransformFromObjectSpace(CVector const& offset) {
        return this->m_matrix * offset;
    }
};

VTABLE_DESC(CEntity, 0x5F11A8, 17);
VALIDATE_SIZE(CEntity, 0x64);

#include "meta/meta.CEntity.h"
