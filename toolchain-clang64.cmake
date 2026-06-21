set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

set(triple x86_64-w64-windows-gnu)

# Specify the cross compilers using Clang
set(CMAKE_C_COMPILER clang)
set(CMAKE_C_COMPILER_TARGET ${triple})
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_COMPILER_TARGET ${triple})

# Specify target linker flags to use absolute path of MinGW linker
set(CMAKE_EXE_LINKER_FLAGS_INIT "-fuse-ld=/usr/bin/x86_64-w64-mingw32-ld")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "-fuse-ld=/usr/bin/x86_64-w64-mingw32-ld")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "-fuse-ld=/usr/bin/x86_64-w64-mingw32-ld")

# Specify resource compiler
set(CMAKE_RC_COMPILER x86_64-w64-mingw32-windres)

# Adjust search paths for the target environment
set(CMAKE_FIND_ROOT_PATH /usr/x86_64-w64-mingw32)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
