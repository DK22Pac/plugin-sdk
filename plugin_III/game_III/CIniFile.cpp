/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CIniFile.h"

float &CIniFile::PedNumberMultiplier = *(float *)0x6182F4;
float &CIniFile::CarNumberMultiplier = *(float *)0x6182F8;

// Converted from cdecl void CIniFile::LoadIniFile(void) 0x59BE20
void CIniFile::LoadIniFile() {
    ((void(__cdecl *)())0x59BE20)();
}
