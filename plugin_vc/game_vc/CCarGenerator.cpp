/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

// Converted from thiscall bool CCarGenerator::CheckForBlockage(int) 0x5A6FC0 
bool CCarGenerator::CheckForBlockage(int arg0) {
    return plugin::CallMethodAndReturn<bool, 0x5A6FC0, CCarGenerator *, int>(this, arg0);
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

// Converted from thiscall int CCarGenerator::Setup(float,float,float,float,int,short,short,uchar,uchar,uchar,ushort,ushort) 0x5A70B0 
int CCarGenerator::Setup(float arg0, float arg1, float arg2, float arg3, int arg4, short arg5, short arg6, unsigned char arg7, unsigned char arg8, unsigned char arg9, unsigned short arg10, unsigned short arg11) {
    return plugin::CallMethodAndReturn<int, 0x5A70B0, CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// Converted from thiscall void CCarGenerator::SwitchOff(void) 0x5A7670 
void CCarGenerator::SwitchOff() {
    plugin::CallMethod<0x5A7670, CCarGenerator *>(this);
}

// Converted from thiscall int CCarGenerator::SwitchOn(void) 0x5A7650 
int CCarGenerator::SwitchOn() {
    return plugin::CallMethodAndReturn<int, 0x5A7650, CCarGenerator *>(this);
}