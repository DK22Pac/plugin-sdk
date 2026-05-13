/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class fiDevice;

    class fiStream {
    public:
        const fiDevice* m_Device;
        void* m_Handle;
        char m_Name[160];
        uint8_t* m_Buffer;
        uint32_t m_Start;
        int32_t m_Offset;
        int32_t m_Length;
        int32_t m_Size;

    public:

    };
    VALIDATE_OFFSET(fiStream, m_Device, 0x0);
    VALIDATE_OFFSET(fiStream, m_Handle, 0x4);
    VALIDATE_OFFSET(fiStream, m_Name, 0x8);
    VALIDATE_OFFSET(fiStream, m_Buffer, 0xA8);
    VALIDATE_OFFSET(fiStream, m_Start, 0xAC);
    VALIDATE_OFFSET(fiStream, m_Offset, 0xB0);
    VALIDATE_OFFSET(fiStream, m_Length, 0xB4);
    VALIDATE_OFFSET(fiStream, m_Size, 0xB8);
    VALIDATE_SIZE(fiStream, 0xBC);
}
