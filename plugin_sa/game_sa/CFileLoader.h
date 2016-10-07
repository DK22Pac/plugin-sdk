/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "game_sa\RenderWare.h"

class CFileLoader {
public:
    // load txd from file
    static RwTexDictionary *LoadTexDictionary(char const* filename);
    // save txd to file
    static void SaveTexDictionary(RwTexDictionary* dictionary, char const* filename);
    // copy textures from dictionary to baseDictionary
    static void AddTexDictionaries(RwTexDictionary* dictionary, RwTexDictionary* baseDictionary);
};