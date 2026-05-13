/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eBaseIndices {
    BASEINDEX_CARS,
    BASEINDEX_PEDS,
    BASEINDEX_CODEOBJ,
    BASEINDEX_MAPOBJ,
    BASEINDEX_USER,
    BASEINDEX_FONT,
    BASEINDEX_LAST,
    NUM_BASE_INDICES,
};

struct tPaletteBase {
    unsigned short tile;
    unsigned short sprite;
    unsigned short carRemap;
    unsigned short redRemap;
    unsigned short codeObjRemap;
    unsigned short mapObjRemap;
    unsigned short userRemap;
    unsigned short fontRemap;
};
VALIDATE_OFFSET(tPaletteBase, tile, 0x0);
VALIDATE_OFFSET(tPaletteBase, sprite, 0x2);
VALIDATE_OFFSET(tPaletteBase, carRemap, 0x4);
VALIDATE_OFFSET(tPaletteBase, redRemap, 0x6);
VALIDATE_OFFSET(tPaletteBase, codeObjRemap, 0x8);
VALIDATE_OFFSET(tPaletteBase, mapObjRemap, 0xA);
VALIDATE_OFFSET(tPaletteBase, userRemap, 0xC);
VALIDATE_OFFSET(tPaletteBase, fontRemap, 0xE);
VALIDATE_SIZE(tPaletteBase, 0x10);

struct tSpriteBase {
    unsigned short car;
    unsigned short ped;
    unsigned short codeObj;
    unsigned short mapObj;
    unsigned short user;
    unsigned short font;
};
VALIDATE_OFFSET(tSpriteBase, car, 0x0);
VALIDATE_OFFSET(tSpriteBase, ped, 0x2);
VALIDATE_OFFSET(tSpriteBase, codeObj, 0x4);
VALIDATE_OFFSET(tSpriteBase, mapObj, 0x6);
VALIDATE_OFFSET(tSpriteBase, user, 0x8);
VALIDATE_OFFSET(tSpriteBase, font, 0xA);
VALIDATE_SIZE(tSpriteBase, 0xC);

struct tFontBase {
    unsigned short fontCount;
    unsigned short base[1];
};
VALIDATE_OFFSET(tFontBase, fontCount, 0x0);
VALIDATE_OFFSET(tFontBase, base, 0x2);
VALIDATE_SIZE(tFontBase, 0x4);

struct tSpriteEntry {
    unsigned int ptr;
    unsigned char width;
    unsigned char height;
    short field_6;
};
VALIDATE_OFFSET(tSpriteEntry, ptr, 0x0);
VALIDATE_OFFSET(tSpriteEntry, width, 0x4);
VALIDATE_OFFSET(tSpriteEntry, height, 0x5);
VALIDATE_OFFSET(tSpriteEntry, field_6, 0x6);
VALIDATE_SIZE(tSpriteEntry, 0x8);

struct tObjectInfo {
    unsigned char model;
    unsigned char sprites;
};
VALIDATE_OFFSET(tObjectInfo, model, 0x0);
VALIDATE_OFFSET(tObjectInfo, sprites, 0x1);
VALIDATE_SIZE(tObjectInfo, 0x2);

struct tPaletteIndex {
    unsigned short physPalette[16384];
};
VALIDATE_OFFSET(tPaletteIndex, physPalette, 0x0);
VALIDATE_SIZE(tPaletteIndex, 0x8000);

struct tTileArray {
    short tiles[1024];
};
VALIDATE_OFFSET(tTileArray, tiles, 0x0);
VALIDATE_SIZE(tTileArray, 0x800);

struct tDeltaEntry {
    unsigned short whichSprite;
    unsigned char deltaCount;
    unsigned char pad;
    unsigned short deltaSize[2];
};
VALIDATE_OFFSET(tDeltaEntry, whichSprite, 0x0);
VALIDATE_OFFSET(tDeltaEntry, deltaCount, 0x2);
VALIDATE_OFFSET(tDeltaEntry, pad, 0x3);
VALIDATE_OFFSET(tDeltaEntry, deltaSize, 0x4);
VALIDATE_SIZE(tDeltaEntry, 0x8);

struct tDoorInfo {
    char rx, ry;
};
VALIDATE_OFFSET(tDoorInfo, rx, 0x0);
VALIDATE_OFFSET(tDoorInfo, ry, 0x1);
VALIDATE_SIZE(tDoorInfo, 0x2);

struct tCarInfo {
    unsigned char model;
    unsigned char sprite;
    unsigned char w;
    unsigned char h;
    unsigned char numRemaps;
    unsigned char passengers;
    unsigned char wreck;
    unsigned char rating;
    char frontWheelOffset;
    char rearWheelOffset;
    char frontWindowOffset;
    char rearWindowOffset;
    unsigned char infoFlags;
    unsigned char infoFlags2;
    unsigned char remap[1];
    unsigned char numDoors;
    tDoorInfo doors[1];
};
VALIDATE_OFFSET(tCarInfo, model, 0x0);
VALIDATE_OFFSET(tCarInfo, sprite, 0x1);
VALIDATE_OFFSET(tCarInfo, w, 0x2);
VALIDATE_OFFSET(tCarInfo, h, 0x3);
VALIDATE_OFFSET(tCarInfo, numRemaps, 0x4);
VALIDATE_OFFSET(tCarInfo, passengers, 0x5);
VALIDATE_OFFSET(tCarInfo, wreck, 0x6);
VALIDATE_OFFSET(tCarInfo, rating, 0x7);
VALIDATE_OFFSET(tCarInfo, frontWheelOffset, 0x8);
VALIDATE_OFFSET(tCarInfo, rearWheelOffset, 0x9);
VALIDATE_OFFSET(tCarInfo, frontWindowOffset, 0xA);
VALIDATE_OFFSET(tCarInfo, rearWindowOffset, 0xB);
VALIDATE_OFFSET(tCarInfo, infoFlags, 0xC);
VALIDATE_OFFSET(tCarInfo, infoFlags2, 0xD);
VALIDATE_OFFSET(tCarInfo, remap, 0xE);
VALIDATE_OFFSET(tCarInfo, numDoors, 0xF);
VALIDATE_OFFSET(tCarInfo, doors, 0x10);
VALIDATE_SIZE(tCarInfo, 0x12);

class CCarInfoContainer {
public:
    tCarInfo* m_pCarInfo[256];
    char m_nCount;

public:
    CCarInfoContainer() {
        m_nCount = 0;
        memset(m_pCarInfo, 0, sizeof(m_pCarInfo));
    }
};
VALIDATE_OFFSET(CCarInfoContainer, m_pCarInfo, 0x0);
VALIDATE_OFFSET(CCarInfoContainer, m_nCount, 0x400);
VALIDATE_SIZE(CCarInfoContainer, 0x404);

struct tDeltaStoreEntry {
    unsigned short offset;
    unsigned char len;
    unsigned char data[1];
};
VALIDATE_OFFSET(tDeltaStoreEntry, offset, 0x0);
VALIDATE_OFFSET(tDeltaStoreEntry, len, 0x2);
VALIDATE_OFFSET(tDeltaStoreEntry, data, 0x3);
VALIDATE_SIZE(tDeltaStoreEntry, 0x4);

struct tPhysicalPalette {
    unsigned char colors[256][4];
};
VALIDATE_OFFSET(tPhysicalPalette, colors, 0x0);
VALIDATE_SIZE(tPhysicalPalette, 0x400);

class CStyle {
public:
    short m_nPalBaseSize;
    short m_nFontBaseSize;
    short m_nSpriteIndexSize;
    short m_nMapObjectInfoSize;
    short m_nPhysPalSize;
    short field_18;
    tPaletteBase* m_pPaletteBase;
    tPaletteBase* m_pPaletteBase2;
    tSpriteBase* m_pSpriteBase;
    tSpriteBase* m_pSpriteBase2;
    tFontBase* m_pFontBase;
    tSpriteEntry* m_pSpriteIndex;
    tObjectInfo* m_pMapObjectInfo;
    tPaletteIndex* m_pPaletteIndex;
    tPhysicalPalette* m_pPhysPalette;
    tPhysicalPalette* m_pPhysPalette2;
    unsigned char* m_pSprites;
    void* field_56;
    void* m_pTiles;
    tTileArray* m_pTileArray;
    void* field_68;
    tDeltaStoreEntry* m_pDeltaStore;
    tDeltaEntry* m_pDeltaEntry;
    void* field_80;
    int field_84;
    tCarInfo** m_pCarInfo;
    CCarInfoContainer* m_pCarInfoContainer;
    int m_nDeltaSize;
    unsigned char* field_100;
    unsigned short field_104;
    unsigned char field_106;
    unsigned char field_107;
    unsigned int field_108[1024];

public:
    CStyle();
    void Load(const char* path);
    void Unload();
    short GetBaseIndex(int base, short texture);
    int* GetTileArray(unsigned short id);
    unsigned short GetPhysPalette(unsigned short id);

    static void SetFontStyles(int fonts);

};
VALIDATE_OFFSET(CStyle, m_nPalBaseSize, 0x0);
VALIDATE_OFFSET(CStyle, m_nFontBaseSize, 0x2);
VALIDATE_OFFSET(CStyle, m_nSpriteIndexSize, 0x4);
VALIDATE_OFFSET(CStyle, m_nMapObjectInfoSize, 0x6);
VALIDATE_OFFSET(CStyle, m_nPhysPalSize, 0x8);
VALIDATE_OFFSET(CStyle, field_18, 0xA);
VALIDATE_OFFSET(CStyle, m_pPaletteBase, 0xC);
VALIDATE_OFFSET(CStyle, m_pPaletteBase2, 0x10);
VALIDATE_OFFSET(CStyle, m_pSpriteBase, 0x14);
VALIDATE_OFFSET(CStyle, m_pSpriteBase2, 0x18);
VALIDATE_OFFSET(CStyle, m_pFontBase, 0x1C);
VALIDATE_OFFSET(CStyle, m_pSpriteIndex, 0x20);
VALIDATE_OFFSET(CStyle, m_pMapObjectInfo, 0x24);
VALIDATE_OFFSET(CStyle, m_pPaletteIndex, 0x28);
VALIDATE_OFFSET(CStyle, m_pPhysPalette, 0x2C);
VALIDATE_OFFSET(CStyle, m_pPhysPalette2, 0x30);
VALIDATE_OFFSET(CStyle, m_pSprites, 0x34);
VALIDATE_OFFSET(CStyle, field_56, 0x38);
VALIDATE_OFFSET(CStyle, m_pTiles, 0x3C);
VALIDATE_OFFSET(CStyle, m_pTileArray, 0x40);
VALIDATE_OFFSET(CStyle, field_68, 0x44);
VALIDATE_OFFSET(CStyle, m_pDeltaStore, 0x48);
VALIDATE_OFFSET(CStyle, m_pDeltaEntry, 0x4C);
VALIDATE_OFFSET(CStyle, field_80, 0x50);
VALIDATE_OFFSET(CStyle, field_84, 0x54);
VALIDATE_OFFSET(CStyle, m_pCarInfo, 0x58);
VALIDATE_OFFSET(CStyle, m_pCarInfoContainer, 0x5C);
VALIDATE_OFFSET(CStyle, m_nDeltaSize, 0x60);
VALIDATE_OFFSET(CStyle, field_100, 0x64);
VALIDATE_OFFSET(CStyle, field_104, 0x68);
VALIDATE_OFFSET(CStyle, field_106, 0x6A);
VALIDATE_OFFSET(CStyle, field_107, 0x6B);
VALIDATE_OFFSET(CStyle, field_108, 0x6C);
VALIDATE_SIZE(CStyle, 0x106C);

extern CStyle** gCurrentStyle;
extern CStyle* GetCurrentStyle();

extern unsigned short& Font2;
