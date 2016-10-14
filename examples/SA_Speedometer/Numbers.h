#pragma once

class Numbers {
public:
    static void DrawDigit_FontSpeed(unsigned int digit, float x, float y, float width, float height, unsigned char alpha);
    static void DrawDigit_FontGear(unsigned int digit, float x, float y, float width, float height, unsigned char red, unsigned char green, unsigned char blue);
    static void DrawNumber_FontSpeed(unsigned int number, float x, float y, float width, float height, float step);
};