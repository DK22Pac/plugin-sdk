/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eKeyCodes : uint32_t {
    KEY_ESCAPE = 0x01,
    KEY_1 = 0x02,
    KEY_2 = 0x03,
    KEY_3 = 0x04,
    KEY_4 = 0x05,
    KEY_5 = 0x06,
    KEY_6 = 0x07,
    KEY_7 = 0x08,
    KEY_8 = 0x09,
    KEY_9 = 0x0A,
    KEY_0 = 0x0B,
    KEY_MINUS = 0x0C,    // -
    KEY_EQUALS = 0x0D,    // =
    KEY_BACKSPACE = 0x0E,    // Backspace
    KEY_TAB = 0x0F,
    KEY_Q = 0x10,
    KEY_W = 0x11,
    KEY_E = 0x12,
    KEY_R = 0x13,
    KEY_T = 0x14,
    KEY_Y = 0x15,
    KEY_U = 0x16,
    KEY_I = 0x17,
    KEY_O = 0x18,
    KEY_P = 0x19,
    KEY_LBRACKET = 0x1A,    // [
    KEY_RBRACKET = 0x1B,    // ]
    KEY_RETURN = 0x1C,    // Enter
    KEY_LCONTROL = 0x1D,    // Left Control
    KEY_A = 0x1E,
    KEY_S = 0x1F,
    KEY_D = 0x20,
    KEY_F = 0x21,
    KEY_G = 0x22,
    KEY_H = 0x23,
    KEY_J = 0x24,
    KEY_K = 0x25,
    KEY_L = 0x26,
    KEY_SEMICOLON = 0x27,    // ;
    KEY_APOSTROPHE = 0x28,    // '
    KEY_GRAVE = 0x29,    // `
    KEY_LSHIFT = 0x2A,    // Left Shift
    KEY_BACKSLASH = 0x2B,    // \ //
    KEY_Z = 0x2C,
    KEY_X = 0x2D,
    KEY_C = 0x2E,
    KEY_V = 0x2F,
    KEY_B = 0x30,
    KEY_N = 0x31,
    KEY_M = 0x32,
    KEY_COMMA = 0x33,    // ,
    KEY_PERIOD = 0x34,    // .
    KEY_SLASH = 0x35,    // /
    KEY_RSHIFT = 0x36,    // Right Shift
    KEY_MULTIPLY = 0x37,    // *
    KEY_LMENU = 0x38,    // Left Alt
    KEY_SPACE = 0x39,
    KEY_CAPITAL = 0x3A,    // Caps Lock
    KEY_F1 = 0x3B,
    KEY_F2 = 0x3C,
    KEY_F3 = 0x3D,
    KEY_F4 = 0x3E,
    KEY_F5 = 0x3F,
    KEY_F6 = 0x40,
    KEY_F7 = 0x41,
    KEY_F8 = 0x42,
    KEY_F9 = 0x43,
    KEY_F10 = 0x44,
    KEY_NUMLOCK = 0x45,
    KEY_SCROLL = 0x46,    // Scroll Lock
    KEY_NUMPAD7 = 0x47,
    KEY_NUMPAD8 = 0x48,
    KEY_NUMPAD9 = 0x49,
    KEY_SUBTRACT = 0x4A,    // -
    KEY_NUMPAD4 = 0x4B,
    KEY_NUMPAD5 = 0x4C,
    KEY_NUMPAD6 = 0x4D,
    KEY_ADD = 0x4E,    // +
    KEY_NUMPAD1 = 0x4F,
    KEY_NUMPAD2 = 0x50,
    KEY_NUMPAD3 = 0x51,
    KEY_NUMPAD0 = 0x52,
    KEY_DECIMAL = 0x53,    // .
    KEY_F11 = 0x57,
    KEY_F12 = 0x58,
    KEY_F13 = 0x64,
    KEY_F14 = 0x65,
    KEY_F15 = 0x66,
    KEY_KANA = 0x70,    // Japanese Keyboard
    KEY_CONVERT = 0x79,    // Japanese Keyboard
    KEY_NOCONVERT = 0x7B,    // Japanese Keyboard
    KEY_YEN = 0x7D,    // Japanese Keyboard
    KEY_NUMPADEQUALS = 0x8D,    // =
    KEY_CIRCUMFLEX = 0x90,    // Japanese Keyboard
    KEY_AT = 0x91,    // Japanese Keyboard
    KEY_COLON = 0x92,    // Japanese Keyboard
    KEY_UNDERLINE = 0x93,    // Japanese Keyboard
    KEY_KANJI = 0x94,    // Japanese Keyboard
    KEY_STOP = 0x95,    // Japanese Keyboard
    KEY_AX = 0x96,    // Japanese Keyboard
    KEY_UNLABELED = 0x97,    // Japanese Keyboard
    KEY_NUMPADENTER = 0x9C,    // Enter on Numeric Keypad
    KEY_RCONTROL = 0x9D,    // Right Control
    KEY_NUMPADCOMMA = 0xB3,    // ,
    KEY_DIVIDE = 0xB5,    // /
    KEY_SYSRQ = 0xB7,
    KEY_RMENU = 0xB8,    // Right Alt
    KEY_PAUSE = 0xC5,
    KEY_HOME = 0xC7,
    KEY_UP = 0xC8,
    KEY_PRIOR = 0xC9,    // Page Up
    KEY_LEFT = 0xCB,
    KEY_RIGHT = 0xCD,
    KEY_END = 0xCF,
    KEY_DOWN = 0xD0,
    KEY_NEXT = 0xD1,    // Page Down
    KEY_INSERT = 0xD2,
    KEY_DELETE = 0xD3,
    KEY_LWIN = 0xDB,    // Left Windows key (Windows 2000/XP)
    KEY_RWIN = 0xDC,    // Right Windows key (Windows 2000/XP)
    KEY_APPS = 0xDD,    // Applications key (Windows 2000/XP)
};

class CKeyboard {
public:
    uint8_t field_1;
    uint8_t m_nCurrentIndex;
    uint8_t field_3;
    uint8_t field_4;
    uint32_t field_5;

public:
    bool GetAsciiJustPressed(uint32_t code, int32_t* out);
    bool GetAsciiPressed(uint32_t code, int32_t* out);
    bool GetKeyJustDown(eKeyCodes key, int32_t index, const char* str);
    bool GetKeyDown(eKeyCodes key, int32_t index, const char* str);
};

VALIDATE_SIZE(CKeyboard, 0x8);
