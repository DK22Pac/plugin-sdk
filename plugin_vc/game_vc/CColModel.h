/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColBox.h"
#include "CColSphere.h"

class CColModel {
public:
    CColSphere m_boundSphere;
    CBox m_boundBox;
    unsigned short m_nNumSpheres;
    unsigned short m_nNumBoxes;
    unsigned short m_nNumTriangles;
    unsigned char m_nNumLines;
    unsigned char m_nColStoreIndex;
    bool m_bLoaded;
private:
    char _pad31[3];
public:
    CColSphere *m_pSpheres;
    void *m_pLines;
    CColBox *m_pBoxes;
    void *m_pVertices;
    void *m_pTriangles;
    void *m_pTrianglePlanes;

    CColModel();
    void CalculateTrianglePlanes();
    int GetLinkPtr();
    int GetTrianglePoint(CVector& arg0, int arg1);
    void RemoveCollisionVolumes();
    void RemoveTrianglePlanes();
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    void operator=(CColModel const& arg0);
};
VALIDATE_OFFSET(CColModel, m_boundSphere, 0x0);
VALIDATE_OFFSET(CColModel, m_boundBox, 0x10);
VALIDATE_OFFSET(CColModel, m_nNumSpheres, 0x28);
VALIDATE_OFFSET(CColModel, m_nNumBoxes, 0x2A);
VALIDATE_OFFSET(CColModel, m_nNumTriangles, 0x2C);
VALIDATE_OFFSET(CColModel, m_nNumLines, 0x2E);
VALIDATE_OFFSET(CColModel, m_nColStoreIndex, 0x2F);
VALIDATE_OFFSET(CColModel, m_bLoaded, 0x30);
VALIDATE_OFFSET(CColModel, m_pSpheres, 0x34);
VALIDATE_OFFSET(CColModel, m_pLines, 0x38);
VALIDATE_OFFSET(CColModel, m_pBoxes, 0x3C);
VALIDATE_OFFSET(CColModel, m_pVertices, 0x40);
VALIDATE_OFFSET(CColModel, m_pTriangles, 0x44);
VALIDATE_OFFSET(CColModel, m_pTrianglePlanes, 0x48);
VALIDATE_SIZE(CColModel, 0x4C);