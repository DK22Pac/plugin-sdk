set(PROJECT_NAME plugin_iii_unreal)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "plugin_III_unreal.h"
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

set(game_iii_unreal
    "game_iii_unreal/common.h"
    "game_iii_unreal/CRect.h"
    "game_iii_unreal/CVector.cpp"
    "game_iii_unreal/CVector.h"
    "game_iii_unreal/CVector2D.cpp"
    "game_iii_unreal/CVector2D.h"
    "game_iii_unreal/RenderWare.cpp"
)
source_group("game_iii_unreal" FILES ${game_iii_unreal})

set(game_iii_unreal__rw
    "game_iii_unreal/rw/rpanisot.h"
    "game_iii_unreal/rw/rpcollis.h"
    "game_iii_unreal/rw/rpcriter.h"
    "game_iii_unreal/rw/rpdbgerr.h"
    "game_iii_unreal/rw/rpdmorph.h"
    "game_iii_unreal/rw/rperror.h"
    "game_iii_unreal/rw/rphanim.h"
    "game_iii_unreal/rw/rplodatm.h"
    "game_iii_unreal/rw/rplogo.h"
    "game_iii_unreal/rw/rpltmap.h"
    "game_iii_unreal/rw/rpmatfx.h"
    "game_iii_unreal/rw/rpmipkl.h"
    "game_iii_unreal/rw/rpmorph.h"
    "game_iii_unreal/rw/rppatch.h"
    "game_iii_unreal/rw/rpprtstd.h"
    "game_iii_unreal/rw/rpptank.h"
    "game_iii_unreal/rw/rppvs.h"
    "game_iii_unreal/rw/rprandom.h"
    "game_iii_unreal/rw/rpskin.h"
    "game_iii_unreal/rw/rpspline.h"
    "game_iii_unreal/rw/rpstereo.h"
    "game_iii_unreal/rw/rpusrdat.h"
    "game_iii_unreal/rw/rpworld.h"
    "game_iii_unreal/rw/rt2d.h"
    "game_iii_unreal/rw/rt2danim.h"
    "game_iii_unreal/rw/rtbary.h"
    "game_iii_unreal/rw/rtbezpat.h"
    "game_iii_unreal/rw/rtbmp.h"
    "game_iii_unreal/rw/rtcharse.h"
    "game_iii_unreal/rw/rtimport.h"
    "game_iii_unreal/rw/rtintel.h"
    "game_iii_unreal/rw/rtintsec.h"
    "game_iii_unreal/rw/rtltmap.h"
    "game_iii_unreal/rw/rtmipk.h"
    "game_iii_unreal/rw/rtpick.h"
    "game_iii_unreal/rw/rtpitexd.h"
    "game_iii_unreal/rw/rtpng.h"
    "game_iii_unreal/rw/rtquat.h"
    "game_iii_unreal/rw/rtras.h"
    "game_iii_unreal/rw/rtray.h"
    "game_iii_unreal/rw/rtslerp.h"
    "game_iii_unreal/rw/rtsplpvs.h"
    "game_iii_unreal/rw/rttiff.h"
    "game_iii_unreal/rw/rttilerd.h"
    "game_iii_unreal/rw/rttoc.h"
    "game_iii_unreal/rw/rtvcat.h"
    "game_iii_unreal/rw/rtworld.h"
    "game_iii_unreal/rw/rwcore.h"
    "game_iii_unreal/rw/rwplcore.h"
    "game_iii_unreal/rw/skeleton.h"
)
source_group("game_iii_unreal\\rw" FILES ${game_iii_unreal__rw})

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
    ${game_iii_unreal}
    ${game_iii_unreal__rw}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE plugin_iii_unreal)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_RELEASE "plugin_iii_unreal"
    TARGET_NAME_ZDEBUG  "plugin_iii_unreal_d"
)
################################################################################
# Output directory
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
)
set_target_properties(${PROJECT_NAME} PROPERTIES
    INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
)
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
    $<$<CONFIG:Release>:
        MultiThreaded
    >
    $<$<CONFIG:zDebug>:
        MultiThreadedDebug
    >
    $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
)
set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Include directories
################################################################################
target_include_directories(${PROJECT_NAME} PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/.;"
    "${CMAKE_CURRENT_SOURCE_DIR}/game_iii_unreal;"
    "${CMAKE_CURRENT_SOURCE_DIR}/game_iii_unreal/rw;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
)

################################################################################
# Compile definitions
################################################################################
target_compile_definitions(${PROJECT_NAME} PRIVATE
    "_WIN64;"
    "_CRT_SECURE_NO_WARNINGS;"
    "_CRT_NON_CONFORMING_SWPRINTFS;"
    "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
    "_DX9_SDK_INSTALLED;"
    "GTA3_UNREAL;"
    "PLUGIN_UNREAL;"
    "UNREAL;"
    "NOASM;"
    "RWINT32FROMFLOAT;"
    "_MBCS"
)

################################################################################
# Compile and link options
################################################################################
if(MSVC)
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
    target_link_options(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:Release>:
            /OPT:REF;
            /OPT:ICF
        >
        /MACHINE:X64;
        /SUBSYSTEM:WINDOWS
    )
endif()

