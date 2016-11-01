/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CVehicle.h"

struct tBikeHandlingData;

enum eBikeNodes {
    BIKE_NODE_NONE = 0,
    BIKE_CHASSIS = 1,
    BIKE_FORKS_FRONT = 2,
    BIKE_FORKS_REAR = 3,
    BIKE_WHEEL_FRONT = 4,
    BIKE_WHEEL_REAR = 5,
    BIKE_MUDGUARD = 6,
    BIKE_HANDLEBARS = 7,
    BIKE_NUM_NODES
};

class CBike : public CVehicle {
protected:
    CBike(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
   
    //funcs

    void AddDamagedVehicleParticles();
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1);
    CBike(int modelIndex, unsigned char createdBy);
    void CalculateLeanMatrix();
    void DoDriveByShootings();
    void Fix();
    void GetCorrectedWorldDoorPosition(CVector& out, CVector arg1, CVector arg2);
    CPed* KnockOffRider(eWeaponType arg0, unsigned char arg1, CPed* arg2, bool arg3);
    void PlayHornIfNecessary();
    void ProcessBuoyancy();
    void ReduceHornCounter();
    void SetupSuspensionLines();
    void VehicleDamage();
};
