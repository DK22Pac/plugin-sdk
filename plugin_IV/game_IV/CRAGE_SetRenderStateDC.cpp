#include "CRAGE_SetRenderStateDC.h"

static uint32_t CRAGE_SetRenderStateDC__CRAGE_SetRenderStateDCAddr;
CRAGE_SetRenderStateDC::CRAGE_SetRenderStateDC(int32_t state, int32_t value) {
    plugin::CallMethodDyn<CRAGE_SetRenderStateDC*>(CRAGE_SetRenderStateDC__CRAGE_SetRenderStateDCAddr, this, state, value);
}

template<>
void plugin::InitPatterns<CRAGE_SetRenderStateDC>() {
    CRAGE_SetRenderStateDC__CRAGE_SetRenderStateDCAddr = plugin::GetPattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 FF 05 ? ? ? ? 8B 44 24 04 89 41 08 8B 44 24 08 89 41 0C C7 01 ? ? ? ? 8B C1 C2 08 00 CC CC CC CC CC CC CC CC CC CC 53", 0);
}
