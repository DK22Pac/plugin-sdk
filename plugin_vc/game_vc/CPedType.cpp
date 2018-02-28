/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedType.h"

// variables
// Converted from CPedType* CPedType::ms_apPedType[23] 0xA0DA64
CPedType* (&CPedType::ms_apPedType)[23] = *(CPedType* (*)[23])*(int *)0xA0DA64;

// functions
// Converted from cdecl void CPedType::Initialise(void) 0x530F00
void CPedType::Initialise() {
    plugin::Call<0x530F00>();
}

// Converted from cdecl void CPedType::Shutdown(void) 0x530EC0
void CPedType::Shutdown() {
    plugin::Call<0x530EC0>();
}

// Converted from cdecl void CPedType::LoadPedData(void) 0x530B90
void CPedType::LoadPedData() {
    plugin::Call<0x530B90>();
}

// Converted from cdecl uint CPedType::FindPedType(char* pedName) 0x530860
unsigned int CPedType::FindPedType(char* pedName) {
    return plugin::CallAndReturn<unsigned int, 0x530860, char*>(pedName);
}

// Converted from cdecl uint CPedType::FindPedFlag(char* flagName) 0x530480
unsigned int CPedType::FindPedFlag(char* flagName) {
    return plugin::CallAndReturn<unsigned int, 0x530480, char*>(flagName);
}

// Converted from cdecl void CPedType::Save(uchar* bufferPointer, uint* structSize) 0x5303D0
void CPedType::Save(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x5303D0, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CPedType::Load(uchar* bufferPointer, uint structSize) 0x530340
void CPedType::Load(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x530340, unsigned char*, unsigned int>(bufferPointer, structSize);
}