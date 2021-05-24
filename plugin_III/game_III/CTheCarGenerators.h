/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCarGenerator.h"

class PLUGIN_API CTheCarGenerators {
public:
    SUPPORTED_10EN_11EN_STEAM static CCarGenerator(&CarGeneratorArray)[160]; // static CCarGenerator CarGeneratorArray[160]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &NumOfCarGenerators;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &CurrentActiveCount;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ProcessCounter;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &GenerateEvenIfPlayerIsCloseCounter;

    //! return index of CarGenerator in CTheCarGenerators::CarGeneratorArray
    SUPPORTED_10EN_11EN_STEAM static int CreateCarGenerator(float x, float y, float z, float angle, int modelId, short colorPrim, short colorSec, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void LoadAllCarGenerators(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void Process();
    SUPPORTED_10EN_11EN_STEAM static void SaveAllCarGenerators(unsigned char *buffer, unsigned int *size);
};

#include "meta/meta.CTheCarGenerators.h"
