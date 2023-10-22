/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBaseDC.h"
#include "Patch.h"

static int32_t* CBaseDC__TotalDrawCommandsAddr;
int32_t& CBaseDC::TotalDrawCommands = *(int32_t*)CBaseDC__TotalDrawCommandsAddr;

static uint32_t CBaseDC__operator_newAddr;
void* CBaseDC::operator new(std::size_t size) {
    return plugin::CallAndReturnDyn<void*>(CBaseDC__operator_newAddr, size, 0);
}

static uint32_t CBaseDC__AppendAddr;
void CBaseDC::Append(CBaseDC* dc) {
    plugin::CallDyn<CBaseDC*>(CBaseDC__AppendAddr, dc);
}

static uint32_t CBaseDC__Append_1Addr;
void CBaseDC::Append() {
    plugin::CallMethodDyn<CBaseDC*>(CBaseDC__Append_1Addr, this);
}

template<>
void plugin::InitPatterns<CBaseDC>() {
    CBaseDC__TotalDrawCommandsAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("89 15 ? ? ? ? C7 01 ? ? ? ? 8B C1", 2));

    CBaseDC__operator_newAddr = plugin::GetPattern("53 56 57 8B 7C 24 10 FF 74 24 14", 0);
    CBaseDC__AppendAddr = plugin::GetPattern("56 57 8B 7C 24 0C 8B CF 8B 07 FF 50 08", 0);
    CBaseDC__Append_1Addr = plugin::GetPattern("56 57 8B F9 8B 07 FF 50 08 25", 0);
}
