/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audController.h"

rage::audController*& rage::g_Controller = *gpatternt(rage::audController*, "C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? 6A 01 E8 ? ? ? ? 6A 01", 2);

void rage::audController::Update(uint32_t timeInMs) {
    plugin::CallMethodDyn(gpattern("55 8B EC 83 E4 F8 83 EC 44 53 56 57 8B F9"), this, timeInMs);
}
