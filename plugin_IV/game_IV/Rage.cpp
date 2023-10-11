/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Rage.h"

#include "Patch.h"

namespace rage {
    static uint32_t* screenWidthAddr;
    static uint32_t* screenHeightAddr;

    int32_t& screenWidth = *(int32_t*)screenWidthAddr;
    int32_t& screenHeight = *(int32_t*)screenHeightAddr;

    void* hWndAddr;
    void* hWnd = hWndAddr;

    static IDirect3DDevice9* GetD3DDeviceAddr;
    IDirect3DDevice9* GetD3DDevice() {
        return (IDirect3DDevice9*)GetD3DDeviceAddr;
    }

    static grcTexturePC* texturePCAddr;
    grcTexturePC& texturePC = *(grcTexturePC*)texturePCAddr;

    static uint32_t grcTextureFactoryPC__TextureReadAddr;
    grcTexturePC* grcTextureFactoryPC::TextureRead(uint32_t hash) {
        return plugin::CallMethodAndReturnDyn<grcTexturePC*>(grcTextureFactoryPC__TextureReadAddr, this, hash);
    }
}

template<>
void plugin::InitPatterns<rage::rs>() {
    using namespace rage;

    screenWidthAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2));
    screenHeightAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 35 ? ? ? ? 0F 44 35 ? ? ? ? FF D7 39 05 ? ? ? ? 8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2));
    hWndAddr = (void*)plugin::patch::GetPointer(plugin::GetPattern("FF 35 ? ? ? ? 8B 35 ? ? ? ? A3", 2));

    GetD3DDeviceAddr = (IDirect3DDevice9*)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? 66 0F D6 05 ? ? ? ? F3 0F 7E 44 24 ? 66 0F D6 05", 1));

    texturePCAddr = (grcTexturePC*)plugin::patch::GetPointer(plugin::GetPattern("8B 35 ? ? ? ? 6A 00 50", 2));
    grcTextureFactoryPC__TextureReadAddr = plugin::GetPattern("53 55 56 57 8B F9 85 FF 74 3F", 0);
}
