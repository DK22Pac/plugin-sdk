#include "Shader.h"

#ifdef __D3DX9_H__

#define PLUGIN_SDK_SHADER_MODULE_VERSION 0x00000001

using namespace plugin;

void Shader::Enable() {
    _rwD3D9SetVertexShader(vertexShader);
    _rwD3D9SetPixelShader(pixelShader);
}

void Shader::EnablePSForRwImRender() {
    plugin::patch::Nop(0x7FB81D, 5);
    plugin::patch::Nop(0x7FB824, 5);
    _rwD3D9SetPixelShader(pixelShader);
}

void Shader::Disable() {
    _rwD3D9SetVertexShader(0);
    _rwD3D9SetPixelShader(0);
}

void Shader::DisablePSForRwImRender() {
    plugin::patch::SetUChar(0x7FB81D, 0xE8);
    plugin::patch::SetUInt(0x7FB81E, 0xFFFFE78E);
    plugin::patch::SetUChar(0x7FB824, 0xE8);
    plugin::patch::SetUInt(0x7FB825, 0xFFFFE7C7);
    _rwD3D9SetPixelShader(0);
}

void Shader::PackTexture(RxD3D9InstanceData *mesh, unsigned int idx) {
    if (mesh && mesh->material && mesh->material->texture)
        RwD3D9SetTexture(mesh->material->texture, idx);
    else
        RwD3D9SetTexture(0, idx);
}

void Shader::PackTexture(RpMaterial *material, unsigned int idx) {
    if (material && material->texture)
        RwD3D9SetTexture(material->texture, idx);
    else
        RwD3D9SetTexture(0, idx);
}

void Shader::PackTexture(RwTexture *texture, unsigned int idx) {
    RwD3D9SetTexture(texture, idx);
}

char *Shader::CompileShaderFromString(char const *str, char const *Entrypoint, char const *Version) {
    ID3DXBuffer* shader = NULL;
    ID3DXBuffer* errorBuffer = NULL;
    HRESULT hr = D3DXCompileShader(str, strlen(str), NULL, NULL, Entrypoint, Version, D3DXSHADER_DEBUG, &shader, &errorBuffer, NULL);
    if (errorBuffer) {
        plugin::Error((char*)errorBuffer->GetBufferPointer());
        errorBuffer->Release();
    }
    if (FAILED(hr)) {
        plugin::Error("Failed to compile shader from text file!");
        return NULL;
    }
    char *data = new char[shader->GetBufferSize()];
    memcpy(data, shader->GetBufferPointer(), shader->GetBufferSize());
    shader->Release();
    return data;
}

Shader::Shader(wchar_t const *Filename) {
    // Set default values
    pixelShader = NULL;
    vertexShader = NULL;
    wcscpy(filename_w, Filename);
    isWidePath = true;
    memset(name, 0, 128);
    Load();
}

Shader::Shader(char const *Filename) {
    // Set default values
    pixelShader = NULL;
    vertexShader = NULL;
    strcpy(filename, Filename);
    isWidePath = false;
    memset(name, 0, 128);
    Load();
}

Shader::~Shader() {
    Unload();
}

void Shader::Unload() {
    if (vertexShader) {
        vertexShader->Release();
        vertexShader = NULL;
    }
    if (pixelShader) {
        pixelShader->Release();
        pixelShader = NULL;
    }
}

bool Shader::LoadFromSource(std::ifstream &file) {
    if (file.is_open()) {
        std::vector<std::string> lines;
        std::string line;
        while (std::getline(file, line))
            lines.push_back(line);
        // close file
        file.close();
        // Find shader info
        char entryPoint[128];
        char version[16];

        // Find fx name
        for (unsigned int i = 0; i < lines.size(); i++) {
            if (!lines[i].compare(0, 3, "#FX")) {
                std::string fxLine = lines[i];
                size_t strBegin = fxLine.find_first_of('"');
                if (strBegin != std::string::npos) {
                    size_t strEnd = fxLine.find_first_of('"', strBegin + 1);
                    if (strEnd != std::string::npos) {
                        std::string fxName = fxLine.substr(strBegin, strEnd - strBegin - 1);
                        strcpy_s(name, fxName.c_str());
                    }
                }
                break;
            }
        }
        // Load vertex shader
        for (unsigned int i = 0; i < lines.size(); i++) {
            if (!lines[i].compare(0, 13, "#VertexShader")) {
                if (sscanf(lines[i].c_str(), "%*s %s %s", entryPoint, version) == 2) {
                    entryPoint[strlen(entryPoint) - 1] = '\0';
                    version[strlen(version) - 1] = '\0';
                    std::string shaderCode;
                    for (unsigned int j = i + 1; j < lines.size(); j++) {
                        if (lines[j].size() > 0 && lines[j].at(0) == '#')
                            break;
                        else {
                            shaderCode.append(lines[j]);
                            shaderCode.append("\n");
                        }
                    }
                    char *vShaderCode = CompileShaderFromString(shaderCode.c_str(), &entryPoint[1], &version[1]);
                    if (vShaderCode) {
                        GetD3DDevice()->CreateVertexShader((DWORD *)vShaderCode, &vertexShader);
                        delete[] vShaderCode;
                    }
                }
                break;
            }
        }
        // Load pixel shader
        for (unsigned int i = 0; i < lines.size(); i++) {
            if (!lines[i].compare(0, 12, "#PixelShader")) {
                if (sscanf(lines[i].c_str(), "%*s %s %s", entryPoint, version) == 2) {
                    entryPoint[strlen(entryPoint) - 1] = '\0';
                    version[strlen(version) - 1] = '\0';
                    std::string shaderCode;
                    for (unsigned int j = i + 1; j < lines.size(); j++) {
                        if (lines[j].size() > 0 && lines[j].at(0) == '#')
                            break;
                        else {
                            shaderCode.append(lines[j]);
                            shaderCode.append("\n");
                        }
                    }
                    char *pShaderCode = CompileShaderFromString(shaderCode.c_str(), &entryPoint[1], &version[1]);
                    if (pShaderCode) {
                        GetD3DDevice()->CreatePixelShader((DWORD *)pShaderCode, &pixelShader);
                        delete[] pShaderCode;
                    }
                }
                break;
            }
        }
        return true;
    }
    return false;
}

bool Shader::LoadFromBinary(std::ifstream &file) {
    if (file.is_open()) {
        // TODO
        return true;
    }
    return false;
}

void Shader::Load() {
    if (vertexShader) {
        vertexShader->Release();
        vertexShader = NULL;
    }
    if (pixelShader) {
        pixelShader->Release();
        pixelShader = NULL;
    }
    // Load file
    std::ifstream file;
    if (isWidePath) {
        unsigned int pathLen = wcslen(filename_w);
        if (pathLen > 4 && !_wcsicmp(&filename_w[pathLen - 4], L".fxc")) {
            file.open(filename_w);
            LoadFromBinary(file);
            return;
        }
        else if (pathLen > 3 && !_wcsicmp(&filename_w[pathLen - 4], L".fx")) {
            file.open(filename_w);
            LoadFromSource(file);
            return;
        }
    }
    else {
        unsigned int pathLen = strlen(filename);
        if (pathLen > 4 && !_stricmp(&filename[pathLen - 4], ".fxc")) {
            file.open(filename);
            LoadFromBinary(file);
            return;
        }
        else if (pathLen > 3 && !_stricmp(&filename[pathLen - 4], ".fx")) {
            file.open(filename);
            LoadFromSource(file);
            return;
        }
    }
    if (isWidePath) {
        std::wstring filepath;
        filepath.append(filename_w);
        filepath.append(L".fx");
        file.open(filepath.c_str());
    }
    else {
        std::string filepath;
        filepath.append(filename);
        filepath.append(".fx");
        file.open(filepath.c_str());
    }
    if (!LoadFromSource(file)) {
        if (isWidePath) {
            std::wstring filepath;
            filepath.append(filename_w);
            filepath.append(L".fxc");
            file.open(filepath.c_str());
        }
        else {
            std::string filepath;
            filepath.append(filename);
            filepath.append(".fxc");
            file.open(filepath.c_str());
        }
        if (!LoadFromBinary(file)) {
            if (isWidePath)
                plugin::Error(L"Failed to open shader file (\"%s\")", filename_w);
            else
                plugin::Error("Failed to open shader file (\"%s\")", filename);
        }
    }
}

void Shader::WriteToBinaryFile(std::ofstream &file) {
    // binary
    // "FXC" 00
    // "plugin-sdk" 00 00
    // versionId (0x00000001) // +16
    // name[128]
    // unsigned int vsOffset
    // unsigned int vsSize
    // unsigned int psOffset
    // unsigned int psSize
    if (file.is_open()) {
        file.write("FXC\0", 4);
        file.write("plugin-sdk\0\0", 12);
        unsigned int version = PLUGIN_SDK_SHADER_MODULE_VERSION;
        file.write(reinterpret_cast<char *>(&version), 4);
        file.write(name, 128);
        unsigned int vsOffset = 0;
        unsigned int vsSize = 0;
        if (vertexShader) {
            unsigned int functionSize = 0;
            vertexShader->GetFunction(NULL, &functionSize);
            if (functionSize > 0) {
                vsOffset = 148;
                vsSize = functionSize;
            }
        }
        file.write(reinterpret_cast<char *>(&vsOffset), 4);
        file.write(reinterpret_cast<char *>(&vsSize), 4);
        unsigned int psOffset = 0;
        unsigned int psSize = 0;
        if (pixelShader) {
            unsigned int functionSize = 0;
            pixelShader->GetFunction(NULL, &functionSize);
            if (functionSize > 0) {
                if (vsOffset != 0)
                    psOffset = 148;
                else
                    psOffset = vsOffset + vsSize;
                psSize = functionSize;
            }
        }
        file.write(reinterpret_cast<char *>(&psOffset), 4);
        file.write(reinterpret_cast<char *>(&psSize), 4);
        if (vsSize > 0) {
            unsigned int functionSize = 0;
            char *data = new char[vsSize];
            vertexShader->GetFunction(data, &functionSize);
            file.write(data, vsSize);
        }
        if (psSize > 0) {
            unsigned int functionSize = 0;
            char *data = new char[psSize];
            pixelShader->GetFunction(data, &functionSize);
            file.write(data, psSize);
        }
        file.close();
    }
}

void Shader::GetWorldViewProj(RpAtomic *atomic, D3DMATRIX *world, D3DMATRIX *view, D3DMATRIX *proj, D3DMATRIX *wvp) {
    if (atomic && (world || wvp)) {
        RwMatrix *ltm = RwFrameGetLTM(reinterpret_cast<RwFrame *>(atomic->object.object.parent));
        memcpy(world, ltm, sizeof(RwMatrix));
        world->_14 = world->_24 = world->_34 = 0.0f;
        world->_44 = 1.0f;
    }
    if (wvp) {
        D3DXMATRIX D3D9ViewProjTransform;
        D3DXMATRIX view = *GetD3DViewTransform();
        D3DXMATRIX proj = *GetD3DProjTransform();
        D3DXMatrixMultiply(&D3D9ViewProjTransform, &view, &proj);
        if (atomic) {
            D3DXMATRIX D3D9WorldViewProjTransform;
            D3DXMatrixMultiplyTranspose((D3DXMATRIX *)&D3D9WorldViewProjTransform, (D3DXMATRIX *)world, &D3D9ViewProjTransform);
            D3DXMatrixTranspose((D3DXMATRIX *)wvp, &D3D9WorldViewProjTransform);
        }
        else
            D3DXMatrixTranspose((D3DXMATRIX *)wvp, &D3D9ViewProjTransform);
    }
}

void Shader::DrawRect(float left, float top, float right, float bottom) {
    D3DVIEWPORT9 oldViewport, viewport;
    GetD3DDevice()->GetViewport(&oldViewport);
    viewport.X = left;
    viewport.Y = top;
    viewport.Width = right - left;
    viewport.Height = bottom - top;
    viewport.MinZ = 0.0f;
    viewport.MaxZ = 1.0f;
    GetD3DDevice()->SetViewport(&viewport);
    IDirect3DVertexDeclaration9*  VertDecl = NULL, *oldVertDecl = NULL;
    struct Vertex {
        D3DXVECTOR2 pos;
        D3DXVECTOR2 tex_coord;
    }quad[4];
    quad[0].pos = D3DXVECTOR2(-1, -1); quad[0].tex_coord = D3DXVECTOR2(0, 1);
    quad[1].pos = D3DXVECTOR2(-1, 1);  quad[1].tex_coord = D3DXVECTOR2(0, 0);
    quad[2].pos = D3DXVECTOR2(1, -1);  quad[2].tex_coord = D3DXVECTOR2(1, 1);
    quad[3].pos = D3DXVECTOR2(1, 1);   quad[3].tex_coord = D3DXVECTOR2(1, 0);
    const D3DVERTEXELEMENT9 Decl[] = {
        { 0, 0,  D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
        { 0, 8, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },
        D3DDECL_END()
    };
    GetD3DDevice()->CreateVertexDeclaration(Decl, &VertDecl);
    GetD3DDevice()->GetVertexDeclaration(&oldVertDecl);
    GetD3DDevice()->SetVertexDeclaration(VertDecl);
    _rwD3D9DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, quad, sizeof(Vertex));
    VertDecl->Release();
    GetD3DDevice()->SetVertexDeclaration(oldVertDecl);
    GetD3DDevice()->SetViewport(&oldViewport);
}

#endif