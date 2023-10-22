/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "common.h"
#include "Patch.h"
#include "CSprite2d.h"

static eGameEpisode* gGameEpisodeAddr = nullptr;
eGameEpisode& gGameEpisode = *(eGameEpisode*)gGameEpisodeAddr;

static uint32_t CPlayerPed__FindPlayerPedAddr;
CPlayerPed* FindPlayerPed(int32_t id) {
    return plugin::CallAndReturnDyn<CPlayerPed*>(CPlayerPed__FindPlayerPedAddr, id);
}

static uint32_t CPlayerPed__FindPlayerVehicleAddr;
CVehicle* FindPlayerVehicle(int32_t id) {
    return plugin::CallAndReturnDyn<CVehicle*>(CPlayerPed__FindPlayerVehicleAddr, id);
}

template<>
void plugin::InitPatterns<common>() {
    gGameEpisodeAddr = (eGameEpisode*)plugin::patch::GetPointer(plugin::GetPattern("83 3D ? ? ? ? ? 75 0F 6A 02", 2));
    CPlayerPed__FindPlayerPedAddr = plugin::GetPattern("8B 44 24 04 85 C0 75 18 A1", 0);
    CPlayerPed__FindPlayerVehicleAddr = plugin::GetPattern("8B 44 24 04 85 C0 75 15", 0);

}
