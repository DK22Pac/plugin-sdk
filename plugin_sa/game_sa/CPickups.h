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

#pragma pack(push, 1)
class CPickup {
public:
    float m_fRevenueValue;
    CObject *m_pObject;
    int m_dwAmmo;
    int m_dwRegenerationTime;
    CompressedVector m_vPos;
    unsigned short m_wMoneyPerDay;
    short m_wModelId;
    short m_wReferenceIndex;
    ePickupType m_ePickupType;
    char m_nFlags;
    char _pad[2];
};
#pragma pack(pop)

class CPickups {
public:
    static void AddToCollectedPickupsArray(int handle);
    static int CreatePickupCoorsCloseToCoors(CVector &posn, CVector *outPosn);
    static void CreateSomeMoney(CVector &posn, int arg0);
    static void DetonateMinesHitByGunShot(CVector &arg0, CVector &arg1);
    static void DoCollectableEffects(CEntity* entity);
    static void DoMineEffects(CEntity* entity);
    static void DoMoneyEffects(CEntity* entity);
    static void DoPickUpEffects(CEntity* entity);
    static CPickup* FindPickUpForThisObject(CObject* object);
    static int GenerateNewOne(CVector pos, int modelID, ePickupType pickupType, int ammo, int price, char a8, char *msg);
    // Returns pickup index
    static int GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, ePickupType pickupType, unsigned int ammo, bool a7, char *a8);
    static int GetActualPickupIndex(int handle);
    static int GetNewUniquePickupIndex(int handle);
    static int GetUniquePickupIndex(int handle);
    static void GivePlayerGoodiesWithPickUpMI(int model, int plrIndex);
    static void Init();
    static bool IsPickUpPickedUp(int handle);
    static int ModelForWeapon(eWeaponType weapType);
    static void PassTime(int time);
    static void PickedUpHorseShoe();
    static void PickedUpOyster();
    static void PictureTaken();
    static bool PlayerCanPickUpThisWeaponTypeAtThisMoment(eWeaponType weapType);
    static void ReInit();
    static void RemoveMissionPickUps();
    static void RemovePickUp(int handle);
    static void RemovePickUpsInArea(CVector& cornerA, CVector &cornerB);
    static void RemovePickupObjects();
    static void RemoveUnnecessaryPickups(CVector& posn, float radius);
    static void RenderPickUpText();
    static bool TestForPickupsInBubble(CVector& posn, float radius);
    static void TryToMerge_WeaponType(CVector& pos, eWeaponType weapType, unsigned char arg2, unsigned int arg3, bool arg4);
    static void Update();
    static void UpdateMoneyPerDay(int handle, unsigned short money);
    static int WeaponForModel(int index);
};