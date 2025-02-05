/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "GBH.h"
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "ddraw.lib")
#pragma comment(lib, "dinput8.lib")

T_gbh_InitDLL& gbh_InitDLL = *(T_gbh_InitDLL*)0x5952A8;
T_gbh_Init& gbh_Init = *(T_gbh_Init*)0x5952AC;
T_gbh_CloseDLL& gbh_CloseDLL = *(T_gbh_CloseDLL*)0x952B0;
T_gbh_SetWindow& gbh_SetWindow = *(T_gbh_SetWindow*)0x5952B4;
T_gbh_GetGlobals& gbh_GetGlobals = *(T_gbh_GetGlobals*)0x5952B8;
T_gbh_DrawTile& gbh_DrawTile = *(T_gbh_DrawTile*)0x5952BC;
T_gbh_DrawTilePart& gbh_DrawTilePart = *(T_gbh_DrawTilePart*)0x5952C0;
T_gbh_DrawQuad& gbh_DrawQuad = *(T_gbh_DrawQuad*)0x5952C4;
T_gbh_DrawQuadClipped& gbh_DrawQuadClipped = *(T_gbh_DrawQuadClipped*)0x5952C8;
T_gbh_DrawFlatRect& gbh_DrawFlatRect = *(T_gbh_DrawFlatRect*)0x5952CC;
T_gbh_DrawTriangle& gbh_DrawTriangle = *(T_gbh_DrawTriangle*)0x5952D0;
T_gbh_PrintBitmap& gbh_PrintBitmap = *(T_gbh_PrintBitmap*)0x5952D4;
T_gbh_SetColourDepth& gbh_SetColourDepth = *(T_gbh_SetColourDepth*)0x5952D8;
T_gbh_Plot& gbh_Plot = *(T_gbh_Plot*)0x5952DC;
T_gbh_ConvertColour& gbh_ConvertColour = *(T_gbh_ConvertColour*)0x5952E0;
T_gbh_RegisterTexture& gbh_RegisterTexture = *(T_gbh_RegisterTexture*)0x5952E4;
T_gbh_SetCamera& gbh_SetCamera = *(T_gbh_SetCamera*)0x5952E8;
T_gbh_ResetLights& gbh_ResetLights = *(T_gbh_ResetLights*)0x5952EC;
T_gbh_AddLight& gbh_AddLight = *(T_gbh_AddLight*)0x5952F0;
T_gbh_SetAmbient& gbh_SetAmbient = *(T_gbh_SetAmbient*)0x5952F4;
T_gbh_GetUsedCache& gbh_GetUsedCache = *(T_gbh_GetUsedCache*)0x5952F8;
T_gbh_FreeTexture& gbh_FreeTexture = *(T_gbh_FreeTexture*)0x5952FC;
T_gbh_RegisterPalette& gbh_RegisterPalette = *(T_gbh_RegisterPalette*)0x595300;
T_gbh_FreePalette& gbh_FreePalette = *(T_gbh_FreePalette*)0x595304;
T_gbh_AssignPalette& gbh_AssignPalette = *(T_gbh_AssignPalette*)0x595308;
T_gbh_LockTexture& gbh_LockTexture = *(T_gbh_LockTexture*)0x59530C;
T_gbh_UnlockTexture& gbh_UnlockTexture = *(T_gbh_UnlockTexture*)0x595310;
T_gbh_BeginScene& gbh_BeginScene = *(T_gbh_BeginScene*)0x595314;
T_gbh_EndScene& gbh_EndScene = *(T_gbh_EndScene*)0x595318;
T_gbh_BeginLevel& gbh_BeginLevel = *(T_gbh_BeginLevel*)0x59531C;
T_gbh_EndLevel& gbh_EndLevel = *(T_gbh_EndLevel*)0x595320;
T_MakeScreenTable& MakeScreenTable = *(T_MakeScreenTable*)0x595324;
T_ConvertColourBank& ConvertColourBank = *(T_ConvertColourBank*)0x595328;
T_SetShadeTableA& SetShadeTableA = *(T_SetShadeTableA*)0x59532C;
T_gbh_InitImageTable& gbh_InitImageTable = *(T_gbh_InitImageTable*)0x595330;
T_gbh_FreeImageTable& gbh_FreeImageTable = *(T_gbh_FreeImageTable*)0x595334;
T_gbh_LoadImage& gbh_LoadImage = *(T_gbh_LoadImage*)0x595338;
T_gbh_BlitImage& gbh_BlitImage = *(T_gbh_BlitImage*)0x59533C;
T_gbh_BlitBuffer& gbh_BlitBuffer = *(T_gbh_BlitBuffer*)0x595340;
T_gbh_SetMode& gbh_SetMode = *(T_gbh_SetMode*)0x595040;

int& window_x = *(int*)0x67357C;
int& window_y = *(int*)0x673590;
int& window_width = *(int*)0x673578;
int& window_height = *(int*)0x6732E8;
int& full_width = *(int*)0x6732E4;
int& full_height = *(int*)0x6732E0;
char& exploding_on = *(char*)0x5EAD5D;
bool& lighting = *(bool*)0x595011;
int& lightFlag = *(int*)0x67358C;
char& max_frame_rate = *(char*)0x595010;
char& min_frame_rate = *(char*)0x673598;
char& start_mode = *(char*)0x595014;
char& triple_buffer = *(char*)0x67359C;

HWND* hWnd = (HWND*)0x673D18;

LPDIRECTINPUTA g_pDI = (LPDIRECTINPUTA)0x5E8FA4;

tGraphics* GetGBH() {
    auto p = (tGraphics**)plugin::GetExternalAddress("d3ddll.dll", 0xE00000, (0xE485E0));
    return *p;
}

tPalData* GetPalData() {
    auto p = (tPalData*)plugin::GetExternalAddress("d3ddll.dll", 0xE00000, (0xE13E04));
    return p;
}

IDirect3D3* GetD3D() {
    return GetGBH()->d3d;
}

IDirect3DDevice3* GetD3DDevice() {
    return GetGBH()->device;
}

IDirectDrawSurface4* GetPrimarySurface() {
    return GetGBH()->videoDriver->surfacePrimary;
}

HWND GetHWnd() {
    return *hWnd;
}

LPDIRECTINPUTA GetDInput() {
    return g_pDI;
}

void SetMousePosition(int x, int y) {
    POINT pos = { x, y };
    ClientToScreen(GetHWnd(), &pos);
    SetCursorPos(pos.x, pos.y);
}

void RenderStateSet(unsigned int type, void* value) {
    if (type == D3DRENDERSTATE_TEXTUREHANDLE) {
        GetD3DDevice()->SetTexture(0, (LPDIRECT3DTEXTURE2)value);
    }
    else
        GetD3DDevice()->SetRenderState((D3DRENDERSTATETYPE)type, (DWORD)value);
}

void RenderStateGet(unsigned int type, void* value) {
    GetD3DDevice()->GetRenderState((D3DRENDERSTATETYPE)type, (LPDWORD)value);
}

void RenderPrimitive(unsigned int type, void* vertices, int numVertices) {
    GetD3DDevice()->DrawPrimitive((D3DPRIMITIVETYPE)type, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_SPECULAR | D3DFVF_TEX1, vertices, numVertices, 0);
}

void RenderIndexedPrimitive(unsigned int type, void* vertices, int numVertices, int* indices, int numIndices) {
    GetD3DDevice()->DrawIndexedPrimitive((D3DPRIMITIVETYPE)type, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_SPECULAR | D3DFVF_TEX1, vertices, numVertices, (LPWORD)indices, numIndices, 0);
}
