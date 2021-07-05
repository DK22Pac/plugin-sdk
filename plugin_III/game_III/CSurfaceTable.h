/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColPoint.h"

enum PLUGIN_API eAdhesionGroup : unsigned char {
    ADHESIVE_RUBBER = 0,
    ADHESIVE_HARD = 1,
    ADHESIVE_ROAD = 2,
    ADHESIVE_LOOSE = 3,
    ADHESIVE_WET = 4,
    NUMADHESIVEGROUPS = 5
};

enum PLUGIN_API eSurfaceType : unsigned char {
    SURFACE_DEFAULT = 0,
    SURFACE_TARMAC = 1,
    SURFACE_GRASS = 2,
    SURFACE_GRAVEL = 3,
    SURFACE_MUD_DRY = 4,
    SURFACE_PAVEMENT = 5,
    SURFACE_CAR = 6,
    SURFACE_GLASS = 7,
    SURFACE_TRANSPARENT_CLOTH = 8,
    SURFACE_GARAGE_DOOR = 9,
    SURFACE_CAR_PANEL = 10,
    SURFACE_THICK_METAL_PLATE = 11,
    SURFACE_SCAFFOLD_POLE = 12,
    SURFACE_LAMP_POST = 13,
    SURFACE_FIRE_HYDRANT = 14,
    SURFACE_GIRDER = 15,
    SURFACE_METAL_CHAIN_FENCE = 16,
    SURFACE_PED = 17,
    SURFACE_SAND = 18,
    SURFACE_WATER = 19,
    SURFACE_WOOD_CRATES = 20,
    SURFACE_WOOD_BENCH = 21,
    SURFACE_WOOD_SOLID = 22,
    SURFACE_RUBBER = 23,
    SURFACE_PLASTIC = 24,
    SURFACE_HEDGE = 25,
    SURFACE_STEEP_CLIFF = 26,
    SURFACE_CONTAINER = 27,
    SURFACE_NEWS_VENDOR = 28,
    SURFACE_WHEELBASE = 29,
    SURFACE_CARDBOARDBOX = 30,
    SURFACE_TRANSPARENT_STONE = 31,
    SURFACE_METAL_GATE = 32,
    SURFACE_SAND_BEACH = 33,
    SURFACE_CONCRETE_BEACH = 34
};

inline bool IsSeeThrough(unsigned char surfaceType) {
    switch (surfaceType)
	    case SURFACE_GLASS:
        case SURFACE_TRANSPARENT_CLOTH:
        case SURFACE_METAL_CHAIN_FENCE:
        case SURFACE_TRANSPARENT_STONE:
        case SURFACE_SCAFFOLD_POLE:
            return true;
    return false;
}

class PLUGIN_API CSurfaceTable {
public:
    SUPPORTED_10EN_11EN_STEAM static float(&ms_aAdhesiveLimitTable)[5][5]; // static float ms_aAdhesiveLimitTable[5][5]

    SUPPORTED_10EN_11EN_STEAM static int GetAdhesionGroup(unsigned char surfaceType);
    SUPPORTED_10EN_11EN_STEAM static float GetAdhesiveLimit(CColPoint &colPoint);
    SUPPORTED_10EN_11EN_STEAM static float GetWetMultiplier(unsigned char surfaceType);
    SUPPORTED_10EN_11EN_STEAM static void Initialise(char const *fileName);
};

#include "meta/meta.CSurfaceTable.h"
