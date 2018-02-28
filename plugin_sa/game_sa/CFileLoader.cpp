/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileLoader.h"

// Converted from RwTexDictionary* CFileLoader::LoadTexDictionary(char const*filename) 0x5B3860
RwTexDictionary *CFileLoader::LoadTexDictionary(char const* filename) {
    return ((RwTexDictionary *(__cdecl *)(char const*))0x5B3860)(filename);
}

// Converted from cdecl void CFileLoader::SaveTexDictionary(RwTexDictionary *,char const*filename) 0x5B38C0
void CFileLoader::SaveTexDictionary(RwTexDictionary* dictionary, char const* filename) {
    ((void(__cdecl *)(RwTexDictionary*, char const*))0x5B38C0)(dictionary, filename);
}

// Converted from cdecl void CFileLoader::AddTexDictionaries(RwTexDictionary *dictionary,RwTexDictionary *baseDictionary) 0x5B3910
void CFileLoader::AddTexDictionaries(RwTexDictionary* dictionary, RwTexDictionary* baseDictionary) {
    ((void(__cdecl *)(RwTexDictionary*, RwTexDictionary*))0x5B3910)(dictionary, baseDictionary);
}