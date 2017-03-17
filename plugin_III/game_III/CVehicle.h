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

#pragma pack(push, 4)
class CVehicle : public CPhysical {
protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;

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
#pragma pack(pop)



extern float &fBurstTyreMod; // 0.1
extern float &fBurstSpeedMax; // 0.3
