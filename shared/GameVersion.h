/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#define GAME_UNKNOWN 0
#ifdef GTASA
#define GAME_10US_COMPACT 1001
#define GAME_10US_HOODLUM 1002
#define GAME_10EU 1011
#define GAME_11US 1101
#define GAME_11EU 1111
#define GAME_SR2 3200
#define GAME_SR2LV 3210
#define GAME_STEAM GAME_SR2
#define GAME_STEAM_LV GAME_SR2LV
#elif GTA2
#define GAME_9600EN 9600
#elif GTAIV
#define GAME_CE 'CE'
#elif defined(GTASA_UNREAL) || defined(GTAVC_UNREAL) || defined(GTA3_UNREAL)
#define GAME_UNREAL 'UE'
#else
#define GAME_10EN 100
#define GAME_11EN 110
#define GAME_STEAM 120
#endif

namespace plugin {

// Returns GAME_X id for launched game
unsigned int GetGameVersion();

// Returns version name for game version id
inline char const *GetGameVersionName(int gameVersionId) {
    switch (gameVersionId) {
#ifdef GTASA
    case GAME_10US_COMPACT:
        return "GTA SA 1.0 US 'Compact'";
    case GAME_10US_HOODLUM:
        return "GTA SA 1.0 US 'HoodLum'";
    case GAME_10EU:
        return "GTA SA 1.0 EU";
    case GAME_11US:
        return "GTA SA 1.01 US";
    case GAME_11EU:
        return "GTA SA 1.01 EU";
    case GAME_STEAM:
        return "GTA SA 'NewSteam R2'";
    case GAME_STEAM_LV:
        return "GTA SA 'NewSteam R2-LV'";
#endif
#ifdef GTAVC
    case GAME_10EN:
        return "GTA VC 1.0 EN";
    case GAME_11EN:
        return "GTA VC 1.1 EN";
    case GAME_STEAM:
        return "GTA VC Steam";
#endif
#ifdef GTA3
    case GAME_10EN:
        return "GTA 3 1.0 EN";
    case GAME_11EN:
        return "GTA 3 1.1 EN";
    case GAME_STEAM:
        return "GTA 3 Steam";
#endif
#ifdef GTA2
    case GAME_9600EN:
        return "GTA2 9.6.0.0";
#endif
#ifdef GTAIV
    case GAME_CE:
        return "GTAIV CE";
#endif
#ifdef GTASA_UNREAL
    case GAME_UNREAL:
        return "GTA SA The Definitive Edition";
#endif
#ifdef GTAVC_UNREAL
    case GAME_UNREAL:
        return "GTA VC The Definitive Edition";
#endif
#ifdef GTA3_UNREAL
    case GAME_UNREAL:
        return "GTA 3 The Definitive Edition";
#endif
    }
    return "Unknown";
}

// Returns version name for launched game
inline char const *GetGameVersionName() {
    return GetGameVersionName(GetGameVersion());
}

// Checks if launched game version is unknown
inline bool IsGameVersionUnknown() {
    return GetGameVersion() == GAME_UNKNOWN;
}

#ifdef GTASA
// Checks if launched game version is 1.0 US
inline bool IsGameVersion10us() {
    return GetGameVersion() == GAME_10US_COMPACT || GetGameVersion() == GAME_10US_HOODLUM;
}

// Checks if launched game version is 1.0 EU
inline bool IsGameVersion10eu() {
    return GetGameVersion() == GAME_10EU;
}

// Checks if launched game version is 1.1 US
inline bool IsGameVersion11us() {
    return GetGameVersion() == GAME_11US;
}

// Checks if launched game version is 1.1 EU
inline bool IsGameVersion11eu() {
    return GetGameVersion() == GAME_11EU;
}

// Checks if launched game version is Steam R2 (including R2-LV ('German version'))
inline bool IsGameVersionSteam() {
    return GetGameVersion() == GAME_STEAM || GetGameVersion() == GAME_STEAM_LV;
}

// Checks if launched game version Steam R2-LV ('German version')
inline bool IsGameVersionSteamLV() {
    return GetGameVersion() == GAME_STEAM_LV;
}
#elif GTA2
inline bool IsGameVersion9600en() {
    return GetGameVersion() == GAME_9600EN;
}
#else
#if defined(GTA3) || defined(GTAVC) || defined(GTASA)
// Checks if launched game version is 1.0 EN
inline bool IsGameVersion10en() {
    return GetGameVersion() == GAME_10EN;
}

// Checks if launched game version is 1.1 EN
inline bool IsGameVersion11en() {
    return GetGameVersion() == GAME_11EN;
}

// Checks if launched game version is Steam
inline bool IsGameVersionSteam() {
    return GetGameVersion() == GAME_STEAM;
}
#endif
#endif

// Checks if game version is supported by this plugin
inline bool IsSupportedGameVersion(int gameVersionId) {
    switch (gameVersionId) {
#ifdef GTASA
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
      #ifdef PLUGIN_SGV_10US
        return true;
      #else
        return false;
      #endif
    case GAME_10EU:
      #ifdef PLUGIN_SGV_10EU
        return true;
      #else
        return false;
      #endif
    case GAME_11US:
      #ifdef PLUGIN_SGV_11US
        return true;
      #else
        return false;
      #endif
    case GAME_11EU:
      #ifdef PLUGIN_SGV_11EU
        return true;
      #else
        return false;
      #endif
    case GAME_STEAM:
      #ifdef PLUGIN_SGV_SR2
        return true;
      #else
        return false;
      #endif
    case GAME_STEAM_LV:
      #ifdef PLUGIN_SGV_SR2LV
        return true;
      #else
        return false;
      #endif
#elif GTA2
    case GAME_9600EN:
      #ifdef PLUGIN_SGV_96EN
        return true;
      #else
        return false;
      #endif
#elif GTAIV
    case GAME_CE:
#ifdef PLUGIN_SGV_CE
        return true;
#else
        return false;
#endif
#elif defined(GTA3_UNREAL) || defined(GTAVC_UNREAL) || defined(GTASA_UNREAL)
    case GAME_UNREAL:
#ifdef PLUGIN_UNREAL
        return true;
#else
        return false;
#endif
#else
#if defined(GTA3) || defined(GTAVC) || defined(GTASA)
    case GAME_10EN:
      #ifdef PLUGIN_SGV_10EN
        return true;
      #else
        return false;
      #endif
    case GAME_11EN:
      #ifdef PLUGIN_SGV_11EN
        return true;
      #else
        return false;
      #endif
    case GAME_STEAM:
      #ifdef PLUGIN_SGV_STEAM
        return true;
      #else
        return false;
      #endif
#endif
#endif
    }
    return false;
}

// Checks if launched game version is supported by this plugin
inline bool IsSupportedGameVersion() {
    return IsSupportedGameVersion(GetGameVersion());
}

/*
 *  These functions are used to select a value (usually, address or offset) depending on launched
 *  game version.
 *
 */

#ifdef GTASA
int by_v_dyn(int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV);
int by_version_dyn(int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV);

template <int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV>
int by_v() {
    return by_v_dyn(A_10US_C, A_10US_H, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

template <int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV>
int by_version() {
    return by_v_dyn(A_10US_C, A_10US_H, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

int by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV);
int by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV);

template <int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV>
int by_v() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

template <int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV>
int by_version() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

int by_v_dyn(int A_10US, int A_10EU);
int by_version_dyn(int A_10US, int A_10EU);

template <int A_10US, int A_10EU>
int by_v() {
    return by_v_dyn(A_10US, A_10EU);
}

template <int A_10US, int A_10EU>
int by_version() {
    return by_v_dyn(A_10US, A_10EU);
}

int by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU);
int by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU);

template <int A_10US, int A_10EU, int A_11US, int A_11EU>
int by_v() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU);
}

template <int A_10US, int A_10EU, int A_11US, int A_11EU>
int by_version() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU);
}

int by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam);
int by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam);

template <int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam>
int by_v() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam);
}

template <int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam>
int by_version() {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam);
}

int by_v_dyn(int A_10US, int A_10EU, int A_Steam);
int by_version_dyn(int A_10US, int A_10EU, int A_Steam);

template <int A_10US, int A_10EU, int A_Steam>
int by_v() {
    return by_v_dyn(A_10US, A_10EU, A_Steam);
}

template <int A_10US, int A_10EU, int A_Steam>
int by_version() {
    return by_v_dyn(A_10US, A_10EU, A_Steam);
}
#elif GTA2
#else
int by_v_dyn(int A_10EN, int A_11EN, int A_Steam);
int by_version_dyn(int A_10EN, int A_11EN, int A_Steam);

template <int A_10EN, int A_11EN, int A_Steam>
int by_v() {
    return by_v_dyn(A_10EN, A_11EN, A_Steam);
}

template <int A_10EN, int A_11EN, int A_Steam>
int by_version() {
    return by_v_dyn(A_10EN, A_11EN, A_Steam);
}

int by_v_dyn(int A_10EN, int A_11EN);
int by_version_dyn(int A_10EN, int A_11EN);

template <int A_10EN, int A_11EN>
int by_v() {
    return by_v_dyn(A_10EN, A_11EN);
}

template <int A_10EN, int A_11EN>
int by_version() {
    return by_v_dyn(A_10EN, A_11EN);
}
#endif

}
