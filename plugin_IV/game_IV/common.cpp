/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "common.h"
#include "CSprite2d.h"

int32_t& gGameEpisode = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? 68", 2);

static uint32_t CPlayerPed__FindPlayerPedAddr;
CPlayerPed* FindPlayerPed(int32_t id) {
    return plugin::CallAndReturnDyn<CPlayerPed*>(gpattern("8B 44 24 04 85 C0 75 18 A1"), id);
}

static uint32_t CPlayerPed__FindPlayerVehicleAddr;
CVehicle* FindPlayerVehicle(int32_t id) {
    return plugin::CallAndReturnDyn<CVehicle*>(gpattern("8B 44 24 04 85 C0 75 15"), id);
}
