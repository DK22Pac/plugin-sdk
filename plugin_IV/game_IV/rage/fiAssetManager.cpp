/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "fiAssetManager.h"

rage::fiAssetManager& rage::ASSET = *gpatternt(rage::fiAssetManager, "B9 ? ? ? ? E8 ? ? ? ? 89 44 24 04 E9 ? ? ? ? 55", 1);

rage::fiStream* rage::fiAssetManager::Open(const char* base, const char* ext, bool probeOnly, bool readOnly) {
    return plugin::CallMethodAndReturnDyn<rage::fiStream*>(gpattern("81 EC ? ? ? ? 33 C0 53 55"), this, base, ext, probeOnly, readOnly);
}

void rage::fiAssetManager::FullPath(char* dest, int maxLen, const char* base, const char* ext, int pathIndex) {
    plugin::CallMethodDyn(gpattern("53 55 8B 6C 24 10 56 57 8B 7C 24 1C 8B D9 85 FF"), this, dest, maxLen, base, ext, pathIndex);
}

void rage::fiAssetManager::AddExtension(char* dest, int maxLen, const char* base, const char* ext) {
    plugin::CallMethodDyn(gpattern("53 8B 5C 24 0C 56 8B 74 24 0C 57 53"), this, dest, maxLen, base, ext);
}

rage::fiStream* rage::fiAssetManager::Create(const char* base, const char* ext, bool probeOnly) {
    return plugin::CallMethodAndReturnDyn<rage::fiStream*>(gpattern("81 EC ? ? ? ? 8D 04 24 56 FF B1"), this, base, ext, probeOnly);
}

void rage::fiAssetManager::PushFolder(const char* folder) {
    plugin::CallMethodDyn(gpattern("81 EC ? ? ? ? 56 57 8B BC 24"), this, folder);
}

void rage::fiAssetManager::PopFolder() {
    plugin::CallMethodDyn(gpattern("FF 89 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 81 EC"), this);
}

bool rage::fiAssetManager::Exists(const char* base, const char* ext) {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("81 EC ? ? ? ? 8D 04 24 FF B4 24 ? ? ? ? FF B4 24"), this, base, ext);
}

uint8_t rage::fiAssetManager::FullReadPath(char* dest, int maxLen, const char* base, const char* ext) {
    return plugin::CallMethodAndReturnDyn<uint8_t>(gpattern("83 EC 08 53 8B 5C 24 18 55 56"), this, dest, maxLen, base, ext);
}
