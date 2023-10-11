/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBaseDC.h"

class CRAGE_SetRenderStateDC : public CBaseDC {
public:
    CRAGE_SetRenderStateDC(int32_t state, int32_t value);
};
