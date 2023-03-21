/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CQuadTreeNode.h"
#include "CPool.h"
#include "CVector.h"

struct ColDef {
    CRect m_Area;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1C;
    unsigned short field_20;
    short m_nModelIdStart;
    short m_nModelIdEnd;
    unsigned short m_nRefCount;
    bool m_bActive;
    bool m_bCollisionIsRequired;
    bool m_bProcedural;
    bool m_bInterior;
};

VALIDATE_SIZE(ColDef, 0x2C);

typedef CPool<ColDef> CColPool;

class CQuadTreeNode;

class CColStore {
public:
    static CColPool*& ms_pColPool;
    static CQuadTreeNode*& ms_pQuadTree;

    static CVector& ms_vecCollisionNeeded;
    static bool& ms_bCollisionNeeded;
    static int ms_nRequiredCollisionArea;

};