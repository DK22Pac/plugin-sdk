/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPlaceable.h"
#include "CRect.h"
#include "RenderWare.h"

class CEntity {
public:
    CPlaceable m_placement;
    union {
        RwObject *m_pRwObject;
        RpAtomic *m_pRwAtomic;
        RpClump  *m_pRwClump;
    };

    
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
        return m_placement.pos;
    }

    CEntity(const CEntity &) = delete;
    CEntity &operator=(const CEntity &) = delete;
};
