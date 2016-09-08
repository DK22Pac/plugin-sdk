/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CFont.h"

enum eMenuType : __int8
{
	MENU_TYPE_DEFAULT,
	MENU_TYPE_GRID,
};

#pragma pack(push, 1)
class PLUGIN_API CMenuPanel
{
public:
	__int8			m_anUsedCarColors[64];
	eMenuType		m_nType;
	char			m_aaacRowTitles[4][12][10];
	__int8			_pad1[3];
	__int32			m_aadwNumberInRowTitle[4][12];
	__int32			m_aadw2ndNumberInRowTitle[4][12];
	char			m_aacColumnHeaders[4][10];
	char			m_acTitle[10];
	bool			m_abRowSelectable[12];
	bool			m_abRowAlreadyBought[12];
	eFontAlignment	m_anColumnAlignment[4];
	eFontAlignment	m_anColumnHeaderAlignment[4];
	__int8			m_nNumRows;
	__int8			m_nNumColumns;
	bool			m_abColumnInteractive[4];
	float			m_afColumnWidth[4];
	CVector2D		m_vPosn;
	bool			m_bColumnBackground;
	__int8			m_nSelectedRow;
	__int8			m_nAcceptedRow;
	__int8			_pad2;

	//static CMenuPanel *MenuNumber[2];
};
#pragma pack(pop)

VALIDATE_SIZE(CMenuPanel, 0x418);

extern PLUGIN_API CMenuPanel *MenuNumber;
