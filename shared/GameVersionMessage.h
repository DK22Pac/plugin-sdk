/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "GameVersion.h"
#include <string>
#include <vector>
#include "Error.h"
#include "extensions/Paths.h"

namespace plugin {

// Returns list of supported game versions for this plugin (divided by separator)
inline std::string GetSupportedGameVersionsString(std::string const &sep) {
    std::vector<std::string> versions;
#ifdef GTASA
    #ifdef PLUGIN_SGV_10US
        versions.push_back(GetGameVersionName(GAME_10US_COMPACT));
        versions.push_back(GetGameVersionName(GAME_10US_HOODLUM));
    #endif
    #ifdef PLUGIN_SGV_10EU
        versions.push_back(GetGameVersionName(GAME_10EU));
    #endif
    #ifdef PLUGIN_SGV_11US
        versions.push_back(GetGameVersionName(GAME_11US));
    #endif
    #ifdef PLUGIN_SGV_11EU
        versions.push_back(GetGameVersionName(GAME_11EU));
    #endif
    #ifdef PLUGIN_SGV_SR2
        versions.push_back(GetGameVersionName(GAME_STEAM));
    #endif
    #ifdef PLUGIN_SGV_SR2LV
        versions.push_back(GetGameVersionName(GAME_STEAM_LV));
    #endif
#else
    #ifdef PLUGIN_SGV_10EN
        versions.push_back(GetGameVersionName(GAME_10EN));
    #endif
    #ifdef PLUGIN_SGV_11EN
        versions.push_back(GetGameVersionName(GAME_11EN));
    #endif
    #ifdef PLUGIN_SGV_STEAM
        versions.push_back(GetGameVersionName(GAME_STEAM));
    #endif
#endif
    std::string result;
    if (!versions.empty()) {
        bool first = true;
        for (const auto& version : versions)
        {
            if (first) {
                result += version;
                first = false;
            }
            else
                result += sep + version;
        }
    }
    return result;
}

// Validates if plugin supports launched game version (displays error message if not supported)
inline bool ValidateGameVersion(bool showErrorMessage = true) {
    if (IsSupportedGameVersion())
        return true;
    if (showErrorMessage) {
        Error("This game version is not supported by %s plugin.\n%s plugin supports these game versions:\n    %s",
            plugin::paths::GetPluginFileNameA(), plugin::paths::GetPluginFileNameA(), GetSupportedGameVersionsString("\n    ").c_str());
    }
    return false;
}

// Displays a message with all supported game versions for this plugin
inline void ShowSupportedGameVersionsMessage() {
    Message("This plugin supports these game versions:\n    %s", GetSupportedGameVersionsString("\n    ").c_str());
}

// Displays a message with current game version
inline void ShowCurrentGameVersionsMessage() {
    Message("Current game version: %s", GetGameVersionName());
}

}
