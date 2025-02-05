/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CDamageManager.h"
#include "CDoor.h"
#include "RenderWare.h"
#include "CColPoint.h"
#include "CVector.h"
#include "CObject.h"
#include "CColModel.h"
#include "CPtrList.h"

enum PLUGIN_API eCarNodes {
    CAR_NODE_NONE = 0,
    CAR_WHEEL_RF = 1,
    CAR_WHEEL_RM = 2,
    CAR_WHEEL_RB = 3,
    CAR_WHEEL_LF = 4,
    CAR_WHEEL_LM = 5,
    CAR_WHEEL_LB = 6,
    CAR_BUMP_FRONT = 7,
    CAR_BUMP_REAR = 8,
    CAR_WING_RF = 9,
    CAR_WING_RR = 10,
    CAR_DOOR_RF = 11,
    CAR_DOOR_RR = 12,
    CAR_WING_LF = 13,
    CAR_WING_LR = 14,
    CAR_DOOR_LF = 15,
    CAR_DOOR_LR = 16,
    CAR_BONNET = 17,
    CAR_BOOT = 18,
    CAR_WINDSCREEN = 19,
    CAR_NUM_NODES = 20
};

class PLUGIN_API CAutomobile : public CVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAutomobile)

public:
    CDamageManager m_carDamage;
    CDoor m_aDoors[6];
    RwFrame *m_aCarNodes[20];
    CColPoint m_aWheelColPoints[4];
    float m_afSuspensionSpringRatio[4];
    float m_afSuspensionSpringRatioPrev[4];
    float m_afWheelTimer[4]; //!< set to 4.0 when wheel is touching ground, then decremented
    float field_49C;
    bool m_abWheelSkidmarkMuddy[4];
    bool m_abWheelSkidmarkBloody[4];
    float m_afWheelRotation[4];
    float m_afWheelPosition[4];
    float m_afWheelSpeed[4];
    unsigned char field_4D8;
    struct {
        unsigned char nBombType : 3;
        unsigned char bTaxiLight : 1;
        unsigned char bDriverLastFrame : 1; //!< for bombs
        unsigned char bFixedColour : 1;
        unsigned char bBigWheels : 1;
        unsigned char bWaterTight : 1; //!< no damage for non-player peds

        unsigned char bNotDamagedUpsideDown : 1;
        unsigned char bMoreResistantToDamage : 1;
    } m_nAutomobileFlags;
    CEntity *m_pBombRigger;
    short field_4E0;
    unsigned short m_nHydraulicState;
    unsigned int m_nBusDoorTimerEnd;
    unsigned int m_nBusDoorTimerStart;
    float m_afSuspensionSpringLength[4];
    float m_afSuspensionLineLength[4];
    float m_fHeightAboveRoad;
    float m_fTraction;
    float m_fVelocityChangeForAudio;
    float m_randomValues[6]; //!< used for what?
    float m_fFireBlowUpTimer;
    CPhysical *m_aGroundPhysical[4]; //!< physicals touching wheels
    CVector m_avecGroundOffset[4]; //!< from ground object to colpoint
    CEntity *m_pSetOnFireEntity;
    float m_fWeaponDoorTimerLeft; //!< still don't know what exactly this is
    float m_nWeaponDoorTimerRight;
    float m_fCarGunLR;
    float m_fCarGunUD;
    float m_fPropellerRotation;
    char field_58C[4];
    unsigned char m_nWheelsOnGround;
    unsigned char m_nDriveWheelsOnGround;
    unsigned char m_nDriveWheelsOnGroundPrev;
    float m_fGasPedalAudio;
    tWheelState m_aWheelState[4];

    SUPPORTED_10EN_11EN_STEAM static bool &m_sAllTaxiLights;

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

    SUPPORTED_10EN_11EN_STEAM void Teleport(CVector pos);
    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)

    SUPPORTED_10EN_11EN_STEAM int ProcessEntityCollision(CEntity *entity, CColPoint *colPoint);
    SUPPORTED_10EN_11EN_STEAM void ProcessControlInputs(unsigned char pad);
    SUPPORTED_10EN_11EN_STEAM void GetComponentWorldPosition(int component, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM bool IsComponentPresent(int component);
    SUPPORTED_10EN_11EN_STEAM void SetComponentRotation(int component, CVector rotation);
    SUPPORTED_10EN_11EN_STEAM void OpenDoor(int component, eDoors door, float angle);
    SUPPORTED_10EN_11EN_STEAM void ProcessOpenDoor(unsigned int component, unsigned int anim, float angle);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorReady(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorFullyOpen(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorClosed(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorMissing(eDoors door);
    SUPPORTED_10EN_11EN_STEAM void RemoveRefsToVehicle(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void BlowUpCar(CEntity *culprit);
    SUPPORTED_10EN_11EN_STEAM bool SetUpWheelColModel(CColModel *wheelCol);
    SUPPORTED_10EN_11EN_STEAM void BurstTyre(unsigned char wheel);
    SUPPORTED_10EN_11EN_STEAM bool IsRoomForPedToLeaveCar(unsigned int component, CVector *doorOffset);
    SUPPORTED_10EN_11EN_STEAM float GetHeightAboveRoad();
    SUPPORTED_10EN_11EN_STEAM void PlayCarHorn();

    SUPPORTED_10EN_11EN_STEAM void AddDamagedVehicleParticles();
    SUPPORTED_10EN_11EN_STEAM bool AddWheelDirtAndWater(CColPoint &point, unsigned int belowEffectSpeed);
    SUPPORTED_10EN_11EN_STEAM void BlowUpCarsInPath();
    SUPPORTED_10EN_11EN_STEAM void DoDriveByShootings();
    SUPPORTED_10EN_11EN_STEAM void FireTruckControl();
    SUPPORTED_10EN_11EN_STEAM void Fix();
    SUPPORTED_10EN_11EN_STEAM bool GetAllWheelsOffGround();
    SUPPORTED_10EN_11EN_STEAM bool HasCarStoppedBecauseOfLight();
    SUPPORTED_10EN_11EN_STEAM void HideAllComps();
    SUPPORTED_10EN_11EN_STEAM void HydraulicControl();
    SUPPORTED_10EN_11EN_STEAM void PlaceOnRoadProperly();
    SUPPORTED_10EN_11EN_STEAM void PlayHornIfNecessary();
    SUPPORTED_10EN_11EN_STEAM void ProcessAutoBusDoors();
    SUPPORTED_10EN_11EN_STEAM void ProcessBuoyancy();
    SUPPORTED_10EN_11EN_STEAM void ProcessSwingingDoor(int component, eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool RcbanditCheck1CarWheels(CPtrList &list);
    SUPPORTED_10EN_11EN_STEAM bool RcbanditCheckHitWheels();
    SUPPORTED_10EN_11EN_STEAM void ReduceHornCounter();
    SUPPORTED_10EN_11EN_STEAM CObject *RemoveBonnetInPedCollision();
    SUPPORTED_10EN_11EN_STEAM void ResetSuspension();
    SUPPORTED_10EN_11EN_STEAM void ScanForCrimes();
    SUPPORTED_10EN_11EN_STEAM void SetBumperDamage(int component, ePanels panel, bool noFlyingComponents);
    SUPPORTED_10EN_11EN_STEAM void SetBusDoorTimer(unsigned int timer, unsigned char type);
    SUPPORTED_10EN_11EN_STEAM void SetComponentVisibility(RwFrame *frame, unsigned int flag);
    SUPPORTED_10EN_11EN_STEAM void SetDoorDamage(int component, eDoors door, bool noFlyingComponents);
    SUPPORTED_10EN_11EN_STEAM void SetPanelDamage(int component, ePanels panel, bool noFlyingComponents);
    SUPPORTED_10EN_11EN_STEAM void SetTaxiLight(bool enable);
    SUPPORTED_10EN_11EN_STEAM void SetupDamageAfterLoad();
    SUPPORTED_10EN_11EN_STEAM void SetupModelNodes();
    SUPPORTED_10EN_11EN_STEAM void SetupSuspensionLines();
    SUPPORTED_10EN_11EN_STEAM void ShowAllComps();
    SUPPORTED_10EN_11EN_STEAM CObject *SpawnFlyingComponent(int component, unsigned int type);
    SUPPORTED_10EN_11EN_STEAM void TankControl();
    SUPPORTED_10EN_11EN_STEAM void VehicleDamage(float impulse, unsigned short damagedPiece);
    SUPPORTED_10EN_11EN_STEAM void dmgDrawCarCollidingParticles(CVector const &pos, float amount);

    SUPPORTED_10EN_11EN_STEAM static void SetAllTaxiLights(bool enable);
};

SUPPORTED_10EN_11EN_STEAM extern CVector &vecDAMAGE_ENGINE_POS_BIG;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecDAMAGE_ENGINE_POS_SMALL;
SUPPORTED_10EN_11EN_STEAM extern CColPoint(&aTempPedColPts)[32]; // CColPoint aTempPedColPts[32]
SUPPORTED_10EN_11EN_STEAM extern bool &bAllCarCheat;

SUPPORTED_10EN_11EN_STEAM RwObject *SetVehicleAtomicVisibilityCB(RwObject *object, void *data);
SUPPORTED_10EN_11EN_STEAM RwObject *GetCurrentAtomicObjectCB(RwObject *object, void *data);

VTABLE_DESC(CAutomobile, 0x600C1C, 35);
VALIDATE_SIZE(CAutomobile, 0x5A8);

#include "meta/meta.CAutomobile.h"
