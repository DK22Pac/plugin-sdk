/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "grmShader.h"

namespace rage {
    class grmShaderFactory {
    private:
        static grmShaderFactory*& sm_Instance; // <- grmShaderFactoryStandard

    public:
        virtual ~grmShaderFactory() { plugin::CallVirtualMethod<0>(this, 0); }

    public:
        static grmShaderFactory* GetInstance() {
            return sm_Instance;
        }
    };
    VALIDATE_SIZE(grmShaderFactory, 0x4);

    class grmShaderFactoryStandard : public grmShaderFactory {
    public:
        grmShader* Create(const char* name, int32_t arg2, int32_t arg3) { return plugin::CallVirtualMethodAndReturn<grmShader*, 1>(this, name, arg2, arg3); }

    };
    VALIDATE_SIZE(grmShaderFactoryStandard, 0x4);
}
