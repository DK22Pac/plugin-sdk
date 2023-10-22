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

    static HWND hWndAddr;
    HWND GetHWnd() {
        return hWndAddr;
    }

    static grcVertexBuffer* vertexBufferAddr;
    grcVertexBuffer* vertexBuffer = vertexBufferAddr; // [36]

    static uint32_t ResetViewportAddr;
    void ResetViewport(bool force) {
        plugin::CallDyn(ResetViewportAddr, force);
    }

    static uint32_t SetRenderStateAddr;
    int SetRenderState(uint32_t state, uint32_t value) {
        return plugin::CallAndReturnDyn<int>(SetRenderStateAddr, state, value);
    }

    static uint32_t SetTextureAddr;
    void SetTexture(grcTexturePC* tex) {
        plugin::CallDyn(SetTextureAddr, tex);
    }

    static uint32_t BeginAddr;
    void Begin(int32_t x, int32_t y) {
        plugin::CallDyn(BeginAddr, x, y);
    }

    static uint32_t SetVertexAddr;
    void SetVertex(float x, float y, float z, float u, float v, float clip, Color32 const& col, float min, float max) {
        plugin::CallDyn(SetVertexAddr, x, y, z, u, v, clip, col, min, max);
    }

    static uint32_t EndAddr;
    void End() {
        plugin::CallDyn(EndAddr);
    }

    static IDirect3DDevice9** GetD3DDeviceAddr;
    IDirect3DDevice9* GetD3DDevice() {
        return *GetD3DDeviceAddr;
    }

    static uint32_t GetHashKeyAddr;
    uint32_t GetHashKey(const char* str, uint32_t arg2) {
        return plugin::CallAndReturnDyn<uint32_t>(GetHashKeyAddr, str, arg2);
    }

    static grcTextureFactoryPC* textureFactoryPCAddr;
    grcTextureFactoryPC* textureFactoryPC = (grcTextureFactoryPC*)textureFactoryPCAddr;

    static uint32_t grcTextureFactoryPC__grcTextureFactoryPCAddr;
    grcTextureFactoryPC::grcTextureFactoryPC() {
        plugin::CallMethodDyn(grcTextureFactoryPC__grcTextureFactoryPCAddr, this);
    }

    template class pgDictionary<rage::grcTexturePC>;

    static uint32_t pgDictionary__GetAddr;
    template<typename T>
    T* pgDictionary<T>::Get(int32_t hash) {
        return plugin::CallMethodAndReturnDyn<T*>(pgDictionary__GetAddr, this, hash);
    }
}

template<>
void plugin::InitPatterns<rage::rs>() {
    using namespace rage;

    screenWidthAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2));
    screenHeightAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 35 ? ? ? ? 0F 44 35 ? ? ? ? FF D7 39 05 ? ? ? ? 8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2));
    hWndAddr = (HWND)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? 85 C0 74 08 57", 1));

    vertexBufferAddr = (grcVertexBuffer*)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? 85 C0 74 6F", 1));
    ResetViewportAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 48 80 3D ? ? ? ? ? 56 57 0F 85", 0);
    SetRenderStateAddr = plugin::GetPattern("8B 4C 24 04 8B 44 24 08 89 04 8D", 0);
    SetTextureAddr = plugin::GetPattern("8B 44 24 04 85 C0 0F 44 05", 0);
    BeginAddr = plugin::GetPattern("83 3D ? ? ? ? ? 75 18 83 3D ? ? ? ? ? 75 0F 83 3D ? ? ? ? ? 0F 95 C1 E8 ? ? ? ? 56", 0);
    SetVertexAddr = plugin::GetPattern("83 3D ? ? ? ? ? 74 78", 0);
    EndAddr = plugin::GetPattern("83 3D ? ? ? ? ? 74 0F E8 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3", 0);

    GetD3DDeviceAddr = (IDirect3DDevice9**)plugin::patch::GetPointer(plugin::GetPattern("68 ? ? ? ? 8B 08 68 ? ? ? ? 6A 14", 1));

    GetHashKeyAddr = plugin::GetPattern("8B 54 24 08 53 56 8B 74 24 0C 80 3E 22", 0);

    textureFactoryPCAddr = (rage::grcTextureFactoryPC*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? E8 ? ? ? ? 83 EC 0C", 1));

    grcTextureFactoryPC__grcTextureFactoryPCAddr = plugin::GetPattern("A1 ? ? ? ? 81 EC ? ? ? ? 40", 0);
    pgDictionary__GetAddr = plugin::GetPattern("53 55 56 57 8B F9 85 FF 74 3F", 0);
}
