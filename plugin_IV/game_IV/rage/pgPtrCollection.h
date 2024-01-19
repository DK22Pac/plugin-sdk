/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    template<typename T>
    class pgPtrCollection {
    private:
        T** data;
        uint16_t count;
        uint16_t size;

    public:
        T** Begin() {
            return data;
        }

        T** End() {
            return (data + count);
        }

        T* At(uint16_t index) {
            return data[index];
        }

        int16_t Count() {
            return count;
        }

        void Set(uint16_t index, T* ptr) {
            data[index] = ptr;
        }
    };
}
