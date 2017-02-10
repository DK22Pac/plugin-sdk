/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CRGBA.h"
#include "CObject.h"
#include "eWeaponType.h"
#include "CVehicle.h"

// maxorator's definition
class CPickup {
public:
	/*
		https://github.com/CookiePLMonster/Money-Messages/blob/master/MoneyMessage/General.h
	*/

	CVector vecPos;
	float fStandProximity;
	void* pObject;
	void* pExtraObject;
	UInt32 dwPickupQuantity;
	Int32 nTimer;
	UInt16 wMoneySpeed;
	Int16 nModelId;
	UInt16 wUniqueId;
	char szPickupTextKey[8];
	UInt8 bPickupType;
	Bool bRemoved;
	Bool bEffects;
	char _pad0[3];

    //funcs
    int GiveUsAPickUpObject(CObject** arg0, CObject** arg1, int arg2, int arg3);
    void Update(CPlayerPed* arg0, CVehicle* vehicle, int arg2);
    CPickup();
};

VALIDATE_SIZE(CPickup, 0x34);


struct tPickupMessage
{
	CVector2D Pos;
	eWeaponType WeaponType;
	float fW;
	float fH;
	CRGBA Color;
	UInt8 Flags;
	UInt8 nTextID;
	char _pad0[2];
};

VALIDATE_SIZE(CPickup, 0x1C);

class CPickups {
public:

	//vars
	static int& PlayerOnWeaponPickup;		// int CPickups::PlayerOnWeaponPickup
	static int& StaticCamStartTime;		// int CPickups::StaticCamStartTime
	static CVector& StaticCamCoors;		// CVector CPickups::StaticCamCoors
	static CVehicle*& pPlayerVehicle;		// CVehicle* CPickups::pPlayerVehicle
	static Bool& bPickUpcamActivated;		// Bool CPickups::bPickUpcamActivated
	static short& CollectedPickUpIndex;		// short CPickups::CollectedPickUpIndex
	static int (&aPickUpsCollected)[20];		// int CPickups::aPickUpsCollected[20]
	static short& NumMessages;		// short CPickups::NumMessages
	static tPickupMessage (&aMessages)[16];		// tPickupMessage CPickups::aMessages[16]
	static CPickup (&aPickUps)[336];		// CPickup CPickups::aPickUps[336]

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