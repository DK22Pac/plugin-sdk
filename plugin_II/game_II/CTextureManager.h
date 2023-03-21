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

VALIDATE_SIZE(CTextureManager, 0x15D8);

extern CTextureManager** TextureManager;
extern CTextureManager* GetTextureManager();
