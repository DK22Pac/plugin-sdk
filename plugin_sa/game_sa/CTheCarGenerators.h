/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCarGenerator.h"
#include "CSpecialPlateHandler.h"

extern unsigned int MAX_NUM_CAR_GENERATORS; // default 500

class CTheCarGenerators {
public:
    static unsigned char &GenerateEvenIfPlayerIsCloseCounter;
    static unsigned char &ProcessCounter;
    static unsigned int &NumOfCarGenerators;
    static CSpecialPlateHandler &m_SpecialPlateHandler;
    static CCarGenerator *CarGeneratorArray; // static CCarGenerator CarGeneratorArray[MAX_NUM_CAR_GENERATORS]

    static int CreateCarGenerator(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char arg13);
    static void Init();
    static bool Load();
    static void Process();
    static void RemoveCarGenerators(unsigned char iplId);
    static bool Save();
};