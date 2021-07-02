/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDarkel.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned short(&CDarkel::RegisteredKills)[200] = *reinterpret_cast<unsigned short(*)[200]>(GLOBAL_ADDRESS_BY_VERSION(0x6EDBE0, 0x6EDBE0, 0x6FDD20));
PLUGIN_VARIABLE int &CDarkel::PreviousTime = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B00, 0x885AB0, 0x895BF0));
PLUGIN_VARIABLE int &CDarkel::ModelToKill4 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B34, 0x885AE4, 0x895C24));
PLUGIN_VARIABLE int &CDarkel::ModelToKill3 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B3C, 0x885AEC, 0x895C2C));
PLUGIN_VARIABLE int &CDarkel::ModelToKill2 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B40, 0x885AF0, 0x895C30));
PLUGIN_VARIABLE int &CDarkel::TimeLimit = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885BAC, 0x885B5C, 0x895C9C));
PLUGIN_VARIABLE int &CDarkel::AmmoInterruptedWeapon = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E29C8, 0x8E2978, 0x8F2AB8));
PLUGIN_VARIABLE int &CDarkel::KillsNeeded = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AB8, 0x8F1B6C, 0x901CAC));
PLUGIN_VARIABLE wchar_t *&CDarkel::pStartMessage = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C08, 0x8F2CBC, 0x902DFC));
PLUGIN_VARIABLE int &CDarkel::ModelToKill = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C78, 0x8F2D2C, 0x902E6C));
PLUGIN_VARIABLE unsigned int &CDarkel::TimeOfFrenzyStart = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9430D8, 0x943290, 0x9533D0));
PLUGIN_VARIABLE eWeaponType &CDarkel::WeaponType = *reinterpret_cast<eWeaponType *>(GLOBAL_ADDRESS_BY_VERSION(0x9430F0, 0x9432A8, 0x9533E8));
PLUGIN_VARIABLE unsigned short &CDarkel::Status = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCB4, 0x95CE6C, 0x96CFAC));
PLUGIN_VARIABLE unsigned char &CDarkel::InterruptedWeapon = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD60, 0x95CF18, 0x96D058));
PLUGIN_VARIABLE bool &CDarkel::bProperKillFrenzy = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD98, 0x95CF51, 0x96D091));
PLUGIN_VARIABLE bool &CDarkel::bStandardSoundAndMessages = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDB6, 0x95CF6E, 0x96D0AE));
PLUGIN_VARIABLE bool &CDarkel::bNeedHeadShot = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDCA, 0x95CF82, 0x96D0C2));

int addrof(CDarkel::CalcFade) = ADDRESS_BY_VERSION(0x421380, 0x421380, 0x421380);
int gaddrof(CDarkel::CalcFade) = GLOBAL_ADDRESS_BY_VERSION(0x421380, 0x421380, 0x421380);

unsigned char CDarkel::CalcFade(unsigned int time, unsigned int min, unsigned int max) {
    return plugin::CallAndReturnDynGlobal<unsigned char, unsigned int, unsigned int, unsigned int>(gaddrof(CDarkel::CalcFade), time, min, max);
}

int addrof(CDarkel::DrawMessages) = ADDRESS_BY_VERSION(0x420920, 0x420920, 0x420920);
int gaddrof(CDarkel::DrawMessages) = GLOBAL_ADDRESS_BY_VERSION(0x420920, 0x420920, 0x420920);

void CDarkel::DrawMessages() {
    plugin::CallDynGlobal(gaddrof(CDarkel::DrawMessages));
}

int addrof(CDarkel::FrenzyOnGoing) = ADDRESS_BY_VERSION(0x420E60, 0x420E60, 0x420E60);
int gaddrof(CDarkel::FrenzyOnGoing) = GLOBAL_ADDRESS_BY_VERSION(0x420E60, 0x420E60, 0x420E60);

bool CDarkel::FrenzyOnGoing() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CDarkel::FrenzyOnGoing));
}

int addrof(CDarkel::Init) = ADDRESS_BY_VERSION(0x420650, 0x420650, 0x420650);
int gaddrof(CDarkel::Init) = GLOBAL_ADDRESS_BY_VERSION(0x420650, 0x420650, 0x420650);

void CDarkel::Init() {
    plugin::CallDynGlobal(gaddrof(CDarkel::Init));
}

int addrof(CDarkel::QueryModelsKilledByPlayer) = ADDRESS_BY_VERSION(0x421370, 0x421370, 0x421370);
int gaddrof(CDarkel::QueryModelsKilledByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x421370, 0x421370, 0x421370);

unsigned short CDarkel::QueryModelsKilledByPlayer(int modelId) {
    return plugin::CallAndReturnDynGlobal<unsigned short, int>(gaddrof(CDarkel::QueryModelsKilledByPlayer), modelId);
}

int addrof(CDarkel::ReadStatus) = ADDRESS_BY_VERSION(0x420E50, 0x420E50, 0x420E50);
int gaddrof(CDarkel::ReadStatus) = GLOBAL_ADDRESS_BY_VERSION(0x420E50, 0x420E50, 0x420E50);

eDarkelStatus CDarkel::ReadStatus() {
    return plugin::CallAndReturnDynGlobal<eDarkelStatus>(gaddrof(CDarkel::ReadStatus));
}

int addrof(CDarkel::RegisterCarBlownUpByPlayer) = ADDRESS_BY_VERSION(0x421070, 0x421070, 0x421070);
int gaddrof(CDarkel::RegisterCarBlownUpByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x421070, 0x421070, 0x421070);

void CDarkel::RegisterCarBlownUpByPlayer(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CDarkel::RegisterCarBlownUpByPlayer), vehicle);
}

int addrof(CDarkel::RegisterKillByPlayer) = ADDRESS_BY_VERSION(0x420F60, 0x420F60, 0x420F60);
int gaddrof(CDarkel::RegisterKillByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x420F60, 0x420F60, 0x420F60);

void CDarkel::RegisterKillByPlayer(CPed *ped, eWeaponType weaponType, bool headShot) {
    plugin::CallDynGlobal<CPed *, eWeaponType, bool>(gaddrof(CDarkel::RegisterKillByPlayer), ped, weaponType, headShot);
}

int addrof(CDarkel::RegisterKillNotByPlayer) = ADDRESS_BY_VERSION(0x421060, 0x421060, 0x421060);
int gaddrof(CDarkel::RegisterKillNotByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x421060, 0x421060, 0x421060);

void CDarkel::RegisterKillNotByPlayer(CPed *ped, eWeaponType weaponType) {
    plugin::CallDynGlobal<CPed *, eWeaponType>(gaddrof(CDarkel::RegisterKillNotByPlayer), ped, weaponType);
}

int addrof(CDarkel::ResetModelsKilledByPlayer) = ADDRESS_BY_VERSION(0x421310, 0x421310, 0x421310);
int gaddrof(CDarkel::ResetModelsKilledByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x421310, 0x421310, 0x421310);

void CDarkel::ResetModelsKilledByPlayer() {
    plugin::CallDynGlobal(gaddrof(CDarkel::ResetModelsKilledByPlayer));
}

int addrof(CDarkel::ResetOnPlayerDeath) = ADDRESS_BY_VERSION(0x420E70, 0x420E70, 0x420E70);
int gaddrof(CDarkel::ResetOnPlayerDeath) = GLOBAL_ADDRESS_BY_VERSION(0x420E70, 0x420E70, 0x420E70);

void CDarkel::ResetOnPlayerDeath() {
    plugin::CallDynGlobal(gaddrof(CDarkel::ResetOnPlayerDeath));
}

int addrof(CDarkel::StartFrenzy) = ADDRESS_BY_VERSION(0x4210E0, 0x4210E0, 0x4210E0);
int gaddrof(CDarkel::StartFrenzy) = GLOBAL_ADDRESS_BY_VERSION(0x4210E0, 0x4210E0, 0x4210E0);

void CDarkel::StartFrenzy(eWeaponType weaponType, int time, unsigned short kill, int model, wchar_t *text, int model2, int model3, int model4, bool standardSound, bool headShot) {
    plugin::CallDynGlobal<eWeaponType, int, unsigned short, int, wchar_t *, int, int, int, bool, bool>(gaddrof(CDarkel::StartFrenzy), weaponType, time, kill, model, text, model2, model3, model4, standardSound, headShot);
}

int addrof(CDarkel::Update) = ADDRESS_BY_VERSION(0x420660, 0x420660, 0x420660);
int gaddrof(CDarkel::Update) = GLOBAL_ADDRESS_BY_VERSION(0x420660, 0x420660, 0x420660);

void CDarkel::Update() {
    plugin::CallDynGlobal(gaddrof(CDarkel::Update));
}
