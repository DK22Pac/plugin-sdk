/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CObject.h"
#include "eWeaponType.h"
#include "CVehicle.h"

class CPickup {
public:
    
    //funcs
    int GiveUsAPickUpObject(CObject** arg0, CObject** arg1, int arg2, int arg3);
    void Update(CPlayerPed* arg0, CVehicle* vehicle, int arg2);
    CPickup();
};

class CPickups {
public:
    
    //funcs
    static void CreateSomeMoney(CVector posn, int arg1);
    static void DoCollectableEffects(CEntity* entity);
    static void DoMineEffects(CEntity* entity);
    static void DoMoneyEffects(CEntity* entity);
    static void DoPickUpEffects(CEntity* entity);
    static int GenerateNewOne(CVector posn, unsigned int arg1, unsigned char arg2, unsigned int arg3, unsigned int arg4, bool arg5, char* msg);
    static int GetActualPickupIndex(int handle);
    static bool GivePlayerGoodiesWithPickUpMI(unsigned short model, int plrIndex);
    static void Init();
    static bool IsPickUpPickedUp(int handle);
    static void Load(unsigned char* arg0, unsigned int arg1);
    static int ModelForWeapon(eWeaponType weaponType);
    static void PassTime(unsigned int time);
    static void RemoveAllPickupsOfACertainWeaponGroupWithNoAmmo(eWeaponType weaponType);
    static void RemovePickUp(int handle);
    static void RemoveUnnecessaryPickups(CVector const& posn, float radius);
    static void RenderPickUpText();
    static void Save(unsigned char* arg0, unsigned int* arg1);
    static void Update();
};