/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "tTexture.h"

struct tTexMgr {
    unsigned char* data;
    tTexture* field_4;
    short field_8;
    short field_A;
};
VALIDATE_OFFSET(tTexMgr, data, 0x0);
VALIDATE_OFFSET(tTexMgr, field_4, 0x4);
VALIDATE_OFFSET(tTexMgr, field_8, 0x8);
VALIDATE_OFFSET(tTexMgr, field_A, 0xA);
VALIDATE_SIZE(tTexMgr, 0xC);

struct tTexMgr2 {
    tTexture** field_0;
    unsigned short field_4;
    unsigned short field_6;
    int field_8;
    int field_C;
    char field_10;
    char field_11;
    char field_12;
    char field_13;
};
VALIDATE_OFFSET(tTexMgr2, field_0, 0x0);
VALIDATE_OFFSET(tTexMgr2, field_4, 0x4);
VALIDATE_OFFSET(tTexMgr2, field_6, 0x6);
VALIDATE_OFFSET(tTexMgr2, field_8, 0x8);
VALIDATE_OFFSET(tTexMgr2, field_C, 0xC);
VALIDATE_OFFSET(tTexMgr2, field_10, 0x10);
VALIDATE_OFFSET(tTexMgr2, field_11, 0x11);
VALIDATE_OFFSET(tTexMgr2, field_12, 0x12);
VALIDATE_OFFSET(tTexMgr2, field_13, 0x13);
VALIDATE_SIZE(tTexMgr2, 0x14);

class CTextureManager {
public:
    tTexture* m_pTextures[1024];
    char field_1000;
    char m_bTexturesInitialised;
    char field_1002;
    char field_1003;
    tTexture* field_1004[48];
    tTexMgr field_10C4[96];
    tTexture* field_1544;
    tTexMgr2 field_1548;
    tTexMgr2 field_155C;
    tTexMgr2 field_1570;
    tTexMgr2 field_1584;
    tTexMgr2 field_1598;
    tTexMgr2 field_15AC;
    tTexMgr2 field_15C0;
    short field_15D4_idx;
    unsigned short field_15D6_pal_count;

public:
    CTextureManager();
    void Load();
    void Unload();
    tTexture* GetTexture(int id1, int id2, int const& mode, int enableAlpha);
};
VALIDATE_OFFSET(CTextureManager, m_pTextures, 0x0);
VALIDATE_OFFSET(CTextureManager, field_1000, 0x1000);
VALIDATE_OFFSET(CTextureManager, m_bTexturesInitialised, 0x1001);
VALIDATE_OFFSET(CTextureManager, field_1002, 0x1002);
VALIDATE_OFFSET(CTextureManager, field_1003, 0x1003);
VALIDATE_OFFSET(CTextureManager, field_1004, 0x1004);
VALIDATE_OFFSET(CTextureManager, field_10C4, 0x10C4);
VALIDATE_OFFSET(CTextureManager, field_1544, 0x1544);
VALIDATE_OFFSET(CTextureManager, field_1548, 0x1548);
VALIDATE_OFFSET(CTextureManager, field_155C, 0x155C);
VALIDATE_OFFSET(CTextureManager, field_1570, 0x1570);
VALIDATE_OFFSET(CTextureManager, field_1584, 0x1584);
VALIDATE_OFFSET(CTextureManager, field_1598, 0x1598);
VALIDATE_OFFSET(CTextureManager, field_15AC, 0x15AC);
VALIDATE_OFFSET(CTextureManager, field_15C0, 0x15C0);
VALIDATE_OFFSET(CTextureManager, field_15D4_idx, 0x15D4);
VALIDATE_OFFSET(CTextureManager, field_15D6_pal_count, 0x15D6);
VALIDATE_SIZE(CTextureManager, 0x15D8);

extern CTextureManager** TextureManager;
extern CTextureManager* GetTextureManager();
