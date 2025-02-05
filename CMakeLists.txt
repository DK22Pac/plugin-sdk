cmake_minimum_required(VERSION 3.16)

option(PSDK_GTAIII "Grand Theft Auto III" OFF)
option(PSDK_GTASA  "Grand Theft Auto: San Anreas" OFF)
option(PSDK_GTAVC  "Grand Theft Auto: Vice City" OFF)

option(PSDK_EXAMPLES "Build examples" ON)
option(PSDK_INSTALL  "Install the library" ON)

project(plugin-sdk LANGUAGES C CXX)
include(GNUInstallDirs)

function(set_debug_postfix target)
  set_target_properties(${target} PROPERTIES DEBUG_POSTFIX "_d")
endfunction()

add_subdirectory(shared)

if (PSDK_GTAIII)
  add_subdirectory(plugin_III)
endif()

if (PSDK_GTASA)
  add_subdirectory(plugin_sa)
endif()

if (PSDK_GTAVC)
  add_subdirectory(plugin_vc)
endif()

if (PSDK_EXAMPLES)
  add_subdirectory(examples)
endif()

if (PSDK_INSTALL)
  install(FILES "${PROJECT_SOURCE_DIR}/tools/cmake/plugin-sdk-config.cmake"
          DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/plugin-sdk")
  install(EXPORT plugin-sdk-targets NAMESPACE pluginsdk::
          DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/plugin-sdk")
endif()
