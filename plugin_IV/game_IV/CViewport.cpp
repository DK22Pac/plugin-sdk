/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CViewport.h"
#include "Patch.h"

static CViewport* TheViewportAddr;
CViewport& TheViewport = *(CViewport*)TheViewportAddr;

static uint32_t CTheViewport__FindAspectRatio;
float CViewport::FindAspectRatio(bool wide) {
    return plugin::CallMethodAndReturnDyn<float, CViewport*>(CTheViewport__FindAspectRatio, this, wide);
}

template<>
void plugin::InitPatterns<CViewport>() {
    TheViewportAddr = (CViewport*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? 53 56 FF 35", 0));

    CTheViewport__FindAspectRatio = plugin::GetPattern("A1 ? ? ? ? 83 EC 14 57", 0);
}
