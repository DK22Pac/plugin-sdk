/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "GameVersion.h"
#include "Patch.h"
#include "Base.h"

namespace plugin {

unsigned int _NOINLINE_ detect_game_id() {
#ifdef GTASA
    //if (plugin::patch::GetUInt(0x82457C) == 0x94BF)
     //   return GAME_10US;
    if (plugin::patch::GetUInt(0x401000) == 0x53EC8B55)
        return GAME_10US_COMPACT;
    if (plugin::patch::GetUInt(0x401000) == 0x16197BE9)
        return GAME_10US_HOODLUM;
    if (plugin::patch::GetUInt(0x8245BC) == 0x94BF)
        return GAME_10EU;
    if (plugin::patch::GetUInt(0x8252FC) == 0x94BF)
        return GAME_11US;
    if (plugin::patch::GetUInt(0x82533C) == 0x94BF)
        return GAME_11EU;
    if (plugin::patch::GetUInt(0x858D51) == 0x3539F633)
        return GAME_STEAM;
    if (plugin::patch::GetUInt(0x858C61) == 0x3539F633)
        return GAME_STEAM_LV;
#endif
#ifdef GTAVC
    if (plugin::patch::GetUInt(0x667BF0) == 0x53E58955)
        return GAME_10EN;
    if (plugin::patch::GetUInt(0x667C40) == 0x53E58955)
        return GAME_11EN;
    if (plugin::patch::GetUInt(0x666BA0) == 0x53E58955)
        return GAME_STEAM;
#endif
#ifdef GTA3
    if (plugin::patch::GetUInt(0x5C1E70) == 0x53E58955)
        return GAME_10EN;
    if (plugin::patch::GetUInt(0x5C2130) == 0x53E58955)
        return GAME_11EN;
    if (plugin::patch::GetUInt(0x5C6FD0) == 0x53E58955)
        return GAME_STEAM;
#endif
    return GAME_UNKNOWN;
}

}

unsigned int _NOINLINE_ plugin::GetGameVersion() {
    static unsigned int gameId = detect_game_id();
    return gameId;
}

/*
*  These functions are used to select a value (usually, address or offset) depending on launched
*  game version.
*
*/

#ifdef GTASA
int plugin::by_v_dyn(int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
        return A_10US_C;
    case GAME_10US_HOODLUM:
        return A_10US_H;
    case GAME_10EU:
        return A_10EU;
    case GAME_11US:
        return A_11US;
    case GAME_11EU:
        return A_11EU;
    case GAME_STEAM:
        return A_Steam;
    case GAME_STEAM_LV:
        return A_Steam_LV;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US_C, int A_10US_H, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV) {
    return by_v_dyn(A_10US_C, A_10US_H, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

int plugin::by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
        return A_10US;
    case GAME_10EU:
        return A_10EU;
    case GAME_11US:
        return A_11US;
    case GAME_11EU:
        return A_11EU;
    case GAME_STEAM:
        return A_Steam;
    case GAME_STEAM_LV:
        return A_Steam_LV;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam, int A_Steam_LV) {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam, A_Steam_LV);
}

int plugin::by_v_dyn(int A_10US, int A_10EU) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
        return A_10US;
    case GAME_10EU:
        return A_10EU;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US, int A_10EU) {
    return by_v_dyn(A_10US, A_10EU);
}

int plugin::by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
        return A_10US;
    case GAME_10EU:
        return A_10EU;
    case GAME_11US:
        return A_11US;
    case GAME_11EU:
        return A_11EU;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU) {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU);
}

int plugin::by_v_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
        return A_10US;
    case GAME_10EU:
        return A_10EU;
    case GAME_11US:
        return A_11US;
    case GAME_11EU:
        return A_11EU;
    case GAME_STEAM:
        return A_Steam;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US, int A_10EU, int A_11US, int A_11EU, int A_Steam) {
    return by_v_dyn(A_10US, A_10EU, A_11US, A_11EU, A_Steam);
}

int plugin::by_v_dyn(int A_10US, int A_10EU, int A_Steam) {
    switch (GetGameVersion()) {
    case GAME_10US_COMPACT:
    case GAME_10US_HOODLUM:
        return A_10US;
    case GAME_10EU:
        return A_10EU;
    case GAME_STEAM:
        return A_Steam;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10US, int A_10EU, int A_Steam) {
    return by_v_dyn(A_10US, A_10EU, A_Steam);
}
#else
int plugin::by_v_dyn(int A_10EN, int A_11EN, int A_Steam) {
    switch (GetGameVersion()) {
    case GAME_10EN:
        return A_10EN;
    case GAME_11EN:
        return A_11EN;
    case GAME_STEAM:
        return A_Steam;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10EN, int A_11EN, int A_Steam) {
    return by_v_dyn(A_10EN, A_11EN, A_Steam);
}

int plugin::by_v_dyn(int A_10EN, int A_11EN) {
    switch (GetGameVersion()) {
    case GAME_10EN:
        return A_10EN;
    case GAME_11EN:
        return A_11EN;
    }
    return 0;
}

int plugin::by_version_dyn(int A_10EN, int A_11EN) {
    return by_v_dyn(A_10EN, A_11EN);
}
#endif
