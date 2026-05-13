/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <stdio.h>

#include "PluginBase.h"


struct PLUGIN_API CText__TDat
{
	char* data;
	int size;

	// Reads TABL block from GXT file
	bool read(size_t TABLblockSize, FILE *file, int *pFileOffset, bool skipRead);
};
VALIDATE_OFFSET(CText__TDat, data, 0x0);
VALIDATE_OFFSET(CText__TDat, size, 0x4);
VALIDATE_SIZE(CText__TDat, 0x8);


struct PLUGIN_API CText__TablEntry
{
  char name[8];
  int offset;
};
VALIDATE_OFFSET(CText__TablEntry, name, 0x0);
VALIDATE_OFFSET(CText__TablEntry, offset, 0x8);
VALIDATE_SIZE(CText__TablEntry, 0xC);


struct PLUGIN_API CText__Tabl
{
	CText__TablEntry data[200];
    short size;
    short __pad;

	// Constructor
	CText__Tabl();

	// Reads TABL block from GXT file
	void read(size_t TABLblockSize, FILE *file, int *pFileOffset, int maxReadSize);
};
VALIDATE_OFFSET(CText__Tabl, data, 0x0);
VALIDATE_OFFSET(CText__Tabl, size, 0x960);
VALIDATE_OFFSET(CText__Tabl, __pad, 0x962);
VALIDATE_SIZE(CText__Tabl, 0x964);


struct PLUGIN_API tGXT_VERSION_2_TKEY_item
{
	unsigned long int Position;		// TDAT + 8 offset
	unsigned long int KeyHash;
};
VALIDATE_OFFSET(tGXT_VERSION_2_TKEY_item, Position, 0x0);
VALIDATE_OFFSET(tGXT_VERSION_2_TKEY_item, KeyHash, 0x4);
VALIDATE_SIZE(tGXT_VERSION_2_TKEY_item, 0x8);



struct PLUGIN_API CText__TKey
{
	tGXT_VERSION_2_TKEY_item* data;
    short size;
	

	// Reads TKEY block from GXT file
	bool read(size_t TKEYblockSize, FILE *file, int *pFileOffset, bool skipReading);

	// Patches offsets - adds specified integer value to every position member of TKEY item
	void patchOffsets(int PosOffsetMovement);

	// Performs a binary search for a specified key and returns pointer if found, otherwise NULL.
	tGXT_VERSION_2_TKEY_item* bsearch(unsigned int key, tGXT_VERSION_2_TKEY_item *data, short firstIndex, short lastIndex);

	// Returns pointer to string by GXT key name (label)
	const char* GetTextByLabel(const char* keyName, bool* bFound);

	// Destructor
	~CText__TKey();
};
VALIDATE_OFFSET(CText__TKey, data, 0x0);
VALIDATE_OFFSET(CText__TKey, size, 0x4);
VALIDATE_SIZE(CText__TKey, 0x8);



class PLUGIN_API CText
{
public:
	CText__TKey tkeyMain;
	CText__TDat tdatMain;
	CText__TKey tkeyMission;
	CText__TDat tdatMission;
	char encoding;
	char haveTabl;
	char cderrorInitialized;
	char missionTableLoaded;
	char missionTableName[8];
	char cderrorText[256];
	CText__Tabl tabl;

	// Constructor
	CText();

	// Destructor
	~CText();

	// Returns text pointer by GXT key
	SUPPORTED_10US_10EU_11EU_SR2 const char* Get(const char* key);

	// Reads MPACK tag
	static void __stdcall readTag(char *buf, FILE *file, int *pFileOffset, bool dontRead);

	// Loads mission table from GXT file
	void LoadMissionTable(const char *tableName);

	// Loads MPACK
	void LoadMpack();

	// Loads GXT file
	void Load();

	// Unloads GXT file
	void Unload(bool bUnloadMissionData);

	// Writes a mission table name into buffer
	void getMissionTableName(char *outStr);
};
VALIDATE_OFFSET(CText, tkeyMain, 0x0);
VALIDATE_OFFSET(CText, tdatMain, 0x8);
VALIDATE_OFFSET(CText, tkeyMission, 0x10);
VALIDATE_OFFSET(CText, tdatMission, 0x18);
VALIDATE_OFFSET(CText, encoding, 0x20);
VALIDATE_OFFSET(CText, haveTabl, 0x21);
VALIDATE_OFFSET(CText, cderrorInitialized, 0x22);
VALIDATE_OFFSET(CText, missionTableLoaded, 0x23);
VALIDATE_OFFSET(CText, missionTableName, 0x24);
VALIDATE_OFFSET(CText, cderrorText, 0x2C);
VALIDATE_OFFSET(CText, tabl, 0x12C);
VALIDATE_SIZE(CText, 0xA90);

extern PLUGIN_API CText& TheText;

#include "meta/meta.CText.h"