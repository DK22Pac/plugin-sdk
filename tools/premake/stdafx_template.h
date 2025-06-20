#pragma once

#ifdef USE_PCH
    #include <algorithm>
    #include <array>
    #include <assert.h>
    #include <cassert>
    #include <crtdbg.h>
    #include <cstddef>
    #include <cstdint>
    #include <cstdio>
    #include <expected>
    #include <functional>
    #include <limits>
    #include <list>
    #include <map>
    #include <math.h>
    #include <memory>
    #include <rwcore.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h> // c-string utils
    #include <string> // std::string
    #include <string_view>
    #include <tchar.h>
    #include <tuple>
    #include <type_traits>
    #include <unordered_map>
    #include <utility>
    #include <vector>
    #include <windows.h>

GENERATED_LIST

    #ifdef GTAIII
        #include "game_iii\CVector.h"
        #include "game_iii\CVector2D.h"
    #endif
    #ifdef GTAVC
        #include "game_vc\CVector.h"
        #include "game_vc\CVector2D.h"
    #endif
    #ifdef GTASA
        #include "game_sa\CVector.h"
        #include "game_sa\CVector2D.h"
    #endif
#endif