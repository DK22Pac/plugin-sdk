/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CRect.h"
#include "CVector.h"

class PLUGIN_API CEntryExit {
public:
	char         m_szName[8];      //!< +0x00
	CRect        m_recEntrance;    //!< +0x08
	float        m_fEntranceZ;     //!< +0x18
    float        m_fEntranceAngle; //!< +0x1C
	CVector      m_vecExitPos;     //!< +0x20
    float        m_fExitAngle;     //!< +0x2C
	unsigned short m_uFlags;         //!< +0x30
	unsigned char m_uArea;          //!< +0x32
	unsigned char m_uSkyColor;      //!< +0x33
	unsigned char m_uTimeOn;        //!< +0x34
	unsigned char m_uTimeOff;       //!< +0x35
	unsigned char m_uNumberOfPeds;  //!< +0x36
private:
	char _pad37;
public:
	CEntryExit * m_pLink;          //!< +0x38
};

VALIDATE_SIZE(CEntryExit, 0x3C);
