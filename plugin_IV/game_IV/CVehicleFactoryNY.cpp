/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleFactoryNY.h"

CVehicleFactoryNY*& CVehicleFactoryNY::ms_pInstance = *gpatternt(CVehicleFactoryNY*, "8B 0D ? ? ? ? 6A 00 8B 01 8D 54 24 34 8B 40 04", 2);
