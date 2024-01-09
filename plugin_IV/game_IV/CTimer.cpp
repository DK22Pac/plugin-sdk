/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"

float& CTimer::ms_fTimeStep = *gpatternt(float, "F3 0F 11 0D ? ? ? ? F3 0F 11 15 ? ? ? ? F3 0F 2C C0", 4);
float& CTimer::ms_fTimeScale = *gpatternt(float, "F3 0F 11 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 55", 4);
uint32_t& CTimer::m_snPreviousTimeInMillisecondsPauseMode = *gpatternt(uint32_t, "89 0D ? ? ? ? 03 C8", 1);
uint32_t& CTimer::m_snTimeInMillisecondsPauseMode = *gpatternt(uint32_t, "89 0D ? ? ? ? F3 0F 11 05 ? ? ? ? A3 ? ? ? ? E8 ? ? ? ? F3 0F 10 0D ? ? ? ? F3 0F 10 44 24 ? 84 C0 74 07 0F 2F C1 77 17 EB 18 0F 2F C1 76 03 0F 28 C8 F3 0F 10 05 ? ? ? ? 0F 2F C1 77 03 0F 28 C8 80 3D", 2);
uint32_t& CTimer::m_snPreviousTimeInMilliseconds = *gpatternt(uint32_t, "A3 ? ? ? ? E8 ? ? ? ? F3 0F 10 54 24", 1);
uint32_t& CTimer::m_snTimeInMilliseconds = *gpatternt(uint32_t, "8B 0D ? ? ? ? 89 0D ? ? ? ? F3 0F 10 05", 2);
bool& CTimer::m_CodePause = *gpatternt(bool, "0A 05 ? ? ? ? 74 0D 80 3D ? ? ? ? ? 0F 84 ? ? ? ? A1", 2);
bool& CTimer::m_UserPause = *gpatternt(bool, "0A 05 ? ? ? ? 0A 05 ? ? ? ? 74 0D 80 3D ? ? ? ? ? 0F 84 ? ? ? ? A1", 2);
int32_t& CTimer::m_FrameCounter = *gpatternt(int32_t, "FF 05 ? ? ? ? F3 0F 2C C0", 2);

void CTimer::SetTimeScale(float scale) {
    plugin::CallDyn(gpattern("F3 0F 10 44 24 ? F3 0F 11 05 ? ? ? ? F3 0F 11 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 55"), scale);
}
