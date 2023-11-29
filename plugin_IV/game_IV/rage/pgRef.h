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
    class pgRef {
    private:
        T* ptr;

    public:
        pgRef() : ptr(nullptr) {}

        pgRef& operator=(T* other) {
            this->ptr = other;
            return *this;
        }

        explicit operator bool() const {
            return this->ptr != nullptr;
        }

        T* Get() const {
            return this->ptr;
        }
    };
}
