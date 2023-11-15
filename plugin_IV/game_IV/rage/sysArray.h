/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "pgPtr.h"

namespace rage {
    template<typename T>
    class sysArray {
    private:
        pgPtr<T>* data;
        int16_t count;
        int16_t size;

    public:
        pgPtr<T> operator[](uint32_t index) {
            return data[index];
        }

        pgPtr<T> At(uint32_t index) {
            return data[index];
        }

        int16_t Size() {
            return size;
        }

        int16_t Count() {
            return count;
        }
    };
}
