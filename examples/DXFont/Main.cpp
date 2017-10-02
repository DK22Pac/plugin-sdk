/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "RenderWare.h"
#include "d3dx9.h"
#ifndef GTASA
#include "rwd3d9.h"
#endif

using namespace plugin;

class DXFont {
public:
    static ID3DXFont *m_pD3DXFont;

    static void InitFont() {
        IDirect3DDevice9 *device = reinterpret_cast<IDirect3DDevice9 *>(RwD3D9GetCurrentD3DDevice());
        if (FAILED(D3DXCreateFontA(device, 48, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, ANTIALIASED_QUALITY,
            DEFAULT_PITCH|FF_DONTCARE, "arial", &m_pD3DXFont)))
        {
            Error("Failed to create D3DX font!");
        }
    }

    static void DestroyFont() {
        if (m_pD3DXFont) {
            m_pD3DXFont->Release();
            m_pD3DXFont = NULL;
        }
    }

    static void Draw() {
        if (m_pD3DXFont) {
            RECT rect;
            rect.left = 0;
            rect.top = 0;
            rect.bottom = RsGlobal.maximumHeight;
            rect.right = RsGlobal.maximumWidth;
            std::string gameName = std::string("D3DXFont example for GTA ") + GTAGAME_NAME;
            m_pD3DXFont->DrawTextA(NULL, gameName.c_str(), -1, &rect, DT_CENTER|DT_VCENTER, D3DCOLOR_RGBA(255, 255, 0, 255));
        }
    }

    DXFont() {
        m_pD3DXFont = NULL;
        Events::drawingEvent.Add(Draw);
        Events::initRwEvent.Add(InitFont);
        Events::shutdownRwEvent.Add(DestroyFont);
        Events::d3dLostEvent.Add(DestroyFont);
        Events::d3dResetEvent.Add(InitFont);
    }
} dxFont;

ID3DXFont *DXFont::m_pD3DXFont;