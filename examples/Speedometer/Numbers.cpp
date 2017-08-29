#include "Numbers.h"
#include "ShapeHelper.h"

void Numbers::DrawDigit_FontSpeed(unsigned int digit, float x, float y, float width, float height, unsigned char alpha) {
    float u = digit ? 100.0f * (digit - 1) : 900.0f;
    float v = 291.0f;
    ShapeHelper::DrawTexturedRectangle(CRect(x, y, x + width, y + height), CRGBA(255, 255, 255, alpha),
        u / 1024.0f, v / 512.0f, (u + 100.0f) / 1024.0f, v / 512.0f, u / 1024.0f,
        (v + 160.0f) / 512.0f, (u + 100.0f) / 1024.0f, (v + 160.0f) / 512.0f);
}

void Numbers::DrawNumber_FontSpeed(unsigned int number, float x, float y, float width, float height, float step) {
    if (number < 10) {
        DrawDigit_FontSpeed(0, x, y, width, height, 30);
        DrawDigit_FontSpeed(0, x + step, y, width, height, 30);
        DrawDigit_FontSpeed(number, x + step * 2, y, width, height, number == 0 ? 30 : 255);
    }
    else if (number < 100) {
        DrawDigit_FontSpeed(0, x, y, width, height, 30);
        DrawDigit_FontSpeed((number / 10) % 10, x + step, y, width, height, 255);
        DrawDigit_FontSpeed(number % 10, x + step * 2, y, width, height, 255);
    }
    else {
        DrawDigit_FontSpeed((number / 100) % 10, x, y, width, height, 255);
        DrawDigit_FontSpeed((number / 10) % 10, x + step, y, width, height, 255);
        DrawDigit_FontSpeed(number % 10, x + step * 2, y, width, height, 255);
    }
}

void Numbers::DrawDigit_FontGear(unsigned int digit, float x, float y, float width, float height, unsigned char red, unsigned char green, unsigned char blue) {
    float u = digit ? 582.0f + 44.0f * (digit - 1) : 978.0f;
    float v = 134.0f;
    ShapeHelper::DrawTexturedRectangle(CRect(x, y, x + width, y + height), CRGBA(red, green, blue, 255),
        u / 1024.0f, v / 512.0f, (u + 44.0f) / 1024.0f, v / 512.0f, u / 1024.0f,
        (v + 56.0f) / 512.0f, (u + 44.0f) / 1024.0f, (v + 56.0f) / 512.0f);
}