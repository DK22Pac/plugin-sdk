/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheCarGenerators.h"

unsigned int MAX_NUM_CAR_GENERATORS = 500;

unsigned char &CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter = *(unsigned char *)0xC279D0;
unsigned char &CTheCarGenerators::ProcessCounter = *(unsigned char *)0xC279D1;
unsigned int &CTheCarGenerators::NumOfCarGenerators = *(unsigned int *)0xC279D4;
CSpecialPlateHandler &CTheCarGenerators::m_SpecialPlateHandler = *(CSpecialPlateHandler *)0xC279D8;
CCarGenerator *CTheCarGenerators::CarGeneratorArray = (CCarGenerator *)0xC27AD0;

// Converted from cdecl int CTheCarGenerators::CreateCarGenerator(float x,float y,float z,float angle,int modelId,short color1,short color2,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay,uchar iplId,uchar) 0x6F31A0
int CTheCarGenerators::CreateCarGenerator(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char arg13) {
    return plugin::CallAndReturn<int, 0x6F31A0, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char>(x, y, z, angle, modelId, color1, color2, forceSpawn, alarm, doorLock, minDelay, maxDelay, iplId, arg13);
}

// Converted from cdecl void CTheCarGenerators::Init(void) 0x6F3270
void CTheCarGenerators::Init() {
    plugin::Call<0x6F3270>();
}

// Converted from cdecl bool CTheCarGenerators::Load(void) 0x5D39B0
bool CTheCarGenerators::Load() {
    return plugin::CallAndReturn<bool, 0x5D39B0>();
}

// Converted from cdecl void CTheCarGenerators::Process(void) 0x6F3F40
void CTheCarGenerators::Process() {
    plugin::Call<0x6F3F40>();
}

// Converted from cdecl void CTheCarGenerators::RemoveCarGenerators(uchar iplId) 0x6F3240
void CTheCarGenerators::RemoveCarGenerators(unsigned char iplId) {
    plugin::Call<0x6F3240, unsigned char>(iplId);
}

// Converted from cdecl bool CTheCarGenerators::Save(void) 0x5D38C0
bool CTheCarGenerators::Save() {
    return plugin::CallAndReturn<bool, 0x5D38C0>();
}