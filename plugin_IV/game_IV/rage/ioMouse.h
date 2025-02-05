/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

namespace rage {
    class ioMouse {
    public:
        static int32_t& m_nX;
        static int32_t& m_nY;
        static int32_t& m_X;
        static int32_t& m_Y;

        static int32_t& m_LastButtons;
        static int32_t& m_Buttons;

    };
}
