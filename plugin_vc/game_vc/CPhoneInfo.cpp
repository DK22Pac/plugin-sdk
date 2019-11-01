/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhoneInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &PhoneEnableControlsTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x7030E0, 0x7030E0, 0));
PLUGIN_VARIABLE bool &bDisplayingPhoneMessage = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x7030E4, 0x7030E4, 0));
PLUGIN_VARIABLE CPhone *&pPhoneDisplayingMessages = *reinterpret_cast<CPhone **>(GLOBAL_ADDRESS_BY_VERSION(0x7030E8, 0x7030E8, 0));
PLUGIN_VARIABLE bool &bPickingUpPhone = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x7030EC, 0x7030EC, 0));
PLUGIN_VARIABLE CPlayerPed *&pCallBackPed = *reinterpret_cast<CPlayerPed **>(GLOBAL_ADDRESS_BY_VERSION(0x7030F0, 0x7030F0, 0));

int dtor_addr(CPhoneInfo) = ADDRESS_BY_VERSION(0x43CD50, 0x43CD50, 0);
int dtor_gaddr(CPhoneInfo) = GLOBAL_ADDRESS_BY_VERSION(0x43CD50, 0x43CD50, 0);

int addrof(CPhoneInfo::FindNearestFreePhone) = ADDRESS_BY_VERSION(0x43CBD0, 0x43CBD0, 0);
int gaddrof(CPhoneInfo::FindNearestFreePhone) = GLOBAL_ADDRESS_BY_VERSION(0x43CBD0, 0x43CBD0, 0);

int CPhoneInfo::FindNearestFreePhone(CVector *point) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPhoneInfo *, CVector *>(gaddrof(CPhoneInfo::FindNearestFreePhone), this, point);
}

int addrof(CPhoneInfo::GrabPhone) = ADDRESS_BY_VERSION(0x43C490, 0x43C490, 0);
int gaddrof(CPhoneInfo::GrabPhone) = GLOBAL_ADDRESS_BY_VERSION(0x43C490, 0x43C490, 0);

int CPhoneInfo::GrabPhone(float x, float y) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPhoneInfo *, float, float>(gaddrof(CPhoneInfo::GrabPhone), this, x, y);
}

int addrof(CPhoneInfo::Initialise) = ADDRESS_BY_VERSION(0x43CC60, 0x43CC60, 0);
int gaddrof(CPhoneInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x43CC60, 0x43CC60, 0);

void CPhoneInfo::Initialise() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Initialise), this);
}

int addrof(CPhoneInfo::Load) = ADDRESS_BY_VERSION(0x43C2B0, 0x43C2B0, 0);
int gaddrof(CPhoneInfo::Load) = GLOBAL_ADDRESS_BY_VERSION(0x43C2B0, 0x43C2B0, 0);

void CPhoneInfo::Load(unsigned char *bufferPointer, unsigned int structSize) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, unsigned char *, unsigned int>(gaddrof(CPhoneInfo::Load), this, bufferPointer, structSize);
}

int addrof(CPhoneInfo::Save) = ADDRESS_BY_VERSION(0x43C370, 0x43C370, 0);
int gaddrof(CPhoneInfo::Save) = GLOBAL_ADDRESS_BY_VERSION(0x43C370, 0x43C370, 0);

void CPhoneInfo::Save(unsigned char *bufferPointer, unsigned int *structSize) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, unsigned char *, unsigned int *>(gaddrof(CPhoneInfo::Save), this, bufferPointer, structSize);
}

int addrof(CPhoneInfo::SetPhoneMessage_JustOnce) = ADDRESS_BY_VERSION(0x43C430, 0x43C430, 0);
int gaddrof(CPhoneInfo::SetPhoneMessage_JustOnce) = GLOBAL_ADDRESS_BY_VERSION(0x43C430, 0x43C430, 0);

void CPhoneInfo::SetPhoneMessage_JustOnce(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *>(gaddrof(CPhoneInfo::SetPhoneMessage_JustOnce), this, index, text_1, text_2, text_3, text_4, text_5, text_6);
}

int addrof(CPhoneInfo::Shutdown) = ADDRESS_BY_VERSION(0x43CC50, 0x43CC50, 0);
int gaddrof(CPhoneInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x43CC50, 0x43CC50, 0);

void CPhoneInfo::Shutdown() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Shutdown), this);
}

int addrof(CPhoneInfo::Update) = ADDRESS_BY_VERSION(0x43C600, 0x43C600, 0);
int gaddrof(CPhoneInfo::Update) = GLOBAL_ADDRESS_BY_VERSION(0x43C600, 0x43C600, 0);

void CPhoneInfo::Update() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Update), this);
}

int addrof(PhonePutDownCB) = ADDRESS_BY_VERSION(0x43CD70, 0x43CD70, 0);
int gaddrof(PhonePutDownCB) = GLOBAL_ADDRESS_BY_VERSION(0x43CD70, 0x43CD70, 0);

void PhonePutDownCB(CAnimBlendAssociation *association, CPed *ped) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, CPed *>(gaddrof(PhonePutDownCB), association, ped);
}

int addrof(PhonePickUpCB) = ADDRESS_BY_VERSION(0x43CDE0, 0x43CDE0, 0);
int gaddrof(PhonePickUpCB) = GLOBAL_ADDRESS_BY_VERSION(0x43CDE0, 0x43CDE0, 0);

void PhonePickUpCB(CAnimBlendAssociation *association, CPhone *phone) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, CPhone *>(gaddrof(PhonePickUpCB), association, phone);
}
