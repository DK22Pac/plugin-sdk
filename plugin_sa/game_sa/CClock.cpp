/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

PLUGIN_SOURCE_FILE

unsigned char(&CClock::daysInMonth)[12] = *reinterpret_cast<unsigned char(*)[12]>(GLOBAL_ADDRESS_BY_VERSION(0x8CCF24, 0, 0, 0, 0, 0));
bool &CClock::bClockHasBeenStored = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xB70144, 0, 0, 0, 0, 0));
unsigned short &CClock::ms_Stored_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xB70148, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_Stored_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB7014A, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_Stored_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB7014B, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_Stored_nGameClockDays = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB7014C, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_Stored_nGameClockMonths = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB7014D, 0, 0, 0, 0, 0));
unsigned char &CClock::CurrentDay = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB7014E, 0, 0, 0, 0, 0));
unsigned short &CClock::ms_nGameClockSeconds = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xB70150, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_nGameClockMinutes = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB70152, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_nGameClockHours = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB70153, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_nGameClockDays = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB70154, 0, 0, 0, 0, 0));
unsigned char &CClock::ms_nGameClockMonth = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB70155, 0, 0, 0, 0, 0));
unsigned int &CClock::ms_nLastClockTick = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xB70158, 0, 0, 0, 0, 0));
unsigned int &CClock::ms_nMillisecondsPerGameMinute = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xB7015C, 0, 0, 0, 0, 0));

int addrof(CClock::GetGameClockMinutesUntil) = ADDRESS_BY_VERSION(0x52CEB0, 0, 0, 0, 0, 0);
int gaddrof(CClock::GetGameClockMinutesUntil) = GLOBAL_ADDRESS_BY_VERSION(0x52CEB0, 0, 0, 0, 0, 0);

unsigned short CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) {
    return plugin::CallAndReturnDynGlobal<unsigned short, unsigned char, unsigned char>(gaddrof(CClock::GetGameClockMinutesUntil), hours, minutes);
}

int addrof(CClock::GetIsTimeInRange) = ADDRESS_BY_VERSION(0x52CEE0, 0, 0, 0, 0, 0);
int gaddrof(CClock::GetIsTimeInRange) = GLOBAL_ADDRESS_BY_VERSION(0x52CEE0, 0, 0, 0, 0, 0);

bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char, unsigned char>(gaddrof(CClock::GetIsTimeInRange), hourA, hourB);
}

int addrof(CClock::Initialise) = ADDRESS_BY_VERSION(0x52CD90, 0, 0, 0, 0, 0);
int gaddrof(CClock::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x52CD90, 0, 0, 0, 0, 0);

void CClock::Initialise(unsigned int milisecondsPerGameMinute) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CClock::Initialise), milisecondsPerGameMinute);
}

int addrof(CClock::NormaliseGameClock) = ADDRESS_BY_VERSION(0x52CDE0, 0, 0, 0, 0, 0);
int gaddrof(CClock::NormaliseGameClock) = GLOBAL_ADDRESS_BY_VERSION(0x52CDE0, 0, 0, 0, 0, 0);

void CClock::NormaliseGameClock() {
    plugin::CallDynGlobal(gaddrof(CClock::NormaliseGameClock));
}

int addrof(CClock::OffsetClockByADay) = ADDRESS_BY_VERSION(0x52D0B0, 0, 0, 0, 0, 0);
int gaddrof(CClock::OffsetClockByADay) = GLOBAL_ADDRESS_BY_VERSION(0x52D0B0, 0, 0, 0, 0, 0);

void CClock::OffsetClockByADay(unsigned int timeDirection) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CClock::OffsetClockByADay), timeDirection);
}

int addrof(CClock::RestoreClock) = ADDRESS_BY_VERSION(0x52D070, 0, 0, 0, 0, 0);
int gaddrof(CClock::RestoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x52D070, 0, 0, 0, 0, 0);

void CClock::RestoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::RestoreClock));
}

int addrof(CClock::SetGameClock) = ADDRESS_BY_VERSION(0x52D150, 0, 0, 0, 0, 0);
int gaddrof(CClock::SetGameClock) = GLOBAL_ADDRESS_BY_VERSION(0x52D150, 0, 0, 0, 0, 0);

void CClock::SetGameClock(unsigned char hours, unsigned char minutes, unsigned char day) {
    plugin::CallDynGlobal<unsigned char, unsigned char, unsigned char>(gaddrof(CClock::SetGameClock), hours, minutes, day);
}

int addrof(CClock::StoreClock) = ADDRESS_BY_VERSION(0x52D020, 0, 0, 0, 0, 0);
int gaddrof(CClock::StoreClock) = GLOBAL_ADDRESS_BY_VERSION(0x52D020, 0, 0, 0, 0, 0);

void CClock::StoreClock() {
    plugin::CallDynGlobal(gaddrof(CClock::StoreClock));
}

int addrof(CClock::Update) = ADDRESS_BY_VERSION(0x52CF10, 0, 0, 0, 0, 0);
int gaddrof(CClock::Update) = GLOBAL_ADDRESS_BY_VERSION(0x52CF10, 0, 0, 0, 0, 0);

void CClock::Update() {
    plugin::CallDynGlobal(gaddrof(CClock::Update));
}
