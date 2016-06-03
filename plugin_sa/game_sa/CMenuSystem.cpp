#include "CMenuSystem.h"

char *CMenuSystem::MenuInUse[] = { (char*)0xBA82E0, (char*)0xBA82E1 };
bool *CMenuSystem::CurrentMenuInUse = (bool*)0xBA82E2;
char &CMenuSystem::NumMenusInUse = *(char*)0xBA82E3;


void CMenuSystem::ActivateItems(unsigned __int8 panelId, bool item1, bool item2, bool item3, bool item4, bool item5, bool item6, bool item7, bool item8, bool item9, bool item10, bool item11, bool item12)
{
	((void (__cdecl *)(unsigned __int8, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool))0x581990)(panelId, item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11, item12);
}

void CMenuSystem::ActivateOneItem(unsigned __int8 panelId, unsigned __int8 rowId, bool enable)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, bool))0x580750)(panelId, rowId, enable);
}

unsigned __int8 CMenuSystem::CreateNewMenu(eMenuType type, char *pTitle, float posX, float posY, float width, char columns, bool interactive, bool background, eFontAlignment alignment)
{
	return ((unsigned __int8 (__cdecl *)(eMenuType, char*, float, float, float, char, bool, bool, eFontAlignment))0x582300)(type, pTitle, posX, posY, width, columns, interactive, background, alignment);
}

char CMenuSystem::CheckForAccept(unsigned __int8 panelId)
{
	return ((char (__cdecl *)(unsigned __int8))0x5807C0)(panelId);
}

char CMenuSystem::CheckForSelected(unsigned __int8 panelId)
{
	return ((char (__cdecl *)(unsigned __int8))0x5807E0)(panelId);
}

void CMenuSystem::Initialise()
{
	((void (__cdecl *)())0x5822D0)();
}

void CMenuSystem::Process(unsigned __int8 panelId)
{
	((void (__cdecl *)(unsigned __int8))0x582630)(panelId);
}

CMenuPanel* CMenuSystem::InputStandardMenu(unsigned __int8 panelId)
{
	return ((CMenuPanel* (__cdecl *)(unsigned __int8))0x580800)(panelId);
}

CMenuPanel* CMenuSystem::InputGridMenu(unsigned __int8 panelId)
{
	return ((CMenuPanel* (__cdecl *)(unsigned __int8))0x580BD0)(panelId);
}

void CMenuSystem::DisplayStandardMenu(unsigned __int8 panelId, bool bBrightFont)
{
	((void (__cdecl *)(unsigned __int8, bool))0x580E00)(panelId, bBrightFont);
}

void CMenuSystem::DisplayGridMenu(unsigned __int8 panelId, bool bBrightFont)
{
	((void (__cdecl *)(unsigned __int8, bool))0x5816E0)(panelId, bBrightFont);
}

void CMenuSystem::HighlightOneItem(unsigned __int8 panelId, unsigned __int8 itemId, bool bHighlight)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, bool))0x5816E0)(panelId, itemId, bHighlight);
}

CMenuPanel** CMenuSystem::InsertMenu(unsigned __int8 panelId, unsigned __int8 columnId, char *pTitle, char *str1, char *str2, char *str3, char *str4, char *str5, char *str6, char *str7, char *str8, char *str9, char *str10, char *str11, char *str12)
{
	return ((CMenuPanel** (__cdecl *)(unsigned __int8, unsigned __int8, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*))0x581E00)(panelId, columnId, pTitle, str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12);
}

CMenuPanel* CMenuSystem::InsertOneMenuItem(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int8 rowId, char *str)
{
	return ((CMenuPanel* (__cdecl *)(unsigned __int8, unsigned __int8, unsigned __int8, char*))0x581CE0)(panelId, columnId, rowId, str);
}

CMenuPanel* CMenuSystem::InsertOneMenuItemWithNumber(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int8 rowId, char *str, int number1, int number2)
{
	return ((CMenuPanel* (__cdecl *)(unsigned __int8, unsigned __int8, unsigned __int8, char*, int, int))0x581D70)(panelId, columnId, rowId, str, number1, number1);
}

void CMenuSystem::SetActiveMenuItem(unsigned __int8 panelId, __int8 rowId)
{
	((void (__cdecl *)(unsigned __int8, __int8))0x582630)(panelId, rowId);
}

void CMenuSystem::SetColumnHeader(unsigned __int8 panelId, unsigned __int8 columnId, char *str)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, char*))0x581C40)(panelId, columnId, str);
}

void CMenuSystem::SetColumnOrientation(unsigned __int8 panelId, unsigned __int8 columnId, eFontAlignment alignment)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, eFontAlignment))0x582080)(panelId, columnId, alignment);
}

void CMenuSystem::SetColumnWidth(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int16 width)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, unsigned __int16))0x582050)(panelId, columnId, width);
}

void CMenuSystem::SetDPadInput(unsigned __int8 panelId, bool bEnable)
{
	((void (__cdecl *)(unsigned __int8, bool))0x581C90)(panelId, bEnable);
}

void CMenuSystem::SetHeaderOrientation(unsigned __int8 panelId, unsigned __int8 columnId, eFontAlignment alignment)
{
	((void (__cdecl *)(unsigned __int8, unsigned __int8, eFontAlignment))0x5820A0)(panelId, columnId, alignment);
}

void CMenuSystem::SwitchOffMenu(unsigned __int8 panelId)
{
	((void (__cdecl *)(unsigned __int8))0x580750)(panelId);
}