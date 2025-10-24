#include <plugin.h>

#if defined(GTA3) or defined(GTAVC) or defined(GTASA)
    #include <CMessages.h>
#elif defined (GTA2)
    #include <CHud.h>
#endif

using namespace plugin;

struct Main
{
    Main()
    {
        // register event callbacks
        Events::gameProcessEvent += []{ gInstance.OnGameProcess(); };
    }

    void OnGameProcess()
    {
        #if defined(GTA3) or defined(GTAVC) or defined(GTASA)
            CMessages::AddMessageJumpQ("Hello, world!", 500, 0);
        #elif defined (GTA2)
            GetHud()->m_HudMessage.SetHudMessage(L"Hello, world!", MESSAGE_DISPLAY_NOW);
        #endif
    }
} gInstance;
