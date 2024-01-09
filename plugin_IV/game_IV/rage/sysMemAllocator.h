/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class sysMemAllocator {
    public:
        virtual ~sysMemAllocator() { plugin::CallVirtualMethod<0>(this, 0); }

        virtual void m_1() { plugin::CallVirtualMethod<1>(this); }
        virtual void* Allocate(size_t size, size_t align, int subAllocator) { plugin::CallVirtualMethod<2>(this, size, align, subAllocator); }
        virtual void Free(void* pointer) { plugin::CallVirtualMethod<3>(this, pointer); }
    };
}
