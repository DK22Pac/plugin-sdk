/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum PLUGIN_API ePedType
{
    PED_TYPE_PLAYER1 = 0,
    PED_TYPE_PLAYER2 = 1,
    PED_TYPE_PLAYER3 = 2,
    PED_TYPE_PLAYER4 = 3,
    PED_TYPE_CIVMALE = 4,
    PED_TYPE_CIVFEMALE = 5,
    PED_TYPE_COP = 6,
    PED_TYPE_GANG1 = 7, // Cubans
    PED_TYPE_GANG2 = 8, // Haitians
    PED_TYPE_GANG3 = 9, // Streetwannabe's
    PED_TYPE_GANG4 = 10, // Diaz
    PED_TYPE_GANG5 = 11, // Security Guards
    PED_TYPE_GANG6 = 12, // Bikers
    PED_TYPE_GANG7 = 13, // Vercetti
    PED_TYPE_GANG8 = 14, // Golfers
    PED_TYPE_GANG9 = 15,
    PED_TYPE_MEDIC = 16,
    PED_TYPE_FIRE = 17,
    PED_TYPE_CRIMINAL = 18,
    PED_TYPE_BUM = 19,
    PED_TYPE_PROSTITUTE = 20,
    PED_TYPE_SPECIAL = 21,
    PED_TYPE_DUMMY = 22,

    PED_TYPE_GANG_CUBAN = PED_TYPE_GANG1,
    PED_TYPE_GANG_HAITIAN = PED_TYPE_GANG2,
    PED_TYPE_GANG_STREET = PED_TYPE_GANG3,
    PED_TYPE_GANG_DIAZ = PED_TYPE_GANG4,
    PED_TYPE_GANG_SECURITY = PED_TYPE_GANG5,
    PED_TYPE_GANG_BIKER = PED_TYPE_GANG6,
    PED_TYPE_GANG_VERCETTI = PED_TYPE_GANG7,
    PED_TYPE_GANG_GOLFER = PED_TYPE_GANG8,
};
