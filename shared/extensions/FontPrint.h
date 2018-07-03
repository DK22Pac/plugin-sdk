#pragma once
/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include <string>
#include <vector>
#include "CRGBA.h"
#include "CVector.h"
#include "Screen.h"

namespace plugin {

class gamefont {
public:
    enum Alignment {
        Center, Left, Right
    };

private:
    static const unsigned char STYLE;
public:

    static void PrintUnscaled(const std::string &line, float x, float y, unsigned char style = STYLE,
        float w = 1.0f, float h = 1.0f, CRGBA const &color = CRGBA(255, 255, 255, 255), Alignment alignment = Left,
        unsigned char dropPosition = 1, CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false,
        float lineSize = 9999.0f, bool proportional = true, bool justify = false);
    static void Print(const std::string &line, float x, float y, unsigned char style = STYLE, float w = 1.0f, float h = 1.0f,
        CRGBA const &color = CRGBA(255, 255, 255, 255), Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false, screen::eScreenSide screenSide = screen::SIDE_LEFT);
    static void Print(screen::eScreenSide screenSide,
        const std::string &line, float x, float y, unsigned char style = STYLE, float w = 1.0f, float h = 1.0f,
        CRGBA const &color = CRGBA(255, 255, 255, 255), Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false);
    static void Print(std::vector<std::string> const &lines, float x, float y, float spacing = 1.0f, unsigned char style = STYLE,
        float w = 1.0f, float h = 1.0f,
        CRGBA const &color = CRGBA(255, 255, 255, 255), Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false, screen::eScreenSide screenSide = screen::SIDE_LEFT);
    static void Print(screen::eScreenSide screenSide,
        std::vector<std::string> const &lines, float x, float y, float spacing = 1.0f, unsigned char style = STYLE,
        float w = 1.0f, float h = 1.0f,
        CRGBA const &color = CRGBA(255, 255, 255, 255), Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false);
    static bool PrintAt3d(CVector const &posn, const std::string &line, float offset_x = 0.0f, float offset_y = 0.0f,
        unsigned char style = STYLE, float w = 1.0f, float h = 1.0f, CRGBA const &color = CRGBA(255, 255, 255, 255),
        bool scaleOnDistance = true, Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false);
    static bool PrintAt3d(CVector const &posn, std::vector<std::string> const &lines, float spacing = 1.0f,
        float offset_x = 0.0f, float offset_y = 0.0f,
        unsigned char style = STYLE, float w = 1.0f, float h = 1.0f, CRGBA const &color = CRGBA(255, 255, 255, 255),
        bool scaleOnDistance = true, Alignment alignment = Left, unsigned char dropPosition = 1,
        CRGBA const &dropColor = CRGBA(0, 0, 0, 255), bool shadow = false, float lineSize = 9999.0f,
        bool proportional = true, bool justify = false);
};

}
