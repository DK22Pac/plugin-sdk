/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheCarGenerators.h"

CCarGenerator *CTheCarGenerators::CarGeneratorArray = (CCarGenerator*)0x87CB18;
int &CTheCarGenerators::NumOfCarGenerators = *(int*)0x8E2C1C;
int &CTheCarGenerators::CurrentActiveCount = *(int*)0x8F2C5C;
unsigned char &CTheCarGenerators::ProcessCounter = *(unsigned char*)0x95CDAF;
char &CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter = *(char*)0x95CDC6;

// Converted from thiscall void CTheCarGenerators::CTheCarGenerators(void) 0x543350
CTheCarGenerators::CTheCarGenerators() {
    plugin::CallMethod<0x543350, CTheCarGenerators *>(this);
}

// Converted from cdecl unsigned int CTheCarGenerators::CreateCarGenerator(float x,float y,float z,float angle,int modelId,short primaryColor,short secondaryColor,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay) 0x542FC0
unsigned int CTheCarGenerators::CreateCarGenerator(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay) {
    return plugin::CallAndReturn<unsigned int, 0x542FC0, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(x, y, z, angle, modelId, primaryColor, secondaryColor, forceSpawn, alarm, doorLock, minDelay, maxDelay);
}

// Converted from cdecl void CTheCarGenerators::Init(void) 0x543020 
void CTheCarGenerators::Init() {
    plugin::Call<0x543020>();
}

// Converted from cdecl void CTheCarGenerators::LoadAllCarGenerators(uchar *bufferPointer,uint structSize) 0x5431E0
void CTheCarGenerators::LoadAllCarGenerators(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x5431E0, unsigned char*, unsigned int>(bufferPointer, structSize);
}

// Converted from cdecl void CTheCarGenerators::Process(void) 0x542F40 
void CTheCarGenerators::Process() {
    plugin::Call<0x542F40>();
}

// Converted from cdecl void CTheCarGenerators::SaveAllCarGenerators(uchar *bufferPointer,uint *structSize) 0x543050
void CTheCarGenerators::SaveAllCarGenerators(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x543050, unsigned char*, unsigned int*>(bufferPointer, structSize);
}
