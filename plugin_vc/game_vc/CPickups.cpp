/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPickups.h"

// Converted from int CPickups::PlayerOnWeaponPickup 0x978744
int& CPickups::PlayerOnWeaponPickup = *(int*)0x978744;
// Converted from int CPickups::StaticCamStartTime 0x974C24
int& CPickups::StaticCamStartTime = *(int*)0x974C24;
// Converted from CVector CPickups::StaticCamCoors 0xA0CFA0
CVector& CPickups::StaticCamCoors = *(CVector*)0xA0CFA0;
// Converted from CVehicle* CPickups::pPlayerVehicle 0x978D90
CVehicle*& CPickups::pPlayerVehicle = *(CVehicle**)0x978D90;
// Converted from Bool CPickups::bPickUpcamActivated 0xA10B20
bool& CPickups::bPickUpcamActivated = *(bool*)0xA10B20;
// Converted from short CPickups::CollectedPickUpIndex 0xA10A4A
short& CPickups::CollectedPickUpIndex = *(short*)0xA10A4A;
// Converted from int CPickups::aPickUpsCollected[20] 0x94AF48
int (&CPickups::aPickUpsCollected)[20] = *(int (*)[20])*(int *)0x94AF48;
// Converted from short CPickups::NumMessages 0xA10A5A
short& CPickups::NumMessages = *(short*)0xA10A5A;
// Converted from tPickupMessage CPickups::aMessages[16] 0x7E9B08
tPickupMessage (&CPickups::aMessages)[16] = *(tPickupMessage (*)[16])*(int *)0x7E9B08;
// Converted from CPickup CPickups::aPickUps[336] 0x945D30
CPickup (&CPickups::aPickUps)[336] = *(CPickup (*)[336])*(int *)0x945D30;

// Converted from thiscall int CPickup::GiveUsAPickUpObject(CObject **,CObject **,int,int) 0x43D3B0 
int CPickup::GiveUsAPickUpObject(CObject** arg0, CObject** arg1, int arg2, int arg3) {
    return plugin::CallMethodAndReturn<int, 0x43D3B0, CPickup *, CObject**, CObject**, int, int>(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CPickup::Update(CPlayerPed *,CVehicle *vehicle,int) 0x440030
void CPickup::Update(CPlayerPed* arg0, CVehicle* vehicle, int arg2) {
    plugin::CallMethod<0x440030, CPickup *, CPlayerPed*, CVehicle*, int>(this, arg0, vehicle, arg2);
}

// Converted from thiscall void CPickup::CPickup(void) 0x441F30
CPickup::CPickup() {
    plugin::CallMethod<0x441F30, CPickup *>(this);
}

// Converted from cdecl void CPickups::CreateSomeMoney(CVector posn,int) 0x43E180
void CPickups::CreateSomeMoney(CVector posn, int arg1) {
    plugin::Call<0x43E180, CVector, int>(posn, arg1);
}

// Converted from cdecl void CPickups::DoCollectableEffects(CEntity *entity) 0x43ED40
void CPickups::DoCollectableEffects(CEntity* entity) {
    plugin::Call<0x43ED40, CEntity*>(entity);
}

// Converted from cdecl void CPickups::DoMineEffects(CEntity *entity) 0x43E840
void CPickups::DoMineEffects(CEntity* entity) {
    plugin::Call<0x43E840, CEntity*>(entity);
}

// Converted from cdecl void CPickups::DoMoneyEffects(CEntity *entity) 0x43EAC0
void CPickups::DoMoneyEffects(CEntity* entity) {
    plugin::Call<0x43EAC0, CEntity*>(entity);
}

// Converted from cdecl void CPickups::DoPickUpEffects(CEntity *entity) 0x43F050
void CPickups::DoPickUpEffects(CEntity* entity) {
    plugin::Call<0x43F050, CEntity*>(entity);
}

// Converted from cdecl int CPickups::GenerateNewOne(CVector posn,uint,uchar ,uint,uint,bool,char *msg) 0x4418C0
int CPickups::GenerateNewOne(CVector posn, unsigned int arg1, unsigned char arg2, unsigned int arg3, unsigned int arg4, bool arg5, char* msg) {
    return plugin::CallAndReturn<int, 0x4418C0, CVector, unsigned int, unsigned char, unsigned int, unsigned int, bool, char*>(posn, arg1, arg2, arg3, arg4, arg5, msg);
}

// Converted from cdecl int CPickups::GetActualPickupIndex(int handle) 0x43D360
int CPickups::GetActualPickupIndex(int handle) {
    return plugin::CallAndReturn<int, 0x43D360, int>(handle);
}

// Converted from cdecl bool CPickups::GivePlayerGoodiesWithPickUpMI(ushort model,int plrIndex) 0x43D910
bool CPickups::GivePlayerGoodiesWithPickUpMI(unsigned short model, int plrIndex) {
    return plugin::CallAndReturn<bool, 0x43D910, unsigned short, int>(model, plrIndex);
}

// Converted from cdecl void CPickups::Init(void) 0x441D30 
void CPickups::Init() {
    plugin::Call<0x441D30>();
}

// Converted from cdecl bool CPickups::IsPickUpPickedUp(int handle) 0x441880
bool CPickups::IsPickUpPickedUp(int handle) {
    return plugin::CallAndReturn<bool, 0x441880, int>(handle);
}

// Converted from cdecl void CPickups::Load(uchar *,uint) 0x43CF40 
void CPickups::Load(unsigned char* arg0, unsigned int arg1) {
    plugin::Call<0x43CF40, unsigned char*, unsigned int>(arg0, arg1);
}

// Converted from cdecl int CPickups::ModelForWeapon(eWeaponType weaponType) 0x4418B0
int CPickups::ModelForWeapon(eWeaponType weaponType) {
    return plugin::CallAndReturn<int, 0x4418B0, eWeaponType>(weaponType);
}

// Converted from cdecl void CPickups::PassTime(uint time) 0x43D8C0
void CPickups::PassTime(unsigned int time) {
    plugin::Call<0x43D8C0, unsigned int>(time);
}

// Converted from cdecl void CPickups::RemoveAllPickupsOfACertainWeaponGroupWithNoAmmo(eWeaponType weaponType) 0x43D240
void CPickups::RemoveAllPickupsOfACertainWeaponGroupWithNoAmmo(eWeaponType weaponType) {
    plugin::Call<0x43D240, eWeaponType>(weaponType);
}

// Converted from cdecl void CPickups::RemovePickUp(int handle) 0x4417D0
void CPickups::RemovePickUp(int handle) {
    plugin::Call<0x4417D0, int>(handle);
}

// Converted from cdecl void CPickups::RemoveUnnecessaryPickups(CVector const& posn,float radius) 0x43E4C0
void CPickups::RemoveUnnecessaryPickups(CVector const& posn, float radius) {
    plugin::Call<0x43E4C0, CVector const&, float>(posn, radius);
}

// Converted from cdecl void CPickups::RenderPickUpText(void) 0x43E5E0 
void CPickups::RenderPickUpText() {
    plugin::Call<0x43E5E0>();
}

// Converted from cdecl void CPickups::Save(uchar *,uint *) 0x43D0D0 
void CPickups::Save(unsigned char* arg0, unsigned int* arg1) {
    plugin::Call<0x43D0D0, unsigned char*, unsigned int*>(arg0, arg1);
}

// Converted from cdecl void CPickups::Update(void) 0x441BB0 
void CPickups::Update() {
    plugin::Call<0x441BB0>();
}