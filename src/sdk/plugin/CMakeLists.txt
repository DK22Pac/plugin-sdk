# find . -name '*'.cpp -o -name '*'.hpp -o -name '*'.h
set(SOURCE_FILES

# Main source files
plugin.cpp
plugin.h

# Shared memory implementation
shared/SharedList.hpp
shared/SharedData.hpp
shared/internal/shared.hpp
shared/internal/list.h

# CRunningScript wrappers
script/wrapper.cpp
script/wrapper.h

# Frontend Extender
frontend/extender.cpp
frontend/extender.h

# Internal use, user shouldn't touch those!!!!
internal/CallbackManager.hpp
internal/CallbackPostFX.hpp
internal/CallbackResetDevice.hpp
internal/EntityPluginManager.hpp
internal/VehPluginManager.hpp
internal/PedPluginManager.hpp

)

add_library(plugin-sdk-base OBJECT ${SOURCE_FILES})
