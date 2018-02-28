/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

// Converted from thiscall uint CCarGenerator::CalcNextGen(void) 0x5426C0 
unsigned int CCarGenerator::CalcNextGen() {
    return plugin::CallMethodAndReturn<unsigned int, 0x5426C0, CCarGenerator *>(this);
}

// Converted from thiscall bool CCarGenerator::CheckForBlockage(void) 0x542DF0 
bool CCarGenerator::CheckForBlockage() {
    return plugin::CallMethodAndReturn<bool, 0x542DF0, CCarGenerator *>(this);
}

// Converted from thiscall bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void) 0x542E50 
bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers() {
    return plugin::CallMethodAndReturn<bool, 0x542E50, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::DoInternalProcessing(void) 0x5426E0 
void CCarGenerator::DoInternalProcessing() {
    plugin::CallMethod<0x5426E0, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::Process(void) 0x542BB0 
void CCarGenerator::Process() {
    plugin::CallMethod<0x542BB0, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::Setup(float x,float y,float z,float angle,int modelId,short primaryColor,short secondaryColor,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay) 0x542C40
void CCarGenerator::Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay) {
    plugin::CallMethod<0x542C40, CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(this, x, y, z, angle, modelId, primaryColor, secondaryColor, forceSpawn, alarm, doorLock, minDelay, maxDelay);
}

// Converted from thiscall void CCarGenerator::SwitchOff(void) 0x542690 
void CCarGenerator::SwitchOff() {
    plugin::CallMethod<0x542690, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::SwitchOn(void) 0x5426A0 
void CCarGenerator::SwitchOn() {
    plugin::CallMethod<0x5426A0, CCarGenerator *>(this);
}
