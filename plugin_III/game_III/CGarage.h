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
VALIDATE_SIZE(CGarage, 0x8C);

extern unsigned int *gaCarsToCollectInCraigsGarages; 
