// Plugin testing corectness of SDK's script draws releated variables.
// WARNING: This is not how you want to draw things in your ASI plugin. Use functions like CMenuManager::DrawWindow or CFont::PrintString instead.

#include "plugin.h"
#include <CMessages.h>
#include <CTheScripts.h>
#include <extensions/ScriptCommands.h>

using namespace plugin;

class ScriptDrawsTest
{
public:
    int initialized = false;

    ScriptDrawsTest()
    {
        Events::initScriptsEvent += []
        {
            instance.initialized = false;
        };

        Events::processScriptsEvent += []
        {
            if (!instance.initialized)
            {
                instance.initialized = true;
                CTheScripts::UseTextCommands = eUseTextCommandState::ENABLED_BY_SCRIPT;

                #ifdef GTASA
                    Command<Commands::LOAD_TEXTURE_DICTIONARY>("..\\hud");
                #else
                    Command<Commands::LOAD_TEXTURE_DICTIONARY>("hud");
                #endif
                Command<Commands::LOAD_SPRITE>(1, "fist");
            }

            auto countTxt = _countof(CTheScripts::IntroTextLines);
            auto countRect = _countof(CTheScripts::IntroRectangles);
            auto countSprite = _countof(CTheScripts::ScriptSprites);
            const char* spriteTex = CTheScripts::ScriptSprites[0].m_pTexture ? CTheScripts::ScriptSprites[0].m_pTexture->name : "";

            // print summary
            #ifdef GTASA
                static char msg[128];
                sprintf_s(msg, "GTA %s~n~Texts: %zu, Rectangles: %zu, Sprites: %zu~n~Texture: '%s'", GTAGAME_ABBR, countTxt, countRect, countSprite, spriteTex);
                CMessages::AddMessageJumpQ(msg, 500, 0, false);
            #else
                static wchar_t msg[128];
                swprintf_s(msg, L"GTA %S - Texts: %zu, Rectangles: %zu, Sprites: %zu, Texture: '%S'", GTAGAME_ABBR, countTxt, countRect, countSprite, spriteTex);
                CMessages::AddMessageJumpQ(msg, 500, 0);
            #endif

            srand(0); // same random colors every frame

            // draw script texts
            auto& txtIdx = CTheScripts::NumberOfIntroTextLinesThisFrame;
            while (txtIdx < countTxt)
            {
                auto& txt = CTheScripts::IntroTextLines[txtIdx];
                if (txtIdx & 0x01) txt = {}; // init every other with SDK's default values
                txt.xPosition = 320.0f;
                txt.yPosition = 10.0f + 20.0f * txtIdx;
                txt.color.r = 128 + rand() % 128;
                txt.color.g = 128 + rand() % 128;
                txt.color.b = 128 + rand() % 128;

                #ifdef GTASA
                    strcpy_s(txt.text, "DEAD");
                #else
                    swprintf_s(txt.text, L"Text %d", txtIdx);
                #endif

                txtIdx++;
            }

            // draw script rectangles
            //Command<Commands::DRAW_RECT>(55.0f, 55.0f, 100.0f, 100.0f, 255, 255, 255, 255);
            //Command<Commands::DRAW_SPRITE>(1, 55.0f, 55.0f, 100.0f, 100.0f, 255, 255, 255, 255);
            auto& rectIdx = CTheScripts::NumberOfIntroRectanglesThisFrame;
            while (rectIdx < countRect)
            {
                auto& rect = CTheScripts::IntroRectangles[rectIdx];
                if (rectIdx & 0x01) rect = {}; // init every other with SDK's default values

                #ifdef GTASA
                    rect.type = eScriptRectangleType::SOLID_COLOUR;
                #else
                    rect.isUsed = true;
                #endif

                rect.rect.left = 10.0f + 60.0f * (rectIdx % 10);
                rect.rect.top = 10.0f + 60.0f * (rectIdx / 10);
                rect.rect.right = rect.rect.left + 50.0f;
                rect.rect.bottom = rect.rect.top + 50.0f;

                if (rectIdx == 0)
                {
                    #ifdef GTASA
                        rect.type = eScriptRectangleType::SPRITE_NO_ROTATION;
                    #endif
                    rect.spriteIdx = 0;
                }
                else
                {
                    rect.color.r = rand() % 255;
                    rect.color.g = rand() % 255;
                    rect.color.b = rand() % 255;
                    rect.color.a = 128 + rand() % 128;
                }

                rectIdx++;
            }
        };
    }
} instance;
