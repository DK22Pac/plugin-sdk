/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Shader.h"
#include "plugin.h"

#ifdef GTASA

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

char *Shader::CompileShaderFromString(char const *str, char const *Entrypoint, char const *Version, bool bDebug) {
    ID3DXBuffer* shader = nullptr;
    ID3DXBuffer* errorBuffer = nullptr;
    HRESULT hr = D3DXCompileShader(str, strlen(str), NULL, NULL, Entrypoint, Version, bDebug? D3DXSHADER_DEBUG : 0, &shader, &errorBuffer, NULL);
    if (errorBuffer) {
        plugin::InternalError((char*)errorBuffer->GetBufferPointer());
        errorBuffer->Release();
    }
    if (FAILED(hr)) {
        plugin::InternalError("Failed to compile shader from text file!");
        return NULL;
    }
    char *data = new char[shader->GetBufferSize()];
    memcpy(data, shader->GetBufferPointer(), shader->GetBufferSize());
    shader->Release();
    return data;
}

#ifdef _MSC_VER
Shader::Shader(std::wstring const &Filename, bool bDebug) {
    pixelShader = nullptr;
    vertexShader = nullptr;
    filename_w = Filename;
    if (filename_w.size() >= 4 && !filename_w.compare(filename_w.size() - 4, 4, L".fxc"))
        filename_w.resize(filename_w.size() - 4);
    else if (filename_w.size() >= 3 && !filename_w.compare(filename_w.size() - 3, 3, L".fx"))
        filename_w.resize(filename_w.size() - 3);
    isWidePath = true;
    bDebugCompilation = bDebug;
    Load();
}
#endif

Shader::Shader(std::string const &Filename, bool bDebug) {
    pixelShader = nullptr;
    vertexShader = nullptr;
    filename = Filename;
    if (filename.size() >= 4 && !filename.compare(filename.size() - 4, 4, ".fxc"))
        filename.resize(filename.size() - 4);
    else if (filename.size() >= 3 && !filename.compare(filename.size() - 3, 3, ".fx"))
        filename.resize(filename.size() - 3);
#ifdef _MSC_VER
    isWidePath = false;
#endif
    bDebugCompilation = bDebug;
    Load();
}

Shader::~Shader() {
    Unload();
}

void Shader::Unload() {
    if (vertexShader) {
        vertexShader->Release();
        vertexShader = nullptr;
    }
    if (pixelShader) {
        pixelShader->Release();
        pixelShader = nullptr;
    }
}

bool Shader::LoadFromSource(std::ifstream &file, bool bDebug) {
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
        for (auto & line : lines) {
            if (!line.compare(0, 3, "#FX")) {
                std::string fxLine = line;
                size_t strBegin = fxLine.find_first_of('"');
                if (strBegin != std::string::npos) {
                    size_t strEnd = fxLine.find_first_of('"', strBegin + 1);
                    if (strEnd != std::string::npos)
                        name = fxLine.substr(strBegin + 1, strEnd - strBegin - 1);
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
                        if (!lines[j].empty() && lines[j].at(0) == '#')
                            break;
                        else {
                            shaderCode.append(lines[j]);
                            shaderCode.append("\n");
                        }
                    }
                    char *vShaderCode = CompileShaderFromString(shaderCode.c_str(), &entryPoint[1], &version[1], bDebug);
                    if (vShaderCode) {
                        GetD3DDevice<IDirect3DDevice9>()->CreateVertexShader((DWORD *)vShaderCode, &vertexShader);
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
                        if (!lines[j].empty() && lines[j].at(0) == '#')
                            break;
                        else {
                            shaderCode.append(lines[j]);
                            shaderCode.append("\n");
                        }
                    }
                    char *pShaderCode = CompileShaderFromString(shaderCode.c_str(), &entryPoint[1], &version[1], bDebug);
                    if (pShaderCode) {
                        GetD3DDevice<IDirect3DDevice9>()->CreatePixelShader((DWORD *)pShaderCode, &pixelShader);
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
        BinaryFileHeader header;
        if (file.read(reinterpret_cast<char *>(&header), sizeof(BinaryFileHeader))) {
            if (!strcmp(header.fxcSignature, "FXC")) {
                name = header.name;
                if (header.vsSize) {
                    char *vShaderCode = new char[header.vsSize];
                    file.seekg(header.vsOffset);
                    file.read(vShaderCode, header.vsSize);
                    GetD3DDevice<IDirect3DDevice9>()->CreateVertexShader((DWORD *)vShaderCode, &vertexShader);
                    delete[] vShaderCode;
                }
                if (header.psSize) {
                    char *pShaderCode = new char[header.psSize];
                    file.seekg(header.psOffset);
                    file.read(pShaderCode, header.psSize);
                    GetD3DDevice<IDirect3DDevice9>()->CreatePixelShader((DWORD *)pShaderCode, &pixelShader);
                    delete[] pShaderCode;
                }
                return true;
            }
        }
    }
    return false;
}

void Shader::Load() {
    if (vertexShader) {
        vertexShader->Release();
        vertexShader = nullptr;
    }
    if (pixelShader) {
        pixelShader->Release();
        pixelShader = nullptr;
    }
    // Load file
    std::ifstream file;
#ifdef _MSC_VER
    if (isWidePath)
        file.open(filename_w + std::wstring(L".fx"));
    else
#endif
        file.open(filename + std::string(".fx"));
    if (!LoadFromSource(file, bDebugCompilation)) {
#ifdef _MSC_VER
        if (isWidePath)
            file.open(filename_w + std::wstring(L".fxc"));
        else
#endif
            file.open(filename + std::string(".fxc"));
        if (!LoadFromBinary(file)) {
#ifdef _MSC_VER
            if (isWidePath)
                plugin::InternalError(L"Failed to open shader file (\"%s\")", filename_w.c_str());
            else
#endif
                plugin::InternalError("Failed to open shader file (\"%s\")", filename.c_str());
        }
    }
}

bool Shader::WriteToBinaryFile(std::ofstream &file) {
    if (file.is_open()) {
        BinaryFileHeader header;
        strcpy(header.fxcSignature, "FXC");
        header.fxcSignature[3] = '\0';
        strcpy(header.pluginSdkSignature, "plugin-sdk");
        header.pluginSdkSignature[10] = header.pluginSdkSignature[11] = '\0';
        header.versionId = PLUGIN_SDK_SHADER_MODULE_VERSION;
        memset(header.name, 0, 128);
        strcpy(header.name, name.c_str());
        header.vsOffset = header.vsSize = header.psOffset = header.psSize = 0;
        if (vertexShader) {
            unsigned int functionSize = 0;
            vertexShader->GetFunction(NULL, &functionSize);
            if (functionSize > 0) {
                header.vsOffset = sizeof(BinaryFileHeader);
                header.vsSize = functionSize;
            }
        }
        if (pixelShader) {
            unsigned int functionSize = 0;
            pixelShader->GetFunction(NULL, &functionSize);
            if (functionSize > 0) {
                if (header.vsOffset != 0)
                    header.psOffset = header.vsOffset + header.vsSize;
                else
                    header.psOffset = sizeof(BinaryFileHeader);
                header.psSize = functionSize;
            }
        }
        file.write(reinterpret_cast<char *>(&header), sizeof(BinaryFileHeader));
        if (header.vsSize > 0) {
            unsigned int functionSize = 0;
            char *data = new char[header.vsSize];
            vertexShader->GetFunction(data, &functionSize);
            file.write(data, header.vsSize);
            delete[] data;
        }
        if (header.psSize > 0) {
            unsigned int functionSize = 0;
            char *data = new char[header.psSize];
            pixelShader->GetFunction(data, &functionSize);
            file.write(data, header.psSize);
            delete[] data;
        }
        file.close();
        return true;
    }
    return false;
}

bool Shader::SaveToBinary() {
#ifdef _MSC_VER
    if (isWidePath)
        return SaveToBinary(filename_w + std::wstring(L".fxc"));
    else
#endif
        return SaveToBinary(filename + std::string(".fxc"));
}

#ifdef _MSC_VER
bool Shader::SaveToBinary(std::wstring const &Filename) {
    std::ofstream file;
    file.open(Filename);
    return WriteToBinaryFile(file);
}
#endif

bool Shader::SaveToBinary(std::string const &Filename) {
    std::ofstream file;
    file.open(Filename);
    return WriteToBinaryFile(file);
}

void Shader::GetWorldViewProj(RpAtomic *atomic, D3DMATRIX *world, D3DMATRIX *view, D3DMATRIX *proj, D3DMATRIX *wvp) {
    if (atomic && (world || wvp)) {
        RwMatrix *ltm = RwFrameGetLTM(static_cast<RwFrame *>(atomic->object.object.parent));
        memcpy(world, ltm, sizeof(RwMatrix));
        world->_14 = world->_24 = world->_34 = 0.0f;
        world->_44 = 1.0f;
    }
    if (wvp) {
        D3DXMATRIX D3D9ViewProjTransform;
        view = GetD3DViewTransform();
        proj = GetD3DProjTransform();
        D3DXMatrixMultiply(&D3D9ViewProjTransform, (D3DXMATRIX*)view, (D3DXMATRIX*)proj);
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
    GetD3DDevice<IDirect3DDevice9>()->GetViewport(&oldViewport);
    viewport.X = static_cast<DWORD>(left);
    viewport.Y = static_cast<DWORD>(top);
    viewport.Width = static_cast<DWORD>(right - left);
    viewport.Height = static_cast<DWORD>(bottom - top);
    viewport.MinZ = 0.0f;
    viewport.MaxZ = 1.0f;
    GetD3DDevice<IDirect3DDevice9>()->SetViewport(&viewport);
    IDirect3DVertexDeclaration9*  VertDecl = NULL, *oldVertDecl = NULL;
    struct Vertex {
        D3DXVECTOR2 pos;
        D3DXVECTOR2 tex_coord;
    } quad[4];
    quad[0].pos = D3DXVECTOR2(-1, -1); quad[0].tex_coord = D3DXVECTOR2(0, 1);
    quad[1].pos = D3DXVECTOR2(-1, 1);  quad[1].tex_coord = D3DXVECTOR2(0, 0);
    quad[2].pos = D3DXVECTOR2(1, -1);  quad[2].tex_coord = D3DXVECTOR2(1, 1);
    quad[3].pos = D3DXVECTOR2(1, 1);   quad[3].tex_coord = D3DXVECTOR2(1, 0);
    const D3DVERTEXELEMENT9 Decl[] = {
        { 0, 0,  D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
        { 0, 8, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },
        D3DDECL_END()
    };
    GetD3DDevice<IDirect3DDevice9>()->CreateVertexDeclaration(Decl, &VertDecl);
    GetD3DDevice<IDirect3DDevice9>()->GetVertexDeclaration(&oldVertDecl);
    GetD3DDevice<IDirect3DDevice9>()->SetVertexDeclaration(VertDecl);
    _rwD3D9DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, quad, sizeof(Vertex));
    VertDecl->Release();
    GetD3DDevice<IDirect3DDevice9>()->SetVertexDeclaration(oldVertDecl);
    GetD3DDevice<IDirect3DDevice9>()->SetViewport(&oldViewport);
}

void plugin::Shader::SetMeshTexture(RxD3D9InstanceData* mesh, unsigned int idx) {
	if (mesh && mesh->material && mesh->material->texture)
		RwD3D9SetTexture(mesh->material->texture, idx);
	else
		RwD3D9SetTexture(0, idx);
}

void plugin::Shader::SetMaterialTexture(RpMaterial* material, unsigned int idx) {
	if (material && material->texture)
		RwD3D9SetTexture(material->texture, idx);
	else
		RwD3D9SetTexture(0, idx);
}

void plugin::Shader::SetTexture(RwTexture* texture, unsigned int idx) {
	RwD3D9SetTexture(texture, idx);
}

#endif
