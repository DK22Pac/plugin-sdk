/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CIniFile.h"

float &CIniFile::PedNumberMultiplier = *(float *)0x8CDF14;
float &CIniFile::CarNumberMultiplier = *(float *)0x8CDF18;

// Converted from cdecl void CIniFile::LoadIniFile(void) 0x56D070
void CIniFile::LoadIniFile() {
    ((void(__cdecl *)())0x56D070)();
}