/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCivilianPed.h"

CCivilianPed::CCivilianPed(ePedType pedType, unsigned int modelIndex) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CCivilianPed *, ePedType, unsigned int))0x5DDB70)(this, pedType, modelIndex);
}