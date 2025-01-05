set(PROJECT_NAME plugin_ii)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "plugin_II.h"
)
source_group("" FILES ${no_group_source_files})

set(..__hooking
    "../hooking/Hooking.Patterns.cpp"
    "../hooking/Hooking.Patterns.h"
)
source_group("..\\hooking" FILES ${..__hooking})

set(..__injector
    "../injector/assembly.hpp"
    "../injector/calling.hpp"
    "../injector/hooking.hpp"
    "../injector/injector.hpp"
    "../injector/utility.hpp"
)
source_group("..\\injector" FILES ${..__injector})

set(..__injector__gvm
    "../injector/gvm/gvm.hpp"
    "../injector/gvm/translator.hpp"
)
source_group("..\\injector\\gvm" FILES ${..__injector__gvm})

set(..__safetyhook
    "../safetyhook/safetyhook.cpp"
    "../safetyhook/safetyhook.hpp"
    "../safetyhook/Zydis.c"
)
source_group("..\\safetyhook" FILES ${..__safetyhook})

set(..__shared
    "../shared/ArgPicker.h"
    "../shared/Audio.cpp"
    "../shared/Audio.h"
    "../shared/Base.h"
    "../shared/Color.cpp"
    "../shared/Color.h"
    "../shared/common_sdk.cpp"
    "../shared/common_sdk.h"
    "../shared/DynAddress.cpp"
    "../shared/DynAddress.h"
    "../shared/Error.h"
    "../shared/EventList.h"
    "../shared/Events.cpp"
    "../shared/Events.h"
    "../shared/Extender.h"
    "../shared/GameVersion.cpp"
    "../shared/GameVersion.h"
    "../shared/GameVersionMessage.h"
    "../shared/Image.cpp"
    "../shared/Image.h"
    "../shared/Maths.h"
    "../shared/Other.cpp"
    "../shared/Other.h"
    "../shared/Patch.cpp"
    "../shared/Patch.h"
    "../shared/Pattern.cpp"
    "../shared/Pattern.h"
    "../shared/plugin.cpp"
    "../shared/plugin.h"
    "../shared/PluginBase.cpp"
    "../shared/PluginBase.h"
    "../shared/RefList.h"
    "../shared/RefListUtils.h"
    "../shared/RenderWare.h"
    "../shared/resource.h"
    "../shared/rpplugin.h"
    "../shared/SpriteLoader.cpp"
    "../shared/SpriteLoader.h"
    "../shared/StringUtils.cpp"
    "../shared/StringUtils.h"
    "../shared/TextLoader.cpp"
    "../shared/TextLoader.h"
    "../shared/Timer.cpp"
    "../shared/Timer.h"
    "../shared/VersionsMacro.h"
)
source_group("..\\shared" FILES ${..__shared})

set(..__shared__bass
    "../shared/bass/bass.h"
)
source_group("..\\shared\\bass" FILES ${..__shared__bass})

set(..__shared__comp
    "../shared/comp/PluginsCompatibility.cpp"
    "../shared/comp/PluginsCompatibility.h"
    "../shared/comp/PluginSupport.cpp"
    "../shared/comp/PluginSupport.h"
)
source_group("..\\shared\\comp" FILES ${..__shared__comp})

set(..__shared__comp__plugins
    "../shared/comp/plugins/LimitAdjusterSupport.cpp"
    "../shared/comp/plugins/LimitAdjusterSupport.h"
)
source_group("..\\shared\\comp\\plugins" FILES ${..__shared__comp__plugins})

set(..__shared__dxsdk
    "../shared/dxsdk/audiodefs.h"
    "../shared/dxsdk/comdecl.h"
    "../shared/dxsdk/D2D1.h"
    "../shared/dxsdk/D2D1Helper.h"
    "../shared/dxsdk/D2DBaseTypes.h"
    "../shared/dxsdk/D2Derr.h"
    "../shared/dxsdk/d3d.h"
    "../shared/dxsdk/D3D10.h"
    "../shared/dxsdk/D3D10_1.h"
    "../shared/dxsdk/D3D10_1shader.h"
    "../shared/dxsdk/D3D10effect.h"
    "../shared/dxsdk/d3d10misc.h"
    "../shared/dxsdk/d3d10sdklayers.h"
    "../shared/dxsdk/D3D10shader.h"
    "../shared/dxsdk/D3D11.h"
    "../shared/dxsdk/D3D11SDKLayers.h"
    "../shared/dxsdk/D3D11Shader.h"
    "../shared/dxsdk/d3d8.h"
    "../shared/dxsdk/d3d8caps.h"
    "../shared/dxsdk/d3d8types.h"
    "../shared/dxsdk/d3d9.h"
    "../shared/dxsdk/d3d9caps.h"
    "../shared/dxsdk/d3d9types.h"
    "../shared/dxsdk/d3dcaps.h"
    "../shared/dxsdk/D3Dcommon.h"
    "../shared/dxsdk/D3Dcompiler.h"
    "../shared/dxsdk/D3DCSX.h"
    "../shared/dxsdk/d3dres.h"
    "../shared/dxsdk/d3drm.h"
    "../shared/dxsdk/d3drmdef.h"
    "../shared/dxsdk/d3drmobj.h"
    "../shared/dxsdk/d3drmwin.h"
    "../shared/dxsdk/d3dtypes.h"
    "../shared/dxsdk/d3dutil.h"
    "../shared/dxsdk/d3dx.h"
    "../shared/dxsdk/D3DX10.h"
    "../shared/dxsdk/d3dx10async.h"
    "../shared/dxsdk/D3DX10core.h"
    "../shared/dxsdk/D3DX10math.h"
    "../shared/dxsdk/D3DX10mesh.h"
    "../shared/dxsdk/D3DX10tex.h"
    "../shared/dxsdk/D3DX11.h"
    "../shared/dxsdk/D3DX11async.h"
    "../shared/dxsdk/D3DX11core.h"
    "../shared/dxsdk/D3DX11tex.h"
    "../shared/dxsdk/d3dx8.h"
    "../shared/dxsdk/d3dx8core.h"
    "../shared/dxsdk/d3dx8effect.h"
    "../shared/dxsdk/d3dx8math.h"
    "../shared/dxsdk/d3dx8mesh.h"
    "../shared/dxsdk/d3dx8shape.h"
    "../shared/dxsdk/d3dx8tex.h"
    "../shared/dxsdk/d3dx9.h"
    "../shared/dxsdk/d3dx9anim.h"
    "../shared/dxsdk/d3dx9core.h"
    "../shared/dxsdk/d3dx9effect.h"
    "../shared/dxsdk/d3dx9math.h"
    "../shared/dxsdk/d3dx9mesh.h"
    "../shared/dxsdk/d3dx9shader.h"
    "../shared/dxsdk/d3dx9shape.h"
    "../shared/dxsdk/d3dx9tex.h"
    "../shared/dxsdk/d3dx9xof.h"
    "../shared/dxsdk/d3dxcore.h"
    "../shared/dxsdk/d3dxerr.h"
    "../shared/dxsdk/d3dxmath.h"
    "../shared/dxsdk/d3dxshapes.h"
    "../shared/dxsdk/d3dxsprite.h"
    "../shared/dxsdk/Dcommon.h"
    "../shared/dxsdk/dinput.h"
    "../shared/dxsdk/dinputd.h"
    "../shared/dxsdk/dsconf.h"
    "../shared/dxsdk/dsetup.h"
    "../shared/dxsdk/dsound.h"
    "../shared/dxsdk/DWrite.h"
    "../shared/dxsdk/dxdiag.h"
    "../shared/dxsdk/DxErr.h"
    "../shared/dxsdk/dxfile.h"
    "../shared/dxsdk/DXGI.h"
    "../shared/dxsdk/DXGIFormat.h"
    "../shared/dxsdk/DXGIType.h"
    "../shared/dxsdk/dxsdkver.h"
    "../shared/dxsdk/gameux.h"
    "../shared/dxsdk/PIXPlugin.h"
    "../shared/dxsdk/rmxfguid.h"
    "../shared/dxsdk/rmxftmpl.h"
    "../shared/dxsdk/rpcsal.h"
    "../shared/dxsdk/X3DAudio.h"
    "../shared/dxsdk/xact3.h"
    "../shared/dxsdk/xact3d3.h"
    "../shared/dxsdk/xact3wb.h"
    "../shared/dxsdk/XAPO.h"
    "../shared/dxsdk/XAPOBase.h"
    "../shared/dxsdk/XAPOFX.h"
    "../shared/dxsdk/XAudio2.h"
    "../shared/dxsdk/XAudio2fx.h"
    "../shared/dxsdk/XDSP.h"
    "../shared/dxsdk/XInput.h"
    "../shared/dxsdk/xma2defs.h"
    "../shared/dxsdk/xnamath.h"
)
source_group("..\\shared\\dxsdk" FILES ${..__shared__dxsdk})

set(..__shared__extender
    "../shared/extender/ObjectExtender.h"
    "../shared/extender/PedExtender.h"
    "../shared/extender/VehicleExtender.h"
)
source_group("..\\shared\\extender" FILES ${..__shared__extender})

set(..__shared__extensions
    "../shared/extensions/Config.cpp"
    "../shared/extensions/Config.h"
    "../shared/extensions/DynamicResource.cpp"
    "../shared/extensions/DynamicResource.h"
    "../shared/extensions/FontPrint.cpp"
    "../shared/extensions/FontPrint.h"
    "../shared/extensions/KeyCheck.cpp"
    "../shared/extensions/KeyCheck.h"
    "../shared/extensions/Paths.cpp"
    "../shared/extensions/Paths.h"
    "../shared/extensions/PoolIterator.h"
    "../shared/extensions/Screen.cpp"
    "../shared/extensions/Screen.h"
    "../shared/extensions/ScriptCommands.cpp"
    "../shared/extensions/ScriptCommands.h"
    "../shared/extensions/Shader.cpp"
    "../shared/extensions/Shader.h"
)
source_group("..\\shared\\extensions" FILES ${..__shared__extensions})

set(..__shared__extensions__scripting
    "../shared/extensions/scripting/ScriptCommandNames.h"
)
source_group("..\\shared\\extensions\\scripting" FILES ${..__shared__extensions__scripting})

set(..__shared__game
    "../shared/game/CompressedVector.cpp"
    "../shared/game/CompressedVector.h"
    "../shared/game/CompressedVector2D.cpp"
    "../shared/game/CompressedVector2D.h"
    "../shared/game/CRGBA.cpp"
    "../shared/game/CRGBA.h"
)
source_group("..\\shared\\game" FILES ${..__shared__game})

set(..__shared__rwd3d9
    "../shared/rwd3d9/rwd3d9.h"
)
source_group("..\\shared\\rwd3d9" FILES ${..__shared__rwd3d9})

set(game_II
    "game_II/CAudioManager.cpp"
    "game_II/CAudioManager.h"
    "game_II/CCamera.cpp"
    "game_II/CCamera.h"
    "game_II/CCar.cpp"
    "game_II/CCar.h"
    "game_II/CCarManager.cpp"
    "game_II/CCarManager.h"
    "game_II/CChar.cpp"
    "game_II/CChar.h"
    "game_II/CCollisionBox.cpp"
    "game_II/CCollisionBox.h"
    "game_II/cDMAudio.cpp"
    "game_II/cDMAudio.h"
    "game_II/CFileMgr.cpp"
    "game_II/CFileMgr.h"
    "game_II/CFont.cpp"
    "game_II/CFont.h"
    "game_II/CGame.cpp"
    "game_II/CGame.h"
    "game_II/CGeneral.cpp"
    "game_II/CGeneral.h"
    "game_II/CGlobal.cpp"
    "game_II/CGlobal.h"
    "game_II/CHud.cpp"
    "game_II/CHud.h"
    "game_II/CKeybrd.cpp"
    "game_II/CKeybrd.h"
    "game_II/CMenuManager.cpp"
    "game_II/CMenuManager.h"
    "game_II/CObject.cpp"
    "game_II/CObject.h"
    "game_II/common.cpp"
    "game_II/common.h"
    "game_II/CPed.cpp"
    "game_II/CPed.h"
    "game_II/CPedManager.cpp"
    "game_II/CPedManager.h"
    "game_II/CPhysics.cpp"
    "game_II/CPhysics.h"
    "game_II/CPlayerPed.cpp"
    "game_II/CPlayerPed.h"
    "game_II/CPopulation.cpp"
    "game_II/CPopulation.h"
    "game_II/CRect.h"
    "game_II/CReplay.cpp"
    "game_II/CReplay.h"
    "game_II/cSampleManager.cpp"
    "game_II/cSampleManager.h"
    "game_II/CSprite.cpp"
    "game_II/CSprite.h"
    "game_II/CSprite2d.cpp"
    "game_II/CSprite2d.h"
    "game_II/CStyle.cpp"
    "game_II/CStyle.h"
    "game_II/CText.cpp"
    "game_II/CText.h"
    "game_II/CTextureManager.cpp"
    "game_II/CTextureManager.h"
    "game_II/CTheScripts.cpp"
    "game_II/CTheScripts.h"
    "game_II/CVector.cpp"
    "game_II/CVector.h"
    "game_II/CWeapon.cpp"
    "game_II/CWeapon.h"
    "game_II/CWorld.cpp"
    "game_II/CWorld.h"
    "game_II/eScriptCommands.h"
    "game_II/GBH.cpp"
    "game_II/GBH.h"
    "game_II/tImage.h"
    "game_II/tLight.h"
    "game_II/tTexture.h"
    "game_II/tVertex.h"
    "game_II/tVideo.cpp"
    "game_II/tVideo.h"
)
source_group("game_II" FILES ${game_II})

set(game_II__d3d
    "game_II/d3d/compress.cpp"
    "game_II/d3d/compress.h"
    "game_II/d3d/d3dtextr.cpp"
    "game_II/d3d/d3dtextr.h"
    "game_II/d3d/d3dutil.cpp"
    "game_II/d3d/d3dutil.h"
)
source_group("game_II\\d3d" FILES ${game_II__d3d})

set(ALL_FILES
    ${no_group_source_files}
    ${..__hooking}
    ${..__injector}
    ${..__injector__gvm}
    ${..__safetyhook}
    ${..__shared}
    ${..__shared__bass}
    ${..__shared__comp}
    ${..__shared__comp__plugins}
    ${..__shared__dxsdk}
    ${..__shared__extender}
    ${..__shared__extensions}
    ${..__shared__extensions__scripting}
    ${..__shared__game}
    ${..__shared__rwd3d9}
    ${game_II}
    ${game_II__d3d}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE plugin_ii)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_ii"
        TARGET_NAME_ZDEBUG  "plugin_ii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_ii"
        TARGET_NAME_ZDEBUG  "plugin_ii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_ii"
        TARGET_NAME_ZDEBUG  "plugin_ii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_ii"
        TARGET_NAME_ZDEBUG  "plugin_ii_d"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
endif()
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
endif()
set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_II/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTA2;"
        "PLUGIN_SGV_96EN;"
        "GBH;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTA2;"
        "PLUGIN_SGV_96EN;"
        "GBH;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTA2;"
        "PLUGIN_SGV_96EN;"
        "GBH;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTA2;"
        "PLUGIN_SGV_96EN;"
        "GBH;"
        "_MBCS"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /Zi
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    endif()
endif()

