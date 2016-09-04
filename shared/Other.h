#pragma once

namespace plugin {
    inline unsigned int Random(unsigned int min, unsigned int max) {
        return min + (rand() % (max - min + 1));
    }

    inline bool KeyPressed(unsigned int keyCode) {
        return (GetKeyState(keyCode) & 0x8000) != 0;
    }
}