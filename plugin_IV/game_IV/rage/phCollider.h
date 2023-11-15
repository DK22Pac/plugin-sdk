/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rage/Vector3.h"

namespace rage {
    class phCollider {
    public:
        uint8_t field_100[268];
        Vector3 m_vVelocity;

    public:
        virtual ~phCollider() {}
    };
}
