/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRGBA.h"
#ifdef RW
#include "RenderWare.h"
#endif

#ifndef RAGE
CRGBA::CRGBA(unsigned char red, unsigned char green, unsigned char blue) {
    Set(red, green, blue, 255);
}

CRGBA::CRGBA(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    Set(red, green, blue, alpha);
}

CRGBA::CRGBA(CRGBA const &rhs) {
    Set(rhs);
}

CRGBA::CRGBA(unsigned int intValue) {
    Set(intValue);
}

#ifdef RW
CRGBA::CRGBA(RwRGBA const &rhs) {
    Set(rhs);
}
#endif

CRGBA::CRGBA() {}

void CRGBA::Set(unsigned char red, unsigned char green, unsigned char blue) {
    r = red;
    g = green;
    b = blue;
}

void CRGBA::Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    Set(red, green, blue);
    a = alpha;
}

void CRGBA::Set(unsigned int intValue) {
    r = (intValue >> 24) & 0xFF;
    g = (intValue >> 16) & 0xFF;
    b = (intValue >> 8) & 0xFF;
    a = intValue & 0xFF;
}

void CRGBA::Set(CRGBA const &rhs) {
    Set(rhs.r, rhs.g, rhs.b, rhs.a);
}

void CRGBA::Set(CRGBA const &rhs, unsigned char alpha) {
    Set(rhs.r, rhs.g, rhs.b, alpha);
}

#ifdef RW
void CRGBA::Set(RwRGBA const &rwcolor) {
    Set(rwcolor.red, rwcolor.green, rwcolor.blue, rwcolor.alpha);
}
#endif

unsigned int CRGBA::ToInt() const {
    return a | (b << 8) | (g << 16) | (r << 24);
}

unsigned int CRGBA::ToIntARGB() const {
    return b | (g << 8) | (r << 16) | (a << 24);
}


#ifdef RW
RwRGBA CRGBA::ToRwRGBA() const {
    return { r, g, b, a };
}

void CRGBA::FromRwRGBA(RwRGBA const &rwcolor) {
    Set(rwcolor);
}
#endif

void CRGBA::FromARGB(unsigned int intValue) {
    a = (intValue >> 24) & 0xFF;
    r = (intValue >> 16) & 0xFF;
    g = (intValue >> 8) & 0xFF;
    b = intValue & 0xFF;
}

void CRGBA::Invert() {
    Set(255 - r, 255 - g, 255 - b);
}

CRGBA CRGBA::Inverted() const {
    CRGBA invertedColor = *this;
    invertedColor.Invert();
    return invertedColor;
}

bool CRGBA::operator==(CRGBA const &rhs) const {
    return r == rhs.r && g == rhs.g && b == rhs.b && a == rhs.a;
}

CRGBA &CRGBA::operator=(CRGBA const &rhs) {
    Set(rhs);
    return *this;
}

CRGBA CRGBA::ToRGB() const {
    return CRGBA(r, g, b, 255);
}
#endif
