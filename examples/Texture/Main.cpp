#include "plugin.h"
#include "CSprite2d.h"

using namespace plugin;

class TextureExample {
public:
    TextureExample() {
        static CSprite2d sprite;

        Events::drawingEvent += [] {
            if(!sprite.m_pTexture) // load texture only once
                sprite.m_pTexture = RwD3D9DDSTextureRead(PLUGIN_PATH((char*)"image"), 0); // rw api gives you ability to load dds images
            sprite.Draw(CRect(10.0f, 10.0f, 300.0f, 300.0f), CRGBA(255, 255, 255, 255)); // draw sprite
        };

        Events::shutdownRwEvent += [] {
            sprite.Delete(); // delete loaded texture
        };
    }
} texExample;