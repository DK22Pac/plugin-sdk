/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CKeyboardState {
public:
    short FKeys[12];
    short standardKeys[256];
    short esc;
    short insert;
    short del;
    short home;
    short end;
    short pgup;
    short pgdn;
    short up;
    short down;
    short left;
    short right;
    short scroll;
    short pause;
    short numlock;
    short div;
    short mul;
    short sub;
    short add;
    short enter;
    short decimal;
    short num1;
    short num2;
    short num3;
    short num4;
    short num5;
    short num6;
    short num7;
    short num8;
    short num9;
    short num0;
    short back;
    short tab;
    short capslock;
    short extenter;
    short lshift;
    short rshift;
    short shift;
    short lctrl;
    short rctrl;
    short lmenu;
    short rmenu;
    short lwin;
    short rwin;
    short apps;

    //funcs
    void Clear();
};
VALIDATE_OFFSET(CKeyboardState, FKeys, 0x0);
VALIDATE_OFFSET(CKeyboardState, standardKeys, 0x18);
VALIDATE_OFFSET(CKeyboardState, esc, 0x218);
VALIDATE_OFFSET(CKeyboardState, insert, 0x21A);
VALIDATE_OFFSET(CKeyboardState, del, 0x21C);
VALIDATE_OFFSET(CKeyboardState, home, 0x21E);
VALIDATE_OFFSET(CKeyboardState, end, 0x220);
VALIDATE_OFFSET(CKeyboardState, pgup, 0x222);
VALIDATE_OFFSET(CKeyboardState, pgdn, 0x224);
VALIDATE_OFFSET(CKeyboardState, up, 0x226);
VALIDATE_OFFSET(CKeyboardState, down, 0x228);
VALIDATE_OFFSET(CKeyboardState, left, 0x22A);
VALIDATE_OFFSET(CKeyboardState, right, 0x22C);
VALIDATE_OFFSET(CKeyboardState, scroll, 0x22E);
VALIDATE_OFFSET(CKeyboardState, pause, 0x230);
VALIDATE_OFFSET(CKeyboardState, numlock, 0x232);
VALIDATE_OFFSET(CKeyboardState, div, 0x234);
VALIDATE_OFFSET(CKeyboardState, mul, 0x236);
VALIDATE_OFFSET(CKeyboardState, sub, 0x238);
VALIDATE_OFFSET(CKeyboardState, add, 0x23A);
VALIDATE_OFFSET(CKeyboardState, enter, 0x23C);
VALIDATE_OFFSET(CKeyboardState, decimal, 0x23E);
VALIDATE_OFFSET(CKeyboardState, num1, 0x240);
VALIDATE_OFFSET(CKeyboardState, num2, 0x242);
VALIDATE_OFFSET(CKeyboardState, num3, 0x244);
VALIDATE_OFFSET(CKeyboardState, num4, 0x246);
VALIDATE_OFFSET(CKeyboardState, num5, 0x248);
VALIDATE_OFFSET(CKeyboardState, num6, 0x24A);
VALIDATE_OFFSET(CKeyboardState, num7, 0x24C);
VALIDATE_OFFSET(CKeyboardState, num8, 0x24E);
VALIDATE_OFFSET(CKeyboardState, num9, 0x250);
VALIDATE_OFFSET(CKeyboardState, num0, 0x252);
VALIDATE_OFFSET(CKeyboardState, back, 0x254);
VALIDATE_OFFSET(CKeyboardState, tab, 0x256);
VALIDATE_OFFSET(CKeyboardState, capslock, 0x258);
VALIDATE_OFFSET(CKeyboardState, extenter, 0x25A);
VALIDATE_OFFSET(CKeyboardState, lshift, 0x25C);
VALIDATE_OFFSET(CKeyboardState, rshift, 0x25E);
VALIDATE_OFFSET(CKeyboardState, shift, 0x260);
VALIDATE_OFFSET(CKeyboardState, lctrl, 0x262);
VALIDATE_OFFSET(CKeyboardState, rctrl, 0x264);
VALIDATE_OFFSET(CKeyboardState, lmenu, 0x266);
VALIDATE_OFFSET(CKeyboardState, rmenu, 0x268);
VALIDATE_OFFSET(CKeyboardState, lwin, 0x26A);
VALIDATE_OFFSET(CKeyboardState, rwin, 0x26C);
VALIDATE_OFFSET(CKeyboardState, apps, 0x26E);
VALIDATE_SIZE(CKeyboardState, 0x270);