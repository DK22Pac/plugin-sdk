/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#define MAX_HUD_ARROWS 17

#include "PluginBase.h"
#include "CVector.h"

enum eArrowSprites {
    SPRITE_BIGARROW,
    SPRITE_GREENARROW, // loo
    SPRITE_BLUEARROW, // ya
    SPRITE_GREYARROW, // zai
    SPRITE_BLUELIGHT, // red
    SPRITE_YELLOW, // scie
    SPRITE_ORANGE, // kr
    SPRITE_RED, // maf
    SPRITE_SMALLYELLOW,
    SPRITE_SMALLGREEN,
    SPRITE_SMALLRED,
};

enum eArrowType {
    TYPE_0,
    TYPE_YELLOW,
    TYPE_RED,
    TYPE_GREEN,
};

enum eMessagePriority {
    MESSAGE_DISPLAY_NONE,
    MESSAGE_DISPLAY_DEFAULT = 1,
    MESSAGE_DISPLAY_SOON = 2,
    MESSAGE_DISPLAY_NOW = 3,
};

class CHudBrief {
public:
    wchar_t str[640];
    char field_641[36];
    int* field_642;
    char field_646[452];
    char field_647[12];
    CHudBrief* prev;
    int field_652;
    char* field_653;

public:
    void SetHudBrief(int priority, const char* str);
    void Clear(int priority);
};

VALIDATE_SIZE(CHudBrief, 0x704);

class CHudMessage {
    char m_nTimeToShow;
    wchar_t gap[100];
    wchar_t str[121];
    int m_nStringWidth;
    int m_nNumberLines;
    int m_nType;

public:
    void SetHudMessage(wchar_t* str, int priority);
};

VALIDATE_SIZE(CHudMessage, 0x1C8);

class CArrowTrace {
public:
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    char field_A;
    char field_B;
    int field_C;
    int m_nType;
    CEncodedVector m_vPos;
    char field_23;
};

VALIDATE_SIZE(CArrowTrace, 0x24);

class CHudArrow {
public:
    CEncodedVector2D m_vPoint;
    short m_nPointRotation;
    char field_A;
    char field_B;
    char field_C;
    char field_D;
    char field_E;
    char field_F;
    char field_10;
    char field_11;
    char field_12;
    char field_13;
    char field_14;
    char field_15;
    char field_16;
    char field_17;
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    char field_1C;
    char field_1D;
    char field_1E;
    char field_1F;
    int m_nType;
    short m_nSpriteId;
    short field_26;
    char field_28;
    char field_29;
    char field_2A;
    char field_2B;
    char field_2C;
    char m_bVisible;
    char field_2E;
    char field_2F;
    CArrowTrace m_ArrowTrace;
    CArrowTrace m_SecondArrowTrace;
    char gap[4];

public:
    bool AreBothArrowTracesUsed();
    bool IsArrowVisible();
    void SetSpriteId(short id);
};

VALIDATE_SIZE(CHudArrow, 0x7C);

class CHudDerived {
public:
    char field_0[12];
};

VALIDATE_SIZE(CHudDerived, 0xC);

class CHud {
public:
    unsigned char field_0;
    unsigned char field_1[45];
    char field_2e;
    unsigned char field_2f[29];
    void* field_4c;
    unsigned char field_50[148];
    CHudBrief m_HudBrief;
    CHudDerived* ptr;
    unsigned char field_7e8[5932];
    CHudArrow m_HudArrows[17];
    char gap[11];
    void* field_2760;
    unsigned char field_2764[81];
    unsigned char m_bDisplayDebugInfo;
    unsigned char field_27b6[158];
    CHudMessage m_HudMessage;
    unsigned char field_2858[215];
    int m_nTextSpeed;

public:
    static void DrawSprite(int id1, int id2, int x, int y, char style, int const& mode, int enableAlpha, int alpha, char unk);
};

VALIDATE_SIZE(CHud, 0x2AF8);

extern CHud** gHud;

extern CHud* GetHud();
