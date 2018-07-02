/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "RenderWare.h"

class CRGBA {
public:
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;

    CRGBA(unsigned char red, unsigned char green, unsigned char blue);
    CRGBA(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    CRGBA(CRGBA const &rhs);
    CRGBA(unsigned int intValue);
    CRGBA(RwRGBA const &rhs);
    CRGBA();

    void Set(unsigned char red, unsigned char green, unsigned char blue);
    void Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    void Set(unsigned int intValue);
    void Set(CRGBA const &rhs);
    void Set(CRGBA const &rhs, unsigned char alpha);
    void Set(RwRGBA const &rwcolor);

    CRGBA ToRGB();
    unsigned int ToInt();
    RwRGBA ToRwRGBA();

    void FromRwRGBA(RwRGBA const &rwcolor);

    void Invert();
    CRGBA Inverted();

    bool operator==(CRGBA const &rhs);
    CRGBA &operator=(CRGBA const &rhs);
};
