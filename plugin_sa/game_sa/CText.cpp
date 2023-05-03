/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

#define VAR_TheText 0xC1B340;

#define FUNC_CText__Constructor 0x6A00F0
#define FUNC_CText__Destructor 0x6A0140
#define FUNC_CText__Get 0x6A0050
#define FUNC_CText__Load 0x6A01A0
#define FUNC_CText__LoadMissionTable 0x69FBF0
#define FUNC_CText__LoadMpack 0x69F9A0
#define FUNC_CText__Unload 0x69FF20
#define FUNC_CText__ReadTag 0x69F940
#define FUNC_CText__getMissionTableName 0x69FBD0

#define FUNC_CText__Tabl__Constructor 0x69F480
#define FUNC_CText__Tabl__Read 0x69F670

#define FUNC_CText__TKey__Read 0x69F490
#define FUNC_CText__TKey__Destructor 0x69F510
#define FUNC_CText__TKey__PatchOffsets 0x69F540
#define FUNC_CText__TKey__Bsearch 0x69F570
#define FUNC_CText__TKey__GetTextByLabel 0x6A0000

#define FUNC_CText__TDat__Read 0x69F5D0

// Reads TABL block from GXT file
bool CText__TDat::read(size_t TABLblockSize, FILE *file, int *pFileOffset, bool skipRead)
{
	return ((bool (__thiscall*)(CText__TDat*, size_t, FILE *, int *, bool)) FUNC_CText__TDat__Read )(this, TABLblockSize, file, pFileOffset, skipRead);
}

////// CText__Tabl //////
// Constructor
CText__Tabl::CText__Tabl()
{
	((const char *(__thiscall*)(CText__Tabl*)) FUNC_CText__Tabl__Constructor )(this);
}

// Reads TABL block from GXT file
void CText__Tabl::read(size_t TABLblockSize, FILE *file, int *pFileOffset, int maxReadSize)
{
	((void (__thiscall*)(CText__Tabl*, size_t, FILE *, int *, int)) FUNC_CText__Tabl__Read )(this, TABLblockSize, file, pFileOffset, maxReadSize);
}

////// CText__TKey //////
// Reads TKEY block from GXT file
bool CText__TKey::read(size_t TKEYblockSize, FILE *file, int *pFileOffset, bool skipReading)
{
	return ((bool (__thiscall*)(CText__TKey*, size_t, FILE *, int*, bool)) FUNC_CText__TKey__Read )(this, TKEYblockSize, file, pFileOffset, skipReading);
}

// Patches offsets - adds specified integer value to every position member of TKEY item
void CText__TKey::patchOffsets(int PosOffsetMovement)
{
	((void (__thiscall*)(CText__TKey*, int))FUNC_CText__TKey__PatchOffsets)(this, PosOffsetMovement);
}

// Performs a binary search for a specified key and returns pointer if found, otherwise NULL.
tGXT_VERSION_2_TKEY_item* CText__TKey::bsearch(unsigned int key, tGXT_VERSION_2_TKEY_item *pData, short firstIndex, short lastIndex)
{
	return ((tGXT_VERSION_2_TKEY_item* (__thiscall*)(CText__TKey*, unsigned int, tGXT_VERSION_2_TKEY_item *, short, short))FUNC_CText__TKey__Bsearch)(this, key, pData, firstIndex, lastIndex);
}

// Returns pointer to string by GXT key name (label)
const char* CText__TKey::GetTextByLabel(const char* keyName, bool* bFound)
{
	return ((const char* (__thiscall*)(CText__TKey*, const char*, bool*))FUNC_CText__TKey__GetTextByLabel)(this, keyName, bFound);
}

// Destructor
CText__TKey::~CText__TKey()
{
	((void (__thiscall*)(CText__TKey*))FUNC_CText__TKey__Destructor)(this);
}

//////// CText ////////

// Constructor
CText::CText()
{
	((void (__thiscall*)(CText*)) FUNC_CText__Constructor )(this);
}

// Destructor
CText::~CText()
{
	((void (__thiscall*)(CText*)) FUNC_CText__Destructor )(this);
}

// Returns text pointer by GXT key
char *__thiscall CText::Get(const char *key)
{
	return ( (char *(__thiscall*)(CText*, const char *key)) FUNC_CText__Get )(this, key);
}

// Reads MPACK tag
void __stdcall CText::readTag(char *buf, FILE *file, int *pFileOffset, bool dontRead)
{
	( (void (__stdcall*)(char *, FILE *, int *, bool )) FUNC_CText__ReadTag)(buf, file, pFileOffset, dontRead);
}

// Loads mission table from GXT file
void CText::LoadMissionTable(const char *tableName)
{
	( (void (__thiscall*)(CText*, const char *)) FUNC_CText__LoadMissionTable ) (this, tableName);
}

// Loads MPACK
void CText::LoadMpack()
{
	( (void (__thiscall*)(CText*)) FUNC_CText__LoadMpack ) (this);
}

// Loads GXT file
void CText::Load()
{
	( (void (__thiscall*)(CText*)) FUNC_CText__Load ) (this);
}

// Unloads GXT file
void CText::Unload(bool bUnloadMissionData)
{
	( (void (__thiscall*)(CText*, bool)) FUNC_CText__Unload ) (this, bUnloadMissionData);
}

// Writes a mission table name into buffer
void CText::getMissionTableName(char *outStr)
{
	( (void (__thiscall*)(CText*, char *)) FUNC_CText__getMissionTableName ) (this, outStr);
}

CText& TheText = *(CText*)VAR_TheText;