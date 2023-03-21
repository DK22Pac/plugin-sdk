/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CCarManager.h"

CCarManager** gCarManager = (CCarManager**)0x5E4CA0;

CCarManager* GetCarManager() {
    return *gCarManager;
}
