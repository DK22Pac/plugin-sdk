/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVirtualBase.h"

class CBaseDC {
public:
    static int32_t& m_currCommandIdx;

public:
    uint32_t field_1;

public:
    void* operator new(std::size_t size);
    static void InitStatic(CBaseDC* dc);

public:
    void Init();

    virtual ~CBaseDC() { plugin::CallVirtualMethod<0, CBaseDC*, uint8_t>(this, 0); }
    virtual void Execute() { plugin::CallVirtualMethod<1>(this); }
    virtual int32_t GetSize() { return plugin::CallVirtualMethodAndReturn<int32_t, 2>(this); }
    virtual void m_3() { plugin::CallVirtualMethod<3>(this); }
    virtual void m_4() { plugin::CallVirtualMethod<4>(this); }
    virtual void m_5() { plugin::CallVirtualMethod<5>(this); }
};

VALIDATE_SIZE(CBaseDC, 0x8);
