/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPlaceable.h"
#include "CReference.h"
#include "eEntityType.h"
#include "eEntityStatus.h"
#include "CRect.h"
#include "CColModel.h"
#include "C2dEffect.h"
#include "CColModel.h"
#include "CModelInfo.h"

class PLUGIN_API CEntity : public CPlaceable {
protected:
    CEntity(plugin::dummy_func_t) : CPlaceable(plugin::dummy) {}
public:
    union {
        struct RwObject *m_pRwObject;
        struct RpClump *m_pRwClump;
        struct RpAtomic *m_pRwAtomic;
    };
    /* https://code.google.com/p/mtasa-blue/source/browse/trunk/MTA10/game_sa/CEntitySA.h */
    unsigned int m_bUsesCollision : 1;           // does entity use collision
    unsigned int m_bCollisionProcessed : 1;  // has object been processed by a ProcessEntityCollision function
    unsigned int m_bIsStatic : 1;                // is entity static
    unsigned int m_bHasContacted : 1;            // has entity processed some contact forces
    unsigned int m_bIsStuck : 1;             // is entity stuck
    unsigned int m_bIsInSafePosition : 1;        // is entity in a collision free safe position
    unsigned int m_bWasPostponed : 1;            // was entity control processing postponed
    unsigned int m_bIsVisible : 1;               //is the entity visible
 
    unsigned int m_bIsBIGBuilding : 1;           // Set if this entity is a big building
    unsigned int m_bRenderDamaged : 1;           // use damaged LOD models for objects with applicable damage
    unsigned int m_bStreamingDontDelete : 1; // Dont let the streaming remove this 
    unsigned int m_bRemoveFromWorld : 1;     // remove this entity next time it should be processed
    unsigned int m_bHasHitWall : 1;              // has collided with a building (changes subsequent collisions)
    unsigned int m_bImBeingRendered : 1;     // don't delete me because I'm being rendered
    unsigned int m_bDrawLast :1;             // draw object last
    unsigned int m_bDistanceFade :1;         // Fade entity because it is far away
 
    unsigned int m_bDontCastShadowsOn : 1;       // Dont cast shadows on this object
    unsigned int m_bOffscreen : 1;               // offscreen flag. This can only be trusted when it is set to true
    unsigned int m_bIsStaticWaitingForCollision : 1; // this is used by script created entities - they are static until the collision is loaded below them
    unsigned int m_bDontStream : 1;              // tell the streaming not to stream me
    unsigned int m_bUnderwater : 1;              // this object is underwater change drawing order
    unsigned int m_bHasPreRenderEffects : 1; // Object has a prerender effects attached to it
    unsigned int m_bIsTempBuilding : 1;          // whether or not the building is temporary (i.e. can be created and deleted more than once)
    unsigned int m_bDontUpdateHierarchy : 1; // Don't update the aniamtion hierarchy this frame
 
    unsigned int m_bHasRoadsignText : 1;     // entity is roadsign and has some 2deffect text stuff to be rendered
    unsigned int m_bDisplayedSuperLowLOD : 1;
    unsigned int m_bIsProcObject : 1;            // set object has been generate by procedural object generator
    unsigned int m_bBackfaceCulled : 1;          // has backface culling on
    unsigned int m_bLightObject : 1;         // light object with directional lights
    unsigned int m_bUnimportantStream : 1;       // set that this object is unimportant, if streaming is having problems
    unsigned int m_bTunnel : 1;          // Is this model part of a tunnel
    unsigned int m_bTunnelTransition : 1;        // This model should be rendered from within and outside of the tunnel
    /* */
    unsigned short m_nRandomSeed;
    unsigned short m_nModelIndex;
    CReference *m_pReferences;
    void *m_pStreamingLink;
    short m_nScanCode;
    char m_nIplIndex;
    unsigned char m_nAreaCode;
    union {
        int m_nLodIndex; // -1 - without LOD model
        CEntity *m_pLod;
    };
    unsigned char m_nNumLodChildren;
    unsigned char m_nNumLodChildrenRendered;
    unsigned char m_nType : 3; // see eEntityType
    unsigned char m_nStatus : 5; // see eEntityStatus
    
    // originally virtual functions
    void Add(CRect &rect);
    void Add(); // similar to previous, but with entity bound rect
    void Remove();
    void SetIsStatic(bool isStatic);
    void SetModelIndex(unsigned int index);
    void SetModelIndexNoCreate(unsigned int index);
    void CreateRwObject();
    void DeleteRwObject();
    CRect* GetBoundRect(CRect* rect);
    void ProcessControl();
    void ProcessCollision();
    void ProcessShift();
    bool TestCollision();
    void Teleport(CVector destination, bool resetRotation = false);
    void SpecialEntityPreCollisionStuff(class CEntity *colEntity, bool unk1, unsigned char *unk2, unsigned char *unk3, unsigned char *unk4, unsigned char *unk5);
    void SpecialEntityCalcCollisionSteps(unsigned char *unk1, unsigned char *unk2);
    void PreRender();
    void Render();
    bool SetupLighting();
    void RemoveLighting();
    void FlagToDestroyWhenNextProcessed();
    
    // funcs
    void UpdateRwFrame();
    void UpdateRwMatrix();
    void UpdateRpHAnim();
    bool HasPreRenderEffects();
    bool DoesNotCollideWithFlyers();
    void ModifyMatrixForPoleInWind();
    bool LivesInThisNonOverlapSector(int sectorX, int sectorY);
    void SetupBigBuilding();
    void ModifyMatrixForCrane();
    void PreRenderForGlassWindow();
    void SetRwObjectAlpha(int alpha);
    CVector FindTriggerPointCoors(int triggerIndex);
    C2dEffect* GetRandom2dEffect(int effectType, unsigned char arg1);
    CVector TransformFromObjectSpace(CVector const& offset);
    void TransformFromObjectSpace(CVector& outPosn, CVector const& offset);
    void CreateEffects();
    void DestroyEffects();
    void AttachToRwObject(RwObject* object, bool updateEntityMatrix);
    void DetachFromRwObject();
    CVector GetBoundCentre();
    void GetBoundCentre(CVector& outCentre);
    void RenderEffects();
    // is entity touching entity
    bool GetIsTouching(CEntity* entity);
    // is entity touching sphere
    bool GetIsTouching(CVector const& , float radius);
    bool GetIsOnScreen();
    bool GetIsBoundingBoxOnScreen();
    void ModifyMatrixForTreeInWind();
    void ModifyMatrixForBannerInWind();
    CColModel* GetColModel();
    void CalculateBBProjection(CVector* arg0, CVector* arg1, CVector* arg2, CVector* arg3);
    void UpdateAnim();
    bool IsVisible();
    float GetDistanceFromCentreOfMassToBaseOfModel();
    void CleanUpOldReference(CEntity** entity);
    void ResolveReferences();
    void PruneReferences();
    void RegisterReference(CEntity** entity);
    void ProcessLightsForEntity();
    void RemoveEscalatorsForEntity();
    bool IsEntityOccluded();
};

VALIDATE_SIZE(CEntity, 0x38);

PLUGIN_API bool IsEntityPointerValid(CEntity* entity);
PLUGIN_API struct RpMaterial* MaterialUpdateUVAnimCB(struct RpMaterial* material, void* data);
