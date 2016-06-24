#pragma once

namespace plugin {
    bool __inline KeyPressed(unsigned int keyCode) {
        return (GetKeyState(keyCode) & 0x8000) != 0;
    }
}