/*
    Plugin-SDK (Grand Theft Auto IV) spurce file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCredits.h"
#include "Patch.h"

static bool* CCredits__bCreditsGoingAddr;
bool& CCredits::bCreditsGoing = *(bool*)CCredits__bCreditsGoingAddr;

static uint32_t* CCredits__CreditsStartTime;
uint32_t& CCredits::CreditsStartTime = *(uint32_t*)CCredits__CreditsStartTime;

template<>
void plugin::InitPatterns<CCredits>() {
    CCredits__bCreditsGoingAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("C6 05 ? ? ? ? ? A3 ? ? ? ? C7 05", 2));
    CCredits__CreditsStartTime = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C6 05", 1));
}
