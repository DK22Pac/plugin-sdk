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

static uint32_t CBaseDC__DtorAddr;
CBaseDC::~CBaseDC() {
    plugin::CallMethodDyn(CBaseDC__DtorAddr, this);
}

template<>
void plugin::InitPatterns<CBaseDC>() {
    CBaseDC__TotalDrawCommandsAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("89 15 ? ? ? ? C7 01 ? ? ? ? 8B C1", 2));

    CBaseDC__operator_newAddr = plugin::GetPattern("53 56 57 8B 7C 24 10 FF 74 24 14", 0);
    CBaseDC__AppendAddr = plugin::GetPattern("56 57 8B 7C 24 0C 8B CF 8B 07 FF 50 08", 0);
    CBaseDC__Append_1Addr = plugin::GetPattern("56 57 8B F9 8B 07 FF 50 08 25", 0);

    CBaseDC__DtorAddr = plugin::GetPattern("F6 44 24 ? ? 56 8B F1 C7 06 ? ? ? ? 74 11 64 A1 ? ? ? ? 56 8B 00 8B 48 08 8B 01 FF 50 0C 8B C6 5E C2 04 00 CC CC CC CC CC CC CC CC CC 51 8B 15", 0);
}
