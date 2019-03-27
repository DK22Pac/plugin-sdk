/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CRect.h"
#include "RenderWare.h"

class CReference;

class CEntity : public CPlaceable {
public:
    union {
        RwObject *m_pRwObject;
        RpAtomic *m_pRwAtomic;
        RpClump  *m_pRwClump;
    };

    unsigned char m_nType : 3;
    unsigned char m_nState : 5;

    struct {
        unsigned char bUsesCollision : 1;
        unsigned char bCollisionProcessed : 1;
        unsigned char bIsStatic : 1;
        unsigned char bHasContacted : 1;
        unsigned char bPedPhysics : 1;
        unsigned char bIsStuck : 1;
        unsigned char bIsInSafePosition : 1;
        unsigned char bUseCollisionRecords : 1;

        unsigned char bWasPostponed : 1;
        unsigned char bExplosionProof : 1;
        unsigned char bIsVisible : 1;
        unsigned char bHasCollided : 1;
        unsigned char bRenderScorched : 1;
        unsigned char bFlashing : 1;
        unsigned char bIsBIGBuilding : 1;
        unsigned char bRenderDamaged : 1;

        unsigned char bBulletProof : 1;
        unsigned char bFireProof : 1;
        unsigned char bCollisionProof : 1;
        unsigned char bMeleeProof : 1;
        unsigned char bOnlyDamagedByPlayer : 1;
        unsigned char b22 : 1;
        unsigned char b23 : 1;
        unsigned char b24 : 1;

        unsigned char bRemoveFromWorld : 1;
        unsigned char bHasHitWall : 2;
        unsigned char bImBeingRendered : 1;
        unsigned char b28 : 1;
        unsigned char b29 : 1;
        unsigned char bDrawLast : 1;
        unsigned char b31 : 1;
        unsigned char b32 : 1;

        unsigned char bDistanceFade : 1;
        unsigned char b34 : 2;
    } m_nFlags;
private:
    char _pad[2];
public:
    unsigned short m_nScanCode;
    unsigned short m_nRandomSeed;
    short m_nModelIndex;
    short m_nLevel; // -1 - ignore level transitions
    CReference *m_pFirstRef;
    
protected:
    CEntity(plugin::dummy_func_t) : CPlaceable(plugin::dummy) {}

public:
    //vtable

    void Add();
    void Remove();
    void SetModelIndex(unsigned int modelIndex);
    void SetModelIndexNoCreate(unsigned int modelIndex);
    void CreateRwObject();
    void DeleteRwObject();
    CRect GetBoundRect();
    void ProcessControl();
    void ProcessCollision();
    void ProcessShift();
    void Teleport(CVector posn);
    void PreRender();
    void Render();
    bool SetupLighting();
    void RemoveLighting(bool resetWorldColors);
    void FlagToDestroyWhenNextProcessed();

    //funcs

    static void AddSteamsFromGround(CVector* arg0);
    void AttachToRwObject(RwObject* rwObject);
    CEntity();
    void DetachFromRwObject();
    void GetBoundCentre(CVector& out);
    CVector GetBoundCentre();
    float GetBoundRadius();
    float GetDistanceFromCentreOfMassToBaseOfModel();
    bool GetIsOnScreen();
    bool GetIsOnScreenComplex();
    // is entity touching sphere
    bool GetIsTouching(CVector const& posn, float radius);
    bool IsVisible();
    void ModifyMatrixForBannerInWind();
    void ModifyMatrixForTreeInWind();
    void PreRenderForGlassWindow();
    void ProcessLightsForEntity();
    void PruneReferences();
    void RegisterReference(CEntity** entity);
    void ResolveReferences();
    void SetupBigBuilding();
    void UpdateRwFrame();
    
    inline CVector &GetPosition() {
        return m_matrix.pos;
    }

    inline CVector TransformFromObjectSpace(CVector const& offset) {
        return this->m_matrix * offset;
    }

    CEntity(const CEntity &) = delete;
    CEntity &operator=(const CEntity &) = delete;
};

VALIDATE_SIZE(CEntity, 0x64);