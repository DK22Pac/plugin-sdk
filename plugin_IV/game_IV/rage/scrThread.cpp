/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "scrThread.h"

rage::sysArray<rage::scrThread*>& rage::scrThread::sm_Threads = *gpatternt(rage::sysArray<rage::scrThread*>, "8B 15 ? ? ? ? 5E 85 D2 74 0B", 2);

rage::scrThread*& rage::s_CurrentThread = *gpatternt(rage::scrThread*, "A1 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 44 24 04 56", 1);

rage::scrCmd rage::scr_resolver(uint32_t hash) {
    return plugin::CallStdAndReturnDyn<rage::scrCmd>(gpattern("56 8B 35 ? ? ? ? 85 F6 75 06 33 C0 5E C2 04 00 53 57 8B 7C 24 10 33 D2 8B C7 F7 F6 8B 1D ? ? ? ? 8B CF 8B 04 D3 3B C7 74 19 8D 64 24 00 85 C0 74 15 D1 E9 41 8D 04 11 33 D2 F7 F6 8B 04 D3 3B C7 75 EB 85 C0 75 08 5F 5B 33 C0 5E C2 04 00 8B 44 D3 04 5F 5B 5E C2 04 00 CC CC CC CC CC 56 8B 35 ? ? ? ? 85 F6 75 11 FF 35 ? ? ? ? E8 ? ? ? ? 8B 35 ? ? ? ? 39 35 ? ? ? ? 75 06 32 C0 5E C2 08 00 53 57 8B 7C 24 10 33 D2 8B C7 F7 F6 8B 1D ? ? ? ? 8B CF 8B 04 D3 83 F8 01 76 16 3B C7 74 30 D1 E9 41 8D 04 11 33 D2 F7 F6 8B 04 D3 83 F8 01 77 EA 8B 4C 24 14 89 3C D3 A1 ? ? ? ? 5F 89 4C D0 04 FF 05 ? ? ? ? 5B B0 01 5E C2 08 00 5F 5B 32 C0 5E C2 08 00 CC CC CC CC CC CC CC CC CC CC CC CC CC CC 53 56"), hash);
}

rage::scrThread* rage::scrThread::GetActiveThread() {
    return plugin::CallAndReturnDyn<rage::scrThread*>(gpattern("A1 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 44 24 04 56"));
}

rage::scrThread* rage::scrThread::GetThread(rage::scrThreadId id) {
    return plugin::CallAndReturnDyn<rage::scrThread*>(gpattern("8B 54 24 04 85 D2 75 03"), id);
}

void rage::scrThread::RegisterCommand(uint32_t hashCode, void (*handler)()) {
    plugin::CallDyn(gpattern("FF 74 24 08 FF 74 24 08 E8 ? ? ? ? 84 C0 75 13"), hashCode, handler);
}
