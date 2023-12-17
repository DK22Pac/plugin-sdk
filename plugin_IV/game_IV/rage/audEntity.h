/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "audSound.h"
#include "audSoundInitParams.h"

namespace rage {
    class audEntity {
    public:
        uint16_t m_ControllerEntityId;
        int16_t m_EntityVariableBlock;

    public:
        virtual ~audEntity() { plugin::CallVirtualMethod<0>(this, 0); }
        void Init() { plugin::CallVirtualMethod<1>(this); }
        void Shutdown() { plugin::CallVirtualMethod<2>(this); }

        bool IsUnpausable() { return plugin::CallVirtualMethodAndReturn<bool, 4>(this); }
        void PostUpdate() { plugin::CallVirtualMethod<5>(this); }

    public:
        void CreateSound_LocalReference(const char* name, rage::audSound* sound, audSoundInitParams* initParams, int32_t arg4, int32_t arg5, int32_t arg6);
    };
}
