/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

union tPoolObjectFlags {
    struct {
        unsigned char nId : 7;
        bool bEmpty : 1;
    };
private:
    unsigned char nValue;
public:
    unsigned char IntValue() { return nValue; }
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

class CPool {
private:
    void* m_pObjects;
    tPoolObjectFlags* m_byteMap;
    int32_t m_nSize;
    int32_t m_nEntrySize;
    int32_t m_nFirstFree;
    uint32_t m_nUsed;
    bool m_bOwnsAllocations;
    uint8_t pad[3];

public:
    CPool() = default;

    void* New();
    void Delete(void* object);
    void* GetAt();
    int32_t GetIndex();
};
