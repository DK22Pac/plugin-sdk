/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedStats.h"

// variables
// Converted from CPedStats* CPedStats::ms_apPedStats[40] 0x938828
CPedStats* (&CPedStats::ms_apPedStats)[40] = *(CPedStats* (*)[40])*(int *)0x938828;

// functions
// Converted from cdecl void CPedStats::Initialise(void) 0x530260
void CPedStats::Initialise() {
    plugin::Call<0x530260>();
}

// Converted from cdecl void CPedStats::Shutdown(void) 0x530220
void CPedStats::Shutdown() {
    plugin::Call<0x530220>();
}

// Converted from cdecl void CPedStats::LoadPedStats(void) 0x530020
void CPedStats::LoadPedStats() {
    plugin::Call<0x530020>();
}

// Converted from cdecl uint CPedStats::GetPedStatType(char *pedStatName) 0x52FFC0
unsigned int CPedStats::GetPedStatType(char* pedStatName) {
    return plugin::CallAndReturn<unsigned int, 0x52FFC0, char*>(pedStatName);
}