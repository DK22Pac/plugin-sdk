/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CRect.h"
#include "RenderWare.h"
#include "CColModel.h"

class CEntity {
public:
    CPlaceable m_placement;
    union {
        RwObject *m_pRwObject;
        RpAtomic *m_pRwAtomic;
        RpClump  *m_pRwClump;
    };

    unsigned char m_nType : 3;
    unsigned char m_nState : 5;

    struct {
        unsigned char bUseCollision : 1;
        unsigned char bEntUFlag02 : 1;
        unsigned char bIsStatic : 1;
        unsigned char bEntUFlag04 : 1;
        unsigned char bEntUFlag05 : 1;
        unsigned char bEntUFlag06 : 1;
        unsigned char bEntUFlag07 : 1;
        unsigned char bRecordCollisions : 1;

        unsigned char bEntUFlag09 : 1;
        unsigned char bExplosionProof : 1;
        unsigned char bIsVisible : 1;
        unsigned char bHasCollided : 1;
        unsigned char bRenderScorched : 1;
        unsigned char bEntUFlag14 : 1;
        unsigned char bUseLevelSectors : 1;
        unsigned char bIsBigBuilding : 1;

        unsigned char bEntUFlag17 : 1;
        unsigned char bBulletProof : 1;
        unsigned char bFireProof : 1;
        unsigned char bCollisionProof : 1;
        unsigned char bMeleeProof : 1;
        unsigned char bImmuneToNonPlayerDamage : 1;
        unsigned char bEntUFlag23 : 1;
        unsigned char bRemoveFromWorld : 1;

        unsigned char bEntUFlag25 : 1;
        unsigned char bImBeingRendered : 1;
        unsigned char bEntUFlag27 : 1;
        unsigned char bEntUFlag28 : 1;
        unsigned char bEntUFlag29 : 1;
        unsigned char bEntUFlag30 : 1;
        unsigned char bEntUFlag31 : 1;
        unsigned char bEntUFlag32 : 1;

        unsigned char bEntUFlag33 : 1;
        unsigned char bDontCastShadowsOn : 1;
        unsigned char bEntUFlag35 : 1;
        unsigned char bIsStaticWaitingForCollision : 1;
        unsigned char bEntUFlag37 : 1;
        unsigned char bEntUFlag38 : 1;
        unsigned char bEntUFlag39 : 1;
        unsigned char bEntUFlag40 : 1;
    } m_nFlags;
private:
    char _pad56[2];
public:
    short m_nScanCode;
    short m_nRandomSeed;
    short m_nModelIndex;
    char m_nLevel;
    unsigned char m_nInterior;
    class CReference *m_pFirstRef;

protected:
    virtual ~CEntity() {};
    CEntity(plugin::dummy_func_t) : m_placement(plugin::dummy) {}

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

    void SetRwObjectAlpha(int alpha);
    void ModifyMatrixForTreeInWind();
    void SetupBigBuilding();
    float GetDistanceFromCentreOfMassToBaseOfModel();
    bool GetIsOnScreenComplex();
    bool GetIsOnScreen();
    bool IsVisible();
    bool GetIsTouching(CVector const& posn, float radius);
    bool HasPreRenderEffects();
    void UpdateRpHAnim();
    void UpdateRwFrame();
    void GetBoundCentre(CVector& out);
    CVector GetBoundCentre();
    void DetachFromRwObject();
    void AttachToRwObject(RwObject* rwObject);
    void PruneReferences();
    void ResolveReferences();
    void CleanUpOldReference(CEntity** pEntity);
    void RegisterReference(CEntity** pEntity);
    void ProcessLightsForEntity();
    bool IsEntityOccluded();

    inline CVector &GetPosition() {
        return m_placement.pos;
    }

    inline float GetHeading() {
        float angle = atan2f(-m_placement.up.x, m_placement.up.y) * 57.295776f;
        if (angle < 0.0f)
            angle += 360.0f;
        if (angle > 360.0f)
            angle -= 360.0f;
        return angle;
    }

    inline void SetPosition(float x, float y, float z) {
        this->m_placement.pos.x = x;
        this->m_placement.pos.y = y;
        this->m_placement.pos.z = z;
    }

    inline void SetPosition(CVector &pos) {
        this->m_placement.pos = pos;
    }

    inline CVector TransformFromObjectSpace(CVector const& offset) {
        return this->m_placement * offset;
    }

    CEntity() = delete;
    CEntity(const CEntity &) = delete;
    CEntity &operator=(const CEntity &) = delete;
};

VALIDATE_SIZE(CEntity, 0x64);

RpAtomic *AtomicRemoveAnimFromSkinCB(RpAtomic* atomic, void* callbackData);