/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSimpleModelInfo.h"

class CWeaponModelInfo : public CSimpleModelInfo {
public:
    union {
        char *m_pszAnimFileName;
        int m_nAnimFileIndex;
    };
    
    //funcs
    int GetWeaponInfo();
    void Init();
    int SetWeaponInfo(int weaponType);
};

VALIDATE_SIZE(CWeaponModelInfo, 0x48);

struct WeaponModelStore {
    unsigned int m_nCount;
    CWeaponModelInfo m_sObject[37];

    ~WeaponModelStore();
};
