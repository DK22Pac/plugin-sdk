/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"
#include "CStoredCar.h"
#include "eGarageType.h"
#include "eGarageState.h"
#include "eGarageID.h"

class CGarage {
public:
    eGarageType m_nType;
    eGarageState m_nState;
    char field_2;
    bool m_bLockup;
    bool m_bIsDeActivate;
    bool m_bHasResprayHappened;
    unsigned int m_nVehicleModelIndex; // SECURICA
    CObject *m_pDoorOne;
    CObject *m_pDoorTwo;
    char m_nIndexDoorOne; // pool index
    char m_nIndexDoorTwo; // pool index
    bool field_16;
    bool field_17;
    char field_18;
    bool m_bDoorSwingOpen;
    bool m_bCameraFollowsPlayer;
    float m_fLeftCoord;
    float m_fRightCoord;
    float m_fFrontCoord;
    float m_fBackCoord;
    float m_fUpCoord;
    float m_fDownCoord;
    float m_fDoorCurrentAngle;
    float m_fDoorOpenAngle;
    CVector2D m_vecDoorOnePosnXY;
    CVector2D m_vecDoorTwoPosnXY;
    float m_fDoorOnePosnZ;
    float m_fDoorTwoPosnZ;
    unsigned int m_nTimeToOpen;
    bool m_bHasThisCarBeenCollected;
    CVehicle *m_pTargetCar;
    int field_60;
    CStoredCar m_storedCar;
        
    //funcs
    void BuildRotatedDoorMatrix(CEntity* door, float angle);
    float CalcDistToGarageRectangleSquared(float x, float y);
    float CalcSmallestDistToGarageDoorSquared(float x, float y);
    bool CenterCarInGarage(CVehicle* vehicle);
    eGarageState CloseThisGarage();
    int CountCarsWithCenterPointWithinGarage(CEntity* vehicle);
    bool DoesCraigNeedThisCar(int modelIndex);
    bool EntityHasASphereWayOutsideGarage(CEntity* entity, float radius);
    void FindDoorsEntities();
    char FindDoorsEntitiesSectorList(CPtrList& list, bool arg1);
    bool HasCraigCollectedThisCar(int modelIndex);
    bool IsAnyCarBlockingDoor();
    bool IsAnyOtherCarTouchingGarage(CVehicle* vehicle);
    bool IsAnyOtherPedTouchingGarage(CPed* ped);
    bool IsEntityEntirelyInside(CEntity* entity);
    bool IsEntityEntirelyInside3D(CEntity* entity, float radius);
    bool IsEntityEntirelyOutside(CEntity* entity, float radius);
    bool IsEntityTouching3D(CEntity* entity);
    bool IsGarageEmpty();
    bool IsPlayerOutsideGarage();
    bool IsStaticPlayerCarEntirelyInside();
    void Load(unsigned char* bufferPointer, unsigned int structSize);
    bool MarkThisCarAsCollectedForCraig(int modelIndex);
    eGarageState OpenThisGarage();
    void PlayerArrestedOrDied();
    void RefreshDoorPointers(bool arg0);
    void RemoveCarsBlockingDoorNotInside();
    bool RestoreCarsForThisHideOut(CStoredCar* car);
    void StoreAndRemoveCarsForThisHideOut(CStoredCar* car, int count);
    void TidyUpGarage();
    void TidyUpGarageClose();
    void Update();
    void UpdateCrusherAngle();
    void UpdateCrusherShake(float x, float y);
    void UpdateDoorsHeight();
};
VALIDATE_OFFSET(CGarage, m_nType, 0x0);
VALIDATE_OFFSET(CGarage, m_nState, 0x1);
VALIDATE_OFFSET(CGarage, field_2, 0x2);
VALIDATE_OFFSET(CGarage, m_bLockup, 0x3);
VALIDATE_OFFSET(CGarage, m_bIsDeActivate, 0x4);
VALIDATE_OFFSET(CGarage, m_bHasResprayHappened, 0x5);
VALIDATE_OFFSET(CGarage, m_nVehicleModelIndex, 0x8);
VALIDATE_OFFSET(CGarage, m_pDoorOne, 0xC);
VALIDATE_OFFSET(CGarage, m_pDoorTwo, 0x10);
VALIDATE_OFFSET(CGarage, m_nIndexDoorOne, 0x14);
VALIDATE_OFFSET(CGarage, m_nIndexDoorTwo, 0x15);
VALIDATE_OFFSET(CGarage, field_16, 0x16);
VALIDATE_OFFSET(CGarage, field_17, 0x17);
VALIDATE_OFFSET(CGarage, field_18, 0x18);
VALIDATE_OFFSET(CGarage, m_bDoorSwingOpen, 0x19);
VALIDATE_OFFSET(CGarage, m_bCameraFollowsPlayer, 0x1A);
VALIDATE_OFFSET(CGarage, m_fLeftCoord, 0x1C);
VALIDATE_OFFSET(CGarage, m_fRightCoord, 0x20);
VALIDATE_OFFSET(CGarage, m_fFrontCoord, 0x24);
VALIDATE_OFFSET(CGarage, m_fBackCoord, 0x28);
VALIDATE_OFFSET(CGarage, m_fUpCoord, 0x2C);
VALIDATE_OFFSET(CGarage, m_fDownCoord, 0x30);
VALIDATE_OFFSET(CGarage, m_fDoorCurrentAngle, 0x34);
VALIDATE_OFFSET(CGarage, m_fDoorOpenAngle, 0x38);
VALIDATE_OFFSET(CGarage, m_vecDoorOnePosnXY, 0x3C);
VALIDATE_OFFSET(CGarage, m_vecDoorTwoPosnXY, 0x44);
VALIDATE_OFFSET(CGarage, m_fDoorOnePosnZ, 0x4C);
VALIDATE_OFFSET(CGarage, m_fDoorTwoPosnZ, 0x50);
VALIDATE_OFFSET(CGarage, m_nTimeToOpen, 0x54);
VALIDATE_OFFSET(CGarage, m_bHasThisCarBeenCollected, 0x58);
VALIDATE_OFFSET(CGarage, m_pTargetCar, 0x5C);
VALIDATE_OFFSET(CGarage, field_60, 0x60);
VALIDATE_OFFSET(CGarage, m_storedCar, 0x64);
VALIDATE_SIZE(CGarage, 0x8C);

extern unsigned int *gaCarsToCollectInCraigsGarages; 
