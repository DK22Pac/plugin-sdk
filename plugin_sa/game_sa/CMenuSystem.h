#pragma once
#include "plbase/PluginBase.h"
#include "CMenuPanel.h"

class PLUGIN_API CMenuSystem
{
public:
	static char *MenuInUse[2];
	static bool *CurrentMenuInUse;
	static char &NumMenusInUse;

	static void ActivateItems(unsigned __int8 panelId, bool item1, bool item2, bool item3, bool item4, bool item5, bool item6, bool item7, bool item8, bool item9, bool item10, bool item11, bool item12);
	static void ActivateOneItem(unsigned __int8 panelId, unsigned __int8 rowId, bool enable);
	
	// Returns panel Id
	static unsigned __int8 CreateNewMenu(eMenuType type, char *pTitle, float posX, float posY, float width, char columns, bool interactive, bool background, eFontAlignment alignment);
	
	static char CheckForAccept(unsigned __int8 panelId);
	static char CheckForSelected(unsigned __int8 panelId);
	static void Initialise();
	static void Process(unsigned __int8 panelId);
	static CMenuPanel* InputStandardMenu(unsigned __int8 panelId);
	static CMenuPanel* InputGridMenu(unsigned __int8 panelId);
	static void DisplayStandardMenu(unsigned __int8 panelId, bool bBrightFont);
	static void DisplayGridMenu(unsigned __int8 panelId, bool bBrightFont);
	static void HighlightOneItem(unsigned __int8 panelId, unsigned __int8 itemId, bool bHighlight = true);
	static CMenuPanel** InsertMenu(unsigned __int8 panelId, unsigned __int8 columnId, char *pTitle, char *str1, char *str2, char *str3, char *str4, char *str5, char *str6, char *str7, char *str8, char *str9, char *str10, char *str11, char *str12);
	static CMenuPanel* InsertOneMenuItem(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int8 rowId, char *str);
	static CMenuPanel* InsertOneMenuItemWithNumber(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int8 rowId, char *str, int number1, int number2);
	static void SetActiveMenuItem(unsigned __int8 panelId, __int8 rowId);
	static void SetColumnHeader(unsigned __int8 panelId, unsigned __int8 columnId, char *str);
	static void SetColumnOrientation(unsigned __int8 panelId, unsigned __int8 columnId, eFontAlignment alignment);
	static void SetColumnWidth(unsigned __int8 panelId, unsigned __int8 columnId, unsigned __int16 width);
	static void SetDPadInput(unsigned __int8 panelId, bool bEnable);
	static void SetHeaderOrientation(unsigned __int8 panelId, unsigned __int8 columnId, eFontAlignment alignment);
	static void SwitchOffMenu(unsigned __int8 panelId);
};
