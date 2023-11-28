/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "datBase.h"

namespace rage {
    class CPostFX : datBase {
    private:
        static CPostFX*& ms_pInstance;

    public:
        uint8_t field_16[16];
        uint8_t field_17;
        uint8_t field_604[587];
        uint32_t field_605;
        bool m_bUseHighDOF;
        uint8_t field_918[299];

    public:
        static CPostFX* GetInstance() {
            return ms_pInstance;
        }
    };

    VALIDATE_SIZE(CPostFX, 0x390);

}
