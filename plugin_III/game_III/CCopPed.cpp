/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCopPed.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CCopPed, void(eCopType)) = ADDRESS_BY_VERSION(0x4C11B0, 0x4C12A0, 0x4C1230);
int ctor_gaddr_o(CCopPed, void(eCopType)) = GLOBAL_ADDRESS_BY_VERSION(0x4C11B0, 0x4C12A0, 0x4C1230);

int dtor_addr(CCopPed) = ADDRESS_BY_VERSION(0x4C13E0, 0x4C14D0, 0x4C1460);
int dtor_gaddr(CCopPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C13E0, 0x4C14D0, 0x4C1460);

int del_dtor_addr(CCopPed) = ADDRESS_BY_VERSION(0x4C2E00, 0x4C2EA0, 0x4C2E30);
int del_dtor_gaddr(CCopPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C2E00, 0x4C2EA0, 0x4C2E30);

int addrof(CCopPed::ProcessControl) = ADDRESS_BY_VERSION(0x4C1400, 0x4C14F0, 0x4C1480);
int gaddrof(CCopPed::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4C1400, 0x4C14F0, 0x4C1480);

void CCopPed::ProcessControl() {
    plugin::CallVirtualMethod<8, CCopPed *>(this);
}

int addrof(CCopPed::ArrestPlayer) = ADDRESS_BY_VERSION(0x4C2C90, 0x4C2D30, 0x4C2CC0);
int gaddrof(CCopPed::ArrestPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4C2C90, 0x4C2D30, 0x4C2CC0);

void CCopPed::ArrestPlayer() {
    plugin::CallMethodDynGlobal<CCopPed *>(gaddrof(CCopPed::ArrestPlayer), this);
}

int addrof(CCopPed::ClearPursuit) = ADDRESS_BY_VERSION(0x4C28C0, 0x4C2960, 0x4C28F0);
int gaddrof(CCopPed::ClearPursuit) = GLOBAL_ADDRESS_BY_VERSION(0x4C28C0, 0x4C2960, 0x4C28F0);

void CCopPed::ClearPursuit() {
    plugin::CallMethodDynGlobal<CCopPed *>(gaddrof(CCopPed::ClearPursuit), this);
}

int addrof(CCopPed::CopAI) = ADDRESS_BY_VERSION(0x4C1B50, 0x4C1BF0, 0x4C1B80);
int gaddrof(CCopPed::CopAI) = GLOBAL_ADDRESS_BY_VERSION(0x4C1B50, 0x4C1BF0, 0x4C1B80);

void CCopPed::CopAI() {
    plugin::CallMethodDynGlobal<CCopPed *>(gaddrof(CCopPed::CopAI), this);
}

int addrof(CCopPed::ScanForCrimes) = ADDRESS_BY_VERSION(0x4C26A0, 0x4C2740, 0x4C26D0);
int gaddrof(CCopPed::ScanForCrimes) = GLOBAL_ADDRESS_BY_VERSION(0x4C26A0, 0x4C2740, 0x4C26D0);

void CCopPed::ScanForCrimes() {
    plugin::CallMethodDynGlobal<CCopPed *>(gaddrof(CCopPed::ScanForCrimes), this);
}

int addrof(CCopPed::SetArrestPlayer) = ADDRESS_BY_VERSION(0x4C2B00, 0x4C2BA0, 0x4C2B30);
int gaddrof(CCopPed::SetArrestPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4C2B00, 0x4C2BA0, 0x4C2B30);

void CCopPed::SetArrestPlayer(CPed *player) {
    plugin::CallMethodDynGlobal<CCopPed *, CPed *>(gaddrof(CCopPed::SetArrestPlayer), this, player);
}

int addrof(CCopPed::SetPursuit) = ADDRESS_BY_VERSION(0x4C27D0, 0x4C2870, 0x4C2800);
int gaddrof(CCopPed::SetPursuit) = GLOBAL_ADDRESS_BY_VERSION(0x4C27D0, 0x4C2870, 0x4C2800);

void CCopPed::SetPursuit(bool ignoreCopLimit) {
    plugin::CallMethodDynGlobal<CCopPed *, bool>(gaddrof(CCopPed::SetPursuit), this, ignoreCopLimit);
}
