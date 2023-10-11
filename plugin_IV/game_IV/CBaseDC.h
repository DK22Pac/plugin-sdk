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
    static int32_t& TotalDrawCommands;

public:
    uint32_t field_1;

public:
    void* operator new(std::size_t size);
    static void Append(CBaseDC* dc);

public:
    void Append();

    virtual ~CBaseDC();
    virtual void DrawCommand() {}
    virtual int32_t GetSize() {
        return sizeof(CBaseDC); 
    }

    virtual void m_4() {}
    virtual void m_5() {}
    virtual void m_6() {}
};

VALIDATE_SIZE(CBaseDC, 0x8);
