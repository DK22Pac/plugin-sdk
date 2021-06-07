/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CVector2D.h"

enum PLUGIN_API eBoatNodes {
    BOAT_NODE_NONE = 0,
    BOAT_MOVING = 1,
    BOAT_WINDSCREEN = 2,
    BOAT_RUDDER = 3,
    BOAT_NUM_NODES = 4
};

class PLUGIN_API CBoat : public CVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBoat)

public:
    float m_fThrustZ;
    float m_fThrustY;
    CVector m_vecMoveRes;
    CVector m_vecTurnRes;
    float m_fMovingRotation;
    int field_2AC;
    RwFrame *m_aBoatNodes[4];
    struct {
        unsigned char bBoatInWater : 1;
        unsigned char bPropellerInWater : 1;
    } m_nBoatFlags;
    bool m_bIsAnchored;
    float m_fOrientation;
    int field_2C8;
    float m_fDamage;
    CEntity *m_pSetOnFireEntity;
    bool field_2D4;
    float m_fAccelerate;
    float m_fBrake;
    float m_fSteeringLeftRight;
    unsigned char m_nPadID;
    int field_2E8;
    float m_fVolumeUnderWater;
    CVector m_vecBuoyancePoint;
    float m_fPrevVolumeUnderWater;
    short m_nDeltaVolumeUnderWater;
    unsigned short m_nNumWakePoints;
    CVector2D m_avec2dWakePoints[32];
    float m_afWakePointLifeTime[32];

    SUPPORTED_10EN_11EN_STEAM static CBoat *(&apFrameWakeGeneratingBoats)[4]; // static CBoat *apFrameWakeGeneratingBoats[4]

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void Teleport(CVector point);
    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControlInputs(unsigned char padNumber);
    SUPPORTED_10EN_11EN_STEAM void GetComponentWorldPosition(int component, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM bool IsComponentPresent(int component);

    // virtual function #21 (not overriden)


    // virtual function #22 (not overriden)


    // virtual function #23 (not overriden)


    // virtual function #24 (not overriden)


    // virtual function #25 (not overriden)


    // virtual function #26 (not overriden)


    // virtual function #27 (not overriden)


    // virtual function #28 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void BlowUpCar(CEntity *entity);

    // virtual function #30 (not overriden)


    // virtual function #31 (not overriden)


    // virtual function #32 (not overriden)


    // virtual function #33 (not overriden)


    // virtual function #34 (not overriden)


    SUPPORTED_10EN_11EN_STEAM void AddWakePoint(CVector point);
    SUPPORTED_10EN_11EN_STEAM void ApplyWaterResistance();
    SUPPORTED_10EN_11EN_STEAM void PruneWakeTrail();
    SUPPORTED_10EN_11EN_STEAM void SetupModelNodes();

    SUPPORTED_10EN_11EN_STEAM static void FillBoatList();
    SUPPORTED_10EN_11EN_STEAM static bool IsSectorAffectedByWake(CVector2D sector, float size, CBoat **apBoats);
    SUPPORTED_10EN_11EN_STEAM static float IsVertexAffectedByWake(CVector vecVertex, CBoat *boat);
};

//! 50.0f
SUPPORTED_10EN_11EN_STEAM extern float &MAX_WAKE_LENGTH;
//! 1.0f
SUPPORTED_10EN_11EN_STEAM extern float &MIN_WAKE_INTERVAL;
//! 400.0f
SUPPORTED_10EN_11EN_STEAM extern float &WAKE_LIFETIME;
//! 0.4f
SUPPORTED_10EN_11EN_STEAM extern float &fShapeLength;
//! 0.05f
SUPPORTED_10EN_11EN_STEAM extern float &fShapeTime;
//! 0.75f
SUPPORTED_10EN_11EN_STEAM extern float &fRangeMult;
SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&KeepWaterOutIndices)[6]; // RwImVertexIndex KeepWaterOutIndices[6]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&KeepWaterOutVertices)[4]; // RwIm3DVertex KeepWaterOutVertices[4]
SUPPORTED_10EN_11EN_STEAM extern float &fTimeMult;

SUPPORTED_10EN_11EN_STEAM RwObject *GetBoatAtomicObjectCB(RwObject *object, void *data);

VTABLE_DESC(CBoat, 0x600EA4, 35);
VALIDATE_SIZE(CBoat, 0x484);

#include "meta/meta.CBoat.h"
