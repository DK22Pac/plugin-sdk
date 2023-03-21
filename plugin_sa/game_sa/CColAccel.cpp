/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColAccel.h"

bool CColAccel::IsCacheLoading() {
    return plugin::CallAndReturn<bool, 0x5B2AC0>();
}
