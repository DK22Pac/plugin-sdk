/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CPed;

class CChar {
public:

public:
    CPed* CreatePed(CEncodedVector pos, char remap, int rotation);
    CPed* FindPed(int id);
};

extern CChar** gCharManager;
extern CChar* GetCharManager();
