/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CReferences.h"

CReference *CReferences::aRefs = (CReference *)0x70BBE0;
CReference **CReferences::pEmptyList = (CReference **)0x8F1AF8;

// Converted from cdecl void CReferences::Init(void) 0x4A7350 
void CReferences::Init() {
    plugin::Call<0x4A7350>();
}

// Converted from cdecl void CReferences::PruneAllReferencesInWorld(void) 0x4A75A0 
void CReferences::PruneAllReferencesInWorld() {
    plugin::Call<0x4A75A0>();
}

// Converted from cdecl void CReferences::RemoveReferencesToPlayer(void) 0x4A7570 
void CReferences::RemoveReferencesToPlayer() {
    plugin::Call<0x4A7570>();
}
