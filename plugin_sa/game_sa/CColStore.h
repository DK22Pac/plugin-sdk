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
    char name[18];
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

    static void Initialise();
    static void Shutdown();
    static int  AddColSlot(const char* name);
    static void AddCollisionNeededAtPosn(const CVector& pos);
    static void AddRef(int colNum);
    static void BoundingBoxesPostProcess();
    static void EnsureCollisionIsInMemory(const CVector& pos);
    static CRect* GetBoundingBox(int colSlot);
    static void IncludeModelIndex(int colSlot, int modelId);
    static bool HasCollisionLoaded(const CVector& pos, int areaCode);
    static void LoadAllBoundingBoxes();
    static void LoadAllCollision();
    static void LoadCol(int colSlot, const char* filename);
    static bool LoadCol(int colSlot, unsigned char* data, int dataSize);
    static void LoadCollision(const CVector& pos, bool bIgnorePlayerVeh);
    static void RemoveAllCollision();
    static void RemoveCol(int colSlot);
    static void RemoveColSlot(int colSlot);
    static void RemoveRef(int colNum);
    static void RequestCollision(const CVector& pos, int areaCode);
    static void SetCollisionRequired(const CVector& pos, int areaCode);
};