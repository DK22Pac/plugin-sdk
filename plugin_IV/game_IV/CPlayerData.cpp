/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerData.h"

int32_t CPlayerData::GetWantedLevel() {
    return plugin::CallMethodAndReturnDyn<int32_t>(gpattern("8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 83 B9"), this);
}
