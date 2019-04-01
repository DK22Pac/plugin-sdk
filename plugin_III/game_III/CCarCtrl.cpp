/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarCtrl.h"


bool CCarCtrl::JoinCarWithRoadSystemGotoCoors(CVehicle* vehicle, CVector arg1, bool arg2) {
    return plugin::CallAndReturn<bool, 0x41FA00, CVehicle*, CVector, bool>(vehicle, arg1, arg2);
}
