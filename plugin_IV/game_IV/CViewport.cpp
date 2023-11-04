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

static uint32_t CViewport__SetWidescreenBordersAddr;
void CViewport::SetWidescreenBorders(bool on, int32_t delay) {
    plugin::CallMethodDyn(CViewport__SetWidescreenBordersAddr, this, on, delay);
}

template<>
void plugin::InitPatterns<CViewport>() {
    TheViewportAddr = (CViewport*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? 6A 00 6A 00 C6 05", 1));

    CTheViewport__FindAspectRatio = plugin::GetPattern("A1 ? ? ? ? 83 EC 14 57", 0);
    CViewport__SetWidescreenBordersAddr = plugin::GetPattern("56 8B F1 E8 ? ? ? ? 8B 4E 14", 0);
}
