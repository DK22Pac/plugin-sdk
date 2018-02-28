/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntryExitManager.h"

// US-1.00 @ 0x0096A7D8
// EU-1.00 @ 0x0096A7D8
CPool<CEntryExit> *& CEntryExitManager::mp_poolEntryExits = *reinterpret_cast<CPool<CEntryExit> **>(0x0096A7D8);

// US-1.00 @ 0x0043F880
// EU-1.00 @ 0x0043F880 (securom)
void CEntryExitManager::Init(void) {
	plugin::Call<0x0043F880>();
}

// US-1.00 @ 0x00440B90
// EU-1.00 @ 0x00440B90 (securom)
void CEntryExitManager::Shutdown(void) {
	plugin::Call<0x00440B90>();
}

// US-1.00 @ 0x005D5860
// EU-1.00 @ 0x005D5860
bool CEntryExitManager::Save(void) {
	return plugin::CallAndReturn<bool, 0x005D5860>();
}

// US-1.00 @ 0x005D55C0
// EU-1.00 @ 0x005D55C0
bool CEntryExitManager::Load(void) {
	return plugin::CallAndReturn<bool, 0x005D55C0>();
}
