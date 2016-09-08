/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerPed.h"

CPlayerPed::CPlayerPed(int playerId, bool arg1) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CPlayerPed*, int, bool))0x60D5B0)(this, playerId, arg1);
}