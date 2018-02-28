/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

// Converted from thiscall bool CCarGenerator::CheckForBlockage(int modelId) 0x5A6FC0 
bool CCarGenerator::CheckForBlockage(int modelId) {
    return plugin::CallMethodAndReturn<bool, 0x5A6FC0, CCarGenerator *, int>(this, modelId);
}

// Converted from thiscall bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void) 0x5A6D00 
bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers() {
    return plugin::CallMethodAndReturn<bool, 0x5A6D00, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::DoInternalProcessing(void) 0x5A71C0 
void CCarGenerator::DoInternalProcessing() {
    plugin::CallMethod<0x5A71C0, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::Process(void) 0x5A7130 
void CCarGenerator::Process() {
    plugin::CallMethod<0x5A7130, CCarGenerator *>(this);
}

// Converted from thiscall unsigned int CCarGenerator::Setup(float x,float y,float z,float angle,int modelId,short primaryColor,short secondaryColor,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay) 0x5A70B0 
unsigned int CCarGenerator::Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A70B0, CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(this, x, y, z, angle, modelId, primaryColor, secondaryColor, forceSpawn, alarm, doorLock, minDelay, maxDelay);
}

// Converted from thiscall void CCarGenerator::SwitchOff(void) 0x5A7670 
void CCarGenerator::SwitchOff() {
    plugin::CallMethod<0x5A7670, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::SwitchOn(void) 0x5A7650 
void CCarGenerator::SwitchOn() {
    plugin::CallMethod<0x5A7650, CCarGenerator *>(this);
}