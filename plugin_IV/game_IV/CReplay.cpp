/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CReplay.h"
#include "Patch.h"

static bool* CReplay__ms_bSaving;
bool& CReplay::ms_bSaving = *(bool*)CReplay__ms_bSaving;

template<>
void plugin::InitPatterns<CReplay>() {
    CReplay__ms_bSaving = (bool*)plugin::patch::GetPointer(plugin::GetPattern("C6 05 ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8", 2));
}
