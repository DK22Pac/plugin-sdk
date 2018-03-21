/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CFileLoader {
public:
    // load txd from file
    static RwTexDictionary *LoadTexDictionary(char const* filename);
    // save txd to file
    static void SaveTexDictionary(RwTexDictionary* dictionary, char const* filename);
    // copy textures from dictionary to baseDictionary
    static void AddTexDictionaries(RwTexDictionary* dictionary, RwTexDictionary* baseDictionary);
};