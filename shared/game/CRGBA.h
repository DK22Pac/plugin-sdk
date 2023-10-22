/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#ifdef RW
struct RwRGBA;
#endif

#ifdef RAGE
#include "Rage.h"
using CRGBA = rage::Color32;
#else
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

#ifdef RW
    CRGBA(RwRGBA const &rhs);
#endif
    CRGBA();

    void Set(unsigned char red, unsigned char green, unsigned char blue);
    void Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    void Set(unsigned int intValue);
    void Set(CRGBA const &rhs);
    void Set(CRGBA const &rhs, unsigned char alpha);

#ifdef RW
    void Set(RwRGBA const &rwcolor);
#endif

    CRGBA ToRGB() const;
    unsigned int ToInt() const;
    unsigned int ToIntARGB() const;

#ifdef RW
    RwRGBA ToRwRGBA() const;

    void FromRwRGBA(RwRGBA const &rwcolor);
#endif
    void FromARGB(unsigned int intValue);

    void Invert();
    CRGBA Inverted() const;

    bool operator==(CRGBA const &rhs) const;
    CRGBA &operator=(CRGBA const &rhs);
};
#endif
