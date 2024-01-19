/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHudComponent.h"

CHudComponentInfo* aHudComponentInfo = gpatternt(CHudComponentInfo, "BE ? ? ? ? EB 06 8D 9B 00 00 00 00 8B 0E", 1); // [455]
int32_t& MaxComponentInfo = *gpatternt(int32_t, "81 FE ? ? ? ? 7C D6 8B 0D ? ? ? ? 6A 00 8B 0C 8D ? ? ? ? 6A 00", 2);

bool CHudComponent::IsDisplaying() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("80 79 11 00 0F 95 C0"), this);
}
