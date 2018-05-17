/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

PLUGIN_SOURCE_FILE

unsigned int &CClock::ms_nMillisecondsPerGameMinute = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F2B4, 0x97F2BC, 0x97E2BC));
unsigned int &CClock::ms_nLastClockTick = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0FDEC, 0xA0FDF4, 0xA0EDF4));
unsigned short &CClock::ms_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A3C, 0xA10A44, 0xA0FA44));
unsigned short &CClock::ms_Stored_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A5E, 0xA10A66, 0xA0FA66));
unsigned char &CClock::ms_Stored_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B33, 0xA10B3B, 0xA0FB3C));
bool &CClock::bClockHasBeenStored = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B3C, 0xA10B44, 0xA0FB45));
unsigned char &CClock::ms_Stored_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B5D, 0xA10B66, 0xA0FB67));
unsigned char &CClock::ms_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B6B, 0xA10B74, 0xA0FB75));
unsigned char &CClock::ms_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B92, 0xA10B9B, 0xA0FB9C));

int addrof(CClock::GetGameClockMinutesUntil) = ADDRESS_BY_VERSION(0x487130, 0x487130, 0x487010);
int gaddrof(CClock::GetGameClockMinutesUntil) = GLOBAL_ADDRESS_BY_VERSION(0x487130, 0x487130, 0x487010);

unsigned int CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) {
    return plugin::CallAndReturnDynGlobal<unsigned int, unsigned char, unsigned char>(gaddrof(CClock::GetGameClockMinutesUntil), hours, minutes);
}

int addrof(CClock::GetIsTimeInRange) = ADDRESS_BY_VERSION(0x4870F0, 0x4870F0, 0x486FD0);
int gaddrof(CClock::GetIsTimeInRange) = GLOBAL_ADDRESS_BY_VERSION(0x4870F0, 0x4870F0, 0x486FD0);

bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char, unsigned char>(gaddrof(CClock::GetIsTimeInRange), hourA, hourB);
}

int addrof(CClock::Initialise) = ADDRESS_BY_VERSION(0x4871B0, 0x4871B0, 0x487090);
int gaddrof(CClock::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4871B0, 0x4871B0, 0x487090);

void CClock::Initialise(unsigned int milisecondsPerGameMinute) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CClock::Initialise), milisecondsPerGameMinute);
}

int addrof(CClock::RestoreClock) = ADDRESS_BY_VERSION(0x486FB0, 0x486FB0, 0x486E90);
int gaddrof(CClock::RestoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x486FB0, 0x486FB0, 0x486E90);

void CClock::RestoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::RestoreClock));
}

int addrof(CClock::SetGameClock) = ADDRESS_BY_VERSION(0x487160, 0x487160, 0x487040);
int gaddrof(CClock::SetGameClock) = GLOBAL_ADDRESS_BY_VERSION(0x487160, 0x487160, 0x487040);

void CClock::SetGameClock(unsigned char hours, unsigned char minutes) {
    plugin::CallDynGlobal<unsigned char, unsigned char>(gaddrof(CClock::SetGameClock), hours, minutes);
}

int addrof(CClock::StoreClock) = ADDRESS_BY_VERSION(0x486FE0, 0x486FE0, 0x486EC0);
int gaddrof(CClock::StoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x486FE0, 0x486FE0, 0x486EC0);

void CClock::StoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::StoreClock));
}

int addrof(CClock::Update) = ADDRESS_BY_VERSION(0x487010, 0x487010, 0x486EF0);
int gaddrof(CClock::Update) = GLOBAL_ADDRESS_BY_VERSION(0x487010, 0x487010, 0x486EF0);

void CClock::Update() {
    plugin::CallDynGlobal(gaddrof(CClock::Update));
}
