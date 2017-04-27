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
Bool CEntryExitManager::Save(void) {
	return plugin::CallAndReturn<Bool, 0x005D5860>();
}

// US-1.00 @ 0x005D55C0
// EU-1.00 @ 0x005D55C0
Bool CEntryExitManager::Load(void) {
	return plugin::CallAndReturn<Bool, 0x005D55C0>();
}
