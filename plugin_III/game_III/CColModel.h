/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColBox.h"
#include "CColSphere.h"
#include "CColLine.h"
#include "CColTriangle.h"
#include "CColTrianglePlane.h"
#include "CLink.h"

class CColModel {
public:
    CColSphere m_boundSphere;
    CColBox m_boundBox;
    unsigned short m_nNumOfSpheres;
    unsigned short m_nNumOfLines;
    unsigned short m_nNumOfBoxes;
    unsigned short m_nNumOfTriangles;
    unsigned int m_nColLevel;
    unsigned char m_nFlags;
    //char _pad3D[3];
    CColSphere *m_pSpheres;
    CColLine *m_pLines;
    CColBox *m_pBoxes;
    CVector *m_pVertices;
    CColTriangle *m_pTriangles;
    CColTrianglePlane *m_pTrianglePlanes;
    
    CColModel();
    void CalculateTrianglePlanes();
    CLink<CColModel*> *GetLinkPtr();
    void GetTrianglePoint(CVector& outVec, int vertId);
    void RemoveCollisionVolumes();
    void RemoveTrianglePlanes();
    void operator=(CColModel const& right);
    ~CColModel();
    void SetLinkPtr(CLink<CColModel*> *link);
};

VALIDATE_SIZE(CColModel, 0x58);