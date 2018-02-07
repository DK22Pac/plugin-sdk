#ifdef _MSC_VER
#include "plugin.h"
#include "Parameters.h"
#include "NitrousControl.h"
#include "DrawNitrousIndicator.h"
#include "ASM injections/ASM_PassNitrousAcc.h"
#include "ASM injections/ASM_SelectAccMultiplier.h"

/* Originally made by Wesser
   http://www.gtagarage.com/mods/show.php?id=19010
*/

using namespace plugin;

class FullNitrousControl {
public:
    static void CheckForOtherPlugins() {
        if (GetModuleHandle("V_HUD_by_DK22Pac.asi"))
            FNC_DRAW_V_HUD = true;
        else if (GetModuleHandle("GTASA.WidescreenFix.asi") && GetModuleHandle("wshps.asi"))
            FNC_DRAW_WIDESCREEN_PARAMETERS = true;
    }

    FullNitrousControl() {
        Events::initRwEvent.Add(CheckForOtherPlugins);
        Events::drawRadarEvent.Add(DrawNitrousIndicator);
        if (FNC_ENABLE_KEYBOARD_CONTROL)
            Events::gameProcessEvent.Add(DoKeyboardCheck);
        patch::RedirectJump(0x6A3EA0, NitrousControl);
        patch::Nop(0x6B2114, 6); // Prevent nitro for fully reloading when vehicle's driver is outside (fix)
        patch::RedirectJump(0x6D076C, ASM_SelectAccMultiplier);
        patch::RedirectJump(0x6B277C, ASM_PassNitrousAcc);
        screen::SetBaseResolution(900.0f);
    }
} fullNitrousControlPlg;
#else
#error This example can't be compiled with mingw compiler
#endif