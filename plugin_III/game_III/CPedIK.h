/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "LimbOrienation.h"

class CPed;

#pragma pack(push, 4)
class CPedIK {
public:
    CPed *m_pPed;
    LimbOrienation m_TorsoOrien; 
    int dwordC; 
    int dword10; 
    int dword14; 
    int dword18; 
    int dword1C; 
    int dword20; 
    unsigned int m_flags;
};
#pragma pack(pop)

VALIDATE_SIZE(CPedIK, 0x28);