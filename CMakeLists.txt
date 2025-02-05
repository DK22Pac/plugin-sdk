cmake_minimum_required(VERSION 3.0)
project(plugin_sdk)

##
# preamble
##
set(SDK_COMPILE_DEFINITIONS)
set(SDK_INCLUDE_DIRECTORIES 
	${PROJECT_SOURCE_DIR}

	${PROJECT_SOURCE_DIR}/shared
	${PROJECT_SOURCE_DIR}/shared/comp
	${PROJECT_SOURCE_DIR}/shared/extender
	${PROJECT_SOURCE_DIR}/shared/extensions
	${PROJECT_SOURCE_DIR}/shared/game

	${PROJECT_SOURCE_DIR}/injector
	${PROJECT_SOURCE_DIR}/injector/gvm)
set(SDK_BUILD_TYPE "STATIC")

##
# default options
##
option(GTA_SAN_ANDREAS OFF)
option(GTA_VICE_CITY OFF)
option(GTA_III OFF)

option(SDK_STATIC ON)
option(SDK_SHARED OFF) # does nothing for now.

##
# fetch all source/header files
##
if (GTA_SAN_ANDREAS)
	file(GLOB_RECURSE SDK_SA_SOURCES ${PROJECT_SOURCE_DIR}/plugin_sa/*.cpp)
	file(GLOB_RECURSE SDK_SA_HEADERS ${PROJECT_SOURCE_DIR}/plugin_sa/*.h ${PROJECT_SOURCE_DIR}/plugin_sa/*.hpp)

	list(APPEND SDK_COMPILE_DEFINITIONS -DGTASA)
	list(APPEND SDK_INCLUDE_DIRECTORIES 
		${PROJECT_SOURCE_DIR}/plugin_sa
		${PROJECT_SOURCE_DIR}/plugin_sa/game_sa
		${PROJECT_SOURCE_DIR}/plugin_sa/game_sa/meta
		${PROJECT_SOURCE_DIR}/plugin_sa/game_sa/rw)
endif()

if (GTA_VICE_CITY)
	file(GLOB_RECURSE SDK_VC_SOURCES ${PROJECT_SOURCE_DIR}/plugin_vc/*.cpp)
	file(GLOB_RECURSE SDK_VC_HEADERS ${PROJECT_SOURCE_DIR}/plugin_vc/*.h ${PROJECT_SOURCE_DIR}/plugin_vc/*.hpp)

	list(APPEND SDK_COMPILE_DEFINITIONS -DGTAVC)
	list(APPEND SDK_INCLUDE_DIRECTORIES 
		${PROJECT_SOURCE_DIR}/plugin_vc
		${PROJECT_SOURCE_DIR}/plugin_vc/game_vc
		${PROJECT_SOURCE_DIR}/plugin_vc/game_vc/meta
		${PROJECT_SOURCE_DIR}/plugin_vc/game_vc/rw)
endif()

if (GTA_III)
	file(GLOB_RECURSE SDK_III_SOURCES ${PROJECT_SOURCE_DIR}/plugin_III/*.cpp)
	file(GLOB_RECURSE SDK_III_HEADERS ${PROJECT_SOURCE_DIR}/plugin_III/*.h ${PROJECT_SOURCE_DIR}/plugin_III/*.hpp)

	list(APPEND SDK_COMPILE_DEFINITIONS -DGTAIII)
	list(APPEND SDK_INCLUDE_DIRECTORIES 
		${PROJECT_SOURCE_DIR}/plugin_III
		${PROJECT_SOURCE_DIR}/plugin_III/game_III
		${PROJECT_SOURCE_DIR}/plugin_III/game_III/meta
		${PROJECT_SOURCE_DIR}/plugin_III/game_III/rw)
endif()

if (SDK_STATIC)
	set(SDK_BUILD_TYPE "STATIC")
endif()

file(GLOB_RECURSE SDK_INJECTOR_SOURCES ${PROJECT_SOURCE_DIR}/injector/*.cpp)
file(GLOB_RECURSE SDK_INJECTOR_HEADERS ${PROJECT_SOURCE_DIR}/injector/*.h ${PROJECT_SOURCE_DIR}/injector/*.hpp)

file(GLOB_RECURSE SDK_SHARED_SOURCES ${PROJECT_SOURCE_DIR}/shared/*.cpp)
file(GLOB_RECURSE SDK_SHARED_HEADERS ${PROJECT_SOURCE_DIR}/shared/*.h ${PROJECT_SOURCE_DIR}/shared/*.hpp)

##
# begin creating our library
##
add_library(plugin_sdk ${SDK_BUILD_TYPE} 
	${SDK_SA_SOURCES} ${SDK_SA_HEADERS} 
	${SDK_VC_SOURCES} ${SDK_VC_HEADERS} 
	${SDK_III_SOURCES} ${SDK_III_HEADERS}
	${SDK_INJECTOR_SOURCES} ${SDK_INJECTOR_HEADERS}
	${SDK_SHARED_SOURCES} ${SDK_SHARED_HEADERS})

target_include_directories(plugin_sdk PUBLIC ${SDK_INCLUDE_DIRECTORIES})
target_compile_definitions(plugin_sdk PUBLIC ${SDK_COMPILE_DEFINITIONS})