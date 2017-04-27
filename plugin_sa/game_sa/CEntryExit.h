/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CRect.h"
#include "CVector.h"

class CEntryExit {
public:
	char         m_szName[8];      //!< +0x00
	CRect        m_recEntrance;    //!< +0x08
	Float        m_fEntranceZ;     //!< +0x18
	Float        m_fEntranceAngle; //!< +0x1C
	CVector      m_vecExitPos;     //!< +0x20
	Float        m_fExitAngle;     //!< +0x2C
	UInt16       m_uFlags;         //!< +0x30
	UByte        m_uArea;          //!< +0x32
	UByte        m_uSkyColor;      //!< +0x33
	UByte        m_uTimeOn;        //!< +0x34
	UByte        m_uTimeOff;       //!< +0x35
	UByte        m_uNumberOfPeds;  //!< +0x36
	UByte        __pad37;          //!< +0x37
	CEntryExit * m_pLink;          //!< +0x38
};

VALIDATE_SIZE(CEntryExit, 0x3C);
