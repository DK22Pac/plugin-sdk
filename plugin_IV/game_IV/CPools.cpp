/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"
#include "Patch.h"

CPool*& CPools::ms_pObjectsPool = *gpatternt(CPool*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC 56 6A 01", 1);
CPool*& CPools::ms_pTaskPool = *gpatternt(CPool*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC F3 0F 10 41", 1);
CPool*& CPools::ms_pPedPool = *gpatternt(CPool*, "A1 ? ? ? ? F3 0F 11 7C 24 ? F3 0F 11 74 24", 1);
CPool*& CPools::ms_pCamPool = *gpatternt(CPool*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC 8B 91", 1);
CPool*& CPools::ms_pVehiclePool = *gpatternt(CPool*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC E8", 1);
