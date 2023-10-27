/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CCam.h"

class CCamGame : public CCam {
public:
    uint8_t field_2[30];

public:
    virtual ~CCamGame() { plugin::CallVirtualMethod<0>(this, 0); };
    virtual int8_t m1() { return plugin::CallVirtualMethodAndReturn<int8_t, 1>(this); };
    virtual void m2() { plugin::CallVirtualMethod<2>(this); };
    virtual void m3() { plugin::CallVirtualMethod<3>(this); };
    virtual int8_t m4() { return plugin::CallVirtualMethodAndReturn<int8_t, 4>(this); };

};

