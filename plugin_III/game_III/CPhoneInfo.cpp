/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhoneInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned int &PhoneEnableControlsTimer = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x6283A8, 0x6283A8, 0));
PLUGIN_VARIABLE bool &bDisplayingPhoneMessage = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x6283AC, 0x6283AC, 0));
PLUGIN_VARIABLE CPhone *&pPhoneDisplayingMessages = *reinterpret_cast<CPhone **>(GLOBAL_ADDRESS_BY_VERSION(0x6283B0, 0x6283B0, 0));
PLUGIN_VARIABLE bool &bPickingUpPhone = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x6283B4, 0x6283B4, 0));
PLUGIN_VARIABLE CPlayerPed *&pCallBackPed = *reinterpret_cast<CPlayerPed **>(GLOBAL_ADDRESS_BY_VERSION(0x6283B8, 0x6283B8, 0));

int ctor_addr(CPhoneInfo) = ADDRESS_BY_VERSION(0x42F5D0, 0x42F5D0, 0);
int ctor_gaddr(CPhoneInfo) = GLOBAL_ADDRESS_BY_VERSION(0x42F5D0, 0x42F5D0, 0);

int dtor_addr(CPhoneInfo) = ADDRESS_BY_VERSION(0x42F600, 0x42F600, 0);
int dtor_gaddr(CPhoneInfo) = GLOBAL_ADDRESS_BY_VERSION(0x42F600, 0x42F600, 0);

int addrof(CPhoneInfo::FindNearestFreePhone) = ADDRESS_BY_VERSION(0x42F720, 0x42F720, 0);
int gaddrof(CPhoneInfo::FindNearestFreePhone) = GLOBAL_ADDRESS_BY_VERSION(0x42F720, 0x42F720, 0);

int CPhoneInfo::FindNearestFreePhone(CVector *point) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPhoneInfo *, CVector *>(gaddrof(CPhoneInfo::FindNearestFreePhone), this, point);
}

int addrof(CPhoneInfo::GrabPhone) = ADDRESS_BY_VERSION(0x42FDB0, 0x42FDB0, 0);
int gaddrof(CPhoneInfo::GrabPhone) = GLOBAL_ADDRESS_BY_VERSION(0x42FDB0, 0x42FDB0, 0);

int CPhoneInfo::GrabPhone(float x, float y) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPhoneInfo *, float, float>(gaddrof(CPhoneInfo::GrabPhone), this, x, y);
}

int addrof(CPhoneInfo::HasMessageBeenDisplayed) = ADDRESS_BY_VERSION(0x42FFF0, 0x42FFF0, 0);
int gaddrof(CPhoneInfo::HasMessageBeenDisplayed) = GLOBAL_ADDRESS_BY_VERSION(0x42FFF0, 0x42FFF0, 0);

bool CPhoneInfo::HasMessageBeenDisplayed(int index) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhoneInfo *, int>(gaddrof(CPhoneInfo::HasMessageBeenDisplayed), this, index);
}

int addrof(CPhoneInfo::Initialise) = ADDRESS_BY_VERSION(0x42F640, 0x42F640, 0);
int gaddrof(CPhoneInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x42F640, 0x42F640, 0);

void CPhoneInfo::Initialise() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Initialise), this);
}

int addrof(CPhoneInfo::IsMessageBeingDisplayed) = ADDRESS_BY_VERSION(0x430030, 0x430030, 0);
int gaddrof(CPhoneInfo::IsMessageBeingDisplayed) = GLOBAL_ADDRESS_BY_VERSION(0x430030, 0x430030, 0);

bool CPhoneInfo::IsMessageBeingDisplayed(int index) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhoneInfo *, int>(gaddrof(CPhoneInfo::IsMessageBeingDisplayed), this, index);
}

int addrof(CPhoneInfo::Load) = ADDRESS_BY_VERSION(0x430120, 0x430120, 0);
int gaddrof(CPhoneInfo::Load) = GLOBAL_ADDRESS_BY_VERSION(0x430120, 0x430120, 0);

void CPhoneInfo::Load(unsigned char *bufferPointer, unsigned int structSize) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, unsigned char *, unsigned int>(gaddrof(CPhoneInfo::Load), this, bufferPointer, structSize);
}

int addrof(CPhoneInfo::PhoneAtThisPosition) = ADDRESS_BY_VERSION(0x42FD50, 0x42FD50, 0);
int gaddrof(CPhoneInfo::PhoneAtThisPosition) = GLOBAL_ADDRESS_BY_VERSION(0x42FD50, 0x42FD50, 0);

bool CPhoneInfo::PhoneAtThisPosition(CVector point) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhoneInfo *, CVector>(gaddrof(CPhoneInfo::PhoneAtThisPosition), this, point);
}

int addrof(CPhoneInfo::Save) = ADDRESS_BY_VERSION(0x430060, 0x430060, 0);
int gaddrof(CPhoneInfo::Save) = GLOBAL_ADDRESS_BY_VERSION(0x430060, 0x430060, 0);

void CPhoneInfo::Save(unsigned char *bufferPointer, unsigned int *structSize) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, unsigned char *, unsigned int *>(gaddrof(CPhoneInfo::Save), this, bufferPointer, structSize);
}

int addrof(CPhoneInfo::SetPhoneMessage_JustOnce) = ADDRESS_BY_VERSION(0x42FF90, 0x42FF90, 0);
int gaddrof(CPhoneInfo::SetPhoneMessage_JustOnce) = GLOBAL_ADDRESS_BY_VERSION(0x42FF90, 0x42FF90, 0);

void CPhoneInfo::SetPhoneMessage_JustOnce(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *>(gaddrof(CPhoneInfo::SetPhoneMessage_JustOnce), this, index, text_1, text_2, text_3, text_4, text_5, text_6);
}

int addrof(CPhoneInfo::SetPhoneMessage_Repeatedly) = ADDRESS_BY_VERSION(0x42FF30, 0x42FF30, 0);
int gaddrof(CPhoneInfo::SetPhoneMessage_Repeatedly) = GLOBAL_ADDRESS_BY_VERSION(0x42FF30, 0x42FF30, 0);

void CPhoneInfo::SetPhoneMessage_Repeatedly(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6) {
    plugin::CallMethodDynGlobal<CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *>(gaddrof(CPhoneInfo::SetPhoneMessage_Repeatedly), this, index, text_1, text_2, text_3, text_4, text_5, text_6);
}

int addrof(CPhoneInfo::Shutdown) = ADDRESS_BY_VERSION(0x42F710, 0x42F710, 0);
int gaddrof(CPhoneInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x42F710, 0x42F710, 0);

void CPhoneInfo::Shutdown() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Shutdown), this);
}

int addrof(CPhoneInfo::Update) = ADDRESS_BY_VERSION(0x42F7A0, 0x42F7A0, 0);
int gaddrof(CPhoneInfo::Update) = GLOBAL_ADDRESS_BY_VERSION(0x42F7A0, 0x42F7A0, 0);

void CPhoneInfo::Update() {
    plugin::CallMethodDynGlobal<CPhoneInfo *>(gaddrof(CPhoneInfo::Update), this);
}
