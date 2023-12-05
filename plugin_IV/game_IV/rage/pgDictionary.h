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
        pgDictionary<T>* m_Parent;
        int32_t m_RefCount;
        sysArray<uint32_t> m_Codes;
        sysArray<T> m_Entries;

    public:
        T* Get(int32_t hash);
    };

    VALIDATE_SIZE(pgDictionary<int32_t>, 0x20);
}
