#include <plugin.h>
#include "utest.h"
#include "Test_CVector.h"

using namespace plugin;

UTEST_STATE();

struct Main
{
    Main()
    {
        gInstance.RunTests(); // run now. In future some tests might require the game to be initialized
        // register event callbacks
        //Events::menuDrawingEvent += []{ gInstance.RunTests(); };
    }

    void RunTests()
    {
        // just once
        static bool ran = false;
        if (ran) return;
        ran = true;

        if(AllocConsole())
        {
            SetWindowText(GetConsoleWindow(), "Plugin-SDK Unit Tests");
            //RemoveMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
            
            // redirect output into new console
            FILE* fDummy;
            freopen_s(&fDummy, "CONOUT$", "w", stdout);
            std::cout.clear();
            std::clog.clear();
        }

        utest_main(__argc, __argv);
    }
} gInstance;

