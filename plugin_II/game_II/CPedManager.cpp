/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CPedManager.h"

CPedManager** gPedManager = (CPedManager**)0x5E5BBC;

CPedManager* GetPedManager() {
    return *gPedManager;
}
