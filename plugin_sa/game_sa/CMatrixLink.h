/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class CPlaceable;

class PLUGIN_API CMatrixLink : public CMatrix {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMatrixLink)

public:
    CPlaceable *m_pOwner;
    CMatrixLink *m_pPrev;
    CMatrixLink *m_pNext;

    SUPPORTED_10US void Insert(CMatrixLink *where);
    SUPPORTED_10US void Remove();
};

VALIDATE_SIZE(CMatrixLink, 0x54);

#include "meta/meta.CMatrixLink.h"
