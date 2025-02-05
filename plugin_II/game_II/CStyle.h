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

struct tSpriteBase {
    unsigned short car;
    unsigned short ped;
    unsigned short codeObj;
    unsigned short mapObj;
    unsigned short user;
    unsigned short font;
};

struct tFontBase {
    unsigned short fontCount;
    unsigned short base[1];
};

struct tSpriteEntry {
    unsigned int ptr;
    unsigned char width;
    unsigned char height;
    short field_6;
};

struct tObjectInfo {
    unsigned char model;
    unsigned char sprites;
};

struct tPaletteIndex {
    unsigned short physPalette[16384];
};

struct tTileArray {
    short tiles[1024];
};

struct tDeltaEntry {
    unsigned short whichSprite;
    unsigned char deltaCount;
    unsigned char pad;
    unsigned short deltaSize[2];
};

struct tDoorInfo {
    char rx, ry;
};

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

struct tDeltaStoreEntry {
    unsigned short offset;
    unsigned char len;
    unsigned char data[1];
};

struct tPhysicalPalette {
    unsigned char colors[256][4];
};

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

extern CStyle** gCurrentStyle;
extern CStyle* GetCurrentStyle();

extern unsigned short& Font2;
