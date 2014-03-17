include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#add_definitions(-D_IDA_EXPORT)                      # Avoid some shitty stuff IDA related
add_definitions(-DPLUGIN_EXPORT)                    # Exporting

# Visual Studio specific stuff
if(MSVC)
    # We don't want to deal with Buffer Security Check under "Release" build.
    set(CMAKE_CXX_FLAGS_RELEASE "/GS- ${CMAKE_CXX_FLAGS_RELEASE}")

    add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS)
endif(MSVC)

# MiNGW specific stuff
if(MINGW)
    # Compiling C++11 source (with GNU and Microsoft extensions)
    set(CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")

    # Force static runtime
    # As you may know Windows DLLs and GNU standard library do not work very well together since the GNU librares have different exception models within the same DLL name, that's real bad.
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -static-libgcc")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static")

endif(MINGW)

# Go
add_subdirectory(game_sa)
add_subdirectory(plugin)
add_library(plugin SHARED)
target_link_libraries(plugin plugin_base game_sa)
