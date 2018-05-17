/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

PLUGIN_SOURCE_FILE

unsigned int &CClock::ms_nMillisecondsPerGameMinute = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C64, 0x8F2D18, 0x902E58));
unsigned int &CClock::ms_nLastClockTick = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9430E4, 0x94329C, 0x9533DC));
unsigned short &CClock::ms_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC7C, 0x95CE34, 0x96CF74));
unsigned short &CClock::ms_Stored_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC9C, 0x95CE54, 0x96CF94));
unsigned char &CClock::ms_Stored_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD7B, 0x95CF33, 0x96D073));
bool &CClock::bClockHasBeenStored = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD82, 0x95CF3A, 0x96D07A));
unsigned char &CClock::ms_Stored_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD9B, 0x95CF54, 0x96D094));
unsigned char &CClock::ms_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDA6, 0x95CF5F, 0x96D09F));
unsigned char &CClock::ms_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDC8, 0x95CF80, 0x96D0C0));

int addrof(CClock::GetGameClockMinutesUntil) = ADDRESS_BY_VERSION(0x4733F0, 0x4733F0, 0x4733F0);
int gaddrof(CClock::GetGameClockMinutesUntil) = GLOBAL_ADDRESS_BY_VERSION(0x4733F0, 0x4733F0, 0x4733F0);

int CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) {
    return plugin::CallAndReturnDynGlobal<int, unsigned char, unsigned char>(gaddrof(CClock::GetGameClockMinutesUntil), hours, minutes);
}

int addrof(CClock::GetIsTimeInRange) = ADDRESS_BY_VERSION(0x473420, 0x473420, 0x473420);
int gaddrof(CClock::GetIsTimeInRange) = GLOBAL_ADDRESS_BY_VERSION(0x473420, 0x473420, 0x473420);

bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char, unsigned char>(gaddrof(CClock::GetIsTimeInRange), hourA, hourB);
}

int addrof(CClock::Initialise) = ADDRESS_BY_VERSION(0x473370, 0x473370, 0x473370);
int gaddrof(CClock::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x473370, 0x473370, 0x473370);

void CClock::Initialise(unsigned int milisecondsPerGameMinute) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CClock::Initialise), milisecondsPerGameMinute);
}

int addrof(CClock::RestoreClock) = ADDRESS_BY_VERSION(0x473570, 0x473570, 0x473570);
int gaddrof(CClock::RestoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x473570, 0x473570, 0x473570);

void CClock::RestoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::RestoreClock));
}

int addrof(CClock::SetGameClock) = ADDRESS_BY_VERSION(0x4733C0, 0x4733C0, 0x4733C0);
int gaddrof(CClock::SetGameClock) = GLOBAL_ADDRESS_BY_VERSION(0x4733C0, 0x4733C0, 0x4733C0);

void CClock::SetGameClock(unsigned char hours, unsigned char minutes) {
    plugin::CallDynGlobal<unsigned char, unsigned char>(gaddrof(CClock::SetGameClock), hours, minutes);
}

int addrof(CClock::StoreClock) = ADDRESS_BY_VERSION(0x473540, 0x473540, 0x473540);
int gaddrof(CClock::StoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x473540, 0x473540, 0x473540);

void CClock::StoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::StoreClock));
}

int addrof(CClock::Update) = ADDRESS_BY_VERSION(0x473460, 0x473460, 0x473460);
int gaddrof(CClock::Update) = GLOBAL_ADDRESS_BY_VERSION(0x473460, 0x473460, 0x473460);

void CClock::Update() {
    plugin::CallDynGlobal(gaddrof(CClock::Update));
}
