# find . -name '*'.cpp
set(SOURCE_FILES

./CRunningScriptWrapper.cpp
./plugin.cpp

)


# TODO STATIC
set(CMAKE_SHARED_LIBRARY_PREFIX "")
add_library(plugin_base ${SOURCE_FILES})

