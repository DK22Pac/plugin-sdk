/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#define MAX_HUD_ARROWS 17

#include "PluginBase.h"
#include "CEncodedVector.h"

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

enum eMessagePriority : int {
    MESSAGE_DISPLAY_NONE,
    MESSAGE_DISPLAY_DEFAULT = 1,
    MESSAGE_DISPLAY_SOON = 2,
    MESSAGE_DISPLAY_NOW = 3,
};

#pragma pack(push, 1)
class CHudBrief {
public:
    wchar_t text[161];
    int field_142;
    char field_146[120];
    int** field_1BE;
    char field_1C2[832];
    char field_502;
    char field_503; // pad?
    short displayTime; // render frames
    short field_506; // pad?
    int lines; // row count
    int field_50C;
    int length; // characters
    int* field_514;
    char gxt[8];
    char field_520[472];
    CHudBrief* prev; // TODO: is this still member of that struct?
    int field_6FC; // TODO: is this still member of that struct?
    char* field_700; // TODO: is this still member of that struct?

public:
    void SetHudBrief(eMessagePriority priority, const char* gxt, unsigned int timeout = -1); // GXT label
    void SetHudBriefStr(const char* text, short time = 0);
    void SetHudBriefStr(const wchar_t* text, short time = 0);

    void Clear(eMessagePriority priority);
};
VALIDATE_OFFSET(CHudBrief, text, 0x0);
VALIDATE_OFFSET(CHudBrief, field_142, 0x142);
VALIDATE_OFFSET(CHudBrief, field_146, 0x146);
VALIDATE_OFFSET(CHudBrief, field_1BE, 0x1BE);
VALIDATE_OFFSET(CHudBrief, field_1C2, 0x1C2);
VALIDATE_OFFSET(CHudBrief, field_502, 0x502);
VALIDATE_OFFSET(CHudBrief, field_503, 0x503);
VALIDATE_OFFSET(CHudBrief, displayTime, 0x504);
VALIDATE_OFFSET(CHudBrief, field_506, 0x506);
VALIDATE_OFFSET(CHudBrief, lines, 0x508);
VALIDATE_OFFSET(CHudBrief, field_50C, 0x50C);
VALIDATE_OFFSET(CHudBrief, length, 0x510);
VALIDATE_OFFSET(CHudBrief, field_514, 0x514);
VALIDATE_OFFSET(CHudBrief, gxt, 0x518);
VALIDATE_OFFSET(CHudBrief, field_520, 0x520);
VALIDATE_OFFSET(CHudBrief, prev, 0x6F8);
VALIDATE_OFFSET(CHudBrief, field_6FC, 0x6FC);
VALIDATE_OFFSET(CHudBrief, field_700, 0x700);
VALIDATE_SIZE(CHudBrief, 0x704);
#pragma pack(pop)
VALIDATE_SIZE(CHudBrief, 0x704); // TODO: possibly should be smaller

class CHudMessage {
    char m_nTimeToShow;
    wchar_t gap[100];
    wchar_t str[121];
    int m_nStringWidth;
    int m_nNumberLines;
    int m_nType;

public:
    void SetHudMessage(const char* text, eMessagePriority priority);
    void SetHudMessage(const wchar_t* text, eMessagePriority priority);
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
VALIDATE_OFFSET(CArrowTrace, field_0, 0x0);
VALIDATE_OFFSET(CArrowTrace, field_1, 0x1);
VALIDATE_OFFSET(CArrowTrace, field_2, 0x2);
VALIDATE_OFFSET(CArrowTrace, field_3, 0x3);
VALIDATE_OFFSET(CArrowTrace, field_4, 0x4);
VALIDATE_OFFSET(CArrowTrace, field_5, 0x5);
VALIDATE_OFFSET(CArrowTrace, field_6, 0x6);
VALIDATE_OFFSET(CArrowTrace, field_7, 0x7);
VALIDATE_OFFSET(CArrowTrace, field_8, 0x8);
VALIDATE_OFFSET(CArrowTrace, field_9, 0x9);
VALIDATE_OFFSET(CArrowTrace, field_A, 0xA);
VALIDATE_OFFSET(CArrowTrace, field_B, 0xB);
VALIDATE_OFFSET(CArrowTrace, field_C, 0xC);
VALIDATE_OFFSET(CArrowTrace, m_nType, 0x10);
VALIDATE_OFFSET(CArrowTrace, m_vPos, 0x14);
VALIDATE_OFFSET(CArrowTrace, field_23, 0x20);
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
VALIDATE_OFFSET(CHudArrow, m_vPoint, 0x0);
VALIDATE_OFFSET(CHudArrow, m_nPointRotation, 0x8);
VALIDATE_OFFSET(CHudArrow, field_A, 0xA);
VALIDATE_OFFSET(CHudArrow, field_B, 0xB);
VALIDATE_OFFSET(CHudArrow, field_C, 0xC);
VALIDATE_OFFSET(CHudArrow, field_D, 0xD);
VALIDATE_OFFSET(CHudArrow, field_E, 0xE);
VALIDATE_OFFSET(CHudArrow, field_F, 0xF);
VALIDATE_OFFSET(CHudArrow, field_10, 0x10);
VALIDATE_OFFSET(CHudArrow, field_11, 0x11);
VALIDATE_OFFSET(CHudArrow, field_12, 0x12);
VALIDATE_OFFSET(CHudArrow, field_13, 0x13);
VALIDATE_OFFSET(CHudArrow, field_14, 0x14);
VALIDATE_OFFSET(CHudArrow, field_15, 0x15);
VALIDATE_OFFSET(CHudArrow, field_16, 0x16);
VALIDATE_OFFSET(CHudArrow, field_17, 0x17);
VALIDATE_OFFSET(CHudArrow, field_18, 0x18);
VALIDATE_OFFSET(CHudArrow, field_19, 0x19);
VALIDATE_OFFSET(CHudArrow, field_1A, 0x1A);
VALIDATE_OFFSET(CHudArrow, field_1B, 0x1B);
VALIDATE_OFFSET(CHudArrow, field_1C, 0x1C);
VALIDATE_OFFSET(CHudArrow, field_1D, 0x1D);
VALIDATE_OFFSET(CHudArrow, field_1E, 0x1E);
VALIDATE_OFFSET(CHudArrow, field_1F, 0x1F);
VALIDATE_OFFSET(CHudArrow, m_nType, 0x20);
VALIDATE_OFFSET(CHudArrow, m_nSpriteId, 0x24);
VALIDATE_OFFSET(CHudArrow, field_26, 0x26);
VALIDATE_OFFSET(CHudArrow, field_28, 0x28);
VALIDATE_OFFSET(CHudArrow, field_29, 0x29);
VALIDATE_OFFSET(CHudArrow, field_2A, 0x2A);
VALIDATE_OFFSET(CHudArrow, field_2B, 0x2B);
VALIDATE_OFFSET(CHudArrow, field_2C, 0x2C);
VALIDATE_OFFSET(CHudArrow, m_bVisible, 0x2D);
VALIDATE_OFFSET(CHudArrow, field_2E, 0x2E);
VALIDATE_OFFSET(CHudArrow, field_2F, 0x2F);
VALIDATE_OFFSET(CHudArrow, m_ArrowTrace, 0x30);
VALIDATE_OFFSET(CHudArrow, m_SecondArrowTrace, 0x54);
VALIDATE_OFFSET(CHudArrow, gap, 0x78);
VALIDATE_SIZE(CHudArrow, 0x7C);

class CHudDerived {
public:
    char field_0[12];
};
VALIDATE_OFFSET(CHudDerived, field_0, 0x0);
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
VALIDATE_OFFSET(CHud, field_0, 0x0);
VALIDATE_OFFSET(CHud, field_1, 0x1);
VALIDATE_OFFSET(CHud, field_2e, 0x2E);
VALIDATE_OFFSET(CHud, field_2f, 0x2F);
VALIDATE_OFFSET(CHud, field_4c, 0x4C);
VALIDATE_OFFSET(CHud, field_50, 0x50);
VALIDATE_OFFSET(CHud, m_HudBrief, 0xE4);
VALIDATE_OFFSET(CHud, ptr, 0x7E8);
VALIDATE_OFFSET(CHud, field_7e8, 0x7EC);
VALIDATE_OFFSET(CHud, m_HudArrows, 0x1F18);
VALIDATE_OFFSET(CHud, gap, 0x2754);
VALIDATE_OFFSET(CHud, field_2760, 0x2760);
VALIDATE_OFFSET(CHud, field_2764, 0x2764);
VALIDATE_OFFSET(CHud, m_bDisplayDebugInfo, 0x27B5);
VALIDATE_OFFSET(CHud, field_27b6, 0x27B6);
VALIDATE_OFFSET(CHud, m_HudMessage, 0x2854);
VALIDATE_OFFSET(CHud, field_2858, 0x2A1C);
VALIDATE_OFFSET(CHud, m_nTextSpeed, 0x2AF4);
VALIDATE_SIZE(CHud, 0x2AF8);

extern CHud** gHud;

extern CHud* GetHud();
