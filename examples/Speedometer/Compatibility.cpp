#include "Compatibility.h"
#include "plugin.h"
#include "CFont.h"
#include "common.h"

using namespace plugin;

void Compatibility::PrintAreaName(float x, float y, char *text) {
    if (FindPlayerVehicle(-1, false)) {
        x -= SCREEN_COORD(291.0f + 64.0f);
        CFont::PrintStringFromBottom(x, y, text);
    }
    else
        CFont::PrintStringFromBottom(x, y, text);
}

void Compatibility::PrintVehicleName(float x, float y, char *text) {
    if (FindPlayerVehicle(-1, false)) {
        x -= SCREEN_COORD(291.0f + 64.0f);
        CFont::PrintString(x, y, text);
    }
    else
        CFont::PrintString(x, y, text);
}

void Compatibility::InstallCompatibilityPatches() {
    patch::RedirectCall(0x58AE5D, PrintAreaName);
    patch::RedirectCall(0x58B156, PrintVehicleName);
}