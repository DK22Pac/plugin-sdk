#include "CPlayerPed.h"

CPlayerPed::CPlayerPed(int playerId, bool arg1) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CPlayerPed*, int, bool))0x60D5B0)(this, playerId, arg1);
}