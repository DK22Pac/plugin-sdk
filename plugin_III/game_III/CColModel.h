/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColSphere.h"
#include "CColBox.h"
#include "CColLine.h"
#include "CColTrianglePlane.h"
#include "CLink.h"

class PLUGIN_API CColModel {
public:
    CColSphere m_boundSphere;
    CColBox m_boundBox;
    short m_nNumOfSpheres;
    short m_nNumOfLines;
    short m_nNumOfBoxes;
    short m_nNumOfTriangles;
    int m_nColLevel;
    bool m_bOwnsCollisionVolumes;
    CColSphere *m_pSpheres;
    CColLine *m_pLines;
    CColBox *m_pBoxes;
    CompressedVector *m_pVertices;
    CColTriangle *m_pTriangles;
    CColTrianglePlane *m_pTrianglePlanes;

    SUPPORTED_10EN_11EN_STEAM CColModel();

    SUPPORTED_10EN_11EN_STEAM ~CColModel();

    SUPPORTED_10EN_11EN_STEAM void operator=(CColModel const &right);

    SUPPORTED_10EN_11EN_STEAM void CalculateTrianglePlanes();
    SUPPORTED_10EN_11EN_STEAM CLink<CColModel *> *GetLinkPtr();
    SUPPORTED_10EN_11EN_STEAM void GetTrianglePoint(CVector &outVec, int vertId);
    SUPPORTED_10EN_11EN_STEAM void RemoveCollisionVolumes();
    SUPPORTED_10EN_11EN_STEAM void RemoveTrianglePlanes();
    SUPPORTED_10EN_11EN_STEAM void SetLinkPtr(CLink<CColModel *> *link);
};
VALIDATE_OFFSET(CColModel, m_boundSphere, 0x0);
VALIDATE_OFFSET(CColModel, m_boundBox, 0x14);
VALIDATE_OFFSET(CColModel, m_nNumOfSpheres, 0x30);
VALIDATE_OFFSET(CColModel, m_nNumOfLines, 0x32);
VALIDATE_OFFSET(CColModel, m_nNumOfBoxes, 0x34);
VALIDATE_OFFSET(CColModel, m_nNumOfTriangles, 0x36);
VALIDATE_OFFSET(CColModel, m_nColLevel, 0x38);
VALIDATE_OFFSET(CColModel, m_bOwnsCollisionVolumes, 0x3C);
VALIDATE_OFFSET(CColModel, m_pSpheres, 0x40);
VALIDATE_OFFSET(CColModel, m_pLines, 0x44);
VALIDATE_OFFSET(CColModel, m_pBoxes, 0x48);
VALIDATE_OFFSET(CColModel, m_pVertices, 0x4C);
VALIDATE_OFFSET(CColModel, m_pTriangles, 0x50);
VALIDATE_OFFSET(CColModel, m_pTrianglePlanes, 0x54);
VALIDATE_SIZE(CColModel, 0x58);

#include "meta/meta.CColModel.h"
