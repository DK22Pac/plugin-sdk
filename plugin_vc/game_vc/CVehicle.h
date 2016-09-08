/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CPhysical.h"
#include "CAutoPilot.h"
#include "CStoredCollPoly.h"

class CVehicle : public CPhysical {
protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    void *m_pHandlingData;
    void *m_pFlyingHandling;
    CAutoPilot m_autopilot;
    CVehicle *m_pVehicleToRam;
    unsigned char m_nPrimaryColor;
    unsigned char m_nSecondaryColor;
    unsigned char m_anExtras[2];
    short m_wWantedStarsOnEnter;
    short m_wMissionValue;
    class CPed *m_pDriver;
    class CPed *m_passengers[8];
    unsigned char m_nNumPassengers;
    unsigned char m_nNumGettingIn;
    unsigned char m_nGettingInFlags;
    unsigned char m_nGettingOutFlags;
    unsigned char m_nMaxPassengers;
    char __f01CD[3];
    int field_1D4;
    CVector field_1D8;
    CEntity *m_pEntityWeAreOn;
    class CFire *m_pFire;
    float m_fSteerAngle;
    float m_fGasPedal;
    float m_fBreakPedal;
    unsigned char m_nCreatedBy;
    struct {
        unsigned char b01 : 1;
        unsigned char b02 : 1;
        unsigned char b03 : 1;
        unsigned char bIsLocked : 1;
        unsigned char bIsEngineOn : 1;
        unsigned char bBrakeLightsOn : 1;
        unsigned char bLightsOn : 1;
        unsigned char b08 : 1;
        unsigned char bIsVan : 1;
        unsigned char bHideOccupants : 1;
        unsigned char bIsBus : 1;
        unsigned char bIsBig : 1;
        unsigned char bComedyControls : 1;
        unsigned char b14 : 1;
        unsigned char b15 : 1;
        unsigned char b16 : 1;
        unsigned char b17 : 1;
        unsigned char bIsDamaged : 1;
        unsigned char b19 : 1;
        unsigned char b20 : 1;
        unsigned char b21 : 1;
        unsigned char bSpawnCops : 1;
        unsigned char b23 : 1;
        unsigned char bUsePlayerColModel : 1;
        unsigned char b25 : 1;
        unsigned char b26 : 1;
        unsigned char b27 : 1;
        unsigned char b28 : 1;
        unsigned char b29 : 1;
        unsigned char b30 : 1;
        unsigned char b31 : 1;
        unsigned char b32 : 1;
        unsigned char b33 : 1;
        unsigned char b34 : 1;
        unsigned char b35 : 1;
        unsigned char b36 : 1;
        unsigned char b37 : 1;
        unsigned char b38 : 1;
        unsigned char b39 : 1;
        unsigned char b40 : 1;
        unsigned char b41 : 1;
        unsigned char b42 : 1;
        unsigned char b43 : 1;
        unsigned char b44 : 1;
        unsigned char b45 : 1;
        unsigned char b46 : 1;
        unsigned char b47 : 1;
        unsigned char b48 : 1;
        unsigned char b49 : 1;
        unsigned char b50 : 1;
        unsigned char b51 : 1;
        unsigned char b52 : 1;
        unsigned char b53 : 1;
        unsigned char b54 : 1;
        unsigned char b55 : 1;
        unsigned char b56 : 1;
        unsigned char b57 : 1;
        unsigned char b58 : 1;
        unsigned char b59 : 1;
        unsigned char b60 : 1;
        unsigned char b61 : 1;
        unsigned char b62 : 1;
        unsigned char b63 : 1;
        unsigned char b64 : 1;
    } m_nVehicleFlags;
    char field_201;
    float m_fHealth;
    unsigned char m_nCurrentGear;
    char __f0205[3];
    int field_20C;
    int field_210;
    int field_214;
    int field_218;
    int m_nTimeOfDeath;
    short field_220;
    short m_wBombTimer;
    int field_224;
    int field_228;
    int field_22C;
    unsigned int m_dwLockStatus;
    unsigned char m_nLastWeaponDamage;
    char __f0231[3];
    CEntity *pLastDamEntity;
    unsigned char m_nRadioStation;
    char field_23D;
    char field_23E;
    unsigned int m_bHornEnabled;
    char field_244;
    unsigned char m_bSirenOrAlarm;
    unsigned char m_nSirenExtra;
    char field_247;
    CStoredCollPoly m_frontCollPoly;
    CStoredCollPoly m_rearCollPoly;
    float m_fSteerRatio;
    unsigned int m_dwVehicleClass;

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;
};

VALIDATE_SIZE(CVehicle, 0x2A0);