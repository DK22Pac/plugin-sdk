/*
    Plugin-SDK (Grand Theft Auto 3) header file
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
    PED_TYPE_GANG1 = 7, // Mafia (Leone Crime Family)
    PED_TYPE_GANG2 = 8, // Triads
    PED_TYPE_GANG3 = 9, // Diablos
    PED_TYPE_GANG4 = 10, // Yakuza
    PED_TYPE_GANG5 = 11, // Yardies
    PED_TYPE_GANG6 = 12, // Colombians
    PED_TYPE_GANG7 = 13, // Hoods
    PED_TYPE_GANG8 = 14,
    PED_TYPE_GANG9 = 15,
    PED_TYPE_MEDIC = 16,
    PED_TYPE_FIREMAN = 17,
    PED_TYPE_CRIMINAL = 18,
    PED_TYPE_UNUSED1 = 19,
    PED_TYPE_PROSTITUTE = 20,
    PED_TYPE_SPECIAL = 21,
    PED_TYPE_DUMMY = 22,
    PED_TYPE_UNUSED2 = 23,

    PED_TYPE_GANG_MAFIA = PED_TYPE_GANG1,
    PED_TYPE_GANG_TRIAD = PED_TYPE_GANG2,
    PED_TYPE_GANG_DIABLO = PED_TYPE_GANG3,
    PED_TYPE_GANG_YAKUZA = PED_TYPE_GANG4,
    PED_TYPE_GANG_YARDIE = PED_TYPE_GANG5,
    PED_TYPE_GANG_COLOMBIAN = PED_TYPE_GANG6,
    PED_TYPE_GANG_HOOD = PED_TYPE_GANG7
};
