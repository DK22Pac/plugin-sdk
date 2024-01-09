/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRAGE_SetRenderStateDC.h"

CRAGE_SetRenderStateDC::CRAGE_SetRenderStateDC(int32_t state, int32_t value) {
    plugin::CallMethodDyn<CRAGE_SetRenderStateDC*>(gpattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 FF 05 ? ? ? ? 8B 44 24 04 89 41 08 8B 44 24 08 89 41 0C C7 01 ? ? ? ? 8B C1 C2 08 00 CC CC CC CC CC CC CC CC CC CC 53"), this, state, value);
}
