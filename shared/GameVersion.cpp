/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "GameVersion.h"
#include "Patch.h"

namespace plugin {

unsigned int detect_game_id() {
#ifdef GTASA
    if (plugin::patch::GetUInt(0x82457C) == 0x94BF)
        return GAME_10US;
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

unsigned int plugin::GetGameVersion() {
    static unsigned int gameId = detect_game_id();
    return gameId;
}
