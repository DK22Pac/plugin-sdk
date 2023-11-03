/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "T_CB_Generic.h"
#include "Patch.h"

static uint32_t T_CB_Generic_NoArgs__T_CB_Generic_NoArgsAddr;
T_CB_Generic_NoArgs::T_CB_Generic_NoArgs(void (*cb)()) {
    plugin::CallMethodDyn<T_CB_Generic_NoArgs*>(T_CB_Generic_NoArgs__T_CB_Generic_NoArgsAddr, this, cb);
}

static uint32_t T_CB_Generic_NoArgs__DrawCommand;
void T_CB_Generic_NoArgs::DrawCommand() {
    plugin::CallMethodDyn<T_CB_Generic_NoArgs*>(T_CB_Generic_NoArgs__DrawCommand, this);
}

template<>
void plugin::InitPatterns<T_CB_Generic>() {    
    T_CB_Generic_NoArgs__T_CB_Generic_NoArgsAddr = plugin::GetPattern("8B 15 ? ? ? ? 8B 41 04 33 C2 25 ? ? ? ? 31 41 04 8B 44 24 04 42", 0);
    T_CB_Generic_NoArgs__DrawCommand = plugin::GetPattern("8B 41 08 FF E0", 0);
}
