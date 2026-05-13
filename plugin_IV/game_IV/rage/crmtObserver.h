/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class crmtObserver {
    public:
        int32_t field_2;
        int32_t field_4;
        int32_t field_8;
        int32_t field_C;
    };
    VALIDATE_OFFSET(crmtObserver, field_2, 0x0);
    VALIDATE_OFFSET(crmtObserver, field_4, 0x4);
    VALIDATE_OFFSET(crmtObserver, field_8, 0x8);
    VALIDATE_OFFSET(crmtObserver, field_C, 0xC);
    VALIDATE_SIZE(crmtObserver, 0x10);
}
