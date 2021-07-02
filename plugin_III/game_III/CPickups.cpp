/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPickups.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPickupMessage(&CPickups::aMessages)[16] = *reinterpret_cast<CPickupMessage(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x70D4E0, 0x70D4E0, 0x71D620));
PLUGIN_VARIABLE CPickup(&CPickups::aPickUps)[336] = *reinterpret_cast<CPickup(*)[336]>(GLOBAL_ADDRESS_BY_VERSION(0x878C98, 0x878C48, 0x888D88));
PLUGIN_VARIABLE int(&CPickups::aPickUpsCollected)[20] = *reinterpret_cast<int(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x87C538, 0x87C4E8, 0x88C628));
PLUGIN_VARIABLE unsigned int &CPickups::StaticCamStartTime = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E289C, 0x8E284C, 0x8F298C));
PLUGIN_VARIABLE CVehicle *&CPickups::pPlayerVehicle = *reinterpret_cast<CVehicle **>(GLOBAL_ADDRESS_BY_VERSION(0x8F29E8, 0x8F2A9C, 0x902BDC));
PLUGIN_VARIABLE CVector &CPickups::StaticCamCoors = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x9404C8, 0x940680, 0x9507C0));
PLUGIN_VARIABLE unsigned short &CPickups::CollectedPickUpIndex = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC8A, 0x95CE42, 0x96CF82));
PLUGIN_VARIABLE unsigned short &CPickups::NumMessages = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC98, 0x95CE50, 0x96CF90));
PLUGIN_VARIABLE bool &CPickups::bPickUpcamActivated = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD70, 0x95CF28, 0x96D068));
PLUGIN_VARIABLE unsigned char(&aWeaponReds)[16] = *reinterpret_cast<unsigned char(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x5EDEBC, 0x5EDEBC, 0x5FAEBC));
PLUGIN_VARIABLE unsigned char(&aWeaponGreens)[16] = *reinterpret_cast<unsigned char(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x5EDECC, 0x5EDECC, 0x5FAECC));
PLUGIN_VARIABLE unsigned char(&aWeaponBlues)[16] = *reinterpret_cast<unsigned char(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x5EDEDC, 0x5EDEDC, 0x5FAEDC));
PLUGIN_VARIABLE float(&aWeaponScale)[15] = *reinterpret_cast<float(*)[15]>(GLOBAL_ADDRESS_BY_VERSION(0x5EDEEC, 0x5EDEEC, 0x5FAEEC));

int addrof(CPickups::AddToCollectedPickupsArray) = ADDRESS_BY_VERSION(0x433D60, 0x433D60, 0x433D60);
int gaddrof(CPickups::AddToCollectedPickupsArray) = GLOBAL_ADDRESS_BY_VERSION(0x433D60, 0x433D60, 0x433D60);

void CPickups::AddToCollectedPickupsArray(int index) {
    plugin::CallDynGlobal<int>(gaddrof(CPickups::AddToCollectedPickupsArray), index);
}

int addrof(CPickups::DoCollectableEffects) = ADDRESS_BY_VERSION(0x431C30, 0x431C30, 0x431C30);
int gaddrof(CPickups::DoCollectableEffects) = GLOBAL_ADDRESS_BY_VERSION(0x431C30, 0x431C30, 0x431C30);

void CPickups::DoCollectableEffects(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CPickups::DoCollectableEffects), entity);
}

int addrof(CPickups::DoMineEffects) = ADDRESS_BY_VERSION(0x4321C0, 0x4321C0, 0x4321C0);
int gaddrof(CPickups::DoMineEffects) = GLOBAL_ADDRESS_BY_VERSION(0x4321C0, 0x4321C0, 0x4321C0);

void CPickups::DoMineEffects(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CPickups::DoMineEffects), entity);
}

int addrof(CPickups::DoMoneyEffects) = ADDRESS_BY_VERSION(0x431F40, 0x431F40, 0x431F40);
int gaddrof(CPickups::DoMoneyEffects) = GLOBAL_ADDRESS_BY_VERSION(0x431F40, 0x431F40, 0x431F40);

void CPickups::DoMoneyEffects(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CPickups::DoMoneyEffects), entity);
}

int addrof(CPickups::DoPickUpEffects) = ADDRESS_BY_VERSION(0x431520, 0x431520, 0x431520);
int gaddrof(CPickups::DoPickUpEffects) = GLOBAL_ADDRESS_BY_VERSION(0x431520, 0x431520, 0x431520);

void CPickups::DoPickUpEffects(CObject *entity) {
    plugin::CallDynGlobal<CObject *>(gaddrof(CPickups::DoPickUpEffects), entity);
}

int addrof(CPickups::FindColourIndexForWeaponMI) = ADDRESS_BY_VERSION(0x431510, 0x431510, 0x431510);
int gaddrof(CPickups::FindColourIndexForWeaponMI) = GLOBAL_ADDRESS_BY_VERSION(0x431510, 0x431510, 0x431510);

int CPickups::FindColourIndexForWeaponMI(int model) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CPickups::FindColourIndexForWeaponMI), model);
}

int addrof(CPickups::GenerateNewOne) = ADDRESS_BY_VERSION(0x4304B0, 0x4304B0, 0x4304B0);
int gaddrof(CPickups::GenerateNewOne) = GLOBAL_ADDRESS_BY_VERSION(0x4304B0, 0x4304B0, 0x4304B0);

int CPickups::GenerateNewOne(CVector pos, unsigned int modelIndex, unsigned char type, unsigned int quantity) {
    return plugin::CallAndReturnDynGlobal<int, CVector, unsigned int, unsigned char, unsigned int>(gaddrof(CPickups::GenerateNewOne), pos, modelIndex, type, quantity);
}

int addrof(CPickups::GenerateNewOne_WeaponType) = ADDRESS_BY_VERSION(0x430660, 0x430660, 0x430660);
int gaddrof(CPickups::GenerateNewOne_WeaponType) = GLOBAL_ADDRESS_BY_VERSION(0x430660, 0x430660, 0x430660);

int CPickups::GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, unsigned char type, unsigned int quantity) {
    return plugin::CallAndReturnDynGlobal<int, CVector, eWeaponType, unsigned char, unsigned int>(gaddrof(CPickups::GenerateNewOne_WeaponType), pos, weaponType, type, quantity);
}

int addrof(CPickups::GetActualPickupIndex) = ADDRESS_BY_VERSION(0x433DF0, 0x433DF0, 0x433DF0);
int gaddrof(CPickups::GetActualPickupIndex) = GLOBAL_ADDRESS_BY_VERSION(0x433DF0, 0x433DF0, 0x433DF0);

int CPickups::GetActualPickupIndex(int index) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CPickups::GetActualPickupIndex), index);
}

int addrof(CPickups::GetNewUniquePickupIndex) = ADDRESS_BY_VERSION(0x433DB0, 0x433DB0, 0x433DB0);
int gaddrof(CPickups::GetNewUniquePickupIndex) = GLOBAL_ADDRESS_BY_VERSION(0x433DB0, 0x433DB0, 0x433DB0);

int CPickups::GetNewUniquePickupIndex(int handle) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CPickups::GetNewUniquePickupIndex), handle);
}

int addrof(CPickups::GivePlayerGoodiesWithPickUpMI) = ADDRESS_BY_VERSION(0x4339F0, 0x4339F0, 0x4339F0);
int gaddrof(CPickups::GivePlayerGoodiesWithPickUpMI) = GLOBAL_ADDRESS_BY_VERSION(0x4339F0, 0x4339F0, 0x4339F0);

bool CPickups::GivePlayerGoodiesWithPickUpMI(unsigned short modelId, int playerId) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned short, int>(gaddrof(CPickups::GivePlayerGoodiesWithPickUpMI), modelId, playerId);
}

int addrof(CPickups::Init) = ADDRESS_BY_VERSION(0x430220, 0x430220, 0x430220);
int gaddrof(CPickups::Init) = GLOBAL_ADDRESS_BY_VERSION(0x430220, 0x430220, 0x430220);

void CPickups::Init() {
    plugin::CallDynGlobal(gaddrof(CPickups::Init));
}

int addrof(CPickups::IsPickUpPickedUp) = ADDRESS_BY_VERSION(0x430770, 0x430770, 0x430770);
int gaddrof(CPickups::IsPickUpPickedUp) = GLOBAL_ADDRESS_BY_VERSION(0x430770, 0x430770, 0x430770);

bool CPickups::IsPickUpPickedUp(int handle) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CPickups::IsPickUpPickedUp), handle);
}

int addrof(CPickups::Load) = ADDRESS_BY_VERSION(0x433F60, 0x433F60, 0x433F60);
int gaddrof(CPickups::Load) = GLOBAL_ADDRESS_BY_VERSION(0x433F60, 0x433F60, 0x433F60);

void CPickups::Load(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPickups::Load), buf, size);
}

int addrof(CPickups::ModelForWeapon) = ADDRESS_BY_VERSION(0x430690, 0x430690, 0x430690);
int gaddrof(CPickups::ModelForWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x430690, 0x430690, 0x430690);

int CPickups::ModelForWeapon(eWeaponType weaponType) {
    return plugin::CallAndReturnDynGlobal<int, eWeaponType>(gaddrof(CPickups::ModelForWeapon), weaponType);
}

int addrof(CPickups::PassTime) = ADDRESS_BY_VERSION(0x433B60, 0x433B60, 0x433B60);
int gaddrof(CPickups::PassTime) = GLOBAL_ADDRESS_BY_VERSION(0x433B60, 0x433B60, 0x433B60);

void CPickups::PassTime(unsigned int time) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CPickups::PassTime), time);
}

int addrof(CPickups::RemoveAllFloatingPickUps) = ADDRESS_BY_VERSION(0x430800, 0x430800, 0x430800);
int gaddrof(CPickups::RemoveAllFloatingPickUps) = GLOBAL_ADDRESS_BY_VERSION(0x430800, 0x430800, 0x430800);

void CPickups::RemoveAllFloatingPickUps() {
    plugin::CallDynGlobal(gaddrof(CPickups::RemoveAllFloatingPickUps));
}

int addrof(CPickups::RemovePickUp) = ADDRESS_BY_VERSION(0x4307A0, 0x4307A0, 0x4307A0);
int gaddrof(CPickups::RemovePickUp) = GLOBAL_ADDRESS_BY_VERSION(0x4307A0, 0x4307A0, 0x4307A0);

void CPickups::RemovePickUp(int handle) {
    plugin::CallDynGlobal<int>(gaddrof(CPickups::RemovePickUp), handle);
}

int addrof(CPickups::RenderPickUpText) = ADDRESS_BY_VERSION(0x432440, 0x432440, 0x432440);
int gaddrof(CPickups::RenderPickUpText) = GLOBAL_ADDRESS_BY_VERSION(0x432440, 0x432440, 0x432440);

void CPickups::RenderPickUpText() {
    plugin::CallDynGlobal(gaddrof(CPickups::RenderPickUpText));
}

int addrof(CPickups::Save) = ADDRESS_BY_VERSION(0x433E40, 0x433E40, 0x433E40);
int gaddrof(CPickups::Save) = GLOBAL_ADDRESS_BY_VERSION(0x433E40, 0x433E40, 0x433E40);

void CPickups::Save(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPickups::Save), buf, size);
}

int addrof(CPickups::Update) = ADDRESS_BY_VERSION(0x4303D0, 0x4303D0, 0x4303D0);
int gaddrof(CPickups::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4303D0, 0x4303D0, 0x4303D0);

void CPickups::Update() {
    plugin::CallDynGlobal(gaddrof(CPickups::Update));
}

int addrof(CPickups::WeaponForModel) = ADDRESS_BY_VERSION(0x4306F0, 0x4306F0, 0x4306F0);
int gaddrof(CPickups::WeaponForModel) = GLOBAL_ADDRESS_BY_VERSION(0x4306F0, 0x4306F0, 0x4306F0);

eWeaponType CPickups::WeaponForModel(int model) {
    return plugin::CallAndReturnDynGlobal<eWeaponType, int>(gaddrof(CPickups::WeaponForModel), model);
}
