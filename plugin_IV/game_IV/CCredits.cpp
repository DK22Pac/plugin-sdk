/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCredits.h"
#include "Patch.h"

bool& CCredits::bCreditsGoing = *gpatternt(bool, "C6 05 ? ? ? ? ? A3 ? ? ? ? C7 05", 2);
uint32_t& CCredits::CreditsStartTime = *gpatternt(uint32_t, "A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C6 05", 1);

