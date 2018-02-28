/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCarGenerator.h"

class CTheCarGenerators {
public:
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    short field_4;
    char field_6;
    char field_7;
    short field_8;
    char field_A;
    char field_B;
    short m_nNumOfCarGenerators;
    char field_E;
    char field_F;
    short m_nCurrentActiveCount;
    char field_12;
    char field_13;
    char m_nProcessCounter;
    char m_nGenerateEvenIfPlayerIsCloseCounter;
    short field_16;
    unsigned int m_nSizeCarGeneratorArray;
    CCarGenerator m_aCarGeneratorArray[160];
    
    //variables
    static CCarGenerator *CarGeneratorArray; // [160]
    static int &NumOfCarGenerators;
    static int &CurrentActiveCount; 
    static unsigned char &ProcessCounter;
    static char &GenerateEvenIfPlayerIsCloseCounter;

    //funcs
    CTheCarGenerators();
    static unsigned int CreateCarGenerator(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay);
    static void Init();
    static void LoadAllCarGenerators(unsigned char* bufferPointer, unsigned int structSize);
    static void Process();                          
    static void SaveAllCarGenerators(unsigned char* bufferPointer, unsigned int* structSize);
};

VALIDATE_SIZE(CTheCarGenerators, 0x2D1C);
