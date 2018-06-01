/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "ePedType.h"
#include "CGangInfo.h"

class PLUGIN_API CGangs {
public:
    SUPPORTED_10US static bool(&GangAttackWithCops)[16]; // static bool GangAttackWithCops[16]
    SUPPORTED_10US static CGangInfo(&Gang)[10]; // static CGangInfo Gang[10]

    SUPPORTED_10US static signed int ChooseGangPedModel(short gangID);
    //! unused
    SUPPORTED_10US static bool GetWillAttackPlayerWithCops(ePedType gangID);
    SUPPORTED_10US static void Initialise();
    SUPPORTED_10US static void Load();
    SUPPORTED_10US static void Save();
    //! unused
    SUPPORTED_10US static void SetGangPedModelOverride(short gangID, signed char PedModelOverride);
    SUPPORTED_10US static void SetGangWeapons(short gangID, int weapID1, int weapID2, int weapID3);
    //! unused
    SUPPORTED_10US static void SetWillAttackPlayerWithCops(ePedType gangID, bool bAttackPlayerWithCops);
};

#include "meta/meta.CGangs.h"
