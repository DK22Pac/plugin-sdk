/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMenuSystem.h"

bool *CMenuSystem::MenuInUse = (bool *)0xBA82E0;
unsigned char &CMenuSystem::CurrentMenuInUse = *(unsigned char *)0xBA82E2;
unsigned char &CMenuSystem::num_menus_in_use = *(unsigned char *)0xBA82E3;
tMenuPanel **MenuNumber = (tMenuPanel **)0xBA82D8;

void CMenuSystem::ActivateItems(unsigned char panelId, bool item1, bool item2, bool item3, bool item4, bool item5, bool item6, bool item7, bool item8, bool item9, bool item10, bool item11, bool item12)
{
	((void (__cdecl *)(unsigned char, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool))0x581990)(panelId, item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11, item12);
}

void CMenuSystem::ActivateOneItem(unsigned char panelId, unsigned char rowId, bool enable)
{
	((void (__cdecl *)(unsigned char, unsigned char, bool))0x580750)(panelId, rowId, enable);
}

unsigned char CMenuSystem::CreateNewMenu(eMenuType type, char *pTitle, float posX, float posY, float width, char columns, bool interactive, bool background, eFontAlignment alignment)
{
	return ((unsigned char (__cdecl *)(eMenuType, char*, float, float, float, char, bool, bool, eFontAlignment))0x582300)(type, pTitle, posX, posY, width, columns, interactive, background, alignment);
}

char CMenuSystem::CheckForAccept(unsigned char panelId)
{
	return ((char (__cdecl *)(unsigned char))0x5807C0)(panelId);
}

char CMenuSystem::CheckForSelected(unsigned char panelId)
{
	return ((char (__cdecl *)(unsigned char))0x5807E0)(panelId);
}

void CMenuSystem::Initialise()
{
	((void (__cdecl *)())0x5822D0)();
}

void CMenuSystem::Process(unsigned char panelId)
{
	((void (__cdecl *)(unsigned char))0x582630)(panelId);
}

tMenuPanel* CMenuSystem::InputStandardMenu(unsigned char panelId)
{
	return ((tMenuPanel* (__cdecl *)(unsigned char))0x580800)(panelId);
}

tMenuPanel* CMenuSystem::InputGridMenu(unsigned char panelId)
{
	return ((tMenuPanel* (__cdecl *)(unsigned char))0x580BD0)(panelId);
}

void CMenuSystem::DisplayStandardMenu(unsigned char panelId, bool bBrightFont)
{
	((void (__cdecl *)(unsigned char, bool))0x580E00)(panelId, bBrightFont);
}

void CMenuSystem::DisplayGridMenu(unsigned char panelId, bool bBrightFont)
{
	((void (__cdecl *)(unsigned char, bool))0x5816E0)(panelId, bBrightFont);
}

void CMenuSystem::HighlightOneItem(unsigned char panelId, unsigned char itemId, bool bHighlight)
{
	((void (__cdecl *)(unsigned char, unsigned char, bool))0x5816E0)(panelId, itemId, bHighlight);
}

tMenuPanel** CMenuSystem::InsertMenu(unsigned char panelId, unsigned char columnId, char *pTitle, char *str1, char *str2, char *str3, char *str4, char *str5, char *str6, char *str7, char *str8, char *str9, char *str10, char *str11, char *str12)
{
	return ((tMenuPanel** (__cdecl *)(unsigned char, unsigned char, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*))0x581E00)(panelId, columnId, pTitle, str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12);
}

tMenuPanel* CMenuSystem::InsertOneMenuItem(unsigned char panelId, unsigned char columnId, unsigned char rowId, char *str)
{
	return ((tMenuPanel* (__cdecl *)(unsigned char, unsigned char, unsigned char, char*))0x581CE0)(panelId, columnId, rowId, str);
}

tMenuPanel* CMenuSystem::InsertOneMenuItemWithNumber(unsigned char panelId, unsigned char columnId, unsigned char rowId, char *str, int number1, int number2)
{
	return ((tMenuPanel* (__cdecl *)(unsigned char, unsigned char, unsigned char, char*, int, int))0x581D70)(panelId, columnId, rowId, str, number1, number2);
}

void CMenuSystem::SetActiveMenuItem(unsigned char panelId, char rowId)
{
	((void (__cdecl *)(unsigned char, char))0x582630)(panelId, rowId);
}

void CMenuSystem::SetColumnHeader(unsigned char panelId, unsigned char columnId, char *str)
{
	((void (__cdecl *)(unsigned char, unsigned char, char*))0x581C40)(panelId, columnId, str);
}

void CMenuSystem::SetColumnOrientation(unsigned char panelId, unsigned char columnId, eFontAlignment alignment)
{
	((void (__cdecl *)(unsigned char, unsigned char, eFontAlignment))0x582080)(panelId, columnId, alignment);
}

void CMenuSystem::SetColumnWidth(unsigned char panelId, unsigned char columnId, unsigned short width)
{
	((void (__cdecl *)(unsigned char, unsigned char, unsigned short))0x582050)(panelId, columnId, width);
}

void CMenuSystem::SetDPadInput(unsigned char panelId, bool bEnable)
{
	((void (__cdecl *)(unsigned char, bool))0x581C90)(panelId, bEnable);
}

void CMenuSystem::SetHeaderOrientation(unsigned char panelId, unsigned char columnId, eFontAlignment alignment)
{
	((void (__cdecl *)(unsigned char, unsigned char, eFontAlignment))0x5820A0)(panelId, columnId, alignment);
}

void CMenuSystem::SwitchOffMenu(unsigned char panelId)
{
	((void (__cdecl *)(unsigned char))0x580750)(panelId);
}