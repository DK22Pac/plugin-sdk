/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedType.h"

CPedType* (&CPedType::ms_apPedType)[23] = *(CPedType* (*)[23])*(int *)0x941594;

// Converted from cdecl uint CPedType::FindPedFlag(char *flagName) 0x4EEF40
unsigned int CPedType::FindPedFlag(char* flagName) {
    return plugin::CallAndReturn<unsigned int, 0x4EEF40, char*>(flagName);
}

// Converted from cdecl uint CPedType::FindPedType(char *pedName) 0x4EEC10
unsigned int CPedType::FindPedType(char* pedName) {
    return plugin::CallAndReturn<unsigned int, 0x4EEC10, char*>(pedName);
}

// Converted from cdecl void CPedType::Initialise(void) 0x4EE7E0 
void CPedType::Initialise() {
    plugin::Call<0x4EE7E0>();
}

// Converted from cdecl void CPedType::Load(uchar *bufferPointer,uint structSize) 0x4EF3D0
void CPedType::Load(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x4EF3D0, unsigned char*, unsigned int>(bufferPointer, structSize);
}

// Converted from cdecl void CPedType::LoadPedData(void) 0x4EE8D0 
void CPedType::LoadPedData() {
    plugin::Call<0x4EE8D0>();
}

// Converted from cdecl void CPedType::Save(uchar *bufferPointer,uint *structSize) 0x4EF320
void CPedType::Save(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x4EF320, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CPedType::Shutdown(void) 0x4EE890 
void CPedType::Shutdown() {
    plugin::Call<0x4EE890>();
}
