#include <plugin_vc.h>
#include <d3dx8.h>
#include <game_vc\RenderWare.h>

using namespace plugin;

class DXFont {
public:
    static ID3DXFont *m_pD3DXFont;

    static void InitFont() {
        HFONT hFont = CreateFont(48, 0, 0, 0, FW_NORMAL, FALSE, FALSE, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS,
            CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH|FF_SWISS, "arial");
        if (FAILED(D3DXCreateFont(_RwD3DDevice, hFont, &m_pD3DXFont)))
            Error("Failed to create D3DX font!");
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
            m_pD3DXFont->DrawTextA("D3DXFont example for GTA Vice City", -1, &rect, DT_CENTER|DT_VCENTER,
                D3DCOLOR_RGBA(255, 255, 0, 255));
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