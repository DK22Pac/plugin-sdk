#pragma once

#include <Windows.h>
#include "..\DXSDK\9.0c\Include\d3dx9.h"

#ifdef __D3DX9_H__

#include <stdio.h>
#include <vector>
#include <fstream>
#include <sstream>
#include "game_sa\RenderWare.h"
#include "DynamicResource.h"

namespace plugin {
    class Shader : public DynamicResource {
        IDirect3DPixelShader9 *pixelShader;
        IDirect3DVertexShader9 *vertexShader;
        union {
            char filename[MAX_PATH];
            wchar_t filename_w[MAX_PATH];
        };
        bool isWidePath;
        char name[128];

    public:
        void Enable();
        void EnablePSForRwImRender();
        void Disable();
        void DisablePSForRwImRender();
        void PackTexture(RxD3D9InstanceData *mesh, unsigned int idx);
        void PackTexture(RpMaterial *material, unsigned int idx);
        void PackTexture(RwTexture *texture, unsigned int idx);
        static char *CompileShaderFromString(char const *str, char const *Entrypoint, char const *Version);
        Shader(wchar_t const *Filename);
        Shader(char const *Filename);
        ~Shader();
        void Unload();
        bool LoadFromSource(std::ifstream &file);
        bool LoadFromBinary(std::ifstream &file);
        void Load();
        void WriteToBinaryFile(std::ofstream &file);
        static void GetWorldViewProj(RpAtomic *atomic, D3DMATRIX *world, D3DMATRIX *view, D3DMATRIX *proj, D3DMATRIX *wvp);
        static void DrawRect(float left, float top, float right, float bottom);

        template <class T> bool PackPSParameters(T& parameters, unsigned int offset = 0) {
            unsigned int fsize = sizeof(parameters);
            if (fsize % 16) {
                unsigned int newSize = fsize + 16 - (fsize % 16);
                char *newData = new char[newSize];
                memset(newData, 0, newSize);
                memcpy(newData, &parameters, fsize);
                GetD3DDevice()->SetPixelShaderConstantF(offset, (float *)newData, newSize / 16);
            }
            else
                GetD3DDevice()->SetPixelShaderConstantF(offset, (float *)&parameters, fsize / 16);
            return true;
        }

        template <class T> bool PackVSParameters(T& parameters, unsigned int offset = 0) {
            unsigned int fsize = sizeof(parameters);
            if (fsize % 16) {
                unsigned int newSize = fsize + 16 - (fsize % 16);
                char *newData = new char[newSize];
                memset(newData, 0, newSize);
                memcpy(newData, &parameters, fsize);
                GetD3DDevice()->SetVertexShaderConstantF(offset, (float *)newData, newSize / 16);
            }
            else
                GetD3DDevice()->SetVertexShaderConstantF(offset, (float *)&parameters, fsize / 16);
            return true;
        }
    };
}

#endif