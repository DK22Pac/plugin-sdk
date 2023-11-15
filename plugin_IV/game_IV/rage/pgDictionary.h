/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "pgBase.h"
#include "sysArray.h"

namespace rage {
    template <typename T>
    class pgDictionary : public pgBase {
    public:
        pgDictionary<T>* parentDict;
        uint32_t count;
        sysArray<uint32_t> hashes;
        sysArray<T> data;

    public:
        T* Get(int32_t hash);
    };

    VALIDATE_SIZE(pgDictionary<void>, 0x20);
}
