/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CObjectScanner {
    int32_t field_0;
    int32_t field_4;
    int32_t field_8;
};

VALIDATE_SIZE(CObjectScanner, 0xC);

class CEntityScanner {
public:
    CObjectScanner field_4;
    int32_t field_10;
    int32_t m_nCount;
    class CEntity* m_apEntities[16];
    int32_t field_58;

public:
    virtual ~CEntityScanner() {}
};

VALIDATE_SIZE(CEntityScanner, 0x5C);
