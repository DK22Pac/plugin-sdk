cmake_minimum_required(VERSION 3.15)
project(plugin-sdk LANGUAGES C CXX RC)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# C++23 standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

option(BUILD_CLASSIC "Build classic 32-bit targets" ON)
option(BUILD_UNREAL "Build Unreal 64-bit targets" ON)

# Suppress warnings that are expected in this MSVC game modding SDK
add_compile_options(
    -Wno-invalid-offsetof          # offsetof on non-standard-layout types (game structures)
    -Wno-pragma-pack               # MSVC-style #pragma pack usage
    -Wno-microsoft-cast            # MSVC-specific casts
    -Wno-reinterpret-base-class    # common in game hook code
    -Wno-unused-private-field      # padding fields in game structures
    -Wno-unused-variable
    -Wno-missing-field-initializers
    -Wno-ignored-pragma-intrinsic  # MSVC #pragma intrinsic
)

# Common include directories
set(COMMON_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/shared
    ${CMAKE_CURRENT_SOURCE_DIR}/shared/game
    ${CMAKE_CURRENT_SOURCE_DIR}/shared/dxsdk
    ${CMAKE_CURRENT_SOURCE_DIR}/safetyhook
    ${CMAKE_CURRENT_SOURCE_DIR}/injector
    ${CMAKE_CURRENT_SOURCE_DIR}/hooking
)

# Common source files
file(GLOB_RECURSE COMMON_SOURCES
    "shared/*.cpp"
    "shared/*.c"
    "shared/*.rc"
    "hooking/*.cpp"
    "safetyhook/*.cpp"
    "safetyhook/*.c"
)

if(BUILD_CLASSIC)
# --- Plugin_SA (GTA San Andreas) ---
file(GLOB_RECURSE SA_SOURCES
    "plugin_sa/*.cpp"
)
add_library(Plugin_SA STATIC ${COMMON_SOURCES} ${SA_SOURCES})
target_include_directories(Plugin_SA PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa/game_sa
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa/game_sa/enums
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa/game_sa/rw
)
target_compile_definitions(Plugin_SA PUBLIC
    GTASA
    PLUGIN_SGV_10US
    RW
    _DX9_SDK_INSTALLED
)

# --- Plugin_VC (GTA Vice City) ---
file(GLOB_RECURSE VC_SOURCES
    "plugin_vc/*.cpp"
)
add_library(Plugin_VC STATIC ${COMMON_SOURCES} ${VC_SOURCES})
target_include_directories(Plugin_VC PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc/game_vc
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc/game_vc/enums
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc/game_vc/rw
)
target_compile_definitions(Plugin_VC PUBLIC
    GTAVC
    PLUGIN_SGV_10EN
    RW
    _DX9_SDK_INSTALLED
)

# --- Plugin_III (GTA III) ---
file(GLOB_RECURSE III_SOURCES
    "plugin_III/*.cpp"
)
add_library(Plugin_III STATIC ${COMMON_SOURCES} ${III_SOURCES})
target_include_directories(Plugin_III PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_III
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_III/game_III
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_III/game_III/enums
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_III/game_III/rw
)
target_compile_definitions(Plugin_III PUBLIC
    GTA3
    PLUGIN_SGV_10EN
    RW
    _DX9_SDK_INSTALLED
)

# --- Plugin_II (GTA II) ---
file(GLOB_RECURSE II_SOURCES
    "plugin_II/*.cpp"
)
add_library(Plugin_II STATIC ${COMMON_SOURCES} ${II_SOURCES})
target_include_directories(Plugin_II PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_II
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_II/game_II
)
target_compile_definitions(Plugin_II PUBLIC
    GTA2
    PLUGIN_SGV_96EN
    GBH
    _DX9_SDK_INSTALLED
)

# --- Plugin_IV (GTA IV) ---
file(GLOB_RECURSE IV_SOURCES
    "plugin_IV/*.cpp"
)
add_library(Plugin_IV STATIC ${COMMON_SOURCES} ${IV_SOURCES})
target_include_directories(Plugin_IV PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_IV
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_IV/game_IV
)
target_compile_definitions(Plugin_IV PUBLIC
    GTAIV
    PLUGIN_SGV_CE
    RAGE
    _DX9_SDK_INSTALLED
)
endif()

if(BUILD_UNREAL)
# --- Plugin_III_Unreal (GTA III Unreal) ---
file(GLOB_RECURSE III_UNREAL_SOURCES
    "plugin_iii_unreal/*.cpp"
)
add_library(Plugin_III_Unreal STATIC ${COMMON_SOURCES} ${III_UNREAL_SOURCES})
target_include_directories(Plugin_III_Unreal PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_iii_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_iii_unreal/game_iii_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_iii_unreal/game_iii_unreal/rw
)
target_compile_definitions(Plugin_III_Unreal PUBLIC
    _WIN64
    GTA3_UNREAL
    PLUGIN_UNREAL
    UNREAL
    NOASM
    RWINT32FROMFLOAT
    _CRT_NON_CONFORMING_SWPRINTFS
    _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
    _DX9_SDK_INSTALLED
)

# --- Plugin_SA_Unreal (GTA San Andreas Unreal) ---
file(GLOB_RECURSE SA_UNREAL_SOURCES
    "plugin_sa_unreal/*.cpp"
)
add_library(Plugin_SA_Unreal STATIC ${COMMON_SOURCES} ${SA_UNREAL_SOURCES})
target_include_directories(Plugin_SA_Unreal PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa_unreal/game_sa_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_sa_unreal/game_sa_unreal/rw
)
target_compile_definitions(Plugin_SA_Unreal PUBLIC
    _WIN64
    GTASA_UNREAL
    PLUGIN_UNREAL
    UNREAL
    NOASM
    RWINT32FROMFLOAT
    _CRT_NON_CONFORMING_SWPRINTFS
    _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
    _DX9_SDK_INSTALLED
)

# --- Plugin_VC_Unreal (GTA Vice City Unreal) ---
file(GLOB_RECURSE VC_UNREAL_SOURCES
    "plugin_vc_unreal/*.cpp"
)
add_library(Plugin_VC_Unreal STATIC ${COMMON_SOURCES} ${VC_UNREAL_SOURCES})
target_include_directories(Plugin_VC_Unreal PUBLIC
    ${COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc_unreal/game_vc_unreal
    ${CMAKE_CURRENT_SOURCE_DIR}/plugin_vc_unreal/game_vc_unreal/rw
)
target_compile_definitions(Plugin_VC_Unreal PUBLIC
    _WIN64
    GTAVC_UNREAL
    PLUGIN_UNREAL
    UNREAL
    NOASM
    RWINT32FROMFLOAT
    _CRT_NON_CONFORMING_SWPRINTFS
    _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
    _DX9_SDK_INSTALLED
)
endif()

# --- Unified Target Output Properties (Match original MSVC naming in MinGW format) ---
set(ALL_TARGETS)
if(BUILD_CLASSIC)
    list(APPEND ALL_TARGETS
        Plugin_II
        Plugin_III
        Plugin_IV
        Plugin_SA
        Plugin_VC
    )
endif()
if(BUILD_UNREAL)
    list(APPEND ALL_TARGETS
        Plugin_III_Unreal
        Plugin_SA_Unreal
        Plugin_VC_Unreal
    )
endif()

foreach(tgt ${ALL_TARGETS})
    if(TARGET ${tgt})
        set_target_properties(${tgt} PROPERTIES
            PREFIX "lib"
            SUFFIX ".a"
        )
    endif()
endforeach()

# Match original MSVC output names (Plugin.lib / Plugin_Unreal.lib)
if(TARGET Plugin_SA)
    set_target_properties(Plugin_SA PROPERTIES
        OUTPUT_NAME "Plugin"
    )
endif()
if(TARGET Plugin_SA_Unreal)
    set_target_properties(Plugin_SA_Unreal PROPERTIES
        OUTPUT_NAME "Plugin_Unreal"
    )
endif()
