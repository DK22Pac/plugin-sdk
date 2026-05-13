/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class TxdDef {
public:
	RwTexDictionary *m_pRwDictionary;
	unsigned short m_wRefsCount;
	short m_wParentIndex;
	unsigned int m_hash;
};
VALIDATE_OFFSET(TxdDef, m_pRwDictionary, 0x0);
VALIDATE_OFFSET(TxdDef, m_wRefsCount, 0x4);
VALIDATE_OFFSET(TxdDef, m_wParentIndex, 0x6);
VALIDATE_OFFSET(TxdDef, m_hash, 0x8);
VALIDATE_SIZE(TxdDef, 0xC);