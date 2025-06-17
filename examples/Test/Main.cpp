#include <plugin.h>

#if defined(GTA3) or defined(GTAVC) or defined(GTASA)
    #include <CMessages.h>
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
        #endif
    }
} gInstance;
