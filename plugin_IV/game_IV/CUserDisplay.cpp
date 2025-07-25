/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CUserDisplay.h"

CAreaName& CUserDisplay::DisplayAreaName = *gpatternt(CAreaName, "B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 8B 0D ? ? ? ? 68 ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A ? 8B 04 85 ? ? ? ? 6A ? C7 40 ? ? ? ? ? A1 ? ? ? ? 8B 04 85 ? ? ? ? C7 40 ? ? ? ? ? 8B 0D ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 6A ? 8B 0C 8D ? ? ? ? 6A ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 8B 0D ? ? ? ? 68 ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A ? 8B 04 85 ? ? ? ? 6A ? C7 40 ? ? ? ? ? A1 ? ? ? ? 8B 04 85 ? ? ? ? C7 40 ? ? ? ? ? 8B 0D ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 6A ? 8B 0C 8D ? ? ? ? 6A ? E8 ? ? ? ? B9", 1);
CStreetName& CUserDisplay::DisplayStreetName = *gpatternt(CStreetName, "B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 8B 0D ? ? ? ? 68 ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A ? 8B 04 85 ? ? ? ? 6A ? C7 40 ? ? ? ? ? A1 ? ? ? ? 8B 04 85 ? ? ? ? C7 40 ? ? ? ? ? 8B 0D ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 6A ? 8B 0C 8D ? ? ? ? 6A ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 8B 0D ? ? ? ? 68 ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A ? 8B 04 85 ? ? ? ? 6A ? C7 40 ? ? ? ? ? A1 ? ? ? ? 8B 04 85 ? ? ? ? C7 40 ? ? ? ? ? 8B 0D ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 6A ? 8B 0C 8D ? ? ? ? 6A ? E8 ? ? ? ? 8B 0D", 1);
CVehicleName& CUserDisplay::DisplayVehicleName = *gpatternt(CVehicleName, "B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 8B 0D ? ? ? ? 68 ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A ? 8B 04 85 ? ? ? ? 6A ? C7 40 ? ? ? ? ? A1 ? ? ? ? 8B 04 85 ? ? ? ? C7 40 ? ? ? ? ? 8B 0D ? ? ? ? 8B 0C 8D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 6A ? 8B 0C 8D ? ? ? ? 6A ? E8 ? ? ? ? 8B 0D", 1);

bool CAreaName::Compare() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("56 57 8D B1 ? ? ? ? 8D 79 ? 56 57 E8 ? ? ? ? 83 C4 ? 84 C0 75 ? 6A ? 56 57 E8 ? ? ? ? 83 C4 ? B0 ? 5F 5E C3 5F 32 C0 5E C3 CC 56 57 8D B1 ? ? ? ? 8D B9"), this);
}

bool CStreetName::Compare() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("56 57 8D B1 ? ? ? ? 8D B9"), this);
}

bool CVehicleName::Compare() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("56 57 8D B1 ? ? ? ? 8D 79 ? 56 57 E8 ? ? ? ? 83 C4 ? 84 C0 75 ? 6A ? 56 57 E8 ? ? ? ? 83 C4 ? B0 ? 5F 5E C3 5F 32 C0 5E C3 CC 56 57 8D B1 ? ? ? ? 8D 79"), this);
}
