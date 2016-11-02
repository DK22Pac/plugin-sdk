/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CObject.h"
#include "CompressedVector.h"
#include "ePickupType.h"
#include "CVector.h"
#include "eWeaponType.h"

#pragma pack(push, 1)
class PLUGIN_API CPickup
{
public:
	float m_fRevenueValue;
	CObject *m_pObject;
	int m_dwAmmo;
	int m_dwRegenerationTime;
	CompressedVector m_vPos;
	__int16 m_wMoneyPerDay;
	__int16 m_wModelId;
	__int16 m_wReferenceIndex;
	ePickupType m_ePickupType;
	char m_nFlags;
	char _pad[2];
};
#pragma pack(pop)

class PLUGIN_API CPickups
{
public:
	static void AddToCollectedPickupsArray(int handle);
	static int CreatePickupCoorsCloseToCoors(CVector &posn, CVector *outPosn);
	static void CreateSomeMoney(CVector &posn, int arg0);

	// unused
	static void DetonateMinesHitByGunShot(CVector &arg0, CVector &arg1);

	static void DoCollectableEffects(CEntity* entity);
	static void DoMineEffects(CEntity *entity);
	static void DoMoneyEffects(CEntity* entity);
	static void DoPickUpEffects(CEntity* entity);
	static CPickup* FindPickUpForThisObject(CObject* object);
	static int GenerateNewOne(CVector pos, int modelID, ePickupType pickupType, int ammo, int price, char a8, char *msg);
	static int GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, ePickupType pickupType, unsigned int ammo, bool arg5, char *arg6);
	static int GetActualPickupIndex(int);

	// unused 
	static int GetNewUniquePickupIndex(int);
	static int GetUniquePickupIndex(int);

	static void GivePlayerGoodiesWithPickUpMI(int model, int plrIndex);
	static void Init(void);
	static bool IsPickUpPickedUp(int handle);
	static int ModelForWeapon(eWeaponType weapType);
	static void PassTime(int time);
	static void PickedUpHorseShoe(void);
	static void PickedUpOyster(void);
	static void PictureTaken(void);
	static bool PlayerCanPickUpThisWeaponTypeAtThisMoment(eWeaponType weaponType);
	static void ReInit(void);
	static void RemoveMissionPickUps(void);
	static void RemovePickUp(int handle);
	static void RemovePickUpsInArea(CVector& cornerA, CVector& cornerB);
	static void RemovePickupObjects(void);
	static void RemoveUnnecessaryPickups(CVector& posn, float radius);
	static void RenderPickUpText(void);
	static bool TestForPickupsInBubble(CVector& posn, float radius);
	static void TryToMerge_WeaponType(CVector& pos, eWeaponType weapType, unsigned char arg2, unsigned int arg3, bool arg4);
	static void Update(void);
	static void UpdateMoneyPerDay(int handle, unsigned short money);
	static signed int WeaponForModel(int index);
};



