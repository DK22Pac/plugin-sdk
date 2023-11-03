/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRadioHud.h"
#include "Patch.h"

static int32_t* CRadioHud__ms_nStateAddr;
int32_t& CRadioHud::ms_nState = *(int32_t*)CRadioHud__ms_nStateAddr;

template<>
void plugin::InitPatterns<CRadioHud>() {
    CRadioHud__ms_nStateAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? 8A C8", 2));
}
