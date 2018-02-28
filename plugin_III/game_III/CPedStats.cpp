/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedStats.h"

CPedStats* (&CPedStats::ms_apPedStats)[35] = *(CPedStats* (*)[35])*(int *)0x9404D4;

// Converted from cdecl uint CPedStats::GetPedStatType(char *pedStatName) 0x4EF780
unsigned int CPedStats::GetPedStatType(char* pedStatName) {
    return plugin::CallAndReturn<unsigned int, 0x4EF780, char*>(pedStatName);
}

// Converted from cdecl void CPedStats::Initialise(void) 0x4EF460 
void CPedStats::Initialise() {
    plugin::Call<0x4EF460>();
}

// Converted from cdecl void CPedStats::LoadPedStats(void) 0x4EF580 
void CPedStats::LoadPedStats() {
    plugin::Call<0x4EF580>();
}

// Converted from cdecl void CPedStats::Shutdown(void) 0x4EF540 
void CPedStats::Shutdown() {
    plugin::Call<0x4EF540>();
}
