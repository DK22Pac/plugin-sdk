/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

// Converted from thiscall void CCarGenerator::SwitchOff(void) 0x6F2E30
void CCarGenerator::SwitchOff() {
    plugin::CallMethod<0x6F2E30, CCarGenerator *>(this);
}

// Converted from cdecl int CCarGenerator::CalcNextGen(void) 0x6F2E40
int CCarGenerator::CalcNextGen() {
    return plugin::CallAndReturn<int, 0x6F2E40>();
}

// Converted from thiscall void CCarGenerator::Setup(float x,float y,float z,float angle,int modelId,short color1,short color2,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay,uchar iplId,uchar) 0x6F2E50
void CCarGenerator::Setup(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char ownedbyplayer) {
    plugin::CallMethod<0x6F2E50, CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char>(this, x, y, z, angle, modelId, color1, color2, forceSpawn, alarm, doorLock, minDelay, maxDelay, iplId, ownedbyplayer);
}

// Converted from thiscall bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void) 0x6F2F40
bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers() {
    return plugin::CallMethodAndReturn<bool, 0x6F2F40, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::SwitchOn(void) 0x6F32C0
void CCarGenerator::SwitchOn() {
    plugin::CallMethod<0x6F32C0, CCarGenerator *>(this);
}

// Converted from thiscall bool CCarGenerator::CheckForBlockage(int modelId) 0x6F32E0
bool CCarGenerator::CheckForBlockage(int modelId) {
    return plugin::CallMethodAndReturn<bool, 0x6F32E0, CCarGenerator *, int>(this, modelId);
}

// Converted from thiscall void CCarGenerator::DoInternalProcessing(void) 0x6F34D0
void CCarGenerator::DoInternalProcessing() {
    plugin::CallMethod<0x6F34D0, CCarGenerator *>(this);
}

// Converted from thiscall void CCarGenerator::Process(void) 0x6F3E90
void CCarGenerator::Process() {
    plugin::CallMethod<0x6F3E90, CCarGenerator *>(this);
}
