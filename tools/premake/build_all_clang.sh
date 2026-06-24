#!/bin/bash
# Exit on any error
set -e

# Resolve the project root directory relative to this script's directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export PLUGIN_SDK_DIR="$(cd "$SCRIPT_DIR/../.." && pwd)"

echo "=== Generating GNU Makefiles using Premake ==="
"$SCRIPT_DIR/linux-clang-example/premake5" gmake --file="$SCRIPT_DIR/premake5.lua"

echo "=== Cleaning previous target output directory ==="
mkdir -p "$PLUGIN_SDK_DIR/output/lib"
rm -f "$PLUGIN_SDK_DIR/output/lib"/*

# Target lists
targets_32=("plugin_II" "plugin_III" "plugin_vc" "plugin_sa" "plugin_IV")
targets_64=("plugin_iii_unreal" "plugin_vc_unreal" "plugin_sa_unreal")

echo "=== Compiling 32-bit Classic Targets (Release & Debug) ==="
for target in "${targets_32[@]}"; do
    echo "  -> Building $target [Release]..."
    make config=release RESCOMP=i686-w64-mingw32-windres AR=ar -C "$PLUGIN_SDK_DIR/$target" -j$(nproc)
    echo "  -> Building $target [Debug]..."
    make config=zdebug RESCOMP=i686-w64-mingw32-windres AR=ar -C "$PLUGIN_SDK_DIR/$target" -j$(nproc)
done

echo "=== Compiling 64-bit Unreal Targets (Release & Debug) ==="
for target in "${targets_64[@]}"; do
    echo "  -> Building $target [Release]..."
    make config=release RESCOMP=x86_64-w64-mingw32-windres AR=ar -C "$PLUGIN_SDK_DIR/$target" -j$(nproc)
    echo "  -> Building $target [Debug]..."
    make config=zdebug RESCOMP=x86_64-w64-mingw32-windres AR=ar -C "$PLUGIN_SDK_DIR/$target" -j$(nproc)
done

echo "=== Build Complete! ==="
echo "All static libraries have been compiled and placed inside: $PLUGIN_SDK_DIR/output/lib"
ls -la "$PLUGIN_SDK_DIR/output/lib"
