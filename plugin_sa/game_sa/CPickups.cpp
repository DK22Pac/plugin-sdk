/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPickups.h"

void CPickups::AddToCollectedPickupsArray(int handle)
{
	((void (__cdecl *)(int))0x455240)(handle);
}

int CPickups::CreatePickupCoorsCloseToCoors(CVector &posn, CVector *outPosn)
{
	return ((int (__cdecl *)(CVector &, CVector *))0x458A80)(posn, outPosn);
}

void CPickups::CreateSomeMoney(CVector &posn, int arg0)
{
	((void(__cdecl *)(CVector &, int))0x458970)(posn, arg0);
}

void CPickups::DetonateMinesHitByGunShot(CVector &arg0, CVector &arg1)
{
	((void(__cdecl *)(CVector &, CVector &))0x4590C0)(arg0, arg1);
}

void CPickups::DoCollectableEffects(CEntity* entity)
{
	((void(__cdecl *)(CEntity*))0x455E20)(entity);
}

void CPickups::DoMineEffects(CEntity* entity)
{
	((void(__cdecl *)(CEntity*))0x4560E0)(entity);
}

void CPickups::DoMoneyEffects(CEntity* entity)
{
	((void(__cdecl *)(CEntity*))0x454E80)(entity);
}

void CPickups::DoPickUpEffects(CEntity* entity)
{
	((void(__cdecl *)(CEntity*))0x455720)(entity);
}

CPickup* CPickups::FindPickUpForThisObject(CObject* object)
{
	return ((CPickup* (__cdecl *)(CObject*))0x4551C0)(object);
}

int CPickups::GenerateNewOne(CVector pos, int modelID, ePickupType pickupType, int ammo, int price, char a8, char *msg)
{
	return ((int(__cdecl *)(CVector, int, ePickupType, int, int, char, char*))0x457380)(pos, modelID, pickupType, ammo, price, a8, msg);
}

int CPickups::GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, ePickupType pickupType, unsigned int ammo, bool a7, char *a8)
{
	return ((int(__cdecl *)(CVector, eWeaponType, ePickupType, unsigned int, bool, char*))0x457380)(pos, weaponType, pickupType, ammo, a7, a8);
}

int CPickups::GetActualPickupIndex(int handle)
{
	return ((int(__cdecl *)(int))0x4552A0)(handle);
}

int CPickups::GetNewUniquePickupIndex(int handle)
{
	return ((int(__cdecl *)(int))0x456A30)(handle);
}

int CPickups::GetUniquePickupIndex(int handle)
{
	return ((int(__cdecl *)(int))0x455280)(handle);
}

void CPickups::GivePlayerGoodiesWithPickUpMI(int model, int plrIndex)
{
	((void(__cdecl *)(int, int))0x4564F0)(model, plrIndex);
}

void CPickups::Init()
{
	((void(__cdecl *)())0x454A70)();
}

bool CPickups::IsPickUpPickedUp(int handle)
{
	return ((bool (__cdecl *)(int))0x454B40)(handle);
}

int CPickups::ModelForWeapon(eWeaponType weapType)
{
	return ((int(__cdecl *)(eWeaponType))0x454AC0)(weapType);
}

void CPickups::PassTime(int time)
{
	((void(__cdecl *)(int))0x455200)(time);
}

void CPickups::PickedUpHorseShoe()
{
	((void(__cdecl *)())0x455390)();
}

void CPickups::PickedUpOyster()
{
	((void(__cdecl *)())0x4552D0)();
}

void CPickups::PictureTaken()
{
	((void(__cdecl *)())0x456A70)();
}

bool CPickups::PlayerCanPickUpThisWeaponTypeAtThisMoment(eWeaponType weapType)
{
	return ((bool(__cdecl *)(eWeaponType))0x4554C0)(weapType);
}

void CPickups::ReInit()
{
	((void(__cdecl *)())0x456E60)();
}

void CPickups::RemoveMissionPickUps()
{
	((void(__cdecl *)())0x456DE0)();
}

void CPickups::RemovePickUp(int handle)
{
	((void(__cdecl *)(int))0x456DE0)(handle);
}

void CPickups::RemovePickUpsInArea(CVector& cornerA, CVector &cornerB)
{
	((void(__cdecl *)(CVector&, CVector&))0x456D30)(cornerA, cornerB);
}

void CPickups::RemovePickupObjects()
{
	((void(__cdecl *)())0x455470)();
}

void CPickups::RemoveUnnecessaryPickups(CVector& posn, float radius)
{
	((void(__cdecl *)(CVector&, float))0x4563A0)(posn, radius);
}

void CPickups::RenderPickUpText()
{
	((void(__cdecl *)())0x455000)();
}

bool CPickups::TestForPickupsInBubble(CVector& posn, float radius)
{
	return ((bool (__cdecl *)(CVector&, float))0x456450)(posn, radius);
}

void CPickups::TryToMerge_WeaponType(CVector& pos, eWeaponType weapType, unsigned char arg2, unsigned int arg3, bool arg4)
{
	((void(__cdecl *)(CVector&, eWeaponType, unsigned char, unsigned int, bool))0x455000)(pos, weapType, arg2, arg3, arg4);
}

void CPickups::Update()
{
	((void(__cdecl *)())0x458DE0)();
}

void CPickups::UpdateMoneyPerDay(int handle, unsigned short money)
{
	((void(__cdecl *)(int, unsigned short))0x455680)(handle, money);
}

int CPickups::WeaponForModel(int index)
{
	return ((int (__cdecl *)(int))0x454AE0)(index);
}