/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "RefList.h"
#include <string>
#include "GameVersion.h"

namespace plugin {

template<typename Refs>
struct RefListUtils;

template<>
struct RefListUtils<RefList<>> {
    static std::string GetName() {
        return "(0)";
    }

    constexpr static bool IsEmpty() {
        return true;
    }
};

template<int... Values>
struct RefListUtils<RefList<Values...>> {
    static std::string GetName(std::string sep = " ") {
        size_t size = sizeof...(Values);
        int values[size] = { Values... };
        int refscount = size / 5;
        std::string result = "(" + std::to_string(refscount) + ")";
        if (refscount > 0) {
            result += ":" + sep;
            for (int i = 0; i < refscount; i++) {
                if (i != 0)
                    result += sep;
                result += "[";
                result += std::to_string(values[i * 5 + 0]) + ", ";
                int gameid = values[i * 5 + 1];
#ifdef GTASA
                if (gameid == GAME_10US_COMPACT)
                    result += "GAME_10US_COMPACT";
                else if (gameid == GAME_10US_HOODLUM)
                    result += "GAME_10US_HOODLUM";
                else if (gameid == GAME_10EU)
                    result += "GAME_10EU";
                else if (gameid == GAME_11US)
                    result += "GAME_11US";
                else if (gameid == GAME_11EU)
                    result += "GAME_11EU";
                else if (gameid == GAME_STEAM)
                    result += "GAME_STEAM";
                else if (gameid == GAME_STEAM_LV)
                    result += "GAME_STEAM_LV";
#else
                if (gameid == GAME_10EN)
                    result += "GAME_10EN";
                else if (gameid == GAME_11EN)
                    result += "GAME_11EN";
                else if (gameid == GAME_STEAM)
                    result += "GAME_STEAM";
#endif
                else
                    result += std::to_string(gameid);
                result += ", ";
                int hooktype = values[i * 5 + 2];
                if (hooktype == H_CALL)
                    result += "H_CALL";
                else if (hooktype == H_JUMP)
                    result += "H_JUMP";
                else if (gameid == H_CALLBACK)
                    result += "H_CALLBACK";
                else
                    result += std::to_string(hooktype);
                result += ", ";
                result += std::to_string(values[i * 5 + 3]) + ", ";
                result += std::to_string(values[i * 5 + 4]);
                result += "]";
            }
        }
        return result;
    }

    constexpr static bool IsEmpty() {
        return false;
    }
};

}
