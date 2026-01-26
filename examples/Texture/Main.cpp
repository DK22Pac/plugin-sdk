#include "plugin.h"
#include "SpriteLoader.h"
#include "CSprite2d.h"

using namespace plugin;

class TextureExample {
public:
    static inline plugin::SpriteLoader spriteLoader = {};

    TextureExample() {
        Events::drawHudEvent += [] {
			auto sprite = spriteLoader.GetSprite("image"); // get sprite called image
            sprite.Draw(CRect(10.0f, 10.0f, 300.0f, 300.0f), CRGBA(255, 255, 255, 255)); // draw sprite
        };

        Events::initRwEvent += []() {
 			spriteLoader.LoadSpriteFromFolder(PLUGIN_PATH("image.png")); // load single sprite called image.png
        };

        Events::shutdownRwEvent += [] {
            spriteLoader.Clear(); // delete any loaded sprites
        };
    }
} texExample;