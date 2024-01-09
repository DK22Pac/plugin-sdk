/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "grcWindow.h"

int32_t& rage::grcWindow::m_Width = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 68", 2);
int32_t& rage::grcWindow::m_Height = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 68 ? ? ? ? 8B 08 50 FF 51 40 85 C0", 2);
