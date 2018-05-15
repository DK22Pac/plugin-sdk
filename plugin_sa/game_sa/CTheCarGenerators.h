/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSpecialPlateHandler.h"
#include "CCarGenerator.h"

class PLUGIN_API CTheCarGenerators {
public:
    SUPPORTED_10US static unsigned char &GenerateEvenIfPlayerIsCloseCounter;
    SUPPORTED_10US static unsigned char &ProcessCounter;
    SUPPORTED_10US static unsigned int &NumOfCarGenerators;
    SUPPORTED_10US static CSpecialPlateHandler &m_SpecialPlateHandler;
    SUPPORTED_10US static CCarGenerator *CarGeneratorArray; // static CCarGenerator CarGeneratorArray[500]

    //! return index of CarGenerator in CTheCarGenerators::CarGeneratorArray
    SUPPORTED_10US static signed int CreateCarGenerator(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm_chances, unsigned char doorLock_chances, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char bOwnedbyplayer);
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static void Load();
    SUPPORTED_10US static void Process();
    SUPPORTED_10US static void RemoveCarGenerators(unsigned char IplID);
    SUPPORTED_10US static void Save();
};

#include "meta/meta.CTheCarGenerators.h"
