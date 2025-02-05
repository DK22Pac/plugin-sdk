/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "T_CB_Generic.h"

T_CB_Generic_NoArgs::T_CB_Generic_NoArgs(void (*cb)()) {
    plugin::CallMethodDyn<T_CB_Generic_NoArgs*>(gpattern("8B 15 ? ? ? ? 8B 41 04 33 C2 25 ? ? ? ? 31 41 04 8B 44 24 04 42"), this, cb);
}

void T_CB_Generic_NoArgs::Execute() {
    plugin::CallMethodDyn<T_CB_Generic_NoArgs*>(gpattern("8B 41 08 FF E0"), this);
}
