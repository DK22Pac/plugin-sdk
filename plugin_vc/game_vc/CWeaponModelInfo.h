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
VALIDATE_OFFSET(CWeaponModelInfo, m_pszAnimFileName, 0x44);
VALIDATE_OFFSET(CWeaponModelInfo, m_nAnimFileIndex, 0x44);
VALIDATE_SIZE(CWeaponModelInfo, 0x48);

struct WeaponModelStore {
    unsigned int m_nCount;
    CWeaponModelInfo m_sObject[37];

    ~WeaponModelStore();
};
VALIDATE_OFFSET(WeaponModelStore, m_nCount, 0x0);
VALIDATE_OFFSET(WeaponModelStore, m_sObject, 0x4);
VALIDATE_SIZE(WeaponModelStore, 0xA6C);
