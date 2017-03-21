/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPhysical.h"
#include "CColModel.h"
#include "CDamageManager.h"
#include "eWeaponType.h"


class CPlayerPed;

enum eCarWeapon {

};

enum eCarLock {

};

enum eVehicleType {
    
};

enum eVehicleApperance {
    
};

enum eVehicleLightsFlags {

};

enum eVehicleCreatedBy {

};

enum eBombState {

};

#if 0
enum eOrdnanceType;
enum eFlightModel;
enum eDoors;
#else
typedef int eOrdnanceType;
typedef int eFlightModel;
#endif

class CWeapon;
class CPed;
typedef int tWheelState;

class CVehicle : public CPhysical {
public:
    void                   *m_pHandling;
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    int field_13C;
    int field_140;
    int field_144;
    int field_148;
    int field_14C;
    int field_150;
    char field_154; // pad?
    char field_155;
    char field_156;
    char field_157;
    char field_158;
    char                    m_nDrivingStyle;
    char                    m_nCarMission;
    char                    m_nAnimationId;
    int                     m_nAnimationTime;
    int field_160;
    unsigned char           m_nCruiseSpeed;
    char field_165;
    char field_166[14];
    void                   *m_pPathNodes[8];
    short                   m_nNumPathNodes;
    char field_196[2];
    CVehicle               *m_pCarToRam;
    unsigned char           m_nCarColorId[2];
    unsigned char           m_nExtra[2];
    short field_1A0;
    char field_1A2[2];
    CPed                   *m_pDriver;
    CPed                   *m_pPassenger[8];
    unsigned char           m_nNumPassengers;
    char field_1C9;
    char field_1CA;
    char field_1CB;
    unsigned char           m_nNumMaxPassengers;
    char field_1CD[19];
    CEntity                *m_pRoad;
    void                   *m_pCarFire; // CFire *
    int field_1E8;
    float                   m_fGasPedal;
    float                   m_fBreakPedal;
    unsigned char           m_nCreatedBy;
    unsigned char           m_nVehicleFlags;
    char field_1F6;
    char field_1F7;
    char field_1F8;
    char field_1F9;
    char field_1FA[1];
    char field_1FB;
    char field_1FC[4];
    float                   m_fHealth;
    char field_204;
    char field_205[3];
    int field_208;
    int field_20C;
    int field_210;
    short field_214;
    short field_216;
    int field_218;
    float field_21C;
    float field_220;
    unsigned int            m_nDoorLock;
    char field_228;
    char field_229;
    char field_22A;
    char field_22B;
    unsigned char           m_nCarHornTimer;
    char field_22D;
    unsigned char           m_nSirenOrAlarm;
    char field_22F;
    char field_230[36];
    char field_254;
    char field_255[39];
    char field_27C;
    char field_27D[3];
    float                   m_fSteering;
    unsigned int            m_nVehicleSubType;

protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;

    static bool& bWheelsOnlyCheat;
    static bool& bAllDodosCheat;
    static bool& bCheat3;

    //vtable

    void ProcessControlInputs(unsigned char playerNum);
    // component index in m_apModelNodes array
    void GetComponentWorldPosition(int componentId, CVector& posnOut);
    // component index in m_apModelNodes array
    bool IsComponentPresent(int componentId);
    void SetComponentRotation(int componentId, CVector arg1);
    void OpenDoor(int componentId, eDoors door, float doorOpenRatio);
    void ProcessOpenDoor(unsigned int arg0, unsigned int arg1, float arg2);
    bool IsDoorReady(eDoors door);
    bool IsDoorFullyOpen(eDoors door);
    bool IsDoorClosed(eDoors door);
    bool IsDoorMissing(eDoors door);
    // remove ref to this entity
    void RemoveRefsToVehicle(CEntity* entity);
    void BlowUpCar(CEntity* damager);
    bool SetUpWheelColModel(CColModel* wheelCol);
    void BurstTyre(unsigned char tyreComponentId, bool bPhysicalEffect);
    bool IsRoomForPedToLeaveCar(unsigned int arg0, CVector* arg1);
    float GetHeightAboveRoad();
    void PlayCarHorn();

    //funcs

    bool AddPassenger(CPed* passenger);
    bool AddPassenger(CPed* passenger, unsigned char seatNumber);
    bool CanBeDeleted();
    bool CanPedEnterCar();
    bool CanPedExitCar(bool arg0);
    bool CanPedOpenLocks(CPed const* ped);
    bool CarHasRoof();
    void ChangeLawEnforcerState(unsigned char state);
    void DoFixedMachineGuns();
    void ExtinguishCarFire();
    void FlyingControl(eFlightModel flightModel);
    void InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords);
    bool IsLawEnforcementVehicle();
    bool IsOnItsSide();
    bool IsSphereTouchingVehicle(float x, float y, float z, float radius);
    bool IsUpsideDown();
    bool IsVehicleNormal();
    void ProcessCarAlarm();
    void ProcessDelayedExplosion();
    void ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11);
    float ProcessWheelRotation(tWheelState arg0, CVector const& arg1, CVector const& arg2, float arg3);
    void RemoveDriver();
    void RemovePassenger(CPed* passenger);
    void SetDriver(CPed* driver);
    CPed* SetUpDriver();
    CPed* SetupPassenger(int seatNumber);
    char ShufflePassengersToMakeSpace();
    bool UsesSiren();
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    static void* operator new(unsigned int size, int arg1);
    ~CVehicle();
};

VALIDATE_SIZE(CVehicle, 0x288);

extern float &fBurstTyreMod; // 0.1
extern float &fBurstSpeedMax; // 0.3