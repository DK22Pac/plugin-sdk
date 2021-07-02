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

VALIDATE_SIZE(CColModel, 0x58);

#include "meta/meta.CColModel.h"
