/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Rage.h"

namespace rage {
    int32_t& screenWidth = *gpatternt(int32_t, "8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);
    int32_t& screenHeight = *gpatternt(int32_t, "8B 35 ? ? ? ? 0F 44 35 ? ? ? ? FF D7 39 05 ? ? ? ? 8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);

    HWND hWnd = *gpatternt(HWND, "A1 ? ? ? ? 85 C0 74 08 57", 1);
    HWND GetHWnd() {
        return hWnd;
    }

    grcVertexBuffer* vertexBuffer = gpatternt(grcVertexBuffer, "A1 ? ? ? ? 85 C0 74 6F", 1); // [36]

    void ResetViewport(bool force) {
        plugin::CallDyn(gpattern("55 8B EC 83 E4 F0 83 EC 48 80 3D ? ? ? ? ? 56 57 0F 85"), force);
    }

    int SetRenderState(uint32_t state, uint32_t value) {
        return plugin::CallAndReturnDyn<int>(gpattern("8B 4C 24 04 8B 44 24 08 89 04 8D"), state, value);
    }

    void SetTexture(grcTexturePC* tex) {
        plugin::CallDyn(gpattern("8B 44 24 04 85 C0 0F 44 05"), tex);
    }

    void Begin(int32_t x, int32_t y) {
        plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 75 18 83 3D ? ? ? ? ? 75 0F 83 3D ? ? ? ? ? 0F 95 C1 E8 ? ? ? ? 56"), x, y);
    }

    void SetVertex(float x, float y, float z, float u, float v, float clip, Color32 const& col, float min, float max) {
        plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 78"), x, y, z, u, v, clip, col, min, max);
    }

    void End() {
        plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 0F E8 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3"));
    }

    IDirect3DDevice9** GetD3DDeviceAddr = gpatternt(IDirect3DDevice9*, "68 ? ? ? ? 8B 08 68 ? ? ? ? 6A 14", 1);
    IDirect3DDevice9* GetD3DDevice() {
        return *GetD3DDeviceAddr;
    }

    uint32_t GetHashKey(const char* str, uint32_t arg2) {
        return plugin::CallAndReturnDyn<uint32_t>(gpattern("8B 54 24 08 53 56 8B 74 24 0C 80 3E 22"), str, arg2);
    }

    grcTextureFactoryPC* textureFactoryPC = gpatternt(grcTextureFactoryPC, "A3 ? ? ? ? E8 ? ? ? ? 83 EC 0C", 1);

    grcTextureFactoryPC::grcTextureFactoryPC() {
        plugin::CallMethodDyn(gpattern("A1 ? ? ? ? 81 EC ? ? ? ? 40"), this);
    }

    template class pgDictionary<rage::grcTexturePC>;

    template<typename T>
    T* pgDictionary<T>::Get(int32_t hash) {
        return plugin::CallMethodAndReturnDyn<T*>(gpattern("53 55 56 57 8B F9 85 FF 74 3F"), this, hash);
    }
}
