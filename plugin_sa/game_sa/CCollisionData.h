/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColSphere.h"
#include "CColBox.h"
#include "CColLine.h"
#include "CompressedVector.h"
#include "CColTriangle.h"
#include "CColTrianglePlane.h"
#include "CColDisk.h"
#include "CLink.h"

class CCollisionData {
public:
    unsigned short     m_nNumSpheres;
    unsigned short     m_nNumBoxes;
    unsigned short     m_nNumTriangles;
    unsigned char      m_nNumLines;
    struct {
        unsigned char   bUsesDisks : 1;
        unsigned char   bNotEmpty : 1;
        unsigned char b03 : 1;
        unsigned char   bHasFaceGroups : 1;
        unsigned char   bHasShadow : 1;
    }                  m_nFlags;
    CColSphere        *m_pSpheres;
    CColBox           *m_pBoxes;
    union {
        CColLine      *m_pLines;
        CColDisk      *m_pDisks;
    };
    CompressedVector  *m_pVertices;
    CColTriangle      *m_pTriangles;
    CColTrianglePlane *m_pTrianglePlanes;
    unsigned int       m_nNumShadowTriangles;
    unsigned int       m_nNumShadowVertices;
    CompressedVector  *m_pShadowVertices;
    CColTriangle      *m_pShadowTriangles;

    CCollisionData();
    void RemoveCollisionVolumes();
    void Copy(CCollisionData const& arg0);
    void CalculateTrianglePlanes();
    void GetTrianglePoint(CVector& outVec, int vertId);
    void GetShadTrianglePoint(CVector& outVec, int vertId);
    void RemoveTrianglePlanes();
    void SetLinkPtr(CLink<CCollisionData*> *link);
    CLink<CCollisionData*> *GetLinkPtr();
};
VALIDATE_OFFSET(CCollisionData, m_nNumSpheres, 0x0);
VALIDATE_OFFSET(CCollisionData, m_nNumBoxes, 0x2);
VALIDATE_OFFSET(CCollisionData, m_nNumTriangles, 0x4);
VALIDATE_OFFSET(CCollisionData, m_nNumLines, 0x6);
VALIDATE_OFFSET(CCollisionData, m_nFlags, 0x7);
VALIDATE_OFFSET(CCollisionData, m_pSpheres, 0x8);
VALIDATE_OFFSET(CCollisionData, m_pBoxes, 0xC);
VALIDATE_OFFSET(CCollisionData, m_pLines, 0x10);
VALIDATE_OFFSET(CCollisionData, m_pDisks, 0x10);
VALIDATE_OFFSET(CCollisionData, m_pVertices, 0x14);
VALIDATE_OFFSET(CCollisionData, m_pTriangles, 0x18);
VALIDATE_OFFSET(CCollisionData, m_pTrianglePlanes, 0x1C);
VALIDATE_OFFSET(CCollisionData, m_nNumShadowTriangles, 0x20);
VALIDATE_OFFSET(CCollisionData, m_nNumShadowVertices, 0x24);
VALIDATE_OFFSET(CCollisionData, m_pShadowVertices, 0x28);
VALIDATE_OFFSET(CCollisionData, m_pShadowTriangles, 0x2C);
VALIDATE_SIZE(CCollisionData, 0x30);