/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
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
    PED_TYPE_PLAYER_NETWORK = 2,
    PED_TYPE_PLAYER_UNUSED = 3,
    PED_TYPE_CIVMALE = 4,
    PED_TYPE_CIVFEMALE = 5,
    PED_TYPE_COP = 6,
    PED_TYPE_GANG1 = 7, // Ballas
    PED_TYPE_GANG2 = 8, // Grove Street Families
    PED_TYPE_GANG3 = 9, // Vagos
    PED_TYPE_GANG4 = 10, // San Fiero Rifa
    PED_TYPE_GANG5 = 11, // Da Nang Boys
    PED_TYPE_GANG6 = 12, // Mafia
    PED_TYPE_GANG7 = 13, // Mountain Cloud Triads
    PED_TYPE_GANG8 = 14, // Forellis
    PED_TYPE_GANG9 = 15, // Sindaccos
    PED_TYPE_GANG10 = 16,
    PED_TYPE_DEALER = 17,
    PED_TYPE_MEDIC = 18,
    PED_TYPE_FIREMAN = 19,
    PED_TYPE_CRIMINAL = 20,
    PED_TYPE_BUM = 21,
    PED_TYPE_PROSTITUTE = 22,
    PED_TYPE_SPECIAL = 23,
    PED_TYPE_MISSION1 = 24,
    PED_TYPE_MISSION2 = 25,
    PED_TYPE_MISSION3 = 26,
    PED_TYPE_MISSION4 = 27,
    PED_TYPE_MISSION5 = 28,
    PED_TYPE_MISSION6 = 29,
    PED_TYPE_MISSION7 = 30,
    PED_TYPE_MISSION8 = 31,

    PED_TYPE_GANG_BALLA = PED_TYPE_GANG1,
    PED_TYPE_GANG_GROVE = PED_TYPE_GANG2,
    PED_TYPE_GANG_VAGO = PED_TYPE_GANG3,
    PED_TYPE_GANG_RIFA = PED_TYPE_GANG4,
    PED_TYPE_GANG_NANG = PED_TYPE_GANG5,
    PED_TYPE_GANG_MAFIA = PED_TYPE_GANG6,
    PED_TYPE_GANG_TRIAD = PED_TYPE_GANG7,
    PED_TYPE_GANG_FORELI = PED_TYPE_GANG8,
    PED_TYPE_GANG_SINDACO = PED_TYPE_GANG9,
};
